class LRUCache {
public:
    struct Node {
        int key;
        int val;
        Node* next;
        Node* prev;

        Node(int k, int v) {
            key = k;
            val = v;
            next = prev = NULL;
        }
    };  // ✅ missing semicolon fixed

    int cap;
    unordered_map<int, Node*> mp;
    Node* head;
    Node* tail;

    LRUCache(int capacity) {
        cap = capacity;

        // dummy head and tail
        head = new Node(-1, -1);
        tail = new Node(-1, -1);

        // ✅ connect head and tail
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        // ❌ mp.find() → mp.find(key)
        if (mp.find(key) == mp.end()) {
            return -1;
        }

        Node* node = mp[key];

        // move node to front (MRU)
        removenode(node);
        addnode(node);

        return node->val;  // ✅ missing return
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            // key exists
            Node* node = mp[key];
            node->val = value;

            removenode(node);
            addnode(node);
        } 
        else {
            // cache full
            if (mp.size() == cap) {
                Node* lru = tail->prev;   // ✅ correct name
                removenode(lru);
                mp.erase(lru->key);
                delete lru;
            }

            // insert new node
            Node* newnode = new Node(key, value);
            addnode(newnode);
            mp[key] = newnode;  // ✅ node → newnode
        }
    }

private:
    // add node right after head
    void addnode(Node* node) {
        node->next = head->next;
        node->prev = head;

        head->next->prev = node;
        head->next = node;
    }

    // remove node from DLL
    void removenode(Node* node) {
        Node* p = node->prev;  // ❌ node* → Node*
        Node* n = node->next;

        p->next = n;
        n->prev = p;  // ❌ missing semicolon fixed
    }
};
