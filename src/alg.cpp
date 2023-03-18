// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int right = size;
  int left = -1;
  int center;
  int count_value = 0;
  while (left < right - 1) {
        center = (left + right) / 2;
    if (arr[center] > value) {
        right = center;
    } else if (arr[center] < value) {
        left = center;
    } else if (arr[center] == value) {
        count_value = 1;
        int i = center - 1;
        while (arr[i] == value && i >= 0) {
            count_value += 1;
            i--;
        }
        i = center + 1;
        while (arr[i] == value && i < size) {
            count_value += 1;
            i++;
        }
        return count_value;
    }
  }
  return 0; // если ничего не найдено
}
