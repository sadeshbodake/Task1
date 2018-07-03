#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<string.h>

int main()

{

	
		int n,a[100],freq[100],f,cnt,k;
	

		printf("Enter The Size of An Array ? ");
	
		scanf("%d",&n);

	
		for(int i=0;i<n;i++){
			
				a[i]=rand()%10;
			
		}	

	
		for(int i=0;i<n;i++)
		{
			
				for(int j=0;j<n-1-i;j++){
					
						if(a[j]>a[j+1]){
							
								int temp=a[j];
							
								a[j]=a[j+1];
							
								a[j+1]=temp;
								

						}
				}
		}
	
		
		printf("Enter The Value of K ? ");
	
		scanf("%d",&k);

		f=n/k;
	

		for(int i=0;i<n;i++)
		{
			
				cnt=0;
			
				for(int j=0;j<n;j++){
					
						if(a[i]==a[j])
							
								cnt++;
					
				}

			freq[i]=cnt;
			
		}
	
		printf("\n");
	

		for(int i=0;i<n;i++){

			printf("%d ",a[i]);
			
		}
	


		printf("\n\n\n");
	
		

		for(int i=0;i<n;i++){

			if(freq[i]>=f && a[i]!=a[i+1]){
				
					printf("%d occures more than %d times\n",a[i],freq[i]);
				
			}
			
		}

}
