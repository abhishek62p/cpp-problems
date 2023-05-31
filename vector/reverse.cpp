#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main (){
    vector<int>v;
    int size;
    cout<<"enter size : ";
    cin>>size;
    int idx=0;
    while(idx<size){
        int element;
        cin>>element;
        v.push_back(element);
        idx++;
    }
    reverse(v.begin(),v.end());
    cout<<"reverse vector : ";
    idx=0;
    while(idx<v.size()){
        cout<<v[idx]<<" ";
        idx++;
    }
    return 0;
}