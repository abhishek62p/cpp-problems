#include<iostream>
using namespace std;
int main(){
    int num=1;
    int *ptr=&num;
    cout<<"value : "<<*ptr+1<<endl;
    cout<<"size of integer : "<<sizeof(num)<<endl;
    cout<<"size of pointer : "<<sizeof(ptr)<<endl;
    cout<<"address : "<<ptr+1 <<endl;

    double x=5.6;
    double *pr=&x;
    cout<<"value : "<<*pr<<endl;
    cout<<"size of double : "<<sizeof(x)<<endl;
    cout<<"size of pointer : "<<sizeof(pr)<<endl;
    cout<<"address : "<<pr<<endl;

    char ch='A';
    char *pointer=&ch;
    cout<<"value : "<<*pointer<<endl;
    cout<<"size of character : "<<sizeof(ch)<<endl;
    cout<<"size of pointer : "<<sizeof(pointer)<<endl;
    cout<<"address : "<<pointer<<endl;

    int array[10]={2,3,4,5,6,7};
    int *poi=&array[10];
    cout<<"value of array : "<<(*poi)+1<<endl;
    cout<<"size of array : "<<sizeof(array[10])<<endl;
    cout<<"size of pointer : "<<sizeof(poi)<<endl;
    cout<<"address : "<<poi<<endl;

    return 0;
}