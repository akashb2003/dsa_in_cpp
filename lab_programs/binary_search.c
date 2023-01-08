#include <stdio.h>
#include<stdlib.h>
#define max 10

int binary(int b[],int n,int k)
{
    int s=0,e=n-1,m=(s+e)/2,ans=-1;
    while(s<=e)
    {
        if(b[m]==k)
        {
            ans=m; break;
        }
        else if(b[m]>k)
        {
            e = m-1;
        }
        else
        {
            s = m+1;
        }
        
        m=(s+e)/2;
    }
    return ans;
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
    
     printf ("\n\nEnter the key\n"); int key;
     scanf("%d",&key);
     printf ("\n\nGiven array\n");
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
    
  int ans = binary(a, n, key);
  if(ans==-1)
  printf ("\n\nKey not present\n");
  printf ("\n\nKey present at index %d\n",ans);
  return 0;
}

