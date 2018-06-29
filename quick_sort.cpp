//Program to compute time complexity of quick_sort algorithm

#include<iostream>
#include<time.h>
using namespace std;

void quickSort(int arr[], int left, int right) {
      int i = left, j = right;
      int tmp;
      int pivot = arr[(left + right) / 2];

      /* partition */
      while (i <= j) {
            while (arr[i] < pivot)
                  i++;
            while (arr[j] > pivot)
                  j--;
            if (i <= j) {
                  tmp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = tmp;
                  i++;
                  j--;
            }
      };

      /* recursion */
      if (left < j)
            quickSort(arr, left, j);
      if (i < right)
            quickSort(arr, i, right);
}

int main()
{
  clock_t begin , end;
  int i, num;
  double total_time;
  cout<<"Enter the number of elements: ";
  cin>>num;
  int a[num];
  srand(time(NULL));
  for( i = 0 ; i < num; i++)
  {
    a[i] = rand();
  }
  begin = clock();
  quickSort(a, 0, num -1);
  end = clock();
  cout<<endl<<"The sorted elements are: ";
  for( i = 0; i < num; i++)
  {
    cout<<a[i]<<endl;
  }
  total_time = ((double)end- begin)/ CLOCKS_PER_SEC;
  cout<<endl<<std::fixed<<"The time taken to quick_sort is: "<<total_time;
  return 0;
}
