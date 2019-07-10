#include<stdio.h>
#include<Windows.h>
//int  __stdcall fun2(int a, int b);
//int  __fastcall fun3(int a, int b);

#define decode sihdasijh
#define length hsiajhaksj
#define str nbmnbt
#define code jksadfbh
#define fun1 bwejtmn
#define fun2 jkten4jk
#define fun3 njjkw4nt

char str[7]="";
void * p,*q,*r;
void *j, *k;
BYTE byte_406C20[] = "IJLMNcdefa45789+/6ghjklmnioprstuvqwxz0123yGHCQRTUVWXSYZOPKABDEFb";
char code[] = "|p-]";
void decode(BYTE * a, int length, char c) {
	if (a == NULL) return;
	BYTE * m = (BYTE*)malloc(length);
	ReadProcessMemory(GetCurrentProcess(), a, m, length, NULL);
	for (int i = 0; i < length; i++)
		*(m + i) = (*(m + i) ^ c);
	WriteProcessMemory(GetCurrentProcess(), a, m, length, NULL);
}


int  fun1(int a) {
	printf("you cracke first one\n");
	decode((BYTE*)q, 7, *(str+1));
	unsigned int *w = (unsigned int *)malloc(sizeof(int));
	*w = (unsigned int)j - ((unsigned int)q + 3) - 4;
	WriteProcessMemory(GetCurrentProcess(), (void*)((unsigned int)q + 3), w, 4, NULL);
	return 0;
}
int  __stdcall fun2(int a) {
	printf("you cracke second one\n");
	decode((BYTE*)r, 10, *(str + 2));
	unsigned int *w = (unsigned int *)malloc(sizeof(int));
	*w = (unsigned int)k - ((unsigned int)r + 6)-4;
	WriteProcessMemory(GetCurrentProcess(), (void*)((unsigned int)r + 6), w, 4, NULL);
	return 0;
}
int  __fastcall fun3(int a) {
	char v21, v22, v23, v24;
	decode((BYTE*)code, 4, 0x15);
	v21 = *(str+3) >> 2;
	v22 = 16 * (*(str + 3) & 3) + (*(str + 4) >> 4);
	v23 = 4 * (*(str + 4) & 0xF) + (*(str + 5) >> 6);
	v24 = *(str + 5) & 0x3F;
	if (byte_406C20[v21] == code[0] && byte_406C20[v22] == code[1] && byte_406C20[v23] == code[2] && byte_406C20[v24] == code[3])
	{
		printf("Congratulations!\n");
		printf("the input is key\n");
	}
	else
	{
		printf("something wrong!\n");
	}

	getchar();
	return 0;
}
int main() {
	j = fun2;
	k = fun3;
	printf("请输人六个字符:\n");
	scanf("%s", str);
	_asm {
		mov p, offset l1
		mov q, offset l2
		mov r, offset l3
	}
    decode((BYTE*)p,10, *str);
	unsigned int *w = (unsigned int *)malloc(sizeof(int));
	*w = (unsigned int)fun1 -((unsigned int)p + 3)-4;
	WriteProcessMemory(GetCurrentProcess(), (void*)((unsigned int)p+3),w,4, NULL);
	l1:
	fun1(1);
	l2:
	fun2(1);
	l3:
	fun3(1);
	getchar();
}