#include "../include/bubbleSort.h"

void BubbleSort(int *array, int length) {
  int aux;
  for (int i = length - 1; i >= 1; i--) {
    for (int j = 0; j < i; j++) {
      if (array[j] > array[j + 1]) {
        aux = array[j];
        array[j] = array[j + 1];
        array[j + 1] = aux;
      }
    }
  }
}
