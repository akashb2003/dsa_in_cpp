#include <stdio.h>
#include<math.h>
#define max 10
#define swap(a,b,temp)  ((temp)=(a),(a)=(b),(b)=(temp))

void sort(int b[],int n)
{
    int i,j,min,temp;
    for(i=0;i<n-1;i++)
    {   min =i;
        for(j=i+1;j<n;j++)
        {
            if(b[j]<b[min])
            min = j;
        }
        swap(b[i],b[min],temp);
    }
}

int
main ()
{
  printf ("Enter number of numbers to be generated\n");
  int n;
  scanf ("%d", &n);
  int a[max];
  for (int i = 0; i < n; i++)
    {
      a[i] = rand () % 100;
      printf ("%d ", a[i]);
    }
    
 printf ("\n\nAfter 2\n");
  sort (a, n);
  for (int i = 0; i < n; i++)
    {
      printf ("%d ", a[i]);
    }
  return 0;
}

