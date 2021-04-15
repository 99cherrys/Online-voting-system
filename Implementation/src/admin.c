#include"header.h"

int Password(char *p)
{
int flag;
char pwd[10];
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
fprintf(fp,"%ld %ld %s %s %s %d\n",vv.adhar, vv.vid, vv.name, vv.father, vv.spouse, vv.age);
printf("Successfully stored\n");
break;
}

case 2:
{
long int a;
int FLAG;
FILE *f=fopen("Temp.txt", "a");
voter v;
printf("Enter adhar number of the voter:");
scanf("%ld", &a);
FLAG=0;
while(!EOF)
{
fscanf(fp,"%ld %ld %s %s %s %d\n" ,&v.adhar, &v.vid, v.name, v.father, v.spouse, &v.age);
if(v.adhar == a)
FLAG=1;

else
fprintf(f,"%ld %ld %s %s %s %d",v.adhar, v.vid, v.name, v.father, v.spouse, v.age);
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
char H[] = "Hubli";
FILE *fp;
while(1)
{
int flag = Password(H);
if(flag == 1)
{
fp = fopen("Hubli.txt", "a+");
if(fp == NULL)
{
printf("File is empty\n");
}
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
char M[] = "Mysore";
FILE *fp;
while(1)
{
int flag = Password(M);
if(flag == 1)
{
fp = fopen("Mysore.txt", "a+");
if(fp == NULL)
{
printf("File is empty\n");
}
else
admin_access(fp);
break;
}
else
printf("Access denied\n Please enter correct password\n");
}
fclose(fp);
}


void Bangalore()
{
char B[] = "Bangalore";
FILE *fp;
while(1)
{
int flag = Password(B);
if(flag == 1)
{
fp = fopen("Bangalore.txt", "a+");
if(fp == NULL)
{
printf("File is empty\n");
}
else
admin_access(fp);
break;
}
else
printf("Access denied\n Please enter correct password\n");
}
fclose(fp);
}

void Admin()
{
void (*c[3])() = {Hubli, Mysore, Bangalore};
int ch1;

while(1)
{
printf("Choose your constituency:\n1. Hubli\n2. Mysore\n3. Bangalore\n4. exit\n");
scanf("%d", &ch1); 
if(ch1==1)
c[ch1-1]();
else if(ch1==2)
c[ch1-1]();
else if(ch1==3)
c[ch1-1]();
else 
break;
}
}


