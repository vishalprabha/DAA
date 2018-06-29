// Program to compute the time complexity of selection_sort algorithm for various inputs

#include<iostream>
#include<time.h>

using namespace std;

void selection_sort(long int arr[], int b)
{
  int min, local, temp;
  for( int i = 0; i < b-1; i++)
  {
    min = arr[i];
    local = i;
    for( int j = i+1; j < b ; j++)
    {
      if( arr[j] < min )
      {
        min = arr[j];
        local = j;
     }
   }
    temp = arr[i];
    arr[i] = arr[local];
    arr[local] = temp;
 }
}

int main()
{
  clock_t begin, end;
  double total_time;
  int b;

  cout<<"Enter the number of elements: ";
  cin>>b;
  long int a[b];
  srand(time(NULL));
  for( int i = 0; i < b; i++)
  {
    a[i] = rand();
  }
  begin = clock();
  selection_sort(a, b);
  end = clock();
  cout<<endl<<"The sorted elements are: ";
  for( int j = 0; j < b; j++)
  {
    cout<<endl<<a[j];
  }
  total_time = ((double)(end - begin))/CLOCKS_PER_SEC;
  cout<<endl<<std::fixed <<"Time taken to selection sort: "<<total_time<<endl;
  return 0;

}
