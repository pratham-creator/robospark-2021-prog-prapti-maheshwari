#include<iostream>
using namespace std;

int main()
{
    int n;

    cout<< "Enter size for dynamic array : ";
    cin >> n;

    int *ptr=(int*)malloc(n*(sizeof(int)));    //dynamically allocating memory
    cout<<"\nEnter elements";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }

    cout<<"\nElements are : ";
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"\t";
    }

    cout<< "\n\nEnter size for dynamic array for reallocating memory: ";
    cin >> n;

    ptr=(int*)realloc(ptr,n*(sizeof(int)));    //Updating memory block
    cout<<"\nEnter elements";
    for(int i=0;i<n;i++){
        cin>>ptr[i];
    }

    cout<<"\nElements are : ";
    for(int i=0;i<n;i++){
        cout<<ptr[i]<<"\t";
    }





}
