#include<stdio.h>
int main(){
	char s[100],ch;
	int i,n;
	printf("text:");
	gets(s);
	printf("diff:");
	scanf("%d", &n);
	for(i=0;s[i]!='\0';i++){
		ch=s[i];
		if(ch>='a'&&ch<='z'){
			ch=ch+n;
			printf("%d", ch);
			if(ch>'z'){
				ch=ch-'z'+'a'-1;
			}
			s[i]=ch;
		}
		else if(ch>='A'&&ch<='Z'){
			ch=ch+n;
			if(ch>'Z'){
				ch=ch-'Z'+'A'-1;
			}
			s[i]=ch;
		}
	}
	printf("%s",s);
	return 0;
	 
}

