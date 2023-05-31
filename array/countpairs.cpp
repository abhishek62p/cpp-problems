#include<iostream>
using namespace std;

// number of pairs in the array whose sum is equal to the n(sum)

int main(){
    int x;
    cout<<"enter size of array : ";
    cin>>x;
    int n,count_pairs=0;
    cout<<"enter target sum : ";
    cin>>n;
    cout<<"enter element : ";
    int array[x];
    for(int i=0;i<x;i++){
        cin>>array[i];
        for(int j=0;j<x;j++){
            if(array[i]+array[j]==n){
                
            }
        }
    }
    cout<<"number of pairs whose sum "<<n<<" is "<<count_pairs;
    return 0; 
}