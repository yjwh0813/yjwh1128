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
int n=0;                //定义一个全局变量,对职工人数进行统计
struct Employee
{
	char num[10];
	char name[5];
	float gwgz;  //岗位工资
	float xjgz;  //薪级工资
	float zwjt;  //职务津贴
	float jxgz;  //绩效工资
	float yfgz;  //应付工资
	float grsds;  //个人所得税
	float sfgz;   //实付工资
}
Employee *zggz=new Employee[100];    //定义一个职工的临时动态内存，职工的数据将保存到里面

void menu();
void read();
void write();
void find();
void list();
void modify();
void del();
void add();
void grsds();   //声明所需的函数；

int main()
{
	read();
	int m;
	while(1)
	{
		do
		{
			 menu();  //调用菜单函数
			 read();  //调用读取函数，初始化职工信息
			printf("您的选择是(1--7):\n")
			scanf("%d",&m);   //给变量m赋值
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
			printf("对不起查无此项，请按回车键重新查询\n");
			cin.get;
			cin.get;
		}
	}
	return 0;
}

void menu()     //菜单函数；
{
	printf("\n");
	printf("欢迎使用广西民族大学软件与信息安全职工工资管理系统\n");
	printf("\n");
    printf("\n");
	printf("\n");
	printf("请选择（1-7）:\n")
	printf("1.查询职工工资记录\n");
	printf("2.修改职工工资记录\n");
    printf("3.添加职工工资记录\n");
    printf("4.删除职工工资记录 \n");
    printf("5.保存数据到文件\n");
    printf("6.浏览职工记录\n");
    printf("7.退出系统\n");
    printf("\n");

}

	void read()      //定义读取函数
		{
			if((fp=fopen("e:\\gx.dat","r")))
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
			printf("打开文件失败,无法确定职工人数,请重新尝试");
		}
		cout<<n;
	}

	      void find()          //定义查询函数
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
          printf("\n工号  姓名  岗位工资  薪级工资  职务津贴  绩效工资  应发工资  个人所得税  实发工资\n");
          printf("\n%s%s%f%f%f%f%f%f%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
		  t=1;
		  fclose(fp);
          break;
    }
		 if(!t)
		 {
             printf("\n查无此人\n");
             fclose(fp);
		 }
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
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n,工号,姓名,岗位工资，薪级工资，职务津贴，绩效工资，应付工资，个人所得税，实付工资"）;                                   
					 printf("%-20s%-10s%10.2f%-10.2f%10.2f%-10.2f%10.2f%-10.2f%-10.2f/n",
					    zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz);
					 printf("请输入修改的信息：\n");
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
				 printf("对不起，查无此人\n");
				 fclose(fp);
			 }
		 }

	  void add()     //定义增添函数
		 {
			 ++n;
			 printf("请按照工号,姓名,岗位工资,薪级工资,职务津贴,绩效工资,实付工资顺序输入职工信息\n");
			 scanf("%s%s%f%f%f%f%f",&zggz[n].num,&zggz[n].name,&zggz[n].gwgz,&zggz[n].xjgz,&zggz[n].zwjt,&zggz[n].jxgz,&zggz[n].sfgz);
			 zggz[n].yfgz=(zggz[n].gwgz+zggz[n].xjgz+zggz[n].zwjt+zggz[n].jxgz);
		     zggz[n].grsds=grsds([n].yfgz);     //调用个人所得税函数
		     zggz[n].sfgz=zggz[n].yfgz-zggz[n].grsds;
			 printf("添加成功，该职工信息为：\n");
			 printf("请按照工号,姓名,岗位工资,薪级工资,职务津贴,绩效工资,实付工资顺序输入职工信息\n");
			 printf("%s%s%f%f%f%f%f",num,name,gwgz,xjgz,zwjt,jxgz,sfgz);
			 printf("操作完成,继续请按回车键\n");
		 }

	  	 void del()    //定义删除函数
		 {
			 char ID[10];     //定义一个数组用来删除某个员工的信息
			 int t=0;
			 printf("请输入您要删除的职工信息的工号:");
			 scanf("%s,ID");
			 for (int i=0;i<n;i++)
			 {
				 int a;
				 printf("该职工的信息为:\n");
                 printf("\n工号  姓名  岗位工资  薪级工资  职务津贴  绩效工资  应发工资  个人所得税  实发工资\n");
				 printf("\n%s%s%f%f%f%f%f%f%f\n",zggz[i].num,[i].name,zggz[i].gwgz,zggz[i].xjgz,zggz[i].zwjt,zggz[i].jxgz,zggz[i].yfgz,zggz[i].grsds,zggz[i].sfgz); 
				 printf("是否删除该员工信息?\n");
				 printf("是请输入0，否请输入1\n");
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
					 prinft("该职工信息不会被删除!");
				 }
				 t=1;
				 fclose(fp);
				 break;
			 }
		 }


		void write(int m)      //保存函数
     {
		 system("cls")//清空文件
			 if(::n>0)
			 {
				 if((fp=fopen("e:\\gx.dat","wb")))//判断文件是否能打开
				 {
					 for(int i=0;i<::n;i++)   
					 {
						 Employee a=zggz[i];
						 fprintf(fp,,"\n%-20s%-10s%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%-10f\t%",
							 a.num,a.name,a.gwgz,a.xjgz,a.zwjt,a.jxgz,a.yfgz,a.grsds,a.sfgz);
					 }         //要保存的职工的数据
					 fclose(fp)//关闭指针
					 printf("保存成功,按回车键继续!\n");
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

		 void list()  //定义浏览函数
		 {
			 menu()    //调用菜单函数
		    printf("工号,姓名,岗位工资,薪级工资,职务津贴,实务工资,应付工,个人所得税,实付工资\n");
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





















//职工工号、职工姓名、岗位工资、薪级工资、职务津贴、绩效工资、应发工资、个人所得税和实发工资