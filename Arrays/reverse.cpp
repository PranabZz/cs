#include <iostream>

using namespace std;

void reverse(int arr[],int array_size){

    for(int i = array_size-1; i >= 0; i--){
        cout << arr[i] << " ";
    }
    cout << endl;
    
}

int main(){
    int arr[5] = {1,2,3,4,12};
    int array_size = sizeof(arr) / sizeof(int);

    reverse(arr,array_size);
}

