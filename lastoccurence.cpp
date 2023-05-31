#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vtr(6);
    for(int i=0;i<6;i++){
        cin>>vtr[i];
    }
    cout<<"enter x : ";
    int x;
    cin>>x;
    int occurence=1;
    for(int i=0;i<vtr.size();i++){
        if(vtr[i]==x){
            occurence=i;
        }
    }
    cout<<"max index of x : "<<x<<" is "<<occurence<<endl;
    return 0;
}