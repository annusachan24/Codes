#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define n 4


bool queenutil(int col,int board[n][n]);
void print(int board[n][n]);
bool queen(int board[n][n]);
bool issafe(int row, int col, int board[n][n]);

void print (int board[n][n])
{
	rep(i,n)
	{
	rep(j,n)
	cout<<board[i][j]<<" ";
	cout<<endl;
	}
}

bool issafe(int row, int col, int board[n][n])
{
	int i,j;
	rep(i,col)//check the row in the left side
	if(board[row][i])
		return false;
	for( i=row, j=col;i>=0 and j>=0; i--, j--)
		if(board[i][j])
			return false;
	for( i=row, j=col;i<n and j>=0;i++,j--)
		if(board[i][j])
			return false;
	return true;
}

bool queenutil(int col, int board[n][n])
{
	if(col==n)
	//if(col>=n)
		return true;
	rep(i,n)
	{
		if(issafe(i,col,board))
		{
			board[i][col]=1;
			if(queenutil(col+1,board))
				return true;
			board[i][col]=0;//backtracking
		}
	}
	return false;

}

bool queen()
{
    int board[n][n] = { {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0},
        {0, 0, 0, 0}
    };
 
    if ( queenutil( 0,board) == false )
    {
      printf("Solution does not exist");
      return false;
    }
 
    print(board);
    return true;
}
 
// driver program to test above function
int main()
{
    queen();
    return 0;
}