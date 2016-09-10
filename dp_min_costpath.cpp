#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define r 3
#define c 3
int min(int x, int y, int z);
 int minCost(int cost[r][c],int m,int n)
 {
 	int t[r][c];
 	t[0][0]=cost[0][0];
 	for(int i=1;i<=m;i++)
 		t[i][0]=t[i-1][0]+cost[i][0];
 	for(int i=1;i<=n;i++)
 		t[0][i]=t[0][i-1]+cost[0][i];
 	for(int i=1;i<=m;i++)
 	{
 		for(int j=1;j<=n;j++)
 			t[i][j]=min(t[i-1][j-1],t[i-1][j],t[i][j-1]) + cost[i][j];
 	}

 	for(int i=0;i<=m;i++)
 	{
 		for(int j=0;j<=n;j++)
 			cout<<t[i][j]<<" ";
 		cout<<endl;
 	}
 	return t[m][n];

 }


/* A utility function that returns minimum of 3 integers */
int min(int x, int y, int z)
{
   if (x < y)
      return (x < z)? x : z;
   else
      return (y < z)? y : z;
}
 
/* Driver program to test above functions */
int main()
{
   int cost[r][c] = { {1, 2, 3},
                      {4, 8, 2},
                      {1, 5, 3} };
   printf(" %d ", minCost(cost, 2, 2));
   return 0;
}
