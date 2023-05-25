#include<iostream>
using namespace std;
int main(){
    // sum of all element in an array
    int size,sum=0;
    cout<<"enter size of array : ";
    cin>>size;
    cout<<"enter the element : ";
    int array[size];
    for(int i=0;i<size;i++){
        cin>>array[i];
        sum=sum+array[i];
    }
    cout<<"sum of elements : "<<sum<<endl;
    return 0;
}
