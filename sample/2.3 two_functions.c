#include <stdio.h>
void butler(void);	// prototpye����ԭ��
int main(void)
{
	printf("I will summon the butler function.\n");
	butler();
	printf("Yes, please bring me some tea and writeable DVDs.");

	return 0;
}

void butler(void)	//�������忪ʼ
{
	printf("You rang, sir?\n");
}
