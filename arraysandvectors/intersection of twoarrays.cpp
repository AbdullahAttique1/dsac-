#include<iostream>
using namespace std;

void intersectionArrays(int arr1[], int arr2[], int size1, int size2){
    int result[100];   // temporary array to store intersection
    int k = 0;         // index for result array

    for(int i = 0; i < size1; i++){
        for(int j = 0; j < size2; j++){
            if(arr1[i] == arr2[j]){
                result[k] = arr1[i];
                k++;
                break;  // stop checking once match is found
            }
        }
    }

    // Print intersection
    cout << "Intersection: ";
    for(int i = 0; i < k; i++){
        cout << result[i] << " ";
    }
}

int main(){
    int arr1[] = {1,2,3,4};
    int arr2[] = {3,4,5,6};

    int size1 = 4;
    int size2 = 4;

    intersectionArrays(arr1, arr2, size1, size2);

    return 0;
}
