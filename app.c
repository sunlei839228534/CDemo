#include <stdio.h>

int main()
{
  int price = 0, amount = 100;
  printf("请输入价格:");
  scanf("%d", &price);

  printf("请输入票值:");
  scanf("%d", &amount);

  printf("价格为 %d", amount - price);
}