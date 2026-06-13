#include<iostream>
using namespace std;
int main ()
{
    int size;
    cout<<"Enter Size : "<<endl;
    cin>>size;
    int arr[size];
    cout<<"Enter Elements :"<<endl; 
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i =0;i<size;i++)
    {
   cout<<arr[i]<<" "<<endl;
    }
    int smallest=arr[0];
  for(int i =1 ;i<size;i++)
  {
    if(arr[i]<smallest)
    {
smallest=arr[i];
    }
  }
cout<<"smallest : "<<endl<<smallest<<endl;
}
