#include <stdio.h>
#include<inttypes.h>
#include<stdlib.h>
#include<stdbool.h>

/// @brief Принимает число и определяет является ли оно простым исползуя while
/// @param Исходное число
/// @return 1 если число простое иначе 0
bool simple_number_while(int);

/// @brief Принимает число и определяет является ли оно простым используя for
/// @param Исходное число
/// @return 1 если число простое иначе 0
bool simple_number_for(int);



int get_int_from_user(void);

int main()
{
  int value = get_int_from_user();
  bool is_simple_while =  simple_while_get(value);
  bool is_simple_for = simple_for_get(value);
  printf("value: %d\n  is_simple_while: %d\n  is_simple_for: %d\n", value, is_simple_while, is_simple_for);

  return 0;
}


int get_int_from_user(void)
{
  int val;
  printf("Введите число: ");
  scanf("%d", &val);
  return val;
}


bool simple_while_get(int val)
{
  if(val == 1 || val == 0)
  {
    return false;
  }
  bool is_simple = true;
  int i = 2;
  while(i < val)
  {
    if(val % i == 0){
      is_simple = false;
      break;
    }
    i += 1;
  }
  return is_simple;
}


bool simple_for_get(int val)
{
  bool is_simple = true;
  if (val == 1 || val == 0)
  {
    return false;
  }
  for(int i = 2; i < val; i++)
  {
    if(val % i == 0){
      is_simple = false;
      break;
    }
  }

  return is_simple;
}