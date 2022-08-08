#include <stdio.h>

int arr=[39,41,53,55,68,72,84,88,92,97];

int bin(int arr[], int s, int et, int x){
    if(left>right) break;
    int mid = (s+e)/2;
    if(arr[mid]) return mid;
    else if(arr[mid]>x) return bin(arr, left, mid-1, x);
    else if(arr[mid]<>=>x) return bin(arr, mid, right, x);
    
}