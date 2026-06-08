#include<iostream>
#include<algorithm>

using namespace std;

 void printDouble(int a){
    cout << 2 * a << " ";
 }

 bool checkEven(int a){
    return a%2 == 0;
 }


int main(){
    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 7;
    arr[3] = 8;
    arr[4] = 1;
    arr[5] = 14;

    cout << "Print double : ";
    for_each(arr.begin(), arr.end(), printDouble);
    cout << endl;


    int target = 40;
    auto it = find(arr.begin() , arr.end(), target);
    cout << "Target Found or Not : " << *it << endl;

    auto it1 = find_if(arr.begin() , arr.end() , checkEven);
    cout << "Check if Even is present and if Yes print first Even Number : " << *it1 << endl;

    int target1 = 11;
    int ans = count(arr.begin() , arr.end(), target1);
    cout << "Counts the occurrence : " << ans << endl;

    int ans1 = count_if(arr.begin(), arr.end() , checkEven);
    cout << "Checks how many numbers are even : " << ans1 << endl;

    cout << "Sorts the array : ";
    sort(arr.begin(), arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    cout << "Reverse the array : ";
    reverse(arr.begin(), arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    cout << "Rotates the array : ";
    rotate(arr.begin(), arr.begin()+3, arr.end());
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;

    //Even Odd Partition
    cout << "Partition the array into even and odd numbers : ";
    auto it3 = partition(arr.begin(), arr.end(), checkEven);
    for(int a : arr){
        cout << a << " ";
    }
    cout << endl;


    vector<int> arr1(6);
    arr1[0] = 11;
    arr1[1] = 11;
    arr1[2] = 12;
    arr1[3] = 12;
    arr1[4] = 12;
    arr1[5] = 14;

    auto it2 = unique(arr1.begin(), arr1.end());
    arr1.erase(it2, arr1.end());
    cout << "Prints only Unique Elements : ";
    for(int a : arr1){
        cout << a << " ";
    }
    cout << endl;

    return 0;
}