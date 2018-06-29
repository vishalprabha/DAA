// Program to find the time complexity of Insertion_Sort algorithm


#include<iostream>
#include<time.h>
using namespace std;
 void insertion_sort(int arr[], int num)
 {
   int temp;
   for (int i = 1; i < num; i++)
   {
       for (int j = i; j >= 1; j--)
       {
           if (arr[j] < arr[j-1])
           {
               temp = arr[j];
               arr[j] = arr[j-1];
               arr[j-1] = temp;
           }
           else
               break;
       }
   }
 }
int main()
{
    int num;
    clock_t begin, end;
    double total_time;
    cout<<"enter the elements: ";
    cin>>num;
    int a[num];
    srand(time(NULL));
    for (int i = 0; i < num; i++)
    {
        a[i] = rand();
    }
    begin = clock();
    insertion_sort(a, num);
    end = clock();
    cout<<"sorted array: "<<endl;
    for (int k = 0; k < num; k++)
    {
	cout<<a[k]<<endl;
    }
    total_time = ((double) end-begin)/CLOCKS_PER_SEC;
    cout<<endl<<std::fixed<<"The time taken to insertion_sort is: "<<total_time;
    return 0;
}
