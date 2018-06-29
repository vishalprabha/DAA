#include<iostream>
using namespace std;
int max(int,int);
void warshal(int r[10][10],int n)
{
int i,j,k;
for(k=1;k<=n;k++)
 for(i=1;i<=n;i++)
  for(j=1;j<=n;j++)
   r[i][j]=max(r[i][j],r[i][k]&&r[k][j]);
}

int max(int a, int b)
{
 if(a>b)
  return(a);
 else
  return(b);
}

int main()
{
int r[10][10],a[10][10],i,j,n;
cout<<"enter no of vertices\n";
cin>>n;
cout<<"enter adjacency matrix\n";
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  cin>>r[i][j];
  }
}

warshal(r,n);
cout<<"transitive closure\n";
for(i=1;i<=n;i++)
{
 for(j=1;j<=n;j++)
 {
  cout<<r[i][j];
 }
 cout<<endl;
}
return 0;
}
