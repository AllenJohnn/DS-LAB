#include <stdio.h>

int a[10]={0,0,0,0,0,0,0,0,0,0};
int b[10]={0,0,0,0,0,0,0,0,0,0};


void uni()
{ 
printf("Union is");
for(int I=1;I<=10;I++)
{
printf("%d",a[I]|b[I]);
}
}

void inter()
{
printf("Intersection is");
for(int I=1;I<=10;I++)
{
printf("%d",a[I]&b[I]);
}
}

void  comp()
{
printf("Complement of first array is");
for(int I=1;I<=10;I++)
{
 printf("%d",!a[I]);
}
printf("Complement of second array is");
for(int I=1;I<=10;I++)
{
 printf("%d",!b[I]);
}
}

void main()
{
int m, n, I, x, y, ch;
printf("Enter the size of first array:");
scanf("%d",&m);
printf("Enter the elements of first array:");
for(I=0;I<m;I++)
{
scanf("%d",&x);
a[x]=1;
}
printf("Bitstring of first array is:");
for(I=1;I<=10;I++)
{
printf("%d",a[I]);
}
printf("\nEnter the size of second array:");
scanf("%d",&n);
printf("Enter the elements of second array:");
for(I=0;I<n;I++)
{
scanf("%d",&y);
b[y]=1;
}
printf("\nBitstring of second array is:");
for(I=1;I<=10;I++)
{
printf("%d",b[I]);
}
while(ch!=4)
{
printf("\n********************MENU***************\n1.Union\n2.Intersection\n3.Complement\n4.exit\n\nENTER YOUR CHOICE");
scanf("%d",&ch);
switch(ch)
{
case 1:uni();
break;
case 2:inter();
break;
case 3:comp();
break;
case 4: 
break;
default:printf("Invalid choice");
}
}
}

