#include <iostream>
size_t merge(const int arr1[],const int arr2[], int result[], size_t n1, size_t n2){
    size_t index1=0, index2=0, resultIndex=0;
    for(int i = 0; i < n1+n2; i++){
        if(index1 >= n1 || arr1[index1] > arr2[index2]){
            result[resultIndex] = arr2[index2];
            index2++;   
        }
        else{
            result[resultIndex] = arr1[index1];
            index1++;   
        }
        resultIndex++;
    }
    return resultIndex;
}

int main(){
    
}