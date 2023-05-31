#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    vector<int>vtr(size);
    cout<<"enter elements : ";
    int vtr_sum=0;
    int idx=0;
    while(idx<vtr.size()){
        cin>>vtr[idx];
        cout<<vtr[idx]<<" ";
        vtr_sum=vtr_sum+vtr[idx];
        idx++;
    }
    cout<<": is your entered elements."<<endl;
    cout<<"size of vector : "<<vtr.size()<<endl;
    cout<<"sum of elements : "<<vtr_sum<<endl;
    
    return 0;
}