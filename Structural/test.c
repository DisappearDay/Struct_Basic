#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h> 


//定义一个结构体类型
//struct Student   //和int，short等价，是变量名，没创建变量的时候是不向内存申请空间
//{
//	//成员列表
//	int sno;
//	char name[20];
//}s1,s2,s3;//定义的全局结构体变量
//
//typedef struct Stu   //typedef的作用是，给这个结构体（struct Stu{}）重新定义一个名字stu，
//                      //则创建结构体变量的时候就可以用stu进行创建了
//{
//	//成员列表
//	int sno;
//	char name[20];
//}stu;//类型--重定义的名字
//
//int main() {
//	struct Student s1;  //创建结构体变量--局部的
//	stu s2;
//
//	//初始化是，在结构体创建的时候给他赋值
//	stu s3 = { 221,"张三" };
//	return 0;
//}



//struct T {
//	char sno[20];
//	int age;
//	char name[20];
//};
//struct S
//{
//	short age;
//	char staff[20];
//	struct T t;
//};
//int main() {
//	struct T t1 = { "202004011",20,"张三" };
//	struct S s1 = { 18,"学生",{"202004011",20,"张三"} };
//	printf("%s\n",s1.t.name);
//	return 0;
//}

typedef struct Student
{
	char name[20];
	int age;
	char tele[12];
	char sex[10];
}Stu;

print1(Stu s) {
	printf("%s\n", s.name);
	printf("%d\n", s.age);
	printf("%s\n", s.tele);
	printf("%s\n",s.sex);
}
print2(Stu* s) {
	printf("%s\n", s->name);
	printf("%d\n", s->age);
	printf("%s\n", s->tele);
	printf("%s\n", s->sex);
}

int main() {
	 Stu s1= { "李四",20,"18595335601","男" };
	 print1(s1);
	 print2(&s1);
	return 0;
}
