#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

struct ListNode *readlist(){
    struct ListNode* head,*p,*tail;
    int data;

    head=p=tail=NULL;

    scanf("%d",&data);
    while(data!=-1){

        p=(struct ListNode*) malloc(sizeof(struct ListNode));
        p->data=data;
        p->next=NULL;
        if(head==NULL){
            head=p;
        }else{
            tail->next=p;//p连在老tail上
        }
        tail=p;//把p变成新tail，
        scanf("%d",&data);
    }
    return head;
}
struct ListNode *deletem( struct ListNode *L, int m ) {
    //--由于单链表遍历是不可逆的---
    //设置两个指针一个控制移动，一个用于连接（防止断链）
    struct ListNode *p,*q;
    p=L;  //p用于移动
    q=NULL;  //q初始化

    //当p非空时
    while(p!=NULL){

        if(p->data==m){             //若data为m
            if(q!=NULL){            //情况1：中间节点或者末尾节点是m ，此时 q!=NULL
                q->next=p->next;    //q->m(p)->x    q->x
            }
            else{                   //情况2:首节点就是m ，此时 q=NULL
                L=p->next;          //则直接移动链表的首结点后移
            }
        }
        else{                       //data不为m，则q移动到p当前位置，相当于记录p前一个节点
            q=p;
        }

        p=p->next;                  // p指针移动到下一个节点
    }
    return L;
}