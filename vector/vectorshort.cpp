#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    vector<int>vtr;
    int size;
    cin>>size;
    int i=0;
    for(int i=0;i<size;i++){
        int elements;
        cin>>elements;
        vtr.push_back(elements);
    }
    sort(vtr.begin(),vtr.end());
    for(int i=0;i<vtr.size();i++){
        cout<<vtr[i]<<" ";
    }
    return 0;
}
