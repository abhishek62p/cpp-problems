#include<iostream>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int x;
    cout<<"enter size : ";
    cin>>x;
    cout<<"enter element : ";
    vector<int>vtr(x);
    for(int idx=0;idx<vtr.size();idx++){
       cin>>vtr[idx];
    } 
    int erase_index;
    cout<<"enter erase index : ";
    cin>>erase_index;
    int initial_range,final_range;
    cout<<"enter range : ";
    cin>>initial_range>>final_range;
    int i=initial_range;
    while(i<=final_range){
        vtr.erase(vtr.begin()+(initial_range - 1));
        i++;
    }
    int size=vtr.size();
    cout<<"size of vector : "<<size<<endl;
    cout<<"modified vector : ";
    int idx=0;
    while(idx<size){
        cout<<vtr[idx]<<" ";
        idx++;
    }
    return 0;
}