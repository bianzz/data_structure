/*================================================================
*   Copyright (C) 2018 Tencent Technology (Shenzhen) Co., Ltd. All rights reserved.
*   
*   文件名称：tree1.c
*   创 建 者：runrunbian
*   创建日期：2018年02月26日 17:42:25
*   描    述：
*
================================================================*/


#include "tree1.h"

BiTree createBT()
{
    BiTree T;
    char ch;
    scanf("%c", &ch);
    if(ch == '.')
    {
        T = NULL;
  //      printf("1");
    }
    else
    {
        T = (node *)malloc(sizeof(node));
        if(!T)
        {
            printf("开辟失败\n");
            exit(1);
        }
      //  printf("1");
        T->data = ch;
        T->lchild = createBT();
        T->rchild = createBT();
    }
    return T;
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
    if(T)
    {
     //   printf("1");
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
    printf("前序输入字符串 .代表空值\n");
    T = createBT();
    printf("建树成功\n");
    printf("\n前序遍历\n");
    
    pre_order(T);
    printf("\n中序遍历\n");

    mid_order(T);
    printf("\n后序遍历\n");
    
    back_order(T);
    printf("\n");
    
    return 0;
}
