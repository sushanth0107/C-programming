## 1.print a string without duplicates
---
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="aabbccd";
    int i,j=0;
    int freq[256]={0};
    char result[100];
    for(i=0;str[i]!='\0';i++)
    {
        if(freq[str[i]]==0)
        {
            result[j]=str[i];
            j++;
        }
        freq[str[i]]=1;
    
        
        
    }
    result[j]='\0';
    printf("%s",result);
}
```
## 2. longest substring without repeating
---
```c
#include<stdio.h>
#include<string.h>
int main()
{
        int start=0;
        char str[200],r;
        fgets(str,100,stdin);
        str[strcspn(str,"\n")]='\0';
        int i,j;
        int max=0;
        for(i=0;str[i]!='\0';i++)
        {
                int count=0;
                char ch[256]={0};
                for(j=i;str[j]!='\0';j++)
                {
                        if(ch[str[j]]==1)
                        {
                                break;
                        }
                        else
                        {
                        ch[str[j]]=1;
                        count++;
                        }

                if(count>max)
                {
                        max=count;
                         start=i;
                }
        }
        }
        printf("%d",max);
        for(i=start;i<start+max;i++)
        {
                printf("%c",str[i]);
        }

}
```
## 3. longest word in a sentence
---
```c
#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="i love programming";
    int i;
    int max=0;
    char maxlen[100];
    char *tok=strtok(str," ");
     while(tok!=NULL)
        {
             int len=strlen(tok);

            if(len>max)
            {
                max=len;
                strcpy(maxlen,tok);
            }
            tok=strtok(NULL," ");

        }
    printf("%s",maxlen);
}
```
