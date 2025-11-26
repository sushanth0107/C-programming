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
## 4.swaping of string by half.
---
```c
#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        gets(str);
        char res[100];
        int half=strlen(str)/2;
        strcpy(res,str+half);
        strncat(res,str,half);
        printf("%s",res);
}
```
## 5.swaping of half within the half
---
```c
#include<stdio.h>
#include<string.h>
void swap(char *str,char *str1)
{
        char temp=*str
        *str=*str1;
        *str1=temp;

}
int main()
{
        int i;
        char str[]="raviteja";
        int l=strlen(str)/2;
        for(i=0;i<l;i+2)
        {
                swap(&str[i],&str[i+1]);
        }
        printf("%s",str);
}
```
## 6.reverse the words within the sentence
---
```c
#include<stdio.h>
#include<string.h>
void rev(char *str)
{
    int i;
    
    int n=strlen(str);
    for(i=0;i<n/2;i++)
    {
    char temp=str[i];
    str[i]=str[n-1-i];
    str[n-1-i]=temp;
    }
}
int main()
{
    char str[]="sushanth sai sandeep pk";
    char add[100]=" ";
    char res[100];
    char *tok=strtok(str," ");
    while(tok!=NULL)
    {
        rev(tok);
        strcat(res,tok);
        strcat(res,add);
        tok=strtok(NULL," ");
        
    }
    printf("%s",res);
    
}
```
## 7.max repeated word in a sentence
---
```c
int main()
{
        char str[100];
        fgets(str,100,stdin);
        char word[20][20];
        int count[256]={0};
        int i,j=0;
        char *tok=strtok(str," ");
        while(tok!=NULL)
        {
                int flag=0;
                for(i=0;i<j;i++)
                {
                        if(strcmp(word[i],tok)==0)
                        {
                                count[i]++;
                                flag=1;
                                break;
                        }
                }
                if(!flag)
                {
                        strcpy(word[j],tok);
                        count[j]=1;
                        j++;
                }
                tok=strtok(NULL," ");
        }
        int k=0;
        for(i=0;i<j;i++)
        {
                if(count[i]>count[k])
                {
                        k=i;
                }
        }
        printf("%s",word[k]);
        printf("%d",count[k]);


}
```
## 8. remove a word in a sentence
---
```c
#include<stdio.h>
#include<string.h>
int main()
{
        char str[100];
        char remove[100];
        char result[100];
        printf("enter the string");
        fgets(str,100,stdin);
        printf("enter the second");
        fgets(remove,100,stdin);
        remove[strcspn(remove,"\n")]='\0';

        char *tok=strtok(str," ");
        while(tok!=NULL)
        {
                if(strcmp(tok,remove)!=0)
                {
                        strcat(result,tok);
                }
                tok=strtok(NULL," ");
        }
        printf("%s",result);
}
```
## 9.longest common subsequence
---
```c

#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100];
    fgets(str1,100,stdin);
    char str2[100];
    fgets(str2,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    str2[strcspn(str2,"\n")]='\0';
    int l1=strlen(str1);
    int l2=strlen(str2);
    char arr1[100];
    char arr2[100];
    int i,j,k=0,l=0;
    for(i=0;i<l1;i++)
    {
        for(j=0;j<l2;j++)
        {
            if(str1[i]==str2[j])
            {
                arr1[k++]=str1[i];
                break;
            }
        }
    }
     for(i=0;i<l2;i++)
    {
        for(j=0;j<l1;j++)
        {
            if(str2[i]==str1[j])
            {
                arr2[l++]=str2[i];
                break;
            }
        }
    }
    arr1[k]='\0';
    arr2[l]='\0';
    int g1=strlen(arr1);
    int g2=strlen(arr2);
    if(g1>g2)
    {
        if(strstr(arr1,arr2))
        {
            printf("%s",arr2);
        }
    }
    else
    {
        if(strstr(arr2,arr1))
        {
            printf("%s",arr1);
        }
    }
    
    
}
```
## 10. common characters in astring without duplicates
---
```
#include<stdio.h>
#include<string.h>

int main()
{
    char str1[100], str2[100], arr[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);

    str1[strcspn(str1,"\n")] = '\0';
    str2[strcspn(str2,"\n")] = '\0';

    int k = 0;

    for(int i = 0; str1[i] != '\0'; i++)
    {
        for(int j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                // avoid duplicates
                if (!strchr(arr, str1[i]))
                    arr[k++] = str1[i];
                break;
            }
        }
    }

    arr[k] = '\0';

    printf("%s", arr);
}
```
## 11.permutations of a string
---
```c
#include<stdio.h>
#include<string.h>
void swap(char str[],int i,int j)
{
    char temp=str[i];
    str[i]=str[j];
    str[j]=temp;
}
int main()
{
    printf("enter the string:");
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("%s\n",str);
    int c[100]={0};
    int i=0;
    int n=strlen(str);
    while(i<n)
    {
        if(c[i]<i)
        {
            if(i%2==0)
            {
                swap(str,0,i);
            }
            else
            {
                swap(str,c[i],i);
            }
            printf("%s\n",str);
            c[i]++;
            i=0;
        }
        
        else
        {
            c[i]=0;
            i++;
        }
    }
}
```


