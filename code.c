#include<stdio.h>
void rearrange(int a[],int size)
{
    int positive=0,negative=1;
    while(1)
    {
      while (positive < size && a[positive] >= 0)
        positive += 2; 
      while (negative < size && a[negative] <= 0)
            negative += 2;   
         if (positive < size && negative < size)
         {
        int temp=a[positive];
            a[positive]=a[negative];
            a[negative]=temp;
         }
            else
            break;   
    }
}
int main()
{
    int a[] = { 1, -3, 5, 6, -3, 6, 7, -4, 9, 10 };
    int n = (sizeof(a) / sizeof(a[0]));
  
    rearrange(a, n); 
    for (int i = 0; i < n; i++)
        printf("%d ",a[i]);
  
    return 0;
}