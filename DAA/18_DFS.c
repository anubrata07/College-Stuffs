#include<stdio.h>
#include<stdlib.h>
 
int DepthFirstSearch(int);
int n; 
int graph[20][20], completed[10];

int DepthFirstSearch(int i)
{
    int j;
    printf("\t%d", i+1);
 
    completed[i] = 1;
	for(j=0;j<n;j++)
    {
        if(!completed[j] && graph[i][j] == 1)
        {
            DepthFirstSearch(j);
        }
    }
    return 0;
}
 
int main()
{
    int i, j;
    printf("Enter number of vertices:");
    scanf("%d",&n);
 
    printf("\nEnter adjecency matrix :\n");
 
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
               scanf("%d",&graph[i][j]);
        }
    }
 
    for(i=0;i<n;i++)
    {
        completed[i]=0;
    }
    printf("Depth First Search is\n");
    DepthFirstSearch(0);
 
    return 0;
}
