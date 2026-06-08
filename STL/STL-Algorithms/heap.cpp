#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> arr;
    
    arr.push_back(12);
    arr.push_back(14);
    arr.push_back(11);
    arr.push_back(9);
    arr.push_back(5);
    arr.push_back(13);

    make_heap(arr.begin(), arr.end());

    for(int a : arr){
        cout << a << " ";
    }cout << endl;

    arr.push_back(3);
    push_heap(arr.begin(), arr.end());
    for(int a : arr){
        cout << a << " ";
    }cout << endl;

    pop_heap(arr.begin(), arr.end());
    arr.pop_back();
    for(int a : arr){
        cout << a << " ";
    }cout << endl;

    sort_heap(arr.begin(), arr.end());
    for(int a : arr){
        cout << a << " ";
    }cout << endl;

    return 0;
}