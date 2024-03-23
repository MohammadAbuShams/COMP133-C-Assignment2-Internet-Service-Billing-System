#include <stdio.h>
#include <stdlib.h>
double round_money(double);// Function to round the digit
void find_charges(double,double*,double*);// Function to calculate the cost and the average
int main()
 {
    int month,year,customer;// Define the month,year and customer
    double hours,cost,avg;// Define hours,cost and the average
    FILE *f_input,*f_output;// Define the files
    f_input=fopen("usage.txt","r");// Open the file in reading mode
    f_output=fopen("charges.txt","w");// Open the file in print mode
    fscanf(f_input,"%d%d",&month,&year);// Read the month and year
    fprintf(f_output,"charges for %d/%d\n",month,year);// Print the month and year
    while (fscanf(f_input,"%d%lf",&customer,&hours)!=EOF)// To read the customer and hours untill end of file
      {
find_charges(hours,&cost,&avg);// Call the function that calculate cost and average
cost=round_money(cost);// Call the function to round the cost
avg=round_money(avg);// Call the function to round the average
fprintf(f_output,"%d %.2f %.2f %.2f\n",customer,hours,cost,avg);// Print customer,hours,cost and average
      }
    fclose(f_input); // Close the input file
    fclose(f_output);// Close the output file
    return 0;
 }
void find_charges(double hours,double*cost,double*avg)
 {
 double additional_hours;// Define additional_hours
    if(hours<=10)// If the number of hours is less than or equal 10
     {
         *cost= 7.99;
         *avg = *cost/hours;
     }
        else// If the first condition doesn't apply
             {
          additional_hours=hours-10;
          *cost = 7.99  + (additional_hours * 1.99);
          *avg = *cost/hours;// Calculate the average
             }
 }
double round_money(double y)
      {
    int v;
    v = (y*100)+0.5;// Rounding process
    return v/100.0;
      }
     // The end of the programme
     // Mohammad Abu Shams
     //1200549
