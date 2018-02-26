/*================================================================
*   Copyright (C) 2018 Tencent Technology (Shenzhen) Co., Ltd. All rights reserved.
*   
*   文件名称：tree.c
*   创 建 者：runrunbian
*   创建日期：2018年02月26日 16:18:31
*   描    述：
*
================================================================*/


#include "tree.h"
void createBT(BiTree *T)
{
    char ch;
    scanf("%c", &ch);
    if(ch=='.')
    *T=NULL;
    else
    {
        *T=(node *)malloc(sizeof(node));
        //printf("%c", ch);
        if(!T)
        {
            printf("开辟内存失败\n");
            exit(1);
        }
        (*T)->data=ch;
        createBT(&(*T)->lchild);
        createBT(&(*T)->rchild);
    }
}

void pre_order(node *T)
{
    if(T)
    {
        printf("%c ", T->data);
        pre_order(T->lchild);
        pre_order(T->rchild);
    }
}

void mid_order(node *T)
{
//    printf("1");
    if(T)
    {
        mid_order(T->lchild);
        printf("%c ", T->data);
        mid_order(T->rchild);
    }
}

void back_order(node *T)
{
    if(T)
    {
        back_order(T->lchild);
        back_order(T->rchild);
        printf("%c ", T->data);
    }
}

int main()
{
    BiTree T = NULL;
    printf("请使用前序遍历的方式输入字符串，用.代替空值\n");
    createBT(&T);
    printf("建树成功\n");
    printf("\n前序遍历的结果是：\n");
    
    pre_order(T);
    printf("\n中序遍历的结果是：\n");
    
    mid_order(T);
    printf("\n后序遍历的结果是：\n");

    back_order(T);
    
    printf("\n");
    return 0;
}    
