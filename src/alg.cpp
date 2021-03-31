#include<iostream>
int cbinsearch(int *arr, int size, int value) {
int count = 0;
int l = 0; 
int r = size - 1;
int med;
int index;
	
	while (l <= r)
	{
		med = l + (r - l) / 2;
		if (arr[med]>value){
			r = med-1;
		}
		else if (arr[med]<value){
			l = med+1;
		}
		else if (arr[med]==value){
			index = med;
			break;
		}
	}
	
	if(index>=0){for (int i = index + 1; i < size; i++) {
		if (arr[i] == value) {
			count++;
		}
	}
	}
	
	if(index<size){for (int i = index; i >= 0; i--) {
		if (arr[i] == value) {
			count++;
	}
	}
	}
	
	
	
	if(count > 0)
	return count;
}
