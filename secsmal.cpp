#include<iostream>
using namespace std;
int main ()
{
    int size; bool found = false;
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
  for(int i =0 ;i<size;i++)
  {
    if(arr[i]<smallest)
    {
smallest=arr[i];
    }
  }
  int secondsmallest= arr[0];
  for ( int i =0 ;i<size;i++)
  {
    if(arr[i]!=smallest)
    {
        secondsmallest=arr[i];
        found=true;
        break;
    }
  }
   if(!found)
    {
        cout<<"No secondsmallest element. ";
        return 0;
    }
  for(int i =0 ;i<size;i++){
   if(arr[i]<secondsmallest&&arr[i]!=smallest)
    {
        secondsmallest=arr[i];
    }
}
cout<<"smallest : "<<endl<<smallest<<endl;
cout<<"Second Smallest : "<<endl<<secondsmallest<<endl;
}