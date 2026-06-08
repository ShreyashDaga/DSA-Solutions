#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    int a = 10;
    int b = 15;
    cout << "Max : " <<max(a,b) << endl;
    cout << "Min : " <<min(a,b) << endl;

    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);

    auto it = min_element(arr.begin(), arr.end());
    cout << "Minimum : " << *it << endl;

    auto it1 = max_element(arr.begin(), arr.end());
    cout << "Maximum : " << *it1 << endl;

    return 0;
}