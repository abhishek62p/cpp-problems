#include<iostream>
using namespace std;
int main(){
    // solid square OR solid rectangle
    int row,colume;
    cout<<"enter row and colume : ";
    cin>>row>>colume;
    for(int i=0;i<row;i++){
        for(int j=0;j<colume;j++){
            cout<<" *";
        }
        cout<<endl;
    }
    return 0;
}
