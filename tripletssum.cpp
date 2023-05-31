#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter size : ";
    cin>>x;
    int n,count_triplets=0;
    cout<<"enter target sum : ";
    cin>>n;
    int array[x];
    cout<<"enter element : ";
    for(int i=0;i<x;i++){
        cin>>array[i];
        for(int j=0;j<x;j++){
            for(int k=0;i<x;i++){
                if(array[i]+array[j]+array[k]==n){
                    count_triplets++;
                }
            }
        }
    }
    cout<<"sum of triplets "<<n<<" is "<<count_triplets;
    return 0;
}