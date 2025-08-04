#include <stdio.h>

int main() {
  int n, array[n] ;
  int index, value;

  printf("How many number= ");
  scanf("%d",&n);

  printf("Type the number= ");

for(int i=0;i<n;i++)
{
      scanf("%d",&array[i]);
}
printf("Enter the index of the element you want to update: ");
  scanf("%d", &index);

  printf("Enter the new value for the element: ");
  scanf("%d", &value);

  array[index] = value;

  for (int i = 0; i < n; i++) {
    printf("%d ", array[i]);
  }

  printf("\n");

  return 0;
}
