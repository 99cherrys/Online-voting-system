#include"header.h"

int Password()
{
int flag;
char pwd[10], p[]="Hubli";
printf("Enter your admin password:");
scanf("%s",pwd);
flag = strcmp(p,pwd);
if(flag == 0)
return 1; 
else 
return 0;
}
void admin_access(FILE *fp)
{
int ch;

while(1)
{
printf("1.Add voter\n2.Delete\n3.Release candidate list\n4.Check vote counts\n5.exit\n enter your choice:");
scanf("%d", &ch); 
switch(ch)
{
case 1:
{
voter vv = read();
fwrite(&vv, sizeof(voter),1,fp);
printf("Successfully stored\n");
break;
}

case 2:
{
long int a;
int FLAG;
FILE *f=fopen("Temp.txt", "r+");
if(fp == NULL)
printf("File is empty\n");
else
{
voter vv;
printf("Enter adhar number of the voter:");
scanf("%ld", &a);
FLAG=0;
while(fread(&vv, sizeof(voter),1,fp))
{

if(vv.adhar == a)
{
FLAG=1;
}
else
fwrite(&vv, sizeof(voter),1,f);
}
if(FLAG==0)
printf("Voter not found\n");
else
{
remove("Hubli.txt");
rename("Temp.txt","Hubli.txt");
printf("Voter has been successfully deleted\n");
}
fclose(f);
break;
}
}

case 3:
{
int siz, j;
cand *list, *temp;
printf("Enter total number of candidates participating:");
scanf("%d",&siz);
list = (cand*) calloc(siz, sizeof(cand));
for(j=0, temp=list; j<siz; j++, temp++)
{
printf("Enter serial number of the candidate:");
scanf("%d", &temp->num);
scanf("%s", temp->name);
}
printf("List of candidates stored successfully");
free(list);
free(temp);
}

case 4:

case 5: exit(1);
}
}
}

void Hubli()
{
FILE *fp;
while(1)
{
int flag = Password();
if(flag == 1)
{
fp = fopen("Hubli.txt", "r+");
if(fp == NULL)
printf("File is empty\n");
else
admin_access(fp);
break;
}
else
printf("Access denied\n Please enter correct password\n");
}
fclose(fp);
}


void Mysore()
{
printf("Mysore\n");
}
void Bangalore()
{
printf("Bangalore\n");
}

void Admin()
{
void (*c[3])() = {Hubli, Mysore, Bangalore};
int ch1;

while(1)
{
printf("Choose your constituency:\n1. Hubli\n2. Mysore\n3. Bangalore\n4. exit\n");
scanf("%d", &ch1);
if (ch1==4)
break; 
else
c[ch1-1]();
}
}


