#include <iostream>
#include <vector>
using namespace std;

int pivotElement(vector<int> &arr){
  int start = 0, end = arr.size()-1;
  while(start<=end){
    int mid = start + (end-start)/2;
    if(arr[mid]>arr[mid+1]){
      return mid;
    }
    if(arr[mid-1]>arr[mid]){
      return mid-1;
    }

    if(arr[start]>arr[mid]){
      end = mid-1;
    }
    else{
      start = mid + 1;
    }
  }
  return -1;
}
int searchRotated(vector<int> &arr,int start,int end,int key){
  while(start<=end){
    int mid = start + (end-start)/2;
    if(arr[mid] == key){
      return mid;
    }
    if(arr[mid]>key){
      end = mid-1;
    }
    else{
      start = mid+1;
    }
  }
  return -1;
}
int main() {
  
  vector<int> arr ={6,7,8,9,10,11,12,13,1,2,3,4,5};
  int key = 4;
  int pivot = pivotElement(arr);
  if(key>=arr[0] && key<=arr[pivot]){
    cout<<searchRotated(arr,0,pivot,key);
  }
  else{
    cout<<searchRotated(arr,pivot+1,arr.size()-1,key);
  }

  return 0;
}