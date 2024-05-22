#include<stdio.h>
#include<conio.h>
void main()
{
  float q,b,in,sf;
  printf("enter the buying price : "); 
  scanf("%f", &b); 
  printf("buying quantity(units) : ");
  scanf("%f", &q);
  in=(b*q); //actual amount
  sf=in*0.015/100;
    if(in>=0 && in <=2500){
    printf("payable amount is : Rs %f", in+10+25+sf);
    }else if(in>=2501 &&in<=50000.00){ 
    printf("payable amount is : Rs %f" , in+(in*0.4/100)+25+sf);
    }else if(in>=50001 &&in<=5000000){
    printf("payable amount is : Rs %f" , in+(in*0.37/100)+25+sf);
    }else if(in>=5000001 &&in<=2000000){
    printf("payable amount is :Rs %f" , in+(in*0.34/100)+25+sf);
    }else if(in>=2000001 &&in<=10000000){
    printf("payable amount is : Rs %f" , in+(in*0.30/100)+25+sf);
    }else {
    printf("payable amount is : Rs %f" , in+(in*0.27/100)+25+sf);
    }
  printf("\n\n_________charges detail_________");
  if(in>=0 && in <=2500){
    printf("\n\nBroker commission is : 10");
    }else if(in>=2501 &&in<=50000.00){ 
    printf("\n\nBroker commission is : %f" ,in*0.4/100);
    }else if(in>=50001 &&in<=5000000){
    printf("\n\nbroker commission is : %f" , in*0.37/100);
    }else if(in>=5000001 &&in<=2000000){
    printf("\n\nbroker commission is : %f" , in*0.34/100);
    }else if(in>=2000001 &&in<=10000000){
    printf("\n\nBroker commission is : %f" ,in*0.30/100);
    }else {
    printf("\n\nBroker commission is : %f" ,in*0.27/100);
    }
  printf("\nsebon fee: %f", sf);
  printf("\nDP charge : Rs 25");
  if(in>=0 && in <=2500){
    printf("\n\nactual cost price per unit :(in+25+10)/q");
    }else if(in>=2501 &&in<=50000.00){ 
    printf("\n\nactual cost price per unit : %f" ,( in+in*0.4/100+25+sf)/q);
    }else if(in>=50001 &&in<=5000000){
    printf("\n\nactual cost price per unit : %f" , (in*0.37/100+in+sf)/q);
    }else if(in>=5000001 &&in<=2000000){
    printf("\n\nnactual cost price per unit : %f" ,(in+sf+ in*0.34/100)/q);
    }else if(in>=2000001 &&in<=10000000){
    printf("\n\nactual cost price per unit : %f" ,(in+sf+in*0.30/100)/q);
    }else {
    printf("\n\nactual cost price per unit: %f" ,(in+sf+in*0.27/100)/q);
    }
  printf("\n\n __________Thank you__________\n\n");
    return ;
}