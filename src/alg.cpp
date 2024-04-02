// Copyright 2021 NNTU-CS

int cbinsearch(int* arr, int size, int value) {
  int cur1;
  int start = 0;
  int end = size - 1;

  while (end - start > 1) {
    cur1 = start + (end-start) / 2;
    if (arr[cur1] < value) { start = cur1; }
    else { end = cur1; }
    
  }
  if (arr[start] == value) cur1 = start;
  else if (arr[end] == value) cur1 = end;
  else return 0;

  start = end;
  end = size - 1;
  int cur2;
  while (end - start > 1) {
    cur2 = start + (end - start) / 2;
    if (arr[cur2] < value+1) { start = cur2; }
    else { end = cur2; }

  }
  if (arr[start] == value) cur2 = start;
  else if (arr[end] == value) cur2 = end;
  else return -1;

  return cur2 - cur1 + 1;

}
