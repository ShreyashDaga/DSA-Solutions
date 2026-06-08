#include<iostream>
#include<map>
#include<unordered_map>

using namespace std;

int main(){

    //Unordered Map
    unordered_map<string , string> table;

    table["in"] = "India";
    table.insert(make_pair("en", "England"));

    pair<string , string>p;
    p.first = "br";
    p.second = "brazil";
    table.insert(p);

    cout <<"Size : " << table.size() << endl;

    if(table.empty() == true){
        cout << "Map is Empty" << endl;
    }
    else{
        cout << "Map is Not Empty" << endl;
    }

    cout << table.at("in") << endl;
    table["in"] = "India-Bharat"; //Updating
    cout << table.at("in") << endl;


    unordered_map<string , string>::iterator it = table.begin();

    while(it != table.end()){
        pair<string , string>p = *it;
        cout << p.first << "->" << p.second << endl;
        it++;
    }

    if(table.find("in") != table.end()){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key Not Found" << endl;
    } 


    if(table.count("in") == 0){
        cout << "Key Not Found" << endl;
    }
   if(table.count("in") == 1){
        cout << "Key Found" << endl;
    } 


    table.clear();
    cout <<"Size : " << table.size() << endl;


    //Ordered Map
    map<string , string> table1;

    table1["in"] = "India";
    table1.insert(make_pair("en", "England"));

    pair<string , string>p1;
    p1.first = "br";
    p1.second = "brazil";
    table1.insert(p1);

    cout <<"Size : " << table1.size() << endl;

    if(table1.empty() == true){
        cout << "Map is Empty" << endl;
    }
    else{
        cout << "Map is Not Empty" << endl;
    }

    cout << table1.at("in") << endl;
    table1["in"] = "India-Bharat"; //Updating
    cout << table1.at("in") << endl;
    
    map<string , string>::iterator it1 = table1.begin();

    while(it1 != table1.end()){
        pair<string , string>p1 = *it1;
        cout << p1.first << "->" << p1.second << endl;
        it1++;
    }

    if(table1.find("in") != table1.end()){
        cout << "Key Found" << endl;
    }
    else{
        cout << "Key Not Found" << endl;
    } 


    if(table1.count("in") == 0){
        cout << "Key Not Found" << endl;
    }
   if(table1.count("in") == 1){
        cout << "Key Found" << endl;
    } 


    table1.clear();
    cout <<"Size : " << table1.size() << endl;

    return 0;
}