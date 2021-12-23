#include "seqList.h"

/*顺序表删除值为偶数的元素*/
int seqListDeleteEven(int a[], int n) {
    int i, ii;
    for (ii = i = 0; ii < n; ++ii) {
        /*如果a[ii]为奇数，让将其存入a[i]，然后i后移准备存入下一个元素*/
        if (a[ii] % 2) {
            a[i++] = a[ii];
        }
    }
    return i;
}

/*有重复值顺序表删除指定值元素*/
int seqListDeleteKeys(int a[], int n, int key) {
    int i, ii;
    for (ii = i = 0; ii < n; ++ii) {
        /*a[ii]不等于要删除的值，存入a[i]，然后加i后移准备存入下一个元素*/
        if (a[ii] != key) {
            a[i++] = a[ii];
        }
    }
    return i;
}

/*删除顺序表指定值元素的前一个元素*/
int seqListDeleteKeysFront(int a[], int n, int key) {
    int i, ii;
    for (ii = i = 0; ii < n; ++ii) {
        /*a[ii+1]不等于指定值，将a[ii]存入a[i]，然后加i后移准备存入下一个元素*/
        if (a[ii + 1] != key) {
            a[i++] = a[ii];
        }
    }
    return i;
}

/*有序重复值顺序表去重*/
int seqListRemoveRepeat(int a[], int n) {
    int i, ii;
    for (i = ii = 0; ii < n; ++ii) {
        if (a[i] != a[ii]) {
            a[++i] = a[ii];
        }
    }
    return i;
}

/*输出顺序表*/
void seqListPrint (int a[], int n) {
    printf("seqList:{");
    for (int i = 0; i < n; printf("%d, ", a[i++]));
    printf("\b\b}");
}

/*将顺序表输出k圈*/
void seqListPrintKTimes(int a[], int n, int times) {
    int printTimes = times * n;
    for (int i = 0; i < printTimes; ++i) {
        printf("%d\t", a[i]);
        if (!(i % n)) {
            printf("\n");
        }
    }
}

/*无重值顺序表删除指定值元素*/
int seqListDeleteKey(int a[], int n, int key) {
    int i, ii;
    for (i = 0; i < n && i != key; ++i);
    for (int ii = i; ii < n; ++ii) {
        a[ii] = a[ii + 1];
    }
    return ii;
}

/*有序顺序表插入指定值元素*/
int seqListInsetKey(int a[], int n, int key) {
    int i;
    for (i = 0; i < n && a[i] < key; ++i);
    for (int ii = n; ii > i; --ii) {
        a[ii - 1] = a[ii];
    }
    a[i] = key;
    return n + 1;
}

/*顺序表逆序*/
void seqListInverse(int a[], int n) {
    int start, end;
    int temp = 0;
    for (start = 0, end = n - 1; start < end; ++start, --end) {
        temp = a[start];
        a[start] = a[end];
        a[end] = temp;
    }
}


/*顺序表查找*/
int seqListFindKey(int a[], int n, int key) {
    int i;
    for (i = 0; i < n && a[i] != key; ++i);
    return i == n ? i : -1;
}

/*顺序表二分查找*/
int seqListHalfSearch(int a[], int low, int high, int key) {
    int mid;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) {
            return mid;
        } else if (key < a[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

/*顺序表递归二分查找*/
int seqListBinarySearch(int a[], int low, int high, int key) {
    if (low <= high) {
        int mid = (low + high) / 2;
        if (a[mid] == key) {
            return key;
        } else if (key < a[mid]) {
            return seqListBinarySearch(a, low, mid - 1, key);
        } else {
            return seqListBinarySearch(a, mid + 1, high, key);
        }
    }
    return -1;
}


