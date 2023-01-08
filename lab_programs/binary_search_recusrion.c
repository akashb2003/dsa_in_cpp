#include <stdio.h>
#include<stdlib.h>
#define max 10
int binary(int a[],int e,int k,int s)
{
    if(s<=e)
    {
        int mid=(s+e)/2;
            if(a[mid]==k)
            return mid;
            if(a[mid]>k)
            return binary(a,(mid-1),k,0);
            else
            return binary(a,e,k,(mid+1));
           
        
    }
return -1;
}

int
main ()
{
  printf ("Enter number of elements in an array\n");
  int n;
  scanf ("%d", &n);
  int a[max];
   printf ("Enter elements in asscending order\n");
   scanf("%d", &a[0]);
  for (int i = 1; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(a[i-1]<=a[i])
        continue;
        else
        {
            printf("Not in asscending order\n");
            exit(0);
        }   
    }
    
     printf ("\n\nEnter the key\n"); 
     int key;
     scanf("%d",&key);
     printf ("\n\nGiven array\n");
     for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
    
  int ans = binary(a, n-1, key,0);
  if(ans==-1)
  {
  printf ("\n\nKey not present\n");
  }
  else
  {printf ("\n\nKey present at index %d\n",ans);
  }
  return 0;
}

