#include<cstdio>
using namespace std;


int N;
char x[110];

int main() {
	scanf("enter %d\n", &N);
	while(N--) {
		scanf("0.%[0-9]...\n", x);
		printf("the digits are 0.%s\n", x);
	}
}


