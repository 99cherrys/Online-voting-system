#include"header.h"

int main()
{
int ch;
void (*ptr[1])() = {Admin};
while(1)
{
printf("Please enter portal\n1. Admin\n2. Exit\n");
scanf("%d", &ch);
if(ch==2)
break;
else
ptr[ch-1]();
}
return 0;

}
