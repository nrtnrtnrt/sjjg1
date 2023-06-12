#include "linklist.h"
#include <stdlib.h>

//单链表初始化：初始化头节点
linklist list_create(data_t value)
{
    linklist H;
    H = (linklist)malloc(sizeof(listnode));
 	if (H == NULL) {
		printf("malloc failed\n");
		return H;
	} 
    H->data = value;
    H->next = NULL;  

    return H;
}

/*尾插：关键点就是把最后一个节点的指针指向新的节点
*1.把value用一个linklist结构体存放
*2.把链表的最后一个next指向新的linklist的位置
*/
int list_tail_insert(linklist H, data_t value)
{
    linklist p;
    linklist q;
    if(H = NULL)
    {
        printf("H no found\n");
        return -1;
    }

    if(q = (linklist)malloc(sizeof(listnode)) == NULL)
    {
		printf("malloc failed\n");
		return -1;
    }
    q->data = value;
    q->next = NULL;

    p = H;
    while (p->next != NULL)
    {
        /* code */
        p = p->next;
    }

    p->next = q;

    return 0;
}

linklist list_get(linklist H, int pos);

int list_insert(linklist H, data_t value, int pos);

int list_show(linklist H);
