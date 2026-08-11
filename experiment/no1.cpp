#include<iostream>
using namespace std;
int main(){
int *arr;
int size;
cout<<"enter the size of array";
cin>>size;
cout<<"creating array";
arr=new int [size];
cout<<"enter value of arry";
for(int1=0,i<size,i++)
{
    cin>>arr[i];
}
cout<<"display arr";
for(i=0;i<size;i++)
{
    cout<<""<<arr[i];
}
return 0;
}