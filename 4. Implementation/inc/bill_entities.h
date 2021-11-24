/**
 * @file bill_entities.h
 * @author Aisha
 * @brief Bill entities structure definition
 * @version 0.1
 * @date 2021-11-20
 * 
 * @copyright Copyright (c) 2021
 * 
 * 
 */

#ifndef __BILL_ENTITIES_H__
#define __BILL_ENTITIES_H__


#include "math.h"

typedef struct entity_item{
char item[100];					/**< Item name */
	float price;				/**< Item price */
	float qty;					/**< Quantity of item */
}items;

typedef struct entity_orders{
	char customer[100];			/**< Customer Name */
	char date[30];			 	/**< Date */
	int numOfitems;				/**< Number of item buyed by customer */
    items itm[50];				/** < Item structure to store item details */
}orders;

#endif //#ifndef BILL_ENTITIES