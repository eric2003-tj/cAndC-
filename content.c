#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {
 int n[] = {1, 3, 5, 7, 9, 11, 13, 15, 17};
 int totalSize = sizeof(n);
 int oneSize = sizeof(n[0]);
 int counts = totalSize / oneSize;
 //cout << "陣列的大小為:" << totalSize << ""
 printf("陣列的大小為:%d,一個元素的大小是%d,陣列的數量是%d",totalSize, oneSize, counts);
}
