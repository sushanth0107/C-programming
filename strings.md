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
        char str[100];
        fgets(str,100,stdin);
        int i,j;
        int max=0;
        int start=0;
        for(i=0;str[i]!='\0';i++)
        {
                int count=0;
                char freq[256]={0};
                for(j=i;str[j]!='\0';j++)
                {
                        if(freq[str[j]]==1)
                        {
                                break;
                        }
                        else
                        {
                        freq[str[j]]=1;
                        count++;
                        }
                }

                if(count>max)
                {
                   max=count;
                    start=i;
                }
        }
                for(i=start;i<start+max;i++)
                {
                printf("%c",str[i]);
                }
}
```
