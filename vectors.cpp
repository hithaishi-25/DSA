#include<bits/stdc++.h>
using namespace std;
int main(){
    vector <int> v;
    //filling 1 to 5 numbers into the vector v
    for(int i=1;i<=5;i++){
        v.push_back(i);
    }

    //vector with instances of any number we want
    vector<int> v1(5,30); //five instances of 30 wll be created
    for(auto x=v1.begin();x!=v1.end();x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    //accessign all the elements using iterator
    for(vector<int>::iterator x=v.begin();x!=v.end();x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    //making data type of x as auto so the compiler automatically detects its data type
    for(auto x=v.begin();x!=v.end();x++){
        cout<<*(x)<<" ";
    }
    cout<<endl;

    //other way
    for(auto x:v){
        cout<< x<<" ";
    }
    cout<<endl;

    //easiest way
    cout<<"using size():";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i] << " ";
    }
    cout<<endl;

    //accessing a particular element from vector
    vector<int>::iterator x=v.begin()+1; //second element will be printed from v
    cout<<*(x);
    cout<<endl;

    //deletion of single element
    v.erase(v.begin()+1); //deletes second element
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    //deleting a group of elements. For that, give [start,end) address
    v.erase(v.begin()+1,v.begin()+4); //deletes 3,4,5
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    cout<<v.size();
    cout<<endl;

    //inserion
    v.insert(v.begin(),2,100); // two instances of 100 are inserted at the beginning of v
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;

    v.insert(v.begin(),v1.begin(),v1.end()); //whole v1 is inserted into v at the beginning 
    for(int x: v){
        cout<<x<<" ";
    }
    cout<<endl;


}