#include<iostream>
using namespace std;
int main (){
    // count positive negative and zero numbers and find their ratio to the size
    int size;
    cout<<"enter size : ";
    cin>>size;
    int countpo=0,countne=0,countzero=0;
    int array[size];
    cout<<"enter the elements : ";
    for(int i=0;i<size;i++){
        cin>>array[i];
        if(array[i]>0){
            countpo++;
        }
        else if(array[i]<0){
            countne++;
        }
        else{
            countzero++;
        }
    }
    cout<<"positive : "<<(float)countpo/size<<endl;
    cout<<"negative : "<<(float)countne/size<<endl;
    cout<<"zero : "<<(float)countzero/size<<endl;
    return 0;
}