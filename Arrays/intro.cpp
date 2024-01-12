#include <iostream>

using namespace std;

// Basics of arrays using input and output

int main(){
  int n;
  int arr[n];

  cout << "Enter the size of array : " << endl;
  cin >> n;
  
  cout << "Now enter all the "  << n << " numbers of element: " << endl;
  for (int i = 0 ; i < n ; i++){
    cin >> arr[i];
  }


  cout << "The formed array is: " << endl;
  for (int i = 0; i < n; i++)
  {
    cout << i << arr[i] << ", " ;
  }
  

  return 0;

}


// Since we are using n number of elements in array 
// We will loop thorugh it for n number of times hence we get 
// Time complexity T(n) = O(n)
// Space complexity T(n) = n


