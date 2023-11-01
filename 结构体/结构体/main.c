#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct Stu {
	char name[20];
	short age;
	char tele[12];
	char gender[5];

}Stu;//是类型

typedef struct T {
	char ch[20];
	struct Stu aT;
	char* pc;
}T;

int main() {
	Stu a = {
		"张三",12,"222244444","女"//依照顺序进行赋值
	};
	Stu* pa = &a;
	struct Stu b = {
		"李斯",99,"882882","a"
	};
	struct Stu* pb = &b;

	T t = {
		"chchchchaaa",{
	                       "王五",55,"44424","ccs"
	                   },&a
	};

	printf("%s\n", a.name);
	printf("%s\n", pa->gender);
	printf("%s\n", b.name);
	printf("%s\n", pb->tele);
	printf("%d\n", t.aT.age);


	return NULL;
}