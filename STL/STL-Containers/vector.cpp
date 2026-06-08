#include<iostream>
#include<vector>

using namespace std;

int main(){ 
    vector<int> marks;//Creation
    marks.push_back(19);
    marks.push_back(17);
    marks.push_back(10);
    marks.push_back(13);
    marks.push_back(14);

    marks[3] = 21; //Can assign or modify the value
    cout << marks.at(3) << endl;
    marks[6] = 20;
    cout << marks[6] << endl;

    cout <<"Max Size : " << marks.max_size() << endl;

    cout << "Capacity : " << marks.capacity() << endl;

    marks.reserve(10); 
    cout << "Increased Capacity by : " << marks.capacity() << endl;

    cout <<"Size : "<< marks.size() << endl;

    marks.pop_back();

    cout <<"Size : "<< marks.size() << endl;

    cout << *(marks.begin()) << endl;

    cout << marks.front() << endl;

    cout << marks.back() << endl;

    if(marks.empty() == true){
        cout << "Vector is Empty" << endl;
    }
    else{
        cout << "Vector is not Empty" << endl;
    }

    marks.insert(marks.begin() , 50);
    cout << "New inserted Element : "<< marks[0] << endl;

    vector<int> second;
    second.push_back(10);
    second.push_back(11);
    second.push_back(12);
    second.push_back(13);
    second.push_back(14);

    marks.swap(second);

    for(int i:marks){
        cout << i << " ";
    }
    cout << endl;

    vector<int>::iterator it = second.begin();//Creating an iterator
    while(it != second.end()){//Traversing an iterator
        cout << *it << " ";
        it++;
    }
    cout << endl;

    marks.clear();

    if(marks.empty() == true){
        cout << "Vector is Empty" << endl;
    }
    else{
        cout << "Vector is not Empty" << endl;
    }


    // 2D Array/Vector
    vector<vector<int>>arr(5, vector<int>(4,0));
    //2D Array Created With 5 Rows and 4 Columns and initial value of Each cell is set as 0

    int totalRows = arr.size();
    int totalColumns = arr[0].size();
    cout << "Rows * Columns : " << totalRows << "*" << totalColumns << endl;

    vector<vector<int>>brr(5);//2D Array Created With Just 5 Rows

    //Jagged Array as The number of columns are diffrent in each row
    brr[0] = vector<int>(4);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(5);
    brr[3] = vector<int>(3);

    int totalRowsCount = brr.size();
    // int totalColumnCount = brr[i].size();

    return 0;
}