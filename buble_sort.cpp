// Program to compute the time complexity of bubble_sort algorithm for various inputs

#include<iostream>
#include<time.h>
using namespace std;

void bubble_sort(long int arr[], int b)
{
  int temp;
  for( int i = 0; i < b; i++)
  {
    for( int j = 0; j < b-i-1; j++)
    {
      if( arr[j+1] < arr[j])
      {
        temp = arr[j+1];
        arr[j+1] = arr[j];
        arr[j] = temp;
      }
    }
  }
}

int main()
{
  clock_t begin, end;
  double total_time;
  long int b;
  cout<<"Enter the number of elements: ";
  cin>>b;
  long int a[b];
  srand(time(NULL));
  a[0] = rand();
  for( long int i = 0; i < b; i++)
  {
    a[i] = rand();
  }
  begin = clock();
  bubble_sort(a, b);
  end = clock();
  cout<<endl<<"The sorted elements are: ";
  for( long int j = 0; j < b; j++)
  {
    cout<<endl<<a[j];
  }
  total_time = ((double)(end - begin))/CLOCKS_PER_SEC;
  cout<<endl<<std::fixed<<"Time taken to bubble sort: "<<total_time<<endl;
  return 0;

}
