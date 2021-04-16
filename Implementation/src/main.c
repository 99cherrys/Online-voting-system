#include"header.h"

int main()
{
int ch;
void (*ptr[2])() = {Admin, user};
while(1)
{
printf("Please enter portal\n1. Admin\n2. Voter\n3. Exit\n");
scanf("%d", &ch);
switch(ch)
{
case 1:
ptr[ch-1]();
break;

case 2:
ptr[ch-1]();
break;

case 3:
exit(1);
break;

default:
printf("Enter valid choice\n Try again\n");
break;
}
return 0;

}
}
