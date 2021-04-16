#include"header.h"
void vote()
{
FILE *c;
int n, s,l;
long int count;
char name[20];
c = fopen("Candidates.txt", "r");

if(c == NULL)
printf("File is empty\n");
else
{
while(!EOF)
{
fscanf(c,"%d %s\n", &n, name);
printf("%d %s\n", n, name);
}

printf("Enter your choice as serial number provided left of the candidate name");
scanf("%d\n", &s);
FILE *w;
w = fopen("vote_count.txt", "a");
fprintf(w,"%d\n",s);
}
}

void user_access(FILE *fu)
{
FILE * voted;
voted = fopen("Voted_list.txt", "a+");
long int ad, adhar, v_adhar;
printf("Enter your adhar number");
scanf("%ld", &ad);
while(!EOF)
{
fscanf(fu,"%ld\n", &adhar); 

if(adhar == ad )
{
while(!EOF)
{
fscanf(voted,"%ld\n", &v_adhar);
if(v_adhar == ad)
{
printf("You have already voted on your registered adhar number\n Multiple votings are illegal\n");
break;
}
}
break;
}
}
if(adhar==ad && v_adhar !=ad)
{
printf("your can vote now\n");
vote();
fprintf(voted, "%ld\n", ad);
}
else
printf("Voter not found\n");
}


void user()
{
FILE *fu;
fu = fopen("Adhar_list.txt", "r");
if(fu == NULL)
printf("File is empty\n");

else
user_access(fu);

fclose(fu);
}

