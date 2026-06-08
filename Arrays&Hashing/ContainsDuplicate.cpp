#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

bool hasDuplicate(vector<int>& nums) {
    unordered_set<int> seen;

    for (int num : nums) {
        if (seen.count(num)) {
            return true;
        }

        seen.insert(num);
    }

    return false;
}

int main() {
    vector<int> nums = {1, 2, 3, 1};

    if (hasDuplicate(nums))
        cout << "Duplicate Found" << endl;
    else
        cout << "No Duplicate" << endl;

    return 0;
}