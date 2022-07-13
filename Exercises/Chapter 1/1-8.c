//
// Created by hamza on 13/07/22.
//
#include <stdio.h>

main()
{
  int c,n;
  while((c=getchar())!=EOF)
    if(c=='\n' || c=='\t' || c==' ')
      ++n;

  printf("%d\n",n);
}