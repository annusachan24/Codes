#include <bits/stdc++.h>
using namespace std;
#define n 4
#define rep(i,n) for(int i=0;i<n;i++)
bool issafe(int x, int y, int maze[n][n]);
void printsol(int sol[n][n]);
bool ratandmaze(int maze[n][n]);
bool ratandmazeutil(int x,int y,int sol[n][n], int maze[n][n]);

void printsol(int sol[n][n])
{
	rep(i,n)
	{
		rep(j,n)
		cout<<sol[i][j]<<" ";
		cout<<endl;
	}
}

bool issafe(int x,int y, int maze[n][n])
{
	if( x>=0 and x<n and y>=0 and y<n and maze[x][y]==1)
		return true;
	else
		return false;
}

bool ratandmaze(int maze[n][n])
{
	int sol[n][n]=
		{ {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0} };

        if(ratandmazeutil(0,0,sol,maze)==false)
        {
        	cout<<"sol doesnot exists"<<endl;
        	return false;
        }
        printsol(sol);
        return true;
}
bool ratandmazeutil(int x, int y, int sol[n][n], int maze[4][4])
{
	if(x==n-1 and y==n-1)
	{
		sol[x][y]=1;
		return true;
	}
	if(issafe(x,y,maze)==true)
	{
		sol[x][y]=1;
		if(ratandmazeutil(x+1,y,sol,maze)==true)
			return true;
		if(ratandmazeutil(x,y+1,sol,maze)==true)
			return true;
		sol[x][y]=0;
		return false;
	}
	return false;
}

// driver program to test above function
int main()
{
    int maze[n][n]  =  { {1, 0, 0, 0},
        {1, 1, 0, 1},
        {0, 1, 0, 0},
        {1, 1, 1, 1}
    };
 
    ratandmaze(maze);
    return 0;
}
