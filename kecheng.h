#include<iostream>
#include"StdAfx.h"
#include<stdio.h>
#include<stdlib.h>
#include<wtypes.h>
#include<time.h>
#include <winbase.h>
#include<conio.h>
using namespace std;
#define name 5;         //职工姓名长度
FILE *fp;               //声明一个文件指针
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
Employee *zggz=new Employee[100];    //定义一个职工数组 

void menu();
void read();
void write();
void find();
void list();
void modify();
void del();
void add();
void grsds();   //声明所需的函数；

void menu()     //菜单函数；
{
	printf("\n");
	printf("职工工资查询系统\n")；
	printf("\n");
    printf("\n");
	printf("\n");
	printf("1.查询职工工资信息\n");
	printf("2.修改职工工资信息\n");
    printf("1.添加职工工资信息\n");
    printf("1.删除职工工资信息\n");
    printf("1.保存职工工资信息\n");
    printf("1.浏览职工工资信息\n");
    printf("1.退出\n");
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
			 menu();  //调用菜单函数
			 read();  //调用读取函数
			printf("请选择您要操作的步骤(1--7):\n")
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
			printf("对不起查无此项，请按回车键重新查询\n");
			cin.get;
			cin.get;
		}
	}
	void read()      //定义读取函数
		if((fp=fopen("gx.dat","r")))
		{
			while(!feof(fp))
			{
				fscanf(fp,%s%s%f%f%f%f%f%f%f,
					                        &zggz[n].num,&zggz[n].name,&zggz[n].gwgz,&zggz[n].xjgz,&zggz[n].zwjt,&zggz[n].jxgz,&zggz[i].yfgz,&zggz[n].grsds,&zggz[n].sfgz);
                n++;
			}
            fclose(fp);//关闭文件指针
		}
		else
		{
			printf("打开文件失败，无法确定职工人数，请重新尝试");
		}
		cout<<n;
		void write(int m)      //保存函数
     {
		 system("cls")//清空文件
			 if(::n>0)
			 {
				 if((fp=fopen("gx.dat","wb")))//判断文件是否能打开
				 {
					 for(int i=0;i<::n;i++)   
					 {
						 Employee a=zggz[i];
						 fprintf(fp,,"\n%-20s%-10s%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%",
							 a.num,a.name,a.gwgz,a.xjgz,a.zwjt,a.jxgz,a.yfgz,a.grsds,a.sfgz);
					 }
					 fclose(fp)//关闭指针
					 printf("保存成功，按回车键继续!\n");
				 }
				 else 
				 {
					 printf("打开文件失败!请重试\n");
				 }
				 cin.get();
				 cin.get();
				 system("cls");//清空数据

			 }

  }


      void find()          //查询函数
    {
         char gonghao[10];
		 int t=0;
         int m=read();//调用读取函数
         printf("请输入要查找的工号:\n");
         scanf("%s",gonghao);
         for(i=0;i<m;i++)
         if(strcmp(gonghao,zggz[i].num)==0)
      {
		  printf("已找到该员工的信息为")
          printf("\n工号\t姓名\t岗位工资\t薪级工资\t职务津贴\t绩效工资\t应发工资\t个人所得税\t实发工资\n");
          printf("\n%s\t%s\t%f\t%f\t%f\t%f\t%f\t%f\t%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
		  t=1;
		  fclose(fp);
          break;
    }
		 if(!t)
		 {
             printf("\n查无此人\n");
             fclose(fp);
		 }

		 void list()  //定义浏览函数
		 {
			 menu()    //调用菜单函数
		    printf("姓名，职工号，岗位工资，薪级工资，职务津贴，实务工资，应付工资，个人所得税，实付工资\n")
			for(int i=0;i<n;i++)
			{
				printf("%-9s%-7s%-10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
			}
			printf("操作完成，请继续!")
			cin.get();
			cin.get();
			menu();
		 }

		 void modify()          //定义修改函数
		 {
			 int t=0;
			 menu();
			 char gonghao[10];
			 printf("请输入您要修改的工号：");
			 scanf("%s,gonghao");
			 for(int i=0;i<n;i++)
			 {
				 if(strcmp(gonghao,zggz[10].num)==0)
				 {
					 printf("该职工的工资信息为：\n");
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
					 printf("请输入修改的信息：\n");
					scanf(%s%s%f%f%f%f%f%f%f,
					                        &zggz[i].num,&zggz[i].name,&zggz[i].gwgz,&zggz[i].xjgz,&zggz[i].zwjt,&zggz[i].jxgz,&zggz[i].yfgz,&zggz[i].grsds,&zggz[i].sfgz);



				 }
			 }
		 }
		


		float grsds(float grsds)    //计算个人所得税
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



















//职工工号、职工姓名、岗位工资、薪级工资、职务津贴、绩效工资、应发工资、个人所得税和实发工资