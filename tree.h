/*================================================================
*   Copyright (C) 2018 Tencent Technology (Shenzhen) Co., Ltd. All rights reserved.
*   
*   文件名称：tree.h
*   创 建 者：runrunbian
*   创建日期：2018年02月26日 16:02:01
*   描    述：
*
================================================================*/


#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>

typedef struct node
{
    char data;
    struct node *lchild;
    struct node *rchild;
}node, *BiTree;
