#include<iostream>
#include<queue>

using namespace std;

int main(){
    //Min-Heap
    cout << "Priority Queue Min-Heap" << endl;
    priority_queue<int,vector<int>, greater<int>> pq1;

    pq1.push(111);
    pq1.push(113);
    pq1.push(115);
    pq1.push(117);
    pq1.push(119);
    pq1.push(108);

    cout << "Size : " << pq1.size() << endl;

    cout << pq1.top() << endl;

    pq1.pop();

    cout << "Size : " << pq1.size() << endl;

    cout << pq1.top() << endl;


    cout << "Priority Queue Max-Heap" << endl;
    priority_queue<int> pq;
    // Max-Heap -> Maximum Value -> Maximum Priority
    pq.push(11);
    pq.push(13);
    pq.push(15);
    pq.push(17);
    pq.push(19);
    pq.push(9);
    pq.push(8);

    cout << pq.top() << endl; //Top Element -> Highest Priority Element
    
    pq.pop(); //Top element gets popped

    cout << pq.top() << endl;

    cout << "Size : " << pq.size() << endl;

    if(pq.empty() == true){
        cout << "PQ is Empty" << endl;
    }
    else{
        cout << "PQ is Not Empty" << endl;
    }

    return 0;
}