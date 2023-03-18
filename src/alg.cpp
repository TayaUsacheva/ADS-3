// Copyright 2021 NNTU-CS
int cbinsearch(int *arr, int size, int value) {
  int right = size - 1;
  int left = 0;
  int center = (right - left) / 2;
  int count_value = 0;
  while (right - left > 0) {
    if (arr[center] > value) {
        right = center - 1;
        center /= 2;
    } else if (arr[center] < value) {
        int x = center;
        center += (size - x) / 2;
        left = x + 1;
    } else if (arr[center] == value) {
        count_value = 1;
        int i = center - 1;
        while (arr[i] == value && i >= 0) {
            count_value += 1;
            i--;
        }
        int j = center + 1;
        while (arr[j] == value && j < size) {
            count_value += 1;
            j++;
        }
        return count_value;
    }
  }
  return 0; // если ничего не найдено
}
