#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

typedef struct A {
	char name[24];
	char gender[25];
	int a;
	int b;


}A;

int ADD(A a) {

	return a.a + a.b;
}


int main() {
	static A a = {
		"ÕÅÈı","ÎÖ¶ûÂê¹ºÎï´ü",134,522
	};
	printf("%d", ADD(a));


	return NULL;
}