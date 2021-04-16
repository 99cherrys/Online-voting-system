/**
 * @header.h
 * @author Charanya G (https://github.com/99cherrys/Online-voting-system.git)
 * @brief This program is for simulating data manipulation using Linked List
 * @version 0.1
 * @date 2021-04-10
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__

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
void user();
voter read();

