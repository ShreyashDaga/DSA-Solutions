 #include<iostream>
 #include<queue>

 using namespace std;

 int main(){
    queue<int>q;  //Creation 

    //Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Size : " << q.size() << endl;
    cout << "Front Element : "<< q.front() << endl;
    cout << "Back Element : "<< q.back() << endl;

    q.pop();
    cout << "Size : " << q.size() << endl;
    cout << "Front Element : "<< q.front() << endl;

    if(q.empty() == true){
        cout << "Queue is Empty " << endl;
    }
    else{
        cout << "Queue is not Empty " << endl;
    }


    queue<int> first;
    first.push(10);
    first.push(20);

    queue<int> second;
    second.push(100);
    second.push(200);

    first.swap(second);

    cout << "After Swapping -> Front Element : "<< first.front() << " Back Element : " << first.back() << endl;    
    return 0; 
 }