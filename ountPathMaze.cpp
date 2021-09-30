#include<iostream>
using namespace std;
int countPathMaze(int x,int y)
{
    if(x==1 && y==1)
        return 0;
    if(x==1 || y==1)
        return 1;
    int count =0;
    return countPathMaze(x-1,y)+countPathMaze(x,y-1);
}
int main()
{
    int m;
    cin>>m;
    cout<<countPathMaze(m,m);
    return 0;
}
