/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int
main ()
{
  int NumberOfHours, InspectionFee = 5000;

  float CostOfParts, TotalCharge = 0.0;

  //prompting user to enter cost of parts and number of hours
  //taking Cost of parts and number of hours from keyboard
  printf ("Enter Number of hours:");

  scanf ("%d", &NumberOfHours);


  //checking if number of hour equal to zero

  if (NumberOfHours == 0)
    {
      //assigning total charge to inspection fee
      TotalCharge = InspectionFee;
    }
  else
    {

      //calculating the total Cost and assigning it to Totalcost
      printf ("Enter cost of parts:");
      scanf ("%f", &CostOfParts);


      TotalCharge = (NumberOfHours * 5000) + CostOfParts;

      if (TotalCharge < 20000)
	{

	  //setting total charge to minimum charge

	  TotalCharge = 20000;

	}

    }
  //printing the value of TotalCharge

  printf ("Here Is Your Total Charge: %f", TotalCharge);


  return 0;
}
