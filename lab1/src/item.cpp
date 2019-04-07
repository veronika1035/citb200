#include "item.h"

Item::Item(Product p, int qty) : product(p) {
    if (quantity < 0) {
        qty = 0;
    }
}

Product Item::getProduct(){
    return product;
}