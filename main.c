#include <stdio.h>

#define MAX_SIZE 100

void copyArray (int source[], int destination[], int size);

int
main ()
{
  int sourceArray[MAX_SIZE];
  int destinationArray[MAX_SIZE];
  int size, i;

  printf ("Enter the size of the array: ");
  scanf ("%d", &size);

  printf ("Enter the elements of the array:\n");
  for (i = 0; i < size; i++)
    {
      printf ("Element %d: ", i + 1);
      scanf ("%d", &sourceArray[i]);
    }

  copyArray (sourceArray, destinationArray, size);

  printf ("\nElements copied successfully!\n");
  printf ("The elements of the destination array are:\n");
  for (i = 0; i < size; i++)
    {
      printf ("%d ", destinationArray[i]);
    }
  printf ("\n");

  return 0;
}

void
copyArray (int source[], int destination[], int size)
{
  int i;

  for (i = 0; i < size; i++)
    {
      destination[i] = source[i];
    }
}
