#include "sort2.h"

void sort2(int arr[],int N)
{
    int i;
    int j;
    for(i=0;i<N;i++)
    {
        int small=arr[i];
        int pos=i;
        for(j=i+1;j<N;j++)
        {
            if(arr[j]<small)
            {
                small=arr[j];
                pos=j;
            }
        }
        int temp=arr[pos];
        arr[pos]=arr[i];
        arr[i]=temp;
    }
}
