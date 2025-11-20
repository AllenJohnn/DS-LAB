#include<stdio.h>

#include<stdlib.h>

void main()

{

int i,s,n,j,incount=0,outcount=0;

int adj[10][10];

printf("Enter The Number Of Vertices: ");

scanf("%d",&n);

printf("Enter The Adjacency Matrix: \n");

for(i=1;i<=n;i++)

{

for(j=1;j<=n;j++)

{

scanf("%d",&adj[i][j]);

}

}

printf("Enter Starting Vertex: ");

scanf("%d",&s);

for(i=1;i<=n;i++)

{

if(adj[i][s]==1)

{

printf("The Incomming Edges Are : %d -> %d",i,s);

incount++;

}

}

printf("\nThe Indegree Is : %d",incount);

for(i=1;i<=n;i++)

{

if(adj[s][i]==1)

{

printf("\nThe Outgoing Edges Are : %d -> %d",s,i);

outcount++;

}

}

printf("\nThe Outdegree Is : %d",outcount);

}
