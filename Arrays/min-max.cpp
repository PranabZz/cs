// finding the minimum and max number in an array 
#include <iostream>

using namespace std;

void min_max(int arr[]){
    int min = arr[0];
    int max = arr[0];

    for(int i = 0; i < 5 ; i++){
        if(arr[i] < min){
            min = arr[i];
        }
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "Maximum number: " << max << endl;
    cout << "Minimum number: " << min << endl;
}

int main(){
    int arr[5] = {1,2,3,4,6};

    min_max(arr);
}

