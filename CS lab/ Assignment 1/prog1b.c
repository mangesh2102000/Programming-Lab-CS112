// Name of coder: Mangesh Chandrawanshi
// Roll No: 1801CS16
// Date Created: 15 Jan 2019
// Program to find out which mall one should go to, to avail maximum profit.

#include <stdio.h>

void main()
{
	int a, b, c, d;

	// Prompt user for input
	printf("Enter the number of items to be bought for Jam, Toothpaste, Juice and Nutella: ");
	scanf("%d %d %d %d", &a, &b, &c, &d);

	/* Cost_prices
	
        Product      Maxmall     Minmall
        Nutella(d)     55          20
	Jam(a)	       20          35
	Juice(c)       45          25
	Toothpaste(b)  30          40
        Jacket         130         150

	*/
	
	// Calculation of profit percentage for minmall	
	int paid_price_minmall = a*35 + b*40 + c*25 + d*20;
	int price_of_free_items_minmall = 0; 

 	if (d >= 3)
	{
		price_of_free_items_minmall += 1*40;
	}
	if (a >= 2 && c >= 1 && b >= 1)
	{
		price_of_free_items_minmall += 1*20;
	}
	if (c >= 3 && d >= 2 && a >= 1)
	{
		price_of_free_items_minmall += 1*150;
	}

	float  profit_percentage_minmall;
	
	profit_percentage_minmall = (((paid_price_minmall + price_of_free_items_minmall) - (paid_price_minmall)) * 100) / (float)paid_price_minmall; 

	// Calculation of profit percentage for maxmall	
	int paid_price_maxmall = a*20 + b*30 + c*45 + d*55;
	int price_of_free_items_maxmall = 0;

	if (a >= 7)
	{
		price_of_free_items_maxmall += 2*45;
	}
	if (b >= 3)
	{
		price_of_free_items_maxmall += 1*55;
	}
	if (d >= 2 && c >= 2)
	{
		price_of_free_items_maxmall += 1*130;
	}

	
	float  profit_percentage_maxmall;
	
	profit_percentage_maxmall = (((paid_price_maxmall + price_of_free_items_maxmall) - (paid_price_maxmall)) * 100) / (float)paid_price_maxmall;

	// Output to the screen	
	printf("\nprofitPercentage for MinMall is %f%%\n", profit_percentage_minmall);
	printf("Paid price for MinMall is Rs %d\n", paid_price_minmall);   

	printf("\nprofitPercentage for MaxMall is %f%%\n", profit_percentage_maxmall);
	printf("Paid price for MaxMall is Rs %d\n", paid_price_maxmall);

	if (profit_percentage_maxmall > profit_percentage_minmall)
	{
		printf("\nSo, MaxMall will be more profitable\n");
	}
	else if (profit_percentage_maxmall < profit_percentage_minmall)
	{
		printf("\nSo, MinMall will be more profitable\n");
	}
	else 
	{	
		if (paid_price_minmall > paid_price_maxmall)
		{
			printf("\nSo, MaxMall will be more profitable\n");
		}
		else if (paid_price_minmall < paid_price_maxmall)
		{
			printf("\nSo, MinMall will be more profitable\n");
		}
		else
		{	
			printf("\nSo, Any mall can be selected\n");
		}
	}

}
	
