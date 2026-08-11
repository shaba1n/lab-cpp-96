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
for(int i=0;i<size;i++)
{
    cin>>arr[i];
}
delete arr;
cout<<"display arr";
for(int i=0;i<size;i++)
{
    cout<<""<<arr[i];
}
return 0;
}