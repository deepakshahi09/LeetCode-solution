class ProductOfNumbers {
public:
    vector<int>pre;
    ProductOfNumbers() {
        pre.push_back(1);
    }
    
    void add(int num) {
        if(num==0){
            pre.clear();
            pre.push_back(1);
        }
        else{
            int lst = pre.back();
            pre.push_back(lst*num);
        }
    }
    
    int getProduct(int k) {
        int n = pre.size();
        if(k>=n){
            return 0;
        }
        return pre[n-1]/pre[n-1-k];
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */