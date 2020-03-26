#include<iostream>
void swap(int* a, int* b)
{
	int temp; 
	temp = *a;
	*a = *b;
	*b = temp;
}
int partition(int a[], int start, int end){
	int pivot = a[end];
	int i = start;
	for (int k = 0; k <=end - 1; k++) {
		if (a[k] < pivot) {
			swap(&a[k], &a[i]);
			i++;
		}
		
	}
	swap(&a[i], &a[end]);
	return i;
}
void quickSort(int a[], int start, int end) {
	if (start< end) {
		int p = partition(a, start, end);
		quickSort(a, start, p - 1);
		quickSort(a, p + 1, end);
	}
}
int main() {
	int a[] = { 3,14,363,74,2,6 };
	quickSort(a, 0, 5);
	for (int i = 0; i < 6;i++)
	{
		std::cout << a[i] << "  ";
	}
}