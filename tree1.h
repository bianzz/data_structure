/*================================================================
*   Copyright (C) 2018 Tencent Technology (Shenzhen) Co., Ltd. All rights reserved.
*   
*   文件名称：tree1.h
*   创 建 者：runrunbian
*   创建日期：2018年02月26日 17:39:48
*   描    述：
*
================================================================*/


#pragma once
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
typedef struct node  
{  
    char data;  
    struct node *lchild;  
    struct node *rchild;  
}node ,*BiTree;
