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


void    menu()                                                                     //���˵�ϵͳ
{
    system("cls");
    int x;
   printf("\n\n\n\n");
   printf("          ������������������     ͨѶ¼����ϵͳ     ������������������         \n");
   printf("          ��                                         ");printf("               ��\n");
   printf("          ��                     W E L C O M E      ");printf("                ��\n");
   printf("          ��                *********************** ");printf("                ��\n");
   printf("          ��               |   ѡ���:�½�ͨѶ¼   |");printf("                ��\n");
   printf("          ��               |   ѡ���:��ѯͨѶ¼   |");printf("                ��\n");
   printf("          ��               |   ѡ���:���ͨѶ¼   |");printf("                ��\n");
   printf("          ��               |   ѡ���:�޸�ͨѶ¼   |");printf("                ��\n");
   printf("          ��               |   ѡ���:׷��ͨѶ¼   |");printf("                ��\n");
   printf("          ��               |   ѡ���:�˳�ͨѶ¼   |");printf("                ��\n");
   printf("          ��                *********************** ");printf("                ��\n");
   printf("          ��                                        ");printf("                ��\n");
   printf("          �t���������������������������������������������������������s\n\n ");
   printf("                            ����ѡ����Ž��л���:\n\n");
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


void    creat()                                                                    //�½�ͨѶ¼����
{
       system("cls");
    printf("\n\n\n\n\n\n\n                                 �����½�ͨѶ¼");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 �����½�ͨѶ¼��");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 �����½�ͨѶ¼����");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                 �����½�ͨѶ¼������");
    Sleep(333);
    system("cls");
    printf("\n\n\n\n\n\n\n                                �����½�ͨѶ¼");
    system("cls");
    printf("\n\n\n\n\n\n\n                                    �½����\n");
    Sleep(888);
    printf("\n\n\n\n\n\n\n                                            ");
    system("cls");
    printf("\n\n\n\n\n\n\n                                            ");

    char ch;
    int i,flag=0;
    FILE *fp;
    if((fp=fopen("file.txt","w"))==NULL)
    {
        printf("���ܴ��ļ�file4.txt\n");
        exit(0);
    }


 do{
                system("cls");

                printf("\n\n\n\n\n\n\n                                 ����������: ");
                scanf("%s",&con.name);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 �������Ա�: ");
                scanf("%s",&con.sex);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 ������TEL: ");
                scanf("%s",&con.tel);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 �������ַ: ");
                scanf("%s",&con.address);
                system("cls");
                printf("\n\n\n\n\n\n\n                                 �������ʱࣺ");
                scanf("%s",&con.num);
                system("cls");
                printf("\n\n\n\n\n\n\n                              ����������ʼ���");
                scanf("%s",&con.mail);
                system("cls");


    do{                                                     //�ж����������Ƿ��С�@��
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
                {  printf("\n\n\n\n\n\n\n               ������������ʽ��ȷ��Ӧ������@�����������������䣺\n\n                            ");
                   scanf("%s",&con.mail);
                }
       }
        while(flag==0);



        fprintf(fp,"%s %s %s %s %s %s\n",con.name,con.sex,con.tel,con.address,con.num,con.mail);
        flag=0;

        printf("\n\n\n\n\n\n\n                          �Ƿ���������¼����(y/n)?\n");
        printf("\n\n\n                                     ");
        getchar();
        ch=getchar();

}while(ch=='y');


   system("cls");
   fclose(fp);
   printf("\n\n\n\n\n\n\n                                ��¼����ɹ�~");        //��ʾ�Ƿ񱣴�ɹ�
   Sleep(1000);                                                                  //
   system("cls");                                                                //
   menu();                                                                       //


}


void    search()                                                                   //ͨѶ¼��ѯ����
{
    FILE *fp;
    struct contacts s,p;
    int i=0;
    char ch;

        if((fp=fopen("file.txt","r"))==NULL)
        {
            system("cls");
            printf("\n\n\n\n\n\n\n\n\t\t\t\t����û�д�����¼��\n\n\n\n\n\n\n\n\t\t");
            exit(0);

        }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n                            ������Ҫ��ѯ��¼��������");
        scanf("%s",&s.name);

    while(!feof(fp))
        {
            fscanf(fp,"%s%s%s%s%s%s",&p.name,&p.sex,&p.tel,&p.address,&p.num,&p.mail);
                if(strcmp(s.name,p.name)==0)
                {
                    i=1;
                    system("cls");
                    printf("\n\n\n                                   �� ϵ ��");
                    printf("\n\n\n                    ������");
                    printf("%s\n",p.name);
                    printf("\n                    �Ա�");
                    printf("%s\n",p.sex);
                    printf("\n                    Tel ��");
                    printf("%s\n",p.tel);
                    printf("\n                    ��ַ��");
                    printf("%s\n",p.address);
                    printf("\n                    �ʱࣺ");
                    printf("%s\n",p.num);
                    printf("\n                    �����ʼ���");
                    printf("%s\n",p.mail);
                    printf("\n\n\n\n         ");
                    printf("������˲�������Ҫ����ϵ���������ѯ����1���˳���ѯ�밴0��");
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
    printf("\n\n\n\n\n\n\n\n\n                          ����ͨѶ¼ϵͳ��û�д˼�¼��\n\n                        ������ϸ�˶���Ҫ���Ҽ�¼��������\n");
    Sleep(2000);
    system("cls");
    ron();
    system("cls");
    search();
  }

                 system("cls");
                 printf("\n\n\n\n\n\n\n\n\t\t   ͨѶ¼��û������Ҫ����ϵ�ˣ�3s�󷵻����˵�");
                 Sleep(3000);
                 system("cls");



  fclose(fp);
  menu();



}


void    out()                                                                      //ͨѶ¼�������
{
    FILE *fp;
    struct  contacts   p;



    system("cls");
    printf("\n\n\n                                   ȫ �� �� ϵ �ˣ�\n\n\n");
    printf("     1������    2�Ա�    3�绰��     4��ַ��     5�ʱࣺ    6���䣺\n\n");


    if((fp=fopen("file.txt","r"))==NULL)
    {
        system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t����û�д�����¼��\n\n\n\n\n\n\n\n\t\t");
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
            printf("\n\n\n                                 ���س��������˵�\n");
            printf("\n                                        ");
            getchar();
            ch=getchar();
            system("cls");
    menu();






}


void change()                                                                      //�޸ļ�¼����
{
  FILE *fp;
  struct contacts s[10],z;
  int i=0,x,j=0,t=0,a;
  char flag,lx=0;

    if((fp=fopen("file.txt","r+"))==NULL)
    {
         system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t����û�д�����¼��\n\n\n\n\n\n\n\n\t\t");
        exit(0);
    }
        system("cls");
        printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ļ�¼������:\t");
        scanf("%s",z.name);

    while(!feof(fp))                                                                     //���ļ���Ϣ��ŵ��ṹ��������
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
                printf("\n\n\n\n\n\n\n   1.������    2.�Ա�    3.�绰��    4.��ַ��    5.�ʱࣺ    6.���䣺\n\n");
                printf("    %s       %s      %s    %s      %s    %s",s[i].name,s[i].sex,s[i].tel,s[i].address,s[i].num,s[i].mail);
                printf("\n\n\t����������Ҫ�޸ĵļ�¼��ȷ���޸��밴��y����������ѯ�밴��n��\n\n\t\t\t\t\t");
                getchar();
                flag=getchar();
                if(flag=='y')
                {
                    system("cls");
                    printf("\n\n\t\t\t\t1.�޸�����\n\n\t\t\t\t2.�޸��Ա�\n\n\t\t\t\t3.�޸ĵ绰\n\n\t\t\t\t4.�޸ĵ�ַ\n\n\t\t\t\t5.�޸��ʱ�\n\n\t\t\t\t6.�޸�����\n\n\t\t   ");
                    printf("\t������Ҫ�޸���Ŀ����ţ�\t");
                    scanf("%d",&x);
                        switch(x)
                        {
                        case 1:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵ�������\t");
                                scanf("%s",&s[i].name);break;}
                        case 2:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵ��Ա�\t");
                                scanf("%s",&s[i].sex);break;}
                        case 3:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵĵ绰��\t");
                                scanf("%s",&s[i].tel);break;}
                        case 4:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵĵ�ַ��\t");
                                scanf("%s",&s[i].address);break;}
                        case 5:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵ��ʱࣺ\t");
                                scanf("%s",&s[i].num);break;}
                        case 6:{system("cls");printf("\n\n\n\n\n\n\n\n\n\n\t\t\t    ������Ҫ�޸ĵ����䣺\t");
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
                                            printf("\n\n\n\n\n\n\n\n\t\t������������ʽ���ԣ�Ӧ����@������������\n\t\t\t\t");
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
   printf("\n\n\n\n\n\n\n\n\n\n\t\t\t      �޸���ɣ� 2s�󷵻����˵�");
   Sleep(2000);
   menu();
}


void    add()                                                                      //����¼�¼����
{
    FILE *fp;
    struct contacts s;
    char ch;
    int i,m=0;
    if((fp=fopen("file.txt","a+"))==NULL)
    {
         system("cls");
        printf("\n\n\n\n\n\n\n\n\t\t\t\t����û�д�����¼��\n\n\n\n\n\n\n\n\t\t");
        exit(0);
    }


          do
          {

                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   ����������: ");
                scanf("%s",&s.name);
                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   �������Ա�: ");
                scanf("%s",&s.sex);
                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   ������TEL: ");
                scanf("%s",&s.tel);
                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   �������ַ: ");
                scanf("%s",&s.address);
                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   �������ʱࣺ");
                scanf("%s",&s.num);
                system("cls");
                printf("\n\n\t\t\t    _______��ʼ��Ӽ�¼______\n\n");
                printf("\n\n\n\n\n\n\n\t\t\t\t   ����������ʼ���");
                scanf("%s",&s.mail);
                system("cls");


            do{                                                     //�ж����������Ƿ��С�@��
                system("cls");
                    for(i=0;i<20;i++)
                    {     if(s.mail[i]=='@')
                            {  m=1;  break;}
                    }

                if(m==0)
                {  printf("\n\n\n\n\n\n\n               ������������ʽ��ȷ��Ӧ������@�����������������䣺\n\n                            ");
                   scanf("%s",&s.mail);
                }

            }
        while(m==0);






            fprintf(fp,"%s  %s  %s  %s  %s  %s\n",s.name,s.sex,s.tel,s.address,s.num,s.mail);
            printf("\n\n\n\n\n\n\n\t\t\t\t   �¼�¼����ɹ���\n\n");
            printf("\t\t �Ƿ������Ӽ�¼?��������밴��1���˳�����밴��0��\n\n\t\t");
            getchar();
            ch=getchar();
          }while(ch=='1');
          fclose(fp);


   menu();
}


void    ron()                                                                      //���ز˵�����
{
     char ch;
        printf("\n\n\n\n\n\n\n\n\n\n                              �Ƿ񷵻����˵���(y/n)\n");
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


