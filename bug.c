#include <stdio.h>


int sumArray(int *arr, int length) {
  int sum = 0;
  for (int i = length - 1; i >= 0; i++) {
    sum += arr[i];
  }
  return sum;
}

int main() {
  int array[5] = {1, 2, 3, 4, 5};
  int result = sumArray(array, 5);
  printf("Sum is %d\n", result);
  return 0;
}


