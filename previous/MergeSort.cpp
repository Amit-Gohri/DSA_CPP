#include<iostream>

void merge(int arr[], int start1, int end1, int end2){
    int mergedArr[end2 - start1 + 1];
    int filler = 0;                         //variable to fill mergedArr
    int filler2 = 0;
    int count = 0;
    int count1 = 0; 
    for (int j = start1; j <= end1; j++){
                       //looping varibles
        for (int i = end1 + 1+count; i <= end2; i++){
            if (count == 4){
                mergedArr[filler] = arr[j];
                filler++;
            }  
            else if(arr[j]<arr[i]){
                mergedArr[filler] = arr[j];
                filler++;
                break;
            }
            else{
                mergedArr[filler] = arr[i];
                filler++;
                count1++;
            }
            
        }
        count = count1;

    }
    for (int x = start1; x <= end2;x++){
        arr[x] = mergedArr[filler2];
        filler2++;
    }


}


void mergeSort(int arr[] , int start, int end){
    if (start-end>0){
        mergeSort(arr, start, (end / 2));
        mergeSort(arr, (end / 2) + 1, end);
    }
    merge(arr, start, (end / 2), end);
}

int main(){

    int arr[10] = {3, 22, 56, 12, 5, 17, 34, 2, 7, 13};
    mergeSort(arr, 0, 9);
    for (int i = 0; i < 10; i++){
        std::cout << arr[i]<<"  ";
    }
}