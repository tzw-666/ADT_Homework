#ifndef __SEQLIST_H
#define __SEQLIST_H

#include "stdio.h"

int seqListDeleteOdd(int a[], int n);
int seqListDeleteKey(int a[], int n, int key);
int seqListRemoveRepeat(int a[], int n);
void seqListPrintKTimes(int a[], int n, int times);
int seqListDeleteKeysFront(int a[], int n, int key);
int seqListDeleteKey(int a[], int n, int key);
int seqListInsetKey(int a[], int n, int key);
void seqListInverse (int a[], int n);
int seqListFindKey (int a[], int n, int key);

#endif