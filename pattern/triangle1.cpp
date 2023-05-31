#include<iostream>
using namespace std;
int main(){
    int x=5;
    for(int i=0;i<x;i++){
        for(int j=x;j>i+1;j--){
            cout<<"  ";
        }
        for(int j=i+1;j>0;j--){
                cout<<" *";
        }
        cout<<endl;
    }
        for(int i=0;i<x;i++){
        for(int j=x;j>i+1;j--){
            cout<<" *";
        }
        for(int j=i+1;j>0;j--){
                cout<<"  ";
        }
        cout<<endl;
    }
    return 0;
}
