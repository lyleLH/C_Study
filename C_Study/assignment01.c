//
//  assignment01.c
//  C_Study
//
//  Created by lyle on 2017/3/1.
//  Copyright © 2017年 lyleKP. All rights reserved.
//

#include "assignment01.h"

void assignment() {
    //赋值语句具有值判定的功能，左边和右边分别成为左、右操作数
    int x  = 1.25;
    //由于整数x无法保存小数点后面的数值，因此它的值变成了1
    //对赋值语句进行判定的时候，该语句的类型和值与赋值后的左操作数相同
    //赋值表达式 x = 1.25的判定结果与x的类型和值相同，都是int 类型 1
     //具体见以下例子
    int i ;
    int tensu[5];
    int max,min ;
    puts("请输入学生分数");
    for(i = 0 ; i <5;i++){
        printf("%2d号:",i+1);
        scanf("%d",&tensu[i]);
        
        min = max = tensu[0];//比较关键的一句
        for (i = 1; i <5;i ++) {
            if(tensu[i]>max) max = tensu[i];
            if(tensu[i]<min) min = tensu[i];
        }
        printf("最高分:%d\n",max);
        printf("最低分:%d\n",min);
    }
    
    
}
