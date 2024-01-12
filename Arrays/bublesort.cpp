#include <iostream>

using namespace std;



void sort(int arr[], int array_size){
    int temp;
    for(int i = 0; i < array_size;i++){
        for(int j=0;j< i; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    for(int i = 0;i<array_size;i++){
        cout << arr[i] << " ";
    }

    cout << endl;

}

int main(){

    int arr[5] = {1,23,44,523,2};
    int size = sizeof(arr)/sizeof(int);
    
    sort(arr,size);

    return 0;
}