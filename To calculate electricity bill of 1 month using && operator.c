#include <stdio.h>
 int main()

{
   int custid, unit;
   float chrg, surchrg=0, totalamt,netamt;
   char custnm[50];

   printf("Input Customer ID :");
   scanf("%d",&custid);
   printf("Input the name of the customer :");
   scanf("%s",&custnm);
   printf("Input the unit consumed by the customer : ");
   scanf("%d",&unit);
   if (unit <200 )                /* upto 199	@1.20
                                  200 and above but less than 400	@1.50
                                  400 and above but less than 600	@1.80
                                  600 and above	@2.00*/
   chrg = 1.20;
   else	if (unit>=200 && unit<400)
		chrg = 1.50;
	else if (unit>=400 && unit<600)
			chrg = 1.80;
		else
			chrg = 2.00;
   totalamt= unit*chrg;
   if (totalamt>300)              //If bill exceeds Rs. 400 then a surcharge of 15% will be charged
                                //and the minimum bill should be of Rs. 100/-
   surchrg = totalamt*15/100.0;
   netamt = (totalamt+surchrg)*30.0;
   if (netamt  < 100)
	netamt =100;
   printf("\nElectricity Bill\n");
   printf("Customer IDNO                                                  :%d\n",custid);
   printf("Customer Name                                                  :%s\n",custnm);
   printf("unit Consumed                                                  :%d\n",unit);
   printf("Amount Charges per unit                                        :%.2f\n",chrg,totalamt);
   printf("Surchage Amount                                                :%.2f\n",surchrg);
   printf("Net Amount Paid By the Customer for 1 month having 30 days     :%.2f\n",netamt);

   return 0;
}
