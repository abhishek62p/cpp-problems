#include<iostream>
#include<vector>
#include<cstdlib>
using namespace std;
// difference of sum of even index place and odd index place
int main (){
    int x;
    cout<<"enter size x : ";
    cin>>x;
    int arr[x];
    int sum1=0;
    int sum2=0;
    cout<<"enter elements : ";
    for(int i=0;i<x;i++){
        cin>>arr[i];
        cout<<arr[i]<<" ";
        if(i%2==0){
            sum1=sum1+arr[i];
        }
        else{
            sum2=sum2+arr[i];
        }
    }
    cout<<"is your enterd elements."<<endl;
    int sum=abs(sum1-sum2);
    cout<<"Ans : "<<sum;
    return 0;
}