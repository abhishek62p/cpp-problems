#include<iostream>
#include<vector>
using namespace std;
// to find maximum and minimum elements in a vector
int main (){
    
    vector<int>v;
    int size;
    cout<<"enter size : ";
    cin>>size;
    cout<<"enter elements : ";
    int i=0;
    while(i<size){
        int elements;
        cin>>elements;
        v.push_back(elements);
            i++;
    }
    int max=v[0] ,min;
    cout<<" ";
    i=0;
    while(i<v.size()){
        if(v[i]>max){
            max=v[i];
        }
        else{
            min=v[i];
        }
        i++;
    }
    cout<<"new size : "<<v.size()<<endl;
    cout<<"maximum element : "<<max<<endl;
    cout<<"minimum element : "<<min<<endl;
    return 0;
}
