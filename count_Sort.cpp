#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int max_element = INT_MIN;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        max_element = max(arr[i],max_element);
    }
    //size of freq array = maximum number in array + 1
    int freq[max_element+1];
    for(int i=0;i<max_element+1;i++)
    {
        freq[i]=0;//intializing element of freq array with 0
    }
    for(int i=0;i<n;i++)
    {
        freq[arr[i]]++;//number of occurence of every number
    }
    cout<<endl;
    for(int i=0;i<max_element+1;i++)
    {
        cout<<freq[i]<<" ";
    }
    //calculating position of every element
    for(int i=1;i<max_element+1;i++)
    {
        freq[i]=freq[i-1]+freq[i];//position of every element depend on position of previous element and number of time it occurs
    }
    cout<<endl;
    for(int i=0;i<max_element+1;i++)
    {
        cout<<freq[i]<<" ";
    }
    int final_array[n];
    for(int i=n-1;i>=0;i--)
    {
        final_array[--freq[arr[i]]]=arr[i];
        //transversing the array from the last
        //first get a number from the original array
        //get position of that particular from the position containing array
        //assiging that number at the recieved position -1 location in the final array which will provide final sorted array
    }
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<final_array[i]<<" ";
    return 0;
}