// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
      int mid;
  int l=0;
  int r=size-1;
  int count=0;
  
  while(l<=r){
      mid=l+(r-l)/2;
    if (arr[mid] == value) count++;
    
    if (arr[mid] > value) r = mid-1; 
    
    else l = mid+1;
  }
  return 0; // если ничего не найдено
}
