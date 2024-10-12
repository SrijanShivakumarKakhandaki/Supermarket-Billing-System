// Program to implement a billing system for a supermarket

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <time.h>

int main ()

{	
	int i;
	float disctot = 0, total = 0;
	char y, n, name, skipsection;
	int section;
	float fruitcount, fruitstore, fruitquantity, fruittotal1 = 0, fruittotal2 = 0, fruittotal3 = 0, fruittotal4 = 0, fruittot = 0;
	float vegetablecount, vegetablestore, vegetablequantity, vegetotal1 = 0, vegetotal2 = 0, vegetotal3 = 0, vegetotal4 = 0, vegetot = 0;
	float meatcount, meatstore, meatquantity, meattotal1 = 0, meattotal2 = 0, meattotal3 = 0, meattotal4 = 0, meattot = 0;
	float dairycount, dairystore, dairyquantity, dairytotal1 = 0, dairytotal2 = 0, dairytotal3 = 0, dairytotal4 = 0, dairytot = 0;
	printf ("\033[0;33m");
	printf ("====== WELCOME TO SRIJAN'S SUPERMARKET ====== \n \n");
	time_t tm;
    time(&tm);
    printf("%s", ctime(&tm));
	printf ("\033[0;37m");
	
	for (i=0; i<4; i++)
	{	
		printf ("\033[0;31m");
		printf ("\n");
		printf ("Choose a grocery section you would like to proceed with: \n \n");
		printf ("\033[0;37m");
		printf ("1: Fruits \n2: Vegetables \n3: Frozen Meat \n4: Dairy Products \n \n");
		scanf ("%d", &section);
		printf ("\n");
		
		switch (section)
		
		{
			case 1:
				printf ("These are the items that are freshly available at the fruit section: \n \n");
				printf ("1. Mangoes \t----- Rs. 450/dozen \n2. Bananas \t----- Rs.150/dozen \n3. Apples \t----- Rs.120/dozen \n4. Grapes \t----- Rs.100/kg \n \n");
				printf ("How many types of fruits would you like to purchase from this section? ");
				scanf ("%f", &fruitcount);
				printf ("\n");
				
				for (i=0; i<fruitcount; i++)
				{
					printf ("Enter the serial number of the fruit: ");
					scanf ("%f", &fruitstore);
					printf ("Enter the quantity in numbers: ");
					scanf ("%f", &fruitquantity);
					printf ("\n");
					if (fruitstore == 1)
					{
						fruittotal1 = 450 * fruitquantity; 
					}
					if (fruitstore == 2)
					{
						fruittotal2 = 150 * fruitquantity; 
					}
					if (fruitstore == 3)
					{
						fruittotal3 = 120 * fruitquantity; 
					}
					if (fruitstore == 4)
					{
						fruittotal4 = 100 * fruitquantity; 
					}
				}
					fruittot = fruittot + fruittotal1 + fruittotal2 + fruittotal3 + fruittotal4;
					printf ("\033[0;32m");
					printf ("The amount due for the fruit section is Rs.%.2f \n \n", fruittot);
					printf ("\033[0;37m");
					
				printf ("Do you want to proceed to other grocery sections? [y/n] ");
				scanf ("%s", &skipsection);
				
				if (skipsection == 'n')
				{
				total = fruittot + vegetot + meattot + dairytot;
				disctot = total * 5/100 ;
				disctot = total - disctot;
				printf ("\n");
				printf ("\033[0;33m");
				printf("\t SRIJAN'S SUPERMARKET \n");
    			printf("\t---------------------- \n");
    			printf ("\033[0;37m");
    			printf("\n");
    			printf ("\033[0;32m");
    			printf ("Your Total bill amount is Rs.%.2f \n \n", total);
    			printf ("A five percent discount awaits you as this store has newly been opened \n \n");
    			printf ("\033[0;33m");
    			printf ("Your total payable amount after discount is Rs.%.2f \n \n", disctot);
    			printf ("\033[0;32m");
    			printf ("%s", "Thank you for shopping with us! \n \n");
    			printf ("%s", "Have a great day ahead!");
    			printf ("\033[0;37m");
    			printf("\n");
    			exit (0);
				}
				
				break;
				
				
			case 2: 
				printf ("These are the items that are freshly available at the vegetable section: \n \n");
				printf ("1. Onions \t----- Rs.140/kg \n2. Tomatoes \t----- Rs.120/kg \n3. Carrots \t----- Rs.50/kg \n4. Potatoes \t----- Rs.30/kg \n \n");
				printf ("How many types of vegetables would you like to purchase from this section? ");
				scanf ("%f", &vegetablecount);
				printf ("\n");
				
				for (i=0; i<vegetablecount; i++)
				{
					printf ("Enter the serial number of the vegetable: ");
					scanf ("%f", &vegetablestore);
					printf ("Enter the quantity in numbers: ");
					scanf ("%f", &vegetablequantity);
					printf ("\n");
					if (vegetablestore == 1)
					{
						vegetotal1 = 140 * vegetablequantity; 
					}
					if (vegetablestore == 2)
					{
						vegetotal2 = 120 * vegetablequantity; 
					}
					if (vegetablestore == 3)
					{
						vegetotal3 = 50 * vegetablequantity; 
					}
					if (vegetablestore == 4)
					{
						vegetotal4 = 30 * vegetablequantity; 
					}
				}
					vegetot = vegetotal1 + vegetotal2 + vegetotal3 + vegetotal4;
					printf ("\033[0;32m");
					printf ("The amount due for the vegetable section is Rs.%.2f \n \n", vegetot);
					printf ("\033[0;37m");
				
				printf ("Do you want to proceed to other sections? [y/n] ");
				scanf ("%s", &skipsection);
				
				if (skipsection == 'n')
				{
				total = fruittot + vegetot + meattot + dairytot;
				disctot = total * 5/100 ;
				disctot = total - disctot;
				printf ("\n");
				printf ("\033[0;33m");
				printf("\t SRIJAN'S SUPERMARKET \n");
    			printf("\t---------------------- \n");
    			printf ("\033[0;37m");
    			printf("\n");
    			printf ("\033[0;32m");
    			printf ("Your Total bill amount is Rs.%.2f \n \n", total);
    			printf ("A five percent discount awaits you as this store has newly been opened \n \n");
    			printf ("\033[0;33m");
    			printf ("Your total payable amount after discount is Rs.%.2f \n \n", disctot);
    			printf ("\033[0;32m");
    			printf ("%s", "Thank you for shopping with us! \n \n");
    			printf ("%s", "Have a great day ahead!");
    			printf ("\033[0;37m");
    			printf("\n");
    			exit (0);
				}
		
				break;
				
			case 3:
				printf ("These are the items that are freshly available at the meat section: \n \n");
				printf ("1. Chicken Thighs \t----- Rs.500/kg \n2. Pomfret Fish \t----- Rs.750/piece \n3. Whiteleg Shrimp \t----- Rs.600/kg \n4. Maine Lobster \t----- Rs.1200/piece \n \n");
				printf ("How many types of meat would you like to purchase from this section? ");
				scanf ("%f", &meatcount);
				printf ("\n");
				
				for (i=0; i<meatcount; i++)
				{
					printf ("Enter the serial number of the meat: ");
					scanf ("%f", &meatstore);
					printf ("Enter the quantity in numbers: ");
					scanf ("%f", &meatquantity);
					printf ("\n");
					if (meatstore == 1)
					{
						meattotal1 = 500 * meatquantity; 
					}
					if (meatstore == 2)
					{
						meattotal2 = 750 * meatquantity; 
					}
					if (meatstore == 3)
					{
						meattotal3 = 600 * meatquantity; 
					}
					if (meatstore == 4)
					{
						meattotal4 = 1200 * meatquantity; 
					}
				}
					meattot = meattotal1 + meattotal2 + meattotal3 + meattotal4;
					printf ("\033[0;32m");
					printf ("The amount due for the meat section is Rs.%.2f \n \n", meattot);
					printf ("\033[0;37m");
					
				printf ("Do you want to proceed to other grocery sections? [y/n] ");
				scanf ("%s", &skipsection);
				
				if (skipsection == 'n')
				{
				total = fruittot + vegetot + meattot + dairytot;
				disctot = total * 5/100 ;
				disctot = total - disctot;
				printf ("\n");
				printf ("\033[0;33m");
				printf("\t SRIJAN'S SUPERMARKET \n");
    			printf("\t---------------------- \n");
    			printf ("\033[0;37m");
    			printf("\n");
    			printf ("\033[0;32m");
    			printf ("Your Total bill amount is Rs.%.2f \n \n", total);
    			printf ("A five percent discount awaits you as this store has newly been opened \n \n");
    			printf ("\033[0;33m");
    			printf ("Your total payable amount after discount is Rs.%.2f \n \n", disctot);
    			printf ("\033[0;32m");
    			printf ("%s", "Thank you for shopping with us! \n \n");
    			printf ("%s", "Have a great day ahead!");
    			printf ("\033[0;37m");
    			printf("\n");
    			exit (0);
				}
				
				break;
				
			case 4:
				printf ("These are the items that are freshly available at the dairy section: \n \n");
				printf ("1. Milk \t----- Rs.30/ltr \n2. Cheese \t----- Rs.50/pack \n3. Yogurt \t----- Rs.40/piece \n4. Butter \t----- Rs.100/pack \n \n");
				printf ("How many types of dairy products would you like to purchase from this section? ");
				scanf ("%f", &dairycount);
				printf ("\n");
				
				for (i=0; i<dairycount; i++)
				{
					printf ("Enter the serial number of the dairy product: ");
					scanf ("%f", &dairystore);
					printf ("Enter the quantity in numbers: ");
					scanf ("%f", &dairyquantity);
					printf ("\n");
					if (dairystore == 1)
					{
						dairytotal1 = 30 * dairyquantity; 
					}
					if (dairystore == 2)
					{
						dairytotal2 = 50 * dairyquantity; 
					}
					if (dairystore == 3)
					{
						dairytotal3 = 40 * dairyquantity; 
					}
					if (dairystore == 4)
					{
						dairytotal4 = 100 * dairyquantity; 
					}
				}
					dairytot = dairytotal1 + dairytotal2 + dairytotal3 + dairytotal4;
					printf ("\033[0;32m");
					printf ("The amount due for the dairy product section is Rs.%.2f \n \n", dairytot);
					printf ("\033[0;37m");
					
				printf ("Do you want to proceed to other grocery sections? [y/n] ");
				scanf ("%s", &skipsection);
				
				if (skipsection == 'n')
				{
				total = fruittot + vegetot + meattot + dairytot;
				disctot = total * 5/100 ;
				disctot = total - disctot;
				printf ("\n");
				printf ("\033[0;33m");
				printf("\t SRIJAN'S SUPERMARKET \n");
    			printf("\t---------------------- \n");
    			printf ("\033[0;37m");
    			printf("\n");
    			printf ("\033[0;32m");
    			printf ("Your Total bill amount is Rs.%.2f \n \n", total);
    			printf ("A five percent discount awaits you as this store has newly been opened \n \n");
    			printf ("\033[0;33m");
    			printf ("Your total payable amount after discount is Rs.%.2f \n \n", disctot);
    			printf ("\033[0;32m");
    			printf ("%s", "Thank you for shopping with us! \n \n");
    			printf ("%s", "Have a great day ahead!");
    			printf ("\033[0;37m");
    			printf("\n");
    			exit (0);
				}
				
				break;
				
				default:
				printf ("Sorry, this section does not exist in our supermarket! \n"); 
			
			}    
		
	}
	
				total = fruittot + vegetot + meattot + dairytot;
				disctot = total * 5/100 ;
				disctot = total - disctot;
				printf ("\n");
				printf ("\033[0;33m");
				printf("\t SRIJAN'S SUPERMARKET \n");
    			printf("\t---------------------- \n");
    			printf ("\033[0;37m");
    			printf("\n");
    			printf ("\033[0;32m");
    			printf ("Your Total bill amount is Rs.%.2f \n \n", total);
    			printf ("A five percent discount awaits you as this store has newly been opened \n \n");
    			printf ("\033[0;33m");
    			printf ("Your total payable amount after discount is Rs.%.2f \n \n", disctot);
    			printf ("\033[0;32m");
    			printf ("%s", "Thank you for shopping with us! \n \n");
    			printf ("%s", "Have a great day ahead!");
    			printf ("\033[0;37m");
    			printf("\n");
    			exit (0);
				
		
		return 0;	
    }

	

