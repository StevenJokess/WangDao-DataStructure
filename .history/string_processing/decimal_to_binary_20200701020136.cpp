

/*
 * @version:
 * @Author:  StevenJokes https://github.com/StevenJokes
 * @Date: 2020-06-30 23:12:40
 * @LastEditors:  StevenJokes https://github.com/StevenJokes
 * @LastEditTime: 2020-07-01 02:01:35
 * @Description:
 * @TODO::
 * @Reference:
 */
//
// Created by 安炳旭 on 2020-03-02.
//

//递归实现十进制数组转二进制

#include <stdio.h>
void fun(int n){
   if(n/2)
       fun(n/2);
   printf("%d",n%2);
}

int main(){
   fun(128);
}
