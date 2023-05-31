#include<iostream>
using namespace std;
int main (){
    int x,n=0;
    cout<<"enter size : ";
    cin>>x;
    int array[x];
    for(int i=0;i<x;i++){
        cin>>array[i];
        for(int j=0;j<x;j++){
            if(array[i]-array[j]==0){
                array[i]=n;
            }
        }
    }
    cout<<"unique number is : "<<n;
    return 0;
} 