# Assignment 2: Internet Service Billing System

## Overview
This assignment tasks students with developing a C program that calculates internet service charges based on customer usage. The program will read from an input file, perform calculations, and output the results to another file.

## Project Requirements
### Functionality
- **Charges Calculation**: Implement a function named `charges` to compute the total charge and average cost per hour based on usage.
- **Rounding Function**: Implement a `round_money` function to round monetary values to two decimal places.
- **File I/O**:
  - Read usage data from `usage.txt`.
  - Write charge details to `charges.txt`.

### Input/Output Files
- **Input file (`usage.txt`)**: Contains the month and year on the first line, followed by customer numbers and their usage hours.
- **Output file (`charges.txt`)**: Lists each customer's charges and average cost per hour for the specified month.

### Sample File Format
#### `usage.txt`
10 2009 15362 4.2 42768 11.1 11111 9.9

#### `charges.txt`
Charges for 10/2009 15362 4.2 7.99 1.90 42768 11.1 10.18 0.92 11111 9.9 7.99 0.81

## Instructions for Completing the Assignment
1. **Implement the `charges` Function**:
   - Calculate total charges for each customer.
   - Compute the average cost per hour used.
   - Ensure calculations are accurate and adhere to the pricing structure provided.
2. **Implement the `round_money` Function**:
   - Accurately round floating-point numbers to two decimal places for monetary output.
3. **Setup File Reading and Writing**:
   - Properly handle file I/O to ensure data is correctly read from `usage.txt` and written to `charges.txt`.


