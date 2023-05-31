#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter the elements : ";
    int array[size],min;
    for(int i=0;i<size;i++){
        cin>>array[i];
        if(array[0]<array[i]){
            array[0]=array[i];
        }
        // else{
        //     min=array[i];
        // }
    }
    cout<<"maximum elements : "<<array[0];//<<endl<<"minimum elements : "<<min<<endl;
    return 0;
}