#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s1[100],s2[100];
    int flag;
    int i,choice;
    char select;
   do
  {

    printf("Enter the choice: \n1)play the game\n 2)exit\n");
    scanf("%c",&choice);
    printf("Enter two names:\n");
    scanf("%s \n %s",s1,s2);
    strlwr(s1);
    strlwr(s2);
    int t=strlen(s1)+strlen(s2);
    int s11[26]={0},s12[26]={0};
       
    for(i=0;i<strlen(s1);i++)
        s11[s1[i]-'a']++;
       
    for(i=0;i<strlen(s2);i++)
        s12[s2[i]-'a']++;
       
    for(i=0;i<26;i++)
    {
        if(s11[i]==s12[i])
            t=t-(2*s11[i]);
        else if (s11[i]>0 && s12[i]>0)
            t=s11[i]>s12[i]?t-(2*s12[i]):(2*t-s11[i]);

    }

    if(t==3 || t==5 || t==14)
        printf("FRIENDS");
       
    else if(t==10)
         printf("LOVER");
       
    else if(t==8 || t==13 || t==12)
         printf("AFFECTION");
       
    else if(t==6 || t==11 || t==15)
         printf("MARRIAGE");
       
    else if(t==2 || t==4 || t==7 || t==9)
         printf("ENEMY");
    else
       {
           printf("SIBLING");
       }
        printf("\nwould you like to play again(y/n)");
        scanf("%c",&select);
        if(select=='n'|| select=='N')
            flag=1;
        else
            flag=0;

   }while(choice!=2);
   return 0;
}
