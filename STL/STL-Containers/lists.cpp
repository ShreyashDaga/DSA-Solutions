#include<iostream>
#include<list>

using namespace std;

int main(){

    list<int> myList; //Creation
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);
    myList.push_back(40);
    myList.push_back(50);

    myList.push_front(5);

    myList.pop_back();
    myList.pop_front();

    cout << "Size : " << myList.size() << endl;

    if(myList.empty() == true){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }

    cout << "Front Element : "<< myList.front() << endl;
    cout << "Back Element : " <<myList.back() << endl;

    list<int>::iterator it = myList.begin();
    while(it != myList.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    myList.push_back(10);
    myList.remove(10);
    list<int>::iterator it2 = myList.begin();
    cout << "After Removing" << endl;
    while(it2 != myList.end()){
        cout << *it2 << " ";
        it2++;
    }
    cout << endl;

    myList.clear();
    cout << "Size After Clearing : " << myList.size() << endl;

    if(myList.empty() == true){
        cout << "Empty" << endl;
    }
    else{
        cout << "Not Empty" << endl;
    }


    list<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    first.insert(first.begin() , 11);
    cout << "Beginning Element : " << *first.begin() << endl;

    list<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    list<int>::iterator it3 = first.begin();
    while(it3 != first.end()){
        cout << *it3 << " ";
        it3++;
    }
    cout << endl;

    cout << "Size Before Erasing: "<< first.size() << endl;
    first.erase (first.begin() , first.end());
    cout << "Size After Erasing: "<< first.size() << endl;


    return 0;
}