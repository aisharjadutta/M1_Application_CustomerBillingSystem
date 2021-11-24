#include "../inc/bill_operations.h"

void generate_bill_header(char name[100], time_t date){
	printf("\n\n" );
	printf("\t  GENERAL STORE");
	printf("\n\t ================");
	printf("\n Date: %s", ctime(&date));
	printf("\n Invoice To: %s",name);
	printf("\n");
	printf("=============================\n");
	printf("Items\t\t");
	printf("Qty\t\t");
	printf("Total\t\t");
	printf("\n=============================");
	printf("\n\n");
}
void generate_bill_body(items item){
	printf("%s\t\t",item.item);
	printf("%.2f\t\t", item.qty);
	printf("%.2f\t\t", (item.qty <=0 || item.price <0) ? 0 : item.qty * item.price);
	printf("\n");
    
    
}


void generate_bill_footer(float total){
	printf("\n");
	
	float netTotal = net_total(total);
	float grandTotal = grand_total(netTotal);
	printf("----------------------------------\n");
	printf("Sub Total\t\t\t%.2f",total);
	printf("\nDiscount @10%s\t\t\t%.2f","%",0.1*total);
	printf("\n\t\t\t------");
	printf("\nNet Total\t\t\t%.2f",netTotal);
	printf("\nGST @18%s\t\t\t%.2f","%",0.18*netTotal);
	printf("\n-------------------------------------");
	printf("\n Grand Total\t\t\t%.2f",grandTotal);
	printf("\n-----------------------------------\n");
}