#include <stdio.h>

int binary_search(int arr[], int n, int arg){
  int first= 0;
  int last = n;
  int res = -1;
  int count = 0;
  int mid = first + (last - first) / 2;

  while (mid > 0) {
    mid = first + (last - first) / 2;
    //printf("%d\n", mid);
    if (arg < arr[mid])
      last = mid;
    else if (arg > arr[mid])
      first = mid;
    else {res = mid; break;}
    count++;
    if (count == 10) break;
  }
	return res;	   
}

int main(){
    int n = 6;
    int k = 6;
    int arr[] = {1,2,3,4,5,6};
    int res = binary_search(arr, n, k);
    //printf("%d", res);
    return 0;
}