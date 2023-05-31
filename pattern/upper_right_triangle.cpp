#include<iostream>
using namespace std;
int main (){
    // right angle triangle ◥
    // 
    int x=5;
    for(int i=0;i<=x;i++){
        for(int j=x;j>0;j--){
            cout<< " ";
        }
        for(int j=i;j>0;j--){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
