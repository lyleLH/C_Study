//
//  pointer01.c
//  C_Study
//
//  Created by lyle on 2017/3/1.
//  Copyright © 2017年 lyleKP. All rights reserved.
//

#include "pointer01.h"



int myfunc(int a ,int b ) {
    int m , n ;
    if (a > b) {
        m = a ;
        n = b ;
    }else{
        m = b ;
        n = a ;
    }
    int temp = 1;
    int r = 0;
    while (temp!=0) {
        temp = m % n;
        if(temp == 0 ){
            return n;
        }
        m = n ;
        n = temp;
    }
    return r;
}

void pointeSample (){
    
    
    /**
     *  例1
     */
    
    
    /**
     *  整数变量add的值是0x123456，整数变量add的地址是&add
     *  po &add -- 0x00007fff5fbff808
     */
    int add = 0x123456;
    
    /**
     * 将整型变量add的值转换为整形指针变量(（int*）类型)的值
     *po (int*)add -- 0x0000000000123456
     *整形指针变量p的值为0x0000000000123456,整形指针变量p的地址&p 为另一个地址
     *(po &p -- 0x00007fff5fbff800)
     */
    int * p = (int*)add;
    
#if 0
    
    
    /**
     *  例2
     */
    char ch = 'a';
    
    int a = (int)ch;
    
    printf("%d %c\n", a, ch);
    
    /**
     *  例子
     *
     */
#define PI 3.14
    
    int a = PI;
    
    printf("%d\n", a);
    /**
     *  例3
     */
    char* str = "ABCDEFGHIJKL";
    
    int* pInt = (int*) str;
    
    printf("%c\n%c\n",*(str+1),*(char *)(pInt+1));
    
    
    
    //    for(int i = 3 ;i > 1 ; i --) {
    //
    //        printf("1\n");
    //    }
    
    int i = 1;
    
    int a = 2;
    
    a = (i ++);
    
    printf("%d \n", a);
#endif
    
    int a,b;
    printf("输入两个整数a,b:");
    scanf("%d%d",&a,&b);
    printf("a = %d,b = %d\n",a,b);
    printf("%d\n",myfunc(a, b));
    
}
