#include<stdio.h>
void main(){
int n1,n2,i,j,A[100],B[100],C[100],x=0,flag;
printf("Enter the no of items in Array 1 :");
scanf("%d",&n1);
printf("Enter %d items :",n1);
for(i=0;i<n1;i++)
{
scanf("%d",&A[i]);
}
printf("Enter the no of items in Array 2 :");
scanf("%d",&n2);
printf("Enter %d items :",n2);
for(i=0;i<n2;i++)
{
scanf("%d",&B[i]);
}
for(i=0;i<n1;i++)
{
	flag=0;
	for(j=0;j<x;j++)
	{
		if(A[i]==C[j])
		flag=1;
	}
	if(flag!=1)
	{
	C[x]=A[i];
	x++;
	}
}
for(j=0;j<n2;j++)
{
flag=0;
for(i=0;i<x;i++)
{
if(B[j]==C[i])
flag=1;
}
if(flag!=1)
{
C[x]=B[j];
x++;
}
}
for(i=0;i<x;i++)
{
printf("	%d",C[i]);
}
printf("\n");
}	
