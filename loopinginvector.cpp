#include<iostream>
#include<vector>
using namespace std;
int main (){
    // if size is not defined
    vector<int>vect;
    for(int i=0;i<5;i++){
        int element;
        cin>>element;
        vect.push_back(element);
    }
    // if size is defined
    // vector<int>vect[5];
    // for(int i=0;i<5;i++){
    // cin>>vect[i];
    // }
    // insert the element at the index
    vect.insert(vect.begin()+2,5);
    vect.insert(vect.end()-2,1);
    for(int i=0;i<vect.size();i++){
        cout<<vect[i]<<" ";
    }
    // erase the element at the index
    vect.erase(vect.begin()+2);
    vect.erase(vect.end()-3);
    cout<<endl;
    // in while loop
    int index=0;
    while(index<vect.size()){
        cout<<vect[index++]<<" ";
    }
    return 0;
}