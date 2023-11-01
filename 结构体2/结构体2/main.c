#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>

typedef struct A {
	char name[20];
	short age;
	char gender[14];
}A;

void print1(A tmp) {
	printf("姓名：%s\n", tmp.name);
	printf("年龄：%d\n", tmp.age);
	printf("性别：%s\n", tmp.gender);
	return;
}

void print2(A* tmp) {
	printf("姓名：%s\n", tmp->name);//tmp是一个指针了
	printf("年龄：%d\n", tmp->age);
	printf("性别：%s\n", tmp->gender);
	return;
}



int main() {
	A a = {
		"张三",24,"女"
	};
	print1(a);
	print2(&a);
	

	system("pause");
	return NULL;
}