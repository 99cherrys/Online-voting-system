#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct voter
{
long int adhar, vid;
char name[20], father[20], spouse[20], place[20];
int age;
}voter;

typedef struct cand
{
int num;
char name[20];
}cand;

void Exit();
void Admin();
voter read();
void user();

