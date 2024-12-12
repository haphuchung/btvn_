#include <stdio.h>
/*
	
*/

int main()
{
	char str[] = "hjasj67*&%jk7";
	int countchr = 0;
	int countnum = 0;
	int countspecial = 0;
	for(int i=0;i<strlen(str);i++){
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z'){
			countchr++;
		}else if(str[i]>='0' && str[i]<='9'){
			countnum++;
		}else{
			countspecial++;
		}
	}
	printf("so ki tu la chu cai : %d\n", countchr);
	printf("so ki tu chu so la: %d\n", countnum);
	printf("so ki tu dac biet la: %d", countspecial);
	
	return 0;
}
