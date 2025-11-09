#include<stdio.h>
void main(){
int n,i,A[100],l,s,sl;
printf("Enter the no of items :");
scanf("%d",&n);
printf("Enter %d items :",n);
for(i=0;i<n;i++)
{
scanf("%d",&A[i]);
}
l=A[0];
s=A[0];
for(i=0;i<n;i++)
{
if(A[i]>l){
sl=l;
l=A[i];
}
if(A[i]<s)
s=A[i];
}
printf("\nElements in the array are\n");
for(i=0;i<n;i++)
{
printf("\n%d",A[i]);
}
printf("\nLargest : %d\nSmallest %d \nSecond Largest: %d\n",l,s,sl);
}	
