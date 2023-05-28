#include<iostream>
using namespace std;
int main (){
    // right angle triangle ◥
    int size;
    cout<<"enetr the size : ";
    cin>>size;
    for(int i=size;i>0;i--){
        for(int j=i;j<size;j++){
                cout<<" ";
        }
        for(int j=0;j<i;j++){
                cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
