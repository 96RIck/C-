#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>

void  creat();
void  search();
void  out();
void  change();
void  menu();
void  add();
void  ron();

struct contacts
{
        char name[15];
        char sex[5];
        char tel[15];
        char address[20];
        char num[10];
        char mail[20];
}con;


main()
{

    menu();

}


void    menu()                                                                     //主菜单系统
{
    system("cls");
    int x;
   printf("\n\n\n\n");
   printf("          ┌————————     通讯录管理系统     ————————┐         \n");
   printf("          │                                         ");printf("               │\n");
   printf("          │                     W E L C O M E      ");printf("                │\n");
   printf("          │                *********************** ");printf("                │\n");
   printf("          │               |   选择①:新建通讯录   |");printf("                │\n");
   printf("          │               |   选择②:查询通讯录   |");printf("                │\n");
   printf("          │               |   选择③:输出通讯录   |");printf("                │\n");
   printf("          │               |   选择④:修改通讯录   |");printf("                │\n");
   printf("          │               |   选择⑤:追加通讯录   |");printf("                │\n");
   printf("          │               |   选择⑥:退出通讯录   |");printf("                │\n");
   printf("          │                *********************** ");printf("                │\n");
   printf("          │                                        ");printf("                │\n");
   printf("          ╰────────────────────────────╯\n\n ");
   printf("                            请您选择序号进行互动:\n\n");
   printf("                                      ");
   scanf("%d",&x);
   switch(x)
		{
		    case 1:creat();break;
		    case 2:search();break;
            case 3:out();break;
            case 4:change();break;
            case 5:add();break;
            case 6:break;


		}

}


void    creat()                                                                    //新建通讯录函数
{
       system("cls");
    printf("\n\n\n\n\n\n\n                                 正在新建通讯录");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 正在新建通讯录·");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 正在新建通讯录··");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 正在新建通讯录···");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                正在新建通讯录");
    system("cls");
    printf("\n\n\n\n\n\n\n                                    新建完成\n");
    Sleep(888);
    printf("\n\n\n\n\n\n\n                                            ");
    system("cls");
    printf("\n\n\n\n\n\n\n                                            ");

    char ch;
    int i,flag=0;
    FILE *fp;
    if((fp=fopen("file.txt","w"))==NULL)
    {
        printf("不能打开文件file4.txt\n");
        exit(0);
    }


 do{
                system("cls");

                printf("\n\n\n\n\n\n\n                                 请输入姓名: ");
                scanf("%s",&con.name);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 请输入性别: ");
                scanf("%s",&con.sex);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 请输入TEL: ");
                scanf("%s",&con.tel);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 请输入地址: ");
                scanf("%s",&con.address);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 请输入邮编：");
                scanf("%s",&con.num);
                system("cls");
                printf("\n\n\n\n\n\n\n                              请输入电子邮件：");
                scanf("%s",&con.mail);
                system("cls");


    do{                                                     //判断输入邮箱是否有‘@’
          system("cls");
          for(i=0;i<20;i++)
                {
                    if(con.mail[i]=='@')
                        if(con.mail[0]!='@'&&con.mail[19]!='@')
                          {
                            flag=1;
                           break;
                          }
                }

          if(flag==0)
                {  printf("\n\n\n\n\n\n\n               您输入的邮箱格式正确，应包含“@”，请重新输入邮箱：\n\n                            ");
                   scanf("%s",&con.mail);
                }
       }
        while(flag==0);



        fprintf(fp,"%s %s %s %s %s %s\n",con.name,con.sex,con.tel,con.address,con.num,con.mail);
        flag=0;

        printf("\n\n\n\n\n\n\n                          是否还有其它记录输入(y/n)?\n");
        printf("\n\n\n                                     ");
        getchar();
        ch=getchar();

}while(ch=='y');


   system("cls");
   fclose(fp);
   printf("\n\n\n\n\n\n\n                                记录保存成功~");        //显示是否保存成功
   Sleep(1000);                                                                  //
   system("cls");                                                                //
   menu();                                                                       //


}


void    search()                                                                   //通讯录查询函数
{
    FILE *fp;
    struct contacts s,p;
    int i=0;
    char ch;

        if((fp=fopen("file.txt","r"))==NULL)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\t\t\t您还没有创建记录！\n\n\n\n\n\n\n\n\t\t");
            exit(0);

        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n                            请输入要查询记录的姓名：");
        scanf("%s",&s.name);

    while(!feof(fp))
        {
            fscanf(fp,"%s%s%s%s%s%s",&p.name,&p.sex,&p.tel,&p.address,&p.num,&p.mail);
                if(strcmp(s.name,p.name)==0)
                {
                    i=1;
                    system("cls");
                    printf("\n\n\n                                   联 系 人");
                    printf("\n\n\n                    姓名：");
                    printf("%s\n",p.name);
                    printf("\n                    性别：");
                    printf("%s\n",p.sex);
                    printf("\n                    Tel ：");
                    printf("%s\n",p.tel);
                    printf("\n                    地址：");
                    printf("%s\n",p.address);
                    printf("\n                    邮编：");
                    printf("%s\n",p.num);
                    printf("\n                    电子邮件：");
                    printf("%s\n",p.mail);
                    printf("\n\n\n\n         ");
                    printf("如果此人不是您需要的联系人请继续查询并按1，退出查询请按0：");
                    getchar();
                    ch=getchar();

                    if(ch=='0')
                      {system("cls");
                            menu();
                      }
                    else if(ch=='1')
                        system("cls");


                }

        }


  if(i==0)
  {
    system("cls");
    printf("\n\n\n\n\n\n\n\n\n                          您的通讯录系统中没有此记录！\n\n                        请您仔细核对你要查找记录的姓名！\n");
    Sleep(2000);
    system("cls");
    ron();
    system("cls");
    search();
  }

                 system("cls");
                 printf("\n\n\n\n\n\n\n\n\t\t   通讯录中没有您需要的联系人，3s后返回主菜单");
                 Sleep(3000);
                 system("cls");



  fclose(fp);
  menu();



}


void    out()                                                                      //通讯录输出函数
{
    FILE *fp;
    struct  contacts   p;



    system("cls");
    printf("\n\n\n                                   全 部 联 系 人：\n\n\n");
    printf("     1姓名：    2性别：    3电话：     4地址：     5邮编：    6邮箱：\n\n");


    if((fp=fopen("file.txt","r"))==NULL)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t您还没有创建记录！\n\n\n\n\n\n\n\n\t\t");
        exit(0);
    }
        while(fscanf(fp,"%s%s%s%s%s%s",&p.name,&p.sex,&p.tel,&p.address,&p.num,&p.mail)!=EOF)
             {
                if(strlen(p.name)==4)
                    {
                    printf("     %s",p.name);
                    printf("\t ");
                    printf("%s     %s     %s       %s     %s\n",p.sex,p.tel,p.address,p.num,p.mail);
                    }

              else if(strlen(p.name)==8)
                    {
                    printf("     %s",p.name);
                    printf("    ");
                    printf("%s     %s     %s       %s     %s\n",p.sex,p.tel,p.address,p.num,p.mail);
                    }




               else
                    printf("     %s      %s     %s     %s       %s     %s\n",p.name,p.sex,p.tel,p.address,p.num,p.mail);


            }


        fclose(fp);

        char ch;
            printf("\n\n\n                                 按回车返回主菜单\n");
            printf("\n                                        ");
            getchar();
            ch=getchar();
            system("cls");
    menu();






}


void change()                                                                      //修改记录函数
{
  FILE *fp;
  struct contacts s[10],z;
  int i=0,x,j=0,t=0,a;
  char flag,lx=0;

    if((fp=fopen("file.txt","r+"))==NULL)
    {
         system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t您还没有创建记录！\n\n\n\n\n\n\n\n\t\t");
        exit(0);
    }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改记录的姓名:\t");
        scanf("%s",z.name);

    while(!feof(fp))                                                                     //将文件信息存放到结构体数组中
        {

            fscanf(fp,"%s %s %s %s %s %s",s[i].name,s[i].sex,s[i].tel,s[i].address,s[i].num,s[i].mail);
            i++;
            j++;
        }

        fseek(fp,0L,0);
        i=0;
    while(!feof(fp))
        {
            if(strcmp(z.name,s[i].name)==0)
            {
                system("cls");
                printf("\n\n\n\n\n\n\n   1.姓名：    2.性别：    3.电话：    4.地址：    5.邮编：    6.邮箱：\n\n");
                printf("    %s       %s      %s    %s      %s    %s",s[i].name,s[i].sex,s[i].tel,s[i].address,s[i].num,s[i].mail);
                printf("\n\n\t此人是您需要修改的记录吗？确定修改请按‘y’，继续查询请按‘n’\n\n\t\t\t\t\t");
                getchar();
                flag=getchar();
                if(flag=='y')
                {
                    system("cls");
                    printf("\n\n\t\t\t\t1.修改姓名\n\n\t\t\t\t2.修改性别\n\n\t\t\t\t3.修改电话\n\n\t\t\t\t4.修改地址\n\n\t\t\t\t5.修改邮编\n\n\t\t\t\t6.修改邮箱\n\n\t\t   ");
                    printf("\t请输入要修改项目的序号：\t");
                    scanf("%d",&x);
                        switch(x)
                        {
                        case 1:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的姓名：\t");
                                scanf("%s",&s[i].name);break;}
                        case 2:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的性别：\t");
                                scanf("%s",&s[i].sex);break;}
                        case 3:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的电话：\t");
                                scanf("%s",&s[i].tel);break;}
                        case 4:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的地址：\t");
                                scanf("%s",&s[i].address);break;}
                        case 5:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的邮编：\t");
                                scanf("%s",&s[i].num);break;}
                        case 6:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    请输入要修改的邮箱：\t");
                                scanf("%s",&s[i].mail);
                                    do
                                    {
                                        for(a=0;a<20;a++)
                                        {
                                            if(con.mail[a]=='@')
                                            {
                                                lx=1;
                                                break;
                                            }
                                        }
                                        if(lx==0)
                                        {
                                            system("cls");
                                            printf("\n\n\n\n\n\n\n\n\t\t您输入的邮箱格式不对，应包含@，请重新输入\n\t\t\t\t");
                                            scanf("%s",&con.mail);
                                        }
                                    }while(lx==0);break;
                                }

                        }

                break;
                }
                else if(t=='n')
                continue;

                else if(feof(fp))
                {
                    ron();
                }

            }


        i++;

      }

  fseek(fp,0L,0);

  for(i=0;i<j-1;i++)
   {
       fprintf(fp,"%s %s %s %s %s %s\n",s[i].name,s[i].sex,s[i].tel,s[i].address,s[i].num,s[i].mail);
   }

   fclose(fp);
   system("cls");
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t      修改完成！ 2s后返回主菜单");
   Sleep(2000);
   menu();
}


void    add()                                                                      //添加新纪录函数
{
    FILE *fp;
    struct contacts s;
    char ch;
    int i,m=0;
    if((fp=fopen("file.txt","a+"))==NULL)
    {
         system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t您还没有创建记录！\n\n\n\n\n\n\n\n\t\t");
        exit(0);
    }


          do
          {

                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入姓名: ");
                scanf("%s",&s.name);
                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入性别: ");
                scanf("%s",&s.sex);
                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入TEL: ");
                scanf("%s",&s.tel);
                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入地址: ");
                scanf("%s",&s.address);
                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入邮编：");
                scanf("%s",&s.num);
                system("cls");
                printf("\n\n\t\t\t    _______开始添加记录______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   请输入电子邮件：");
                scanf("%s",&s.mail);
                system("cls");


            do{                                                     //判断输入邮箱是否有‘@’
                system("cls");
                    for(i=0;i<20;i++)
                    {     if(s.mail[i]=='@')
                            {  m=1;  break;}
                    }

                if(m==0)
                {  printf("\n\n\n\n\n\n\n               您输入的邮箱格式正确，应包含“@”，请重新输入邮箱：\n\n                            ");
                   scanf("%s",&s.mail);
                }

            }
        while(m==0);






            fprintf(fp,"%s  %s  %s  %s  %s  %s\n",s.name,s.sex,s.tel,s.address,s.num,s.mail);
            printf("\n\n\n\n\n\n\n\t\t\t\t   新记录保存成功！\n\n");
            printf("\t\t 是否继续添加记录?继续添加请按‘1’退出添加请按‘0’\n\n\t\t");
            getchar();
            ch=getchar();
          }while(ch=='1');
          fclose(fp);


   menu();
}


void    ron()                                                                      //返回菜单函数
{
     char ch;
        printf("\n\n\n\n\n\n\n\n\n\n                              是否返回主菜单？(y/n)\n");
        printf("\n                                        ");
        getchar();
        ch=getchar();
    if(ch=='n')
        system("cls");
    else if(ch=='y')
        {system("cls");
        menu();
        }

}


