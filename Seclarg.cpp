#include<iostream>
using namespace std;

int main()
{
    int size;
    cin >> size;

    int arr[size];

    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    int largest = arr[0];
    for(int i = 1; i < size; i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondlargest;
    bool found = false;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] != largest)
        {
            secondlargest = arr[i];
            found = true;
            break;
        }
    }

    if(!found)
    {
        cout << "No second largest element";
        return 0;
    }
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > secondlargest && arr[i] != largest)
        {
            secondlargest = arr[i];
        }
    }

    cout << "Largest Element : " << largest << endl;
    cout << "Second Largest Element : " << secondlargest << endl;
}