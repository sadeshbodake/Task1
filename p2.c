#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<math.h>
int main(){
    
    int m1[3][3]={{1,1,1},{0,1,0},{1,1,0}};
    int m2[3][3]={{1,1,1},{0,0,1},{1,0,0}};
    int m3[3][3],m4[3][3],a[100],k=0;
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m3[i][j]=(m1[i][j])&&(m2[i][j]);
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            m4[i][j]=(m1[i][j])||(m1[i][j]);
        }
    }
    
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            a[k]=m4[i][j];
            k++;
        }
    }
    int power,sum=0,start=0;
    for(int i=8;i>=0;i--){
        if(a[i]==1){
            power=pow(2,start);
            sum+=power;
        }
        start++;
    }
    int cnt2=0;
    for(int i=1;i<=sum;i++){
        
            if(i%sum==0)
                cnt2++;
    }
    if(cnt2==2)
            printf("%d is Prime ",sum);
    else
             printf("%d is Not Prime ",sum);
            
}
