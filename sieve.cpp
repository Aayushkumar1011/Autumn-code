#include <bits/stdc++.h>
using namespace std;

void sieve(int n){
	bool  isprime[n+1];

	for(int i=2; i<=n; ++i){
		isprime[i]=true;
		}
	isprime[0]=false;
	isprime[1]=false;
	for(int i=2; i*i<=n; ++i){
		if(isprime[i]==true){
			for(int j=i*i; j<=n; j+=i){
				isprime[j]=false;
			}
		}
	}
	printf("The prime numbers are : \n");
for(int i=2; i<=n; ++i){
	if(isprime[i]==true){
		printf("[" );	
		printf("%d],",i);
   		}
	}
	printf("\n");
}

int main(){

 	int a;
 	printf("enter number : \n");
 	scanf("%d",&a);
 	sieve(a);

return 0; 	
}
