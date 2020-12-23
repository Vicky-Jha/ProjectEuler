//
//  main.c
//  LongestCollatzSequence
//
//  Created by Vicky_Jha on 12/01/20.
//  Copyright © 2020 test. All rights reserved.
//n → n/2 (n is even)
//n → 3n + 1 (n is odd)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct list
{
    int data,data1;
    struct list *next;
}*head = NULL;

int main(int argc, const char * argv[]) {
    struct list *temp,*q;
    int i,count=1,greater=0;
    unsigned long j;
    for(i=999999 ; i>=2 ; i--){
        count = 1;
        j = i;
        while(j != 1){
        if(j%2 == 0){
            j = j/2;
            count++;
        }
        if(j%2 != 0 && j != 1){
            j = 3*j + 1;
            count++;
        }
    }

        temp = (struct list*)malloc(sizeof(struct list));
        temp -> data = count;
        temp -> data1 = i;
        temp -> next = NULL;
        if(head == NULL)
            head = temp;
        else{
            temp -> next = head;
           
            head  = temp;
        }
        if(temp -> data > greater){
            greater = temp -> data;
            q = temp;
        }
        
    }

//    p = head,*q;
//    while(p != NULL){
//        if(p -> data > greater)
//        {
//            greater = p -> data;
//            q = p;
//        }
//        p = p -> next;
//    }
    printf("%d %d\n",q -> data1,q -> data);
    unsigned long ticks = clock();
    printf("%f\n",(float)ticks/CLOCKS_PER_SEC);
    printf("%lu\n%d\n",ticks,CLOCKS_PER_SEC);
    return 0;
}
