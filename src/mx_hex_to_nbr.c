#include "../inc/libmx.h"

unsigned long mx_hex_to_nbr(const char *hex) {
      unsigned long result = 0;
      for (int i = 0; hex[i] != '\0'; i++)
      {
            int add = hex[i] >= '0' && hex[i] <= '9' ? hex[i] - 48 :
                        hex[i] >= 65 && hex[i] <= 70 ? hex[i] - 55 :
                        hex[i] >= 97 && hex[i] <= 102 ? hex[i] - 87 : 0;
            result *= 16;
            result += add;
      }
      return result;
}

