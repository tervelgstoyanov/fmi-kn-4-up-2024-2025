#include <iostream>
// #include <string.h>

using namespace std;


size_t strlen(const char str[]){
    int i=0;
    while(str[i])
        i++;
    return i;
}

int strcmp(const char str1[],const char str2[]){
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    int index = 0;
    while(index < n1 && index < n2 && str1[index] == str2[index])
        index++;
    return str1[index] - str2[index];
}

void strcat(char str1[],const char str2[]){
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    for(int i=0;i<n2;i++){
        str1[n1+i] = str2[i];
    }
    str1[n1+n2]=0;
}
void strcpy(char str1[],const char str2[]){
    int n2 = strlen(str2);
    for(int i=0;i<n2;i++){
        str1[i] = str2[i];
    }
    str1[n2]=0;
}

int main(){
    // int arr1[5]{1,1,4,5,6},arr2[3]{2,3,7};
    // int arr3[10];
    // size_t resultSize = merge(arr1,arr2,arr3,5,3);
    // for(int i=0;i<resultSize;i++)
    //     cout<<arr3[i]<<" ";
    // cin.getline(ch,255);
    // cout<<ch;
}