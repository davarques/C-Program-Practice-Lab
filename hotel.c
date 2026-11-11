#include <stdio.h>

#define MAX_BRAND_LENGTH 50

typedef struct {
        int id;
        char brand[MAX_BRAND_LENGTH];
        float price;
    } tHotel;

int main() {

    tHotel hotel;

    printf("Enter id:\n");
    scanf("%d", &hotel.id);

    printf("Enter brand:\n");
    scanf("%s", hotel.brand);

    printf("Enter price:\n");
    scanf("%f", &hotel.price);

    printf("Id: %d ", hotel.id);
    printf("Brand: %s ", hotel.brand);
    printf("Price: %.2f", hotel.price);

    return 0;
}
