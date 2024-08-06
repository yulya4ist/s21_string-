#include "../s21_string.h"

char *s21_strpbrk(const char *str1, const char *str2) {
  const char *s1, *s2;
  for (s1 = str1; *s1 != '\0'; ++s1) {
    for (s2 = str2; *s2 != '\0'; ++s2) {
      if (*s1 == *s2) return (char *)s1;
    }
  }
  return NULL;
}