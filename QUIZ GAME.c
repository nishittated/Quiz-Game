#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>   
 
void help();
int main() 
{
        system("COLOR 1A");
        char playername[20];
        char ch;
        int countt=0,countf=0,tcount;
        FILE *j,*fm , *n;   
        home:
             n=fopen("page.txt","r");
             while((ch=getc(n))!=EOF)
             printf("%c",ch);
             fclose(n);


            j=fopen("questions.txt","r");
                while((ch=getc(j))!=EOF)
                printf("%c",ch);
                fclose(j);

            char a,b;
            printf("\n\nEnter your Choice : ");
            scanf("%c",&a);

            if(a=='S' || a=='s')
            questions:
            {
                 system("cls");
                 printf("\n\n\n\n\n\n\n\t\t\tRegister Your Name :");
                 scanf("%s",&playername);
                 getch();
                 system("cls");


                 printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
                 printf("\n\n Here are some tips you might wanna know before playing:");
                 printf("\n -------------------------------------------------------------------------");
                 printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
                 printf("\n    right option.");
                 printf("\n >> Negative marking for wrong answers!");
                 printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
                 printf("\n\n\n Press Y  to start the game!\n");
                 printf("\n Press any other key to return to the main menu!");
                 getch();

                 system("cls");
                 fm=fopen("q1.txt","r");
                 while((ch=getc(fm))!=EOF)     //end of file
                 printf("%c",ch);
                 fclose(fm);
                 b=getch();
                 if(b=='a' || b=='A')

                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");

                fm=fopen("q2.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='c' || b=='C')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q3.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='b' || b=='B')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q4.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='b' || b=='B')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q5.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='d' || b=='D')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q6.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='c' || b=='C')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q7.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='d' || b=='D')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q8.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='a' || b=='A')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q9.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='b' || b=='B')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q10.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='c' || b=='C')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                getch();

                system("cls");
                fm=fopen("q11.txt","r");
                while((ch=getc(fm))!=EOF)
                printf("%c",ch);
                fclose(fm);
                b=getch();
                if(b=='a' || b=='A')
                {
                    printf("\nCorrect!!");
                    countt=countt+2;
                }
                else
                {
                    printf("\nWrong!!");
                    countf=countf-1;
                }
                         printf("\n\nTrue:%d",countt);
                         printf("\n\nFalse:%d",countf);

                         tcount=countt+countf;
                         printf("\nYour score is : %d",tcount);
              }
        else if(a=='H' || a=='h')
        {
               help();getch();
               goto questions;
        }

        else if(a=='Q' || a=='q')
        {
            char ans;
            printf("\nAre you sure you want to Quit ?? \n");
            printf("\nEnter 'Q' for quit and Enter 'R' for return..!!\n");
            scanf("%c",&ans);

            if(ans=='q' || ans=='Q')
            {
                    printf("Thank You for playing the Quiz ");
            }
            else
            {
                    goto home;
            }
        }
}
void help()
{
             system("cls");
             printf("\n-------Welcome to QUIZ GAME-------");
             printf("\n-------How To Play-------");
             printf("\n___________________________");
             printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the right option.");
             printf("\n >> Each question carries two marks.");
             printf("\n >> Negative marking for wrong answers, one mark will be deduct!");
             printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
             printf("\n\n\nPress Y to start the game!\n");
             if((getch())=='y');
             {

             }
}
