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
int n=0;                //����һ��ȫ�ֱ���,��ְ����������ͳ��
struct Employee
{
	char num[10];
	char name[5];
	float gwgz;  //��λ����
	float xjgz;  //н������
	float zwjt;  //ְ�����
	float jxgz;  //��Ч����
	float yfgz;  //Ӧ������
	float grsds;  //��������˰
	float sfgz;   //ʵ������
}
Employee *zggz=new Employee[100];    //����һ��ְ������ʱ��̬�ڴ棬ְ�������ݽ����浽����

void menu();
void read();
void write();
void find();
void list();
void modify();
void del();
void add();
void grsds();   //��������ĺ�����

int main()
{
	read();
	int m;
	while(1)
	{
		do
		{
			 menu();  //���ò˵�����
			 read();  //���ö�ȡ��������ʼ��ְ����Ϣ
			printf("����ѡ����(1--7):\n")
			scanf("%d",&m);   //������m��ֵ
			if(n>=1&&n<=7)
			{
			    switch(n)
				{
				    case 1: find();
						break;
					case 2: modify();
						break;
					case 3: add();
						break;
					case 4: del();
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
	return 0;
}

void menu()     //�˵�������
{
	printf("\n");
	printf("��ӭʹ�ù��������ѧ�������Ϣ��ȫְ�����ʹ���ϵͳ\n");
	printf("\n");
    printf("\n");
	printf("\n");
	printf("��ѡ��1-7��:\n")
	printf("1.��ѯְ�����ʼ�¼\n");
	printf("2.�޸�ְ�����ʼ�¼\n");
    printf("3.���ְ�����ʼ�¼\n");
    printf("4.ɾ��ְ�����ʼ�¼ \n");
    printf("5.�������ݵ��ļ�\n");
    printf("6.���ְ����¼\n");
    printf("7.�˳�ϵͳ\n");
    printf("\n");

}

	void read()      //�����ȡ����
		{
			if((fp=fopen("e:\\gx.dat","r")))
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
			printf("���ļ�ʧ��,�޷�ȷ��ְ������,�����³���");
		}
		cout<<n;
	}

	      void find()          //�����ѯ����
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
          printf("\n����  ����  ��λ����  н������  ְ�����  ��Ч����  Ӧ������  ��������˰  ʵ������\n");
          printf("\n%s%s%f%f%f%f%f%f%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
		  t=1;
		  fclose(fp);
          break;
    }
		 if(!t)
		 {
             printf("\n���޴���\n");
             fclose(fp);
		 }
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
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n,����,����,��λ���ʣ�н�����ʣ�ְ���������Ч���ʣ�Ӧ�����ʣ���������˰��ʵ������"��;                                   
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
					 printf("�������޸ĵ���Ϣ��\n");
					scanf(%s%s%f%f%f%f%f%f%f,
					                        &zggz[i].num,&zggz[i].name,&zggz[i].gwgz,&zggz[i].xjgz,&zggz[i].zwjt,&zggz[i].jxgz,&zggz[i].yfgz,&zggz[i].grsds,&zggz[i].sfgz);
					zggz[i].yfgz=zggz[i].gwgz+zggz[i].xjgz+zggz[i].zwjt+zggz[i].jxgz;
					zggz[i].sfgz=zggz[i].yfgz-zggz[i].grsds;
					t=1;
					fclose(fp);
					break;
				 }
			 }
			 if(!t)
			 {
				 printf("�Բ��𣬲��޴���\n");
				 fclose(fp);
			 }
		 }

	  void add()     //����������
		 {
			 ++n;
			 printf("�밴�չ���,����,��λ����,н������,ְ�����,��Ч����,ʵ������˳������ְ����Ϣ\n");
			 scanf("%s%s%f%f%f%f%f",&zggz[n].num,&zggz[n].name,&zggz[n].gwgz,&zggz[n].xjgz,&zggz[n].zwjt,&zggz[n].jxgz,&zggz[n].sfgz);
			 zggz[n].yfgz=(zggz[n].gwgz+zggz[n].xjgz+zggz[n].zwjt+zggz[n].jxgz);
		     zggz[n].grsds=grsds([n].yfgz);     //���ø�������˰����
		     zggz[n].sfgz=zggz[n].yfgz-zggz[n].grsds;
			 printf("��ӳɹ�����ְ����ϢΪ��\n");
			 printf("�밴�չ���,����,��λ����,н������,ְ�����,��Ч����,ʵ������˳������ְ����Ϣ\n");
			 printf("%s%s%f%f%f%f%f",num,name,gwgz,xjgz,zwjt,jxgz,sfgz);
			 printf("�������,�����밴�س���\n");
		 }

	  	 void del()    //����ɾ������
		 {
			 char ID[10];     //����һ����������ɾ��ĳ��Ա������Ϣ
			 int t=0;
			 printf("��������Ҫɾ����ְ����Ϣ�Ĺ���:");
			 scanf("%s,ID");
			 for (int i=0;i<n;i++)
			 {
				 int a;
				 printf("��ְ������ϢΪ:\n");
                 printf("\n����  ����  ��λ����  н������  ְ�����  ��Ч����  Ӧ������  ��������˰  ʵ������\n");
				 printf("\n%s%s%f%f%f%f%f%f%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
				 printf("�Ƿ�ɾ����Ա����Ϣ?\n");
				 printf("��������0����������1\n");
				 scanf("%d",&a);
				 if(a==0)
				 {
					 for(int j;j<n-1;j++)
					 {
						 zggz[j]=zggz[j+1];
					 }
					 strcpy(zggz[n-1].num,"");
					 strcpy(zggz[n-1].name,"");
					 zggz[n-1].gwgz=0;
					 zggz[n-1].xjgz=0;
					 zggz[n-1].zwjt=0;
					 zggz[n-1].jxgz=0;
					 zggz[n-1].yfgz=0;
					 zggz[n-1].grsds=0;
					 zggz[n-1].sfgz=0;
					 --n;
				 }
				 else
				 {
					 prinft("��ְ����Ϣ���ᱻɾ��!");
				 }
				 t=1;
				 fclose(fp);
				 break;
			 }
		 }


		void write(int m)      //���溯��
     {
		 system("cls")//����ļ�
			 if(::n>0)
			 {
				 if((fp=fopen("e:\\gx.dat","wb")))//�ж��ļ��Ƿ��ܴ�
				 {
					 for(int i=0;i<::n;i++)   
					 {
						 Employee a=zggz[i];
						 fprintf(fp,,"\n%-20s%-10s%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%",
							 a.num,a.name,a.gwgz,a.xjgz,a.zwjt,a.jxgz,a.yfgz,a.grsds,a.sfgz);
					 }         //Ҫ�����ְ��������
					 fclose(fp)//�ر�ָ��
					 printf("����ɹ�,���س�������!\n");
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

		 void list()  //�����������
		 {
			 menu()    //���ò˵�����
		    printf("����,����,��λ����,н������,ְ�����,ʵ����,Ӧ����,��������˰,ʵ������\n");
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





















//ְ�����š�ְ����������λ���ʡ�н�����ʡ�ְ���������Ч���ʡ�Ӧ�����ʡ���������˰��ʵ������