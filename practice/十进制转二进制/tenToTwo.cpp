#include <stdio.h>

/*
*	���õݹ齫ʮ����ת��Ϊ������
*/

void tenToTwo(int n);
void to_binary(unsigned long n);

int main(){
	int number = 45;
	tenToTwo(number);
	return 0;
}

void tenToTwo(int n){
	
/*	if (n % 2 == 1){
		printf("1");
	} else {
		printf("0");
	}*/
	printf("%d", n % 2);
	if (n > 1) {
		tenToTwo(n / 2);
	}
	return ;
}

/*
*	��׼����
*/

void to_binary(unsigned long n){
	if(n > 1){
		to_binary(n / 2);
	}
	printf("%d", n % 2);

	return ;
}