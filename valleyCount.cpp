#include<iostream>
using namespace std;
int valleyCount(int n,string s)
{
    int arr[n];
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(s.substr(i,1) == "U")
        {
            arr[i]=++j;
        }
        else{
            arr[i]=--j;
        }
    }
    int valley=0;
    for(int i=0;i<n;)
    {
        if(arr[i]<0)
        {

            for(int j=i;j<n;j++)
            {
                if(arr[j]>=0)
                {
                    valley++;
                    i=j;
                    break;
                }
            }
        }
        else{
            i++;
        }
    }
    return valley;
}
int main()
{
    int num=0;
    string s;
    cin>>num;
    cin>>s;
    cout<<valleyCount(num,s);
    return 0;
}
