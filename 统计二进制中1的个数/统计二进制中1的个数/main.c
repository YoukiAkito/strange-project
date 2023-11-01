#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
struct student {
	char name[20];
	short age;
	char tel[20];
	char gender[5];
}; 
	

int main() {
	printf("%d", digitsum(1729));
	struct student s ={
		"ÕÅÈı", 4, "212344", "Å®"
	};

	return 0;
}