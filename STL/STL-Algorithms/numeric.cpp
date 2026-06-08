#include<iostream>
#include<algorithm>
#include<vector>
#include<numeric>


using namespace std;

int main(){

    vector<int> arr(6);
    arr[0] = 11;
    arr[1] = 20;
    arr[2] = 17;
    arr[3] = 18;
    arr[4] = 19;

    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    cout << "Sum : "<< totalSum << endl;

    vector<int> arr1(3);
    arr1[0] = 1;
    arr1[1] = 2;
    arr1[2] = 3;

    vector<int> arr2(3);
    arr2[0] = 3;
    arr2[1] = 4;
    arr2[2] = 5;

    int ans = inner_product(arr1.begin(), arr1.end(), arr2.begin(), 0);
    cout << "Inner Product : " << ans << endl;

    vector<int>first(5);

    iota(first.begin(), first.end(), 250);
    for(int a : first){
        cout << a << " ";
    }
    cout << endl;



return 0;
}