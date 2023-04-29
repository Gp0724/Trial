// You are given a matrix with n rows and m columns. Each cell can be of three types:
// Empty, denoted by '.'
// A stone, denoted by '*', falls downwards
// An obstacle, denoted by ‘o’, always stationary
// All the stones fall down until they either meet an obstacle, another immovable stone, or 
// the floor, i.e the bottom row.
// What will the resultant grid look like after all stones are stationary?

// Input Format
// 4 4			// n rows and m columns
// .*..			// input matrix
// .*.*
// oo..
// .... 

// Output Format
// .*..			// output matrix
// .*..
// oo..
// ...*

// Testcase 1
// Input:
// 2 9
// ...***ooo
// .*o.*o.*o 
// Output:
// ....**ooo
// .*o**o.*o

#include<stdio.h>
int main()
{
    int n,m,t;
    t=0;
    scanf("%d %d\n",&n,&m);
    char matrix[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            scanf("%c",&matrix[i][j]);
        }
        scanf("\n");
    }
    while(t<n)
    {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(matrix[i][j]=='*' && matrix[i+1][j]=='.')
                {
                    matrix[i+1][j]='*';
                    matrix[i][j]='.';
                }
            }
        }
        t++;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            printf("%c",matrix[i][j]);
        }
        printf("\n");
    }
}