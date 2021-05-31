/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
int main()
{ int note50,note20,note10,note5,note2,note1,amount;
  scanf("%d",&amount);
 note50=note20=note10=note5=note2=note1=0;
 if(amount>=50)
 {
     note50=(int)amount/50;
     amount=(int)amount-(note50*50);
 }
 if(amount>=20)
 {
     note20=(int)amount/20;
     amount=(int)amount-(note20*20);
 }
 if(amount>=10)
 {
     note10=(int)amount/10;
     amount=(int)amount-(note10*10);
 }
 if(amount>=5)
 {
     note5=(int)amount/5;
     amount=(int)amount-(note5*5);
 }
 if(amount>=2)
 {
     note2=(int)amount/2;
     amount=(int)amount-(note2*2);
 }
 if(amount>=1)
 note1=amount;
 printf("50:%d\n20:%d\n10:%d\n5:%d\n2:%d\n1:%d",note50,note20,note10,note5,note2,note1);

    return 0;
}
