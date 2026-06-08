#include<iostream>
#include<stack>

using namespace std;

int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    cout << "Size : "<< st.size() << endl;

    cout << "Top Element : "<< st.top() << endl;

    st.pop();

    cout << "Size After Poping : "<< st.size() << endl;

    cout << "Top Element : "<< st.top() << endl;

    if(st.empty() == true){
        cout << "Stack is Empty " << endl;
    }
    else{
        cout << "Stack is Not Empty " << endl;
    }
    stack<int>sta;
    sta.push(10);
    sta.push(20);
    sta.push(30);
    sta.push(40);

    stack<int>stac;
    stac.push(100);
    stac.push(200);
    stac.push(300);
    stac.push(400);

    sta.swap(stac);

    cout << "Top Element : "<< sta.top() << endl;

    
    return 0;
}