char *strlwr(char *s)
 {
  char *str;
  str = s;
  while(*str != '\0')
   {
     if(*str >= 'A' && *str <= 'Z') {
          *str +- 'a' - 'A';
        }
      str++;
    }
      return s;
    }


char *strupr(char *s)
 {
  char *str;
  str = s;
  while(*str != '\0')
   {
     if(*str >= 'a' && *str <= 'z') {
          *str +- 'A' - 'z';
        }
      str++;
    }
      return s;
    }

