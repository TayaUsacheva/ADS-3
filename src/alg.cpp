// Copyright 2021 NNTU-CS
int sortirovka(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
                if(arr[j] > arr[j + 1]) {
                    int temp = arr[j + 1];
                    arr[j + 1] = arr[j];
                    arr[j] = temp;
                }
        }
    }
    return *arr;
}
int cbinsearch(int *arr, int size, int value) {
  sortirovka(arr, size);
  int center = 0;
  int count_value = 0;
  while (true) {
    if (arr[center] > value) {
        center /= 2;
    } else if (arr[center] < value) {
        int x = center;
        center += (size - x) / 2;
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
