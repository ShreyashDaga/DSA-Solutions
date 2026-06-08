#include<iostream>
#include<set>
#include<unordered_set>

using namespace std;

int main(){
    cout << "Ordered Set" << endl;
    set<int> st;

    st.insert(10);
    st.insert(15);
    st.insert(20);
    st.insert(5);
    st.insert(1);

    set<int>::iterator it = st.begin();

    while(it != st.end()){
        cout << *it << " ";
        it++;
    }
    cout << endl;

    cout << "Size : "<< st.size() << endl;

    if(st.find(220) != st.end()){
        cout << "Found" << endl;
    }
    else{
        cout << "Not Found" << endl; 
    }

    if(st.count(15) == 1){
        cout << "Found" << endl;
    }
    if(st.count(15) == 0){
        cout << "Not Found" << endl; 
    }

    st.erase(st.begin() , st.end());
    cout << "Size after Erase : "<< st.size() << endl;


    
    cout << "Unordered Set" << endl;
    unordered_set<int> st1;

    st1.insert(10);
    st1.insert(15);
    st1.insert(20);
    st1.insert(5);
    st1.insert(1);

    unordered_set<int>::iterator it1 = st1.begin();

    while(it1 != st1.end()){
        cout << *it1 << " ";
        it1++;
    }
    cout << endl;


    return 0;
}