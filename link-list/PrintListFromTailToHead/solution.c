// Build with clang Apple LLVM version 10.0.0 (clang-1000.10.44.4)
// clang -o solution solution.c

#include <stdio.h>
#include <stdlib.h>

// 链表节点定义
struct ListNode {
    int val;
    struct ListNode *next;
};

int *ListFromTailToHead(struct ListNode *list)
{
    /* 数一下单链表有几个节点 */
    int list_size = 0;
    struct ListNode *p = list;
    while (p!=NULL) {
        list_size++;
        p = p->next;
    }

    /* 分配对应节点元素数量的数组 */
    int *arr = (int*)malloc(sizeof(int)*list_size);
    if (arr == NULL) {
        return NULL;
    }

    /* 遍历单链表，逆序依次把数据存放到数组 */
    p = list;
    int i = list_size-1;
    while (p!=NULL) {
        arr[i] = p->val;
        i--;
        p = p->next;
    }

    return arr;
}

int main()
{
    // test
    struct ListNode a, b, c;
    a.val = 1;
    b.val = 2;
    c.val = 3;
    a.next = &b;
    b.next = &c;
    c.next = NULL;
    struct ListNode *l = &a;

    int *arr = ListFromTailToHead(l);
    if (arr) {
        for(int i=0; i<3; i++) {
            printf("[%d]: %d\n", i, arr[i]);
        }
    }
}
