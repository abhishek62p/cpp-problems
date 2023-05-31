#include<iostream>
#include<vector>
using namespace std;
int main(){
    // vector declaration
    vector<int>v;
    // size and capacity (empty size and capacity)
    // for size - vector_name.size();
    // for capacity - vector_name.capacity();
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    // add elements and check their size and capacity
    // for add elements - vector_name.push_back(elements);
    v.push_back(1);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(4);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capaaity : "<<v.capacity()<<endl;
    
    // resize the vector and check new size and capacity
    // for resize - vector_name.resize(-); 
    v.resize(5);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.resize(7);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.resize(10);
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;

    // delete the element 
    // for delete element - vector_name.pop_back(); OR vector_name.erse();
    v.pop_back();
    v.pop_back();
    cout<<"size : "<<v.size()<<endl;
    cout<<"capacity : "<<v.capacity()<<endl;
    
    return 0;
}