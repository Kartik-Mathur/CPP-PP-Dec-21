#include<iostream> //Include 
using namespace std;

int binary_search(int arr[],int n,int x)
{
    int start = 0; //Starting element
    int end = n-1; //Ending element
    int mid; // Mid element
    while (start <= end) 
    {
        mid = start + (end - start)/2  ;     // took out middle element by this method to avoid overflow of the integer bucket for sum
        if(arr[mid]<x) // if my mid element is smaller than my desired element
        {
            start=mid+1;
        }
        else if(arr[mid]>x) // if my mid element is greater than the elemet to be found
        {
            end=mid-1;
        }
        else
        {
            return mid; // If the middle element coincide with the desired element
        }
    }
    return -1; // if element is not found return -1 for invalid index
}
int main()
{
    int arr[100]={0}; //Created a stack memory based array because kartik bahiya told us its a bad practice to write arr[n] , later we will study heap memory
    cout << "Enter how many element you want in your array : "; 
    int num; 
    cin>>num; // Taking input for the total number of element in the array
    cout << "Enter the elements in your array : "<<endl;
    for(int i =0;i<n;i++)  //Taking input of elements
    {
        cin>>num;
    }
    cout <<endl<< "Which element you want to find : ";
    int x ; //Element to find
    cin>>x; //taking input of element to find
    int result  = binary_search(arr,num,x); // Calling Binary_search function 
    cout << "The index of the desired element is at : "<<result <<endl;
    return 0;
}