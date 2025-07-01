#include <unordered_map>
#include <vector>
#include <cstdlib>
using namespace std;

class RandomizedSet {
    unordered_map<int, int> map;  // value -> index in arr
    vector<int> arr;

public:
    RandomizedSet() {
        // constructor
    }

    bool insert(int val) {
        if (map.count(val)) {
            return false; // already present
        }
        arr.push_back(val);           // add to the end
        map[val] = arr.size() - 1;    // store index of val in map
        return true;
    }

    bool remove(int val) {
        if (!map.count(val)) {
            return false; // not present
        }
        int idx = map[val];          // index of val to remove
        int lastVal = arr.back();    // last element in array

        // Move last element to the place of val
        arr[idx] = lastVal;
        map[lastVal] = idx;

        // Remove last element
        arr.pop_back();
        map.erase(val);
        return true;
    }

    int getRandom() {
        int randIndex = rand() % arr.size();
        return arr[randIndex];
    }
};
