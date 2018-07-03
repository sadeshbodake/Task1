/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>

int main()
{
    int totalmoves;
    int n,so[100],de[100],au[100];
    char s='S',d='D',a='A';
    
    printf("How Many Disk ? ");
    scanf("%d",&n);
    
    if(n%2==0){
        char temp=s;
        s=d;
        d=temp;
    }
    int top=n-1;
    
    totalmoves=pow(2,n)-1;
    

    
    for(int i=1;i<=totalmoves;i++){
        
            if(i%3==1){
                printf("Interchange Disk From %c To %c\n",s,d);
            }
            if(i%3==2){
                printf("Interchange Disk From %c To %c\n",s,a);
            }
            if(i%3==0){
                printf("Interchange Disk From %c To %c\n",a,d);
            }
        
       
    }
    
}
