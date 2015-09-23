#include <stdio.h>


/* 
*	¼òµ¥µÄÎ²µÝ¹é¼ÆËã½×³Ë
*/

int recursion(int n);
int main(){
	int number = 4;
	printf("%d\n", recursion(number));
	return 0;

}

int recursion(int n){
	if (n > 0){
		return n * recursion(n - 1);
	} else {
		return 1;
	}
}