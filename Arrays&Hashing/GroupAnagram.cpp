#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {

    unordered_map<string, vector<string>> mp;

    for(int i = 0; i < strs.size(); i++) {

        string key = strs[i];

        sort(key.begin(), key.end());

        mp[key].push_back(strs[i]);
    }

    vector<vector<string>> ans;

    for(auto &pair : mp) {
        ans.push_back(pair.second);
    }

    return ans;
}

int main() {

    vector<string> strs = {
        "act", "pots", "tops", "cat", "stop", "hat"
    };

    vector<vector<string>> result = groupAnagrams(strs);

    cout << "Grouped Anagrams:\n";

    for(auto &group : result) {

        cout << "[ ";

        for(auto &word : group) {
            cout << word << " ";
        }

        cout << "]\n";
    }

    return 0;
}