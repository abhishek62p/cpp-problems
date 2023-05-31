#include<iostream>
#include<vector>
using namespace std;
int main(){
    int size;
    cin>>size;
    int sum1=0,sum2=0,sum=0;
    vector<vector<int>>v;
    for(int i=0;i<size;i++){
        vector<int>v1;
        for(int j=0;j<size;j++){
            int element;
            cin>>element;
            v1.push_back(element);
        }
        v.push_back(v1);
    }
    for(int i=0;i<v.size();i++){
        // for(int j=0;j<v.size();j++){
        //     cout<<v[i][j]<<" ";
            sum1+=v[i][i];
            sum2+=v[i][v.size()-i-1];
       
        }
        cout<<endl;
    cout<<sum1<<endl<<sum2;
    return 0;
}
