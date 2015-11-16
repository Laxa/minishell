#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>

int     main(void)
{
  char  buf[1024];
  char  **test;
  int   i;
  /* int   ret; */
  /* char  *err; */

  /* while (42) */
  /* { */
  /*   fgets(buf, 64, stdin); */
  /*   if (buf[strlen(buf) - 1] == '\n') */
  /*     buf[strlen(buf) - 1] = 0; */
  /*   ret = access(buf, R_OK | F_OK | X_OK); */
  /*   if (ret == 0) */
  /*     printf("path: %s OK\n", buf); */
  /*   else */
  /*   { */
  /*     err = strerror(errno); */
  /*     printf("errno[%d]: %s\n", errno, err); */
  /*   } */
  /* } */
  while (42)
  {
    fgets(buf, 1024, stdin);
    test = my_str_to_wordtab(buf);
    for (i = 0; test[i]; ++i)
    {
      my_putstr(test[i]);
      puts("");
    }
  }
  return (0);
}
