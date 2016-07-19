//
//  main.m
//  C_Study
//
//  Created by lyleKP on 16/7/19.
//  Copyright © 2016年 lyleKP. All rights reserved.
//

#include <stdio.h>

int main(void)

{
    

    
#if 0
    /**
     *  例1
     */
    int add = 0x123456;  //整数变量add的值是0x123456，整数变量add的地址是&add --0x00007fff5fbff808（ po &add -- 0x00007fff5fbff808）
    
    int * p = (int*)add;//将整型变量add的值转换为整形指针变量(（int*）类型)的值, po (int*)add -- 0x0000000000123456
    //整形指针变量p的值为0x0000000000123456,整形指针变量p的地址&p 为另一个地址 (po &p -- 0x00007fff5fbff800)
    
    
    /**
     *  例2
     */
    char ch = 'a';
    
    int a = (int)ch;
    
    printf("%d %c\n", a, ch);
    
    
    
    /**
     *  例3
     */
    char* str = "ABCDEFGHIJKL";
    
    int* pInt = (int*) str;
    
    printf("%c\n%c\n",*(str+1),*(char *)(pInt+1));

 #endif

    return 0;
    
}