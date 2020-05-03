#include <cstdio>
 
int main(){
	long long n, sum, result;
 
	while(scanf("%lld", &n) != EOF){
		sum = result = 1;
		while(sum % n != 0){
			sum = ((sum * 10) + 1)%n;
			result++;
		}
		printf("%lld\n", result);
	}
	return 0;
}