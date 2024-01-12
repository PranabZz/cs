#include <iostream>

using namespace std;

int frequency(int arr[],int array_size,int key){
    int occurance = 0;

    for(int i = 0; i < array_size; i++ ){
        if(arr[i] == key){
            occurance++;
        }
    }
    
    return occurance;
}

int main(){
    int arr[6] = {12,3,3,3,12,4};

    int array_size = sizeof(arr)/sizeof(int);

    int key = 4;

    cout << frequency(arr,array_size,key);
}