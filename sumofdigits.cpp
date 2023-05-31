#include<iostream>
using namespace std;
int main() {
	
    int number; //variable declaration
    cout<<"enter the number : "; 
    cin>>number; //take input from user
    int sum=0;
    while(number>0){
        int x=number%10;
        sum=sum+x;
        number=number/10;
    }
    cout<<sum;
    return 0;
}