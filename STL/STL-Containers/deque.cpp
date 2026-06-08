#include<iostream>
#include<queue>

using namespace std;

int main(){

    deque<int>dq;

    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_back(40);

    cout <<"Size: " << dq.size() << endl;

    dq.push_front(100);
    dq.push_front(200);
    dq.push_front(300);

    cout << "Value at index 0 -> " << dq[0] << endl;
    cout << "Value at index 0 -> " << dq.at(0) << endl;

    cout <<"Size: " << dq.size() << endl;

    dq.pop_front();

    cout <<"Size: " << dq.size() << endl;

    dq.pop_back();

    cout <<"Size: " << dq.size() << endl;

    cout << "Front Element : " << dq.front() << endl;

    cout << "Back Element : " << dq.back() << endl;

    if(dq.empty() == true){
        cout << "Deque is Empty" << endl;
    }
    else{
        cout << "Deque is not Empty" << endl;
    }

    deque<int>::iterator it = dq.begin();

    while(it != dq.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    dq.clear();
    cout <<"Size: " << dq.size() << endl;

    dq.insert(dq.begin() , 101);
    cout << "Value at index 0 -> " << dq[0] << endl;

    dq.push_back(110);
    dq.push_back(210);
    dq.push_back(310);
    dq.push_back(410);

    cout <<"Size before Erase : " << dq.size() << endl;
    dq.erase(dq.begin() , dq.end());
    cout <<"Size after Erase : " << dq.size() << endl;


    return 0;
}