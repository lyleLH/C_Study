//
//  float01.c
//  C_Study
//
//  Created by lyle on 2017/3/1.
//  Copyright © 2017年 lyleKP. All rights reserved.
//

#include "float01.h"


void floatSample01() {
    int na,nb,nc;
    int sum;
    double ave;
    puts("请输入一个整数:");
    printf("整数A:");scanf("%d",&na);
    printf("整数B:"); scanf("%d",&nb);
    printf("整数C:");scanf("%d",&nc);
    
    sum = na + nb + nc;
    ave = (double)sum/3;
    
    printf("他们的合集值是%5d。\n",sum);
    printf("它们的平均值是%5.1f。\n",ave);
    
    
}

/*
 输入输出样例：
 
 整数A:1
 整数B:3
 整数C:2
 他们的合集值是    6。  //注意输出结果 %5d 至少显示5位整数，不足5位 用空格代替了
 它们的平均值是  2.0。//至少显示5位整数，但是小数点后只显示1位u
 Program ended with exit code: 0
 
 */
