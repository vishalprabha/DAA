// Program to compute Time complexity of merge sort algorithm for various inputs

#include <iostream>
#include <time.h>
using namespace std;
void merge(int,int,int, int[],int);
void merge_sort(int low,int high, int a[],int num)
{
 int mid;
 if(low<high)
 {
  mid=(low+high)/2;
  merge_sort(low,mid,a,num);
  merge_sort(mid+1,high,a,num);
  merge(low,mid,high,a,num);
 }
}
void merge(int low,int mid,int high, int a[], int num)
{
 int h,i,j,b[num],k;
 h=low;
 i=low;
 j=mid+1;

 while((h<=mid)&&(j<=high))
 {
  if(a[h]<=a[j])
  {
   b[i]=a[h];
   h++;
  }
  else
  {
   b[i]=a[j];
   j++;
  }
  i++;
 }
 if(h>mid)
 {
  for(k=j;k<=high;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 else
 {
  for(k=h;k<=mid;k++)
  {
   b[i]=a[k];
   i++;
  }
 }
 for(k=low;k<=high;k++) a[k]=b[k];
}
int main()
{
 int num,i;
 clock_t begin , end;
 double total_time;
 cout<<"Enter the number of elements: ";
 cin>>num;
 int a[num];
 srand(time(NULL));
 for( i = 0; i < num; i++)
 {
   a[i] = rand();
 }
 begin = clock();
 merge_sort(0,num-1,a, num);
 end = clock();

 cout<<endl;
 cout<<"The sorted elements are: "<<endl;
 for(i = 0; i < num; i++ )
 {
   cout<<a[i]<<endl;
}
total_time = ((double)end-begin)/ CLOCKS_PER_SEC;
 cout<<endl<<std::fixed<<"The time taken to merge sort is: "<<total_time;
return 0;
}
