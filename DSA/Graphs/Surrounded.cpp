#include<bits/stdc++.h>

using namespace std;
//making all the corner o to * and then convert remain to X
//and then convert the * again to O

void change(vector<vector<char>>&A,int x,int y){

A[x][y]='*';
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};

for (int i = 0; i < 4; i++)
{
    int cx=x+dx[i];
    int cy=y+dy[i];

if(cx>=0 and cx.size<A.size() cy>=0 and cy<A.size() and A[cx][cy]=='O'){
    change(A,cx,cy);
}

return ;
}



}


int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>A(n,vector<char>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>A[i][j];
        }
    }

for(int i=0;i<n;i++)
{
    for(int j=0;j<m;j++)
    {
        if(  i==0 or i==n-1 or j=0 or j==m-1)
        {
            if(A[i][j]=='O')
            change(A,i,j);
        }
    }
}
  for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(A[i][j]=='*')
            {
                A[i][j]='O';
            }
        }
    }



}