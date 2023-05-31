#include<iostream>
using namespace std;
int main (){
    int num;
    cout << "enter the number : ";
    cin>>num;
    int sum=0;
    while(num>0){
        int x=num%10;
        sum=sum*10;
        sum=sum+x;
        num=num/10;
    }
    cout<<"reverse of the number : "<<sum<<endl;
    return 0;
}
