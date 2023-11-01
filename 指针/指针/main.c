#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <math.h>


void my_reverse(int arr[], int size) {
	int left = 0;
	int right = size - 1;
	while (left < right) {
		int r = arr[left];
		arr[left] = arr[right];//函数内可以用这样的方式访问数组，但实质上是传地址
		arr[right] = r;
		left++, right--;

	}
	return;
}

int main() {
	int arr1[] = { 1,3,5,7,9 };
	int arr2[] = { 2,4,6,8,10 };
	int i = 0;
	printf("变换前\n");
	printf("数组arr1\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr1[i]);
	}
	printf("数组arr2\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}
	
	for (i=0; i < 5; i++) {
		int r = arr1[i];
		arr1[i] = arr2[i];
		arr2[i] = r;
	}
	printf("变换后\n");
	printf("数组arr1\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr1[i]);
	}
	printf("数组arr2\n");
	for (i = 0; i < 5; i++) {
		printf("%d\n", arr2[i]);
	}
	
	


	return NULL;
}