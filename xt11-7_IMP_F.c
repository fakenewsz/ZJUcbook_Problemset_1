#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *getodd(struct ListNode **L);
void printlist(struct ListNode *L) {
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main() {
    struct ListNode *L, *Odd;
    L = readlist();
    Odd = getodd(&L);
    printlist(Odd);
    printlist(L);

    return 0;
}

struct ListNode *readlist() {
    struct ListNode *head, *p, *tail;
    int data;

    head = tail = NULL;
    scanf("%d", &data);
    while (data != -1) {
        p = (struct ListNode *) malloc(sizeof(struct ListNode));
        p->data = data;
        p->next = NULL;
        if (head == NULL) {
            head = p;
        } else {
            tail->next = p;//这里又是把新构建的结点p放在旧尾结点后面，成为新的尾结点
        }
        tail = p;//？怎么变成旧的在尾，新的结点在头了
        scanf("%d", &data);
    }
    return head;
}

struct ListNode *getodd(struct ListNode **L) {

    struct ListNode *head, *p, *tail, *head1, *tail1;
    p = *L;//从L的头个节点开始，当它是 新输入的结点
    //在输入的时候，按data的 奇偶 分流，创建两个 链表。

    head = tail = head1 = tail1 = NULL;//初始化辅助结点

    while (p != NULL) {        //如果传进来的L不是 空节点
        if (p->data % 2 != 0) {//奇数链表
            if (head == NULL) {
                head = p;
            } else {
                tail->next = p;
            }
            tail = p;
        } else {//偶数链表
            if (head1 == NULL) {
                head1 = p;
            } else {
                tail1->next = p;
            }
            tail1 = p;
        }
        p = p->next;//处理完一个，就处理下一个
    }

    if (tail == NULL) {//由于事先给两组首尾节点都做了初始化为空，所有当传入的链表数据全是奇数 ，或全是
        *L = head1;    //偶数时必有一组首尾节点为NULL，而在最后给尾结点做空时（ tail->next=NULL）由于
        return head;   //tail本身就是NULL，系统运行到这里就会发生段错误，因此为了避免这一错误的发生
    } else {           //便需要增加一个If语句进行特殊处理，直接在错误发生前就结束该进程返回头指针。
        tail->next = NULL;
    }
    if (tail1 == NULL) {
        *L = head1;
        return head;
    } else {
        tail1->next = NULL;
    }
    *L = head1;//存放偶数链表的首指针
    return head;
}