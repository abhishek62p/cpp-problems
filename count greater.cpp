#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vtr;
    for(int idx=0;idx<6;idx++){
        int element;
        cin>>element;
        vtr.push_back(element);
    }
    cout<<"enter x : ";
    int x;
    cin>>x;
    int count=0;
    for(int idx=0;idx<vtr.size();idx++){
        if(vtr[idx]>x){
            count++;
        }
    }
    cout<<"number of element greater then x : "<<count;
}