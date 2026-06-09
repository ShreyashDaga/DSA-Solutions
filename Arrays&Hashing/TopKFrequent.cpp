#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<int> topKFrequent(vector<int>& nums, int k) {

    unordered_map<int, int> count;

    for(int num : nums) {
        count[num]++;
    }

    vector<pair<int, int>> arr;

    for(auto &p : count) {
        arr.push_back({p.second, p.first});
    }

    sort(arr.rbegin(), arr.rend());

    vector<int> ans;

    for(int i = 0; i < k; i++) {
        ans.push_back(arr[i].second);
    }

    return ans;
}

int main() {

    vector<int> nums = {1, 2, 2, 3, 3, 3};
    int k = 2;

    vector<int> result = topKFrequent(nums, k);

    cout << "Top K Frequent Elements: ";

    for(int num : result) {
        cout << num << " ";
    }

    return 0;
}