#include<iostream>
#include"StdAfx.h"
#include<stdio.h>
#include<stdlib.h>
#include<wtypes.h>
#include<time.h>
#include <winbase.h>
#include<conio.h>
using namespace std;
#define name 5;         //ְ����������
FILE *fp;               //����һ���ļ�ָ��
struct Employee
{
	char num[10];
	char name[5];
	float gwgz;
	float xjgz;
	float zwjt;
	float jxgz;
	float yfgz;
	float grsds;
	float sfgz;
}
Employee *zggz=new Employee[100];    //����һ��ְ������ 

void menu();
void read();
void write();
void find();
void list();
void modify();
void del();
void add();
void grsds();   //��������ĺ�����

void menu()     //�˵�������
{
	printf("\n");
	printf("ְ�����ʲ�ѯϵͳ\n")��
	printf("\n");
    printf("\n");
	printf("\n");
	printf("1.��ѯְ��������Ϣ\n");
	printf("2.�޸�ְ��������Ϣ\n");
    printf("1.���ְ��������Ϣ\n");
    printf("1.ɾ��ְ��������Ϣ\n");
    printf("1.����ְ��������Ϣ\n");
    printf("1.���ְ��������Ϣ\n");
    printf("1.�˳�\n");
    printf("\n");

}
void main()
{
	read();
	int n;
	while(1)
	{
		do
		{
			 menu();  //���ò˵�����
			 read();  //���ö�ȡ����
			printf("��ѡ����Ҫ�����Ĳ���(1--7):\n")
			scanf("%d,&n");
			if(n>=1&&n<=7)
			{
			    switch(n)
				{
				    case 1: find();
						break;
					case 2: modify();
						break;
					case 3: add()
						break;
					case 4: del()
						break;
					case 5: write();
						break;
					case 6: list();
						break;
					case 7:
						{ 
							delete[]zggz;
							return 0;
						}

				}
			}
		}
		else
		{
			printf("�Բ�����޴���밴�س������²�ѯ\n");
			cin.get;
			cin.get;
		}
	}
	void read()      //�����ȡ����
		if((fp=fopen("gx.dat","r")))
		{
			while(!feof(fp))
			{
				fscanf(fp,%s%s%f%f%f%f%f%f%f,
					                        &zggz[n].num,&zggz[n].name,&zggz[n].gwgz,&zggz[n].xjgz,&zggz[n].zwjt,&zggz[n].jxgz,&zggz[i].yfgz,&zggz[n].grsds,&zggz[n].sfgz);
                n++;
			}
            fclose(fp);//�ر��ļ�ָ��
		}
		else
		{
			printf("���ļ�ʧ�ܣ��޷�ȷ��ְ�������������³���");
		}
		cout<<n;
		void write(int m)      //���溯��
     {
		 system("cls")//����ļ�
			 if(::n>0)
			 {
				 if((fp=fopen("gx.dat","wb")))//�ж��ļ��Ƿ��ܴ�
				 {
					 for(int i=0;i<::n;i++)   
					 {
						 Employee a=zggz[i];
						 fprintf(fp,,"\n%-20s%-10s%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%",
							 a.num,a.name,a.gwgz,a.xjgz,a.zwjt,a.jxgz,a.yfgz,a.grsds,a.sfgz);
					 }
					 fclose(fp)//�ر�ָ��
					 printf("����ɹ������س�������!\n");
				 }
				 else 
				 {
					 printf("���ļ�ʧ��!������\n");
				 }
				 cin.get();
				 cin.get();
				 system("cls");//�������

			 }

  }


      void find()          //��ѯ����
    {
         char gonghao[10];
		 int t=0;
         int m=read();//���ö�ȡ����
         printf("������Ҫ���ҵĹ���:\n");
         scanf("%s",gonghao);
         for(i=0;i<m;i++)
         if(strcmp(gonghao,zggz[i].num)==0)
      {
		  printf("���ҵ���Ա������ϢΪ")
          printf("\n����\t����\t��λ����\tн������\tְ�����\t��Ч����\tӦ������\t��������˰\tʵ������\n");
          printf("\n%s\t%s\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
		  t=1;
		  fclose(fp);
          break;
    }
		 if(!t)
		 {
             printf("\n���޴���\n");
             fclose(fp);
		 }

		 void list()  //�����������
		 {
			 menu()    //���ò˵�����
		    printf("������ְ���ţ���λ���ʣ�н�����ʣ�ְ�������ʵ���ʣ�Ӧ�����ʣ���������˰��ʵ������\n")
			for(int i=0;i<n;i++)
			{
				printf("%-9s%-7s%-10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
			}
			printf("������ɣ������!")
			cin.get();
			cin.get();
			menu();
		 }

		 void modify()          //�����޸ĺ���
		 {
			 int t=0;
			 menu();
			 char gonghao[10];
			 printf("��������Ҫ�޸ĵĹ��ţ�");
			 scanf("%s,gonghao");
			 for(int i=0;i<n;i++)
			 {
				 if(strcmp(gonghao,zggz[10].num)==0)
				 {
					 printf("��ְ���Ĺ�����ϢΪ��\n");
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
					 printf("�������޸ĵ���Ϣ��\n");
					scanf(%s%s%f%f%f%f%f%f%f,
					                        &zggz[i].num,&zggz[i].name,&zggz[i].gwgz,&zggz[i].xjgz,&zggz[i].zwjt,&zggz[i].jxgz,&zggz[i].yfgz,&zggz[i].grsds,&zggz[i].sfgz);



				 }
			 }
		 }
		


		float grsds(float grsds)    //�����������˰
		 {
			 if(sfgz<=500)
			 {
				 return(float) (sfgz*0.05);
			 }
			 else if(sfgz>=500&&sfgz<=2000)
			 {
				 return(float) (500*0.05+(sfgz-500)*0.1);
			 }
			  else if(sfgz>=500&&sfgz<=5000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(sfgz-2000)*0.15);
			 }
               else if(sfgz>=500&&sfgz<=20000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(sfgz-5000)*0.2);
			 }
			  else if(sfgz>=500&&sfgz<=40000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(20000-5000)*0.2+(sfgz-20000)*0.25);
			 }
			   else if(sfgz>=500&&sfgz<=60000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(20000-5000)*0.2+(40000-20000)*0.25+(sfgz-40000)*0.3);
			 }
			    else if(sfgz>=500&&sfgz<=80000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(20000-5000)*0.2+(4000-20000)*0.25+(60000-40000)*0.3+(sfgz-60000)*0.35);
			 }
			   else if(sfgz>=500&&sfgz<=100000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(20000-5000)*0.2+(4000-20000)*0.25+(60000-40000)*0.3+(80000-60000)*0.35+(sfgz-80000)*0.4);
			 }
				  else if(sfgz>100000)
			 {
				 return(float) (500*0.05+(2000-500)*0.1+(5000-2000)*0.15+(20000-5000)*0.2+(4000-20000)*0.25+(60000-40000)*0.3+(80000-60000)*0.35+(100000-80000)*0.4+(sfgz-100000)*0.45);
			 }
		 }

}



















//ְ�����š�ְ����������λ���ʡ�н�����ʡ�ְ���������Ч���ʡ�Ӧ�����ʡ���������˰��ʵ������