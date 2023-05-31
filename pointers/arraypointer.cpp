#include<iostream>
using namespace std;
int main (){
    // int array[10]={1,2,3,4,5,6,7,8,9,0};
    // cout<<"address of 1st block : "<<array<<endl;
    // cout<<"address of 2nd block : "<<array+1<<endl;
    // cout<<"value of 1st index : "<<*array<<endl;
    // cout<<"value of 2nd index : "<<*(array+1)<<endl;
    // cout<<"address of 4th block : "<<array+4<<endl;

    // int i=4;    //  i is the index 
    // cout<<"value of 4th index : "<<i[array]<<endl;
    // cout<<"value of 4th index : "<<*(array+i)<<endl;
    // cout<<"address of 4th block : "<<array+i<<endl;

    // cout<<"size of array : "<<sizeof(array)<<endl;
    // cout<<sizeof(*array)<<endl;
    // cout<<sizeof(&array)<<endl;

    // int *ptr=&array[0];
    // cout<<sizeof(ptr)<<endl;
    // cout<<sizeof(*ptr)<<endl;

    int array[5]={1,2,3,4,5};
    char ch[6]={"abcde"};
    cout<<array<<endl;
    cout<<ch<<endl;

    char *c=&ch[0];
    // print the entire string
    cout<<c<<endl;
    char temp='z';
    char *p=&temp;
    cout<<p<<endl;
    return 0;
}