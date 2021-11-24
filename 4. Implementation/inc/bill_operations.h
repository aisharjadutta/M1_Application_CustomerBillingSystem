/**
 * @file bill_operations.h
 * @author Prince
 * @brief Header file for function prototypes
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */
#ifndef __BILL_OPERATIONS_H__
#define __BILL_OPERATIONS_H__

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "time.h"
#include "bill_entities.h"



/**
 * @brief Calculate bill amount for particular item
 * 
 * @param qty represents the quantity of prticular item
 * @param price represents the price of particular item
 * @return Bill amount of particular item
 */
float total_bill(float qty, float price);

/**
 * @brief Calculate Bill amount after applying Discount
 * 
 * @param total  Bill amount without discount
 * @return total bill amount after discount
 */

float net_total(float total);

/**
 * @brief Caculate grand total by adding GST
 * 
 * @param net_total Bill amount before adding Gst
 * @return grand_total after applying GST
 */

float grand_total(float net_total);

/**
 * @brief Generate the bill header
 * 
 * @param name name of the customer
 * @param date date 
 */
void generate_bill_header(char name[100], time_t date);

/**
 * @brief Generate bill body
 * 
 * @param item item structure that contains details about item
 */
void generate_bill_body( items item);

/**
 * @brief Generate bill footer
 * 
 * @param total total amount of bill
 */
void generate_bill_footer(float total);




#endif  /* #define __BILL_OPERATIONS_H__ */