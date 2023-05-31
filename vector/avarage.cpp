#include<iostream>
#include<vector>
using namespace std;
// to find avarage of given vector
int main (){
    
    vector<int>v;
    int size,sum=0;
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter elements : ";
    int i=0;
    while(i<size){
        int elements;
        cin>>elements;
        v.push_back(elements);
        sum=sum+v[i];
            i++;
    }
    size=v.size();
    float x=size,y=sum;
    float  avg=y/x;
    cout<<"average : "<<avg;
    return 0;
}