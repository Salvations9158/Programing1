#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void print_product(struct PRODUCT product);

struct PRODUCT {
	char name[20];
	int price;
	int stock;
};

void pa10_08() {
	struct PRODUCT product;

	printf("제품명? ");
	scanf("%s", product.name);
	printf("가격? ");
	scanf("%d", &product.price);
	printf("재고? ");
	scanf("%d", &product.stock);

	print_product(product);
}

void print_product(struct PRODUCT product) {
	printf("[%s %d원 재고:%d]", product.name, product.price, product.stock);
}