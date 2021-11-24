#include "../inc/bill_operations.h"

float total_bill(float qty, float price){
    if( qty <= 0|| price <=0)
    return 0;
    float total=0;
        total = qty * price;
        return total;        
    
}

float net_total(float total){
    if(total <= 0)
    return 0;
    float dis = 0.1 * total;
    total = total - dis;
    return total;
}

float grand_total(float net_total){
    if( net_total <= 0)
    return 0;
    float gst = 0.18 * net_total;
    float grand_total = net_total + gst;
    return grand_total;
}