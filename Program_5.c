//You will be given an integer array 'arr'. Your task is to print the largest and smallest element in 'arr'.


#include<stdio.h>

int main()
{
    int arr[5],n, i,max,min;
    printf("enter the array elements ");
    scanf("%d", &n);
 
    for(i = 0; i < n; i++)
    {
      scanf("%d",&arr[i]);
    }
        
    max=arr[0];
    min=arr[0];
    
    
    for(i=0;i<n;i++)
    {
      if(arr[i] >max)
       max=arr[i];
       if(arr[i] < min)
       min=arr[i];

    }
    printf("the max:%d\n the min:%d\n",max,min);

    //Write your code here
  
    return 0;
}
