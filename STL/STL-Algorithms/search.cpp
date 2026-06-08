#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> arr;
    
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    int target = 40;

    auto it = binary_search(arr.begin(), arr.end(), target);
    cout << "Found or Not : " << it << endl;

    auto it1 = lower_bound(arr.begin(), arr.end(), 35);
    cout << "Lower Bound : " << *it1 << endl;

    auto it2 = upper_bound(arr.begin(), arr.end(), 50);
    cout << "Upper Bound : " << *it2 << endl;

    return 0;
}