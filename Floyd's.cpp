#include<iostream>
using namespace std;
int min(int,int);

void floyd(int a[10][10],int n)
{
int d[10][10],i,j,k;
for(i=1;i<=n;i++)
{
  for(j=1;j<=n;j++)
  {
   d[i][j]=a[i][j];
  }
}

for(k=1;k<=n;k++)
{
 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
   {
    d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
   }
 }
}

cout<<"\nthe distance matrix\n";
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  cout<<d[i][j]<<"\t";
 }
cout<<endl;
}
}

int min(int a,int b)
{
 if(a<b)
  return a;
 else
  return b;
}

int main()
{
int n,a[10][10],i,j;
cout<<"enter no of nodes\n";
cin>>n;
cout<<"enter the weight matrix\n";
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  cin>>a[i][j];
 }
}
floyd(a,n);
return 0;
}
