#include "../include/bubbleSort.h"
#include <stdio.h>
#include <stdlib.h>

#define ARRAY_LENGTH 20

int main() {
  int array[ARRAY_LENGTH];

  printf("Before bubble sort: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    array[i] = rand() % 40;
    printf("%d ", array[i]);
  }

  BubbleSort(array, ARRAY_LENGTH);

  printf("\nAfter bubble sort: ");
  for (int i = 0; i < ARRAY_LENGTH; i++) {
    printf("%d ", array[i]);
  }

  return 0;
}
