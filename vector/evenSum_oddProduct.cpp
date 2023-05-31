#include<iostream>
#include<vector>
using namespace std;
int main(){
  vector<int>v;
  int size;
  cout<<"enter size : ";
  cin>>size;
  cout<<"enter element : ";
  int i=0;
  while(i<size){
    int element;
    cin>>element;
    v.push_back(element);
    i++;
  }
  int sum=0,product=1;
  i=0;
  while(i<v.size()){
    if(v[i]%2==0){
      sum=sum+v[i];
    }
    else{
      product=product*v[i];
    }
    i++;
  }
  cout<<"sum of even numbers : "<<sum<<endl<<"product of odd numbers : "<<product<<endl;
  return 0;
}