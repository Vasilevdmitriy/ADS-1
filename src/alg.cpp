
int cbinsearch(int *arr, int size, int value) {
      int med=0;
    int l=0;
    int r=size-1;
    int count=0;
    
    while(l<=r){
        
        med=(l+r)/2;
        if(arr[med]==value) {
        count++;
        }
        
        if(arr[med]>value)r=med-1;
        else l=med+1;
    }
      
       int l=0;
    int r=size-1;
    
    while(l<r){
        
        med=(l+r)/2;
        if(arr[med]==value) {
        count++;
        }
        
        if(arr[med]>value)l=med+1;
        else r=med-1;
    }

    return count;

  return 0; // если ничего не найдено
}
