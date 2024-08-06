#include<stdio.h>
#include<conio.h>
#include<string.h>

//1
void nhapMang(int a[], int n) {
	for (int i = 0; i < n; i++) {
		printf("Nhap phan tu thu %d:", i + 1);
		scanf("%d", &a[i]);
	}
}

void xuatMang(int a[], int n) {
	printf("Cac phan tu da nhap:");
	for (int i = 0; i < n; i++) {
		printf("%d", a[i]);
	}
	printf("\n");
}

//2

int timMax(int a[], int n) {
	if (n <= 0) {
		return -1;
	}
	int max = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
		return max;
	}
}

int timMin(int a[], int n) {
	if (n <= 0) {
		return -1;
	}
	int min = a[0];
	for (int i = 1; i < n; i++) {
		if (a[i] < min) {
			min = a[i];
		}
		return min;
	}
}
void main() {

}