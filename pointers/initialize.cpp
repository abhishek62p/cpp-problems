#include<iostream>
using namespace std;
int main(){
    int x=6;
    int *ptr=&x;
    cout<<"address : "<<ptr<<endl;
    cout<<"value : "<<*ptr<<endl;

    int *poi=0;
    poi=&x;
    (*poi)+=*poi;
    cout<<"address : "<<poi+2<<endl;
    cout<<"value : "<<*poi+2<<endl;

    return 0;
}