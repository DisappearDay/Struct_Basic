#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>
#include <stdlib.h> 


//����һ���ṹ������
//struct Student   //��int��short�ȼۣ��Ǳ�������û����������ʱ���ǲ����ڴ�����ռ�
//{
//	//��Ա�б�
//	int sno;
//	char name[20];
//}s1,s2,s3;//�����ȫ�ֽṹ�����
//
//typedef struct Stu   //typedef�������ǣ�������ṹ�壨struct Stu{}�����¶���һ������stu��
//                      //�򴴽��ṹ�������ʱ��Ϳ�����stu���д�����
//{
//	//��Ա�б�
//	int sno;
//	char name[20];
//}stu;//����--�ض��������
//
//int main() {
//	struct Student s1;  //�����ṹ�����--�ֲ���
//	stu s2;
//
//	//��ʼ���ǣ��ڽṹ�崴����ʱ�������ֵ
//	stu s3 = { 221,"����" };
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
//	struct T t1 = { "202004011",20,"����" };
//	struct S s1 = { 18,"ѧ��",{"202004011",20,"����"} };
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
	 Stu s1= { "����",20,"18595335601","��" };
	 print1(s1);
	 print2(&s1);
	return 0;
}
