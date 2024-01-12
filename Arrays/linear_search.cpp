#include <iostream>

using namespace std;

// Finding if n is present in m number of array 

// Two methods to solve one is by binary search 
// Or simple approach is linear search


int linear_search(int arr[],int n,int size){
  for(int i = 0; i < size; i++){
    if(arr[i] == n){
      cout << "The key is found";
      break;
    }
  }
  return 0;
}


int main(){
  int arr[5] = {1,2,3,6,8};
  int n = 12;

  cout << linear_search(arr,n,5);
}


// Since we are working with array we
// T(n) = O(n)
