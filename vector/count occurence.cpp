#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vtr;
    for(int i=0;i<6;i++){
        int element;
        cin>>element;
        vtr.push_back(element);
    }
    cout<<"enter x : ";
    int x;
    cin>>x;
    int occurence=0;
    for(int i=0;i<vtr.size();i++){
        if(vtr[i]==x){
            occurence++;
        }
    }
    cout<<"number of x : "<<occurence;
    return 0;
}