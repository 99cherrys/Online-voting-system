#include"header.h"

voter read()
{
voter vc;
printf("Enter adhar number of the voter:");
scanf("%ld", &vc.adhar);
printf("Enter voter-id:");
scanf("%ld", &vc.vid);
printf("Enter voter name:");
scanf("%s", vc.name);
printf("Enter voter's father name:");
scanf("%s", vc.father);
printf("Enter Spouse name:");
scanf("%s", vc.spouse);
printf("Enter Constituency to which the voter belong:");
scanf("%s", vc.place);
printf("Enter age of the voter\n note that age of the voter must be above 18:");
scanf("%d", &vc.age);
return vc;
}
