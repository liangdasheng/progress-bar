#include<stdio.h>
#include<unistd.h>

int main()
{
  char split[4]= {'-','/','|','\'};
  char buf[1024] = {0};
  int i = 0;
  for(; i < 100; ++i)
  {
    buf[i] = '#';
    printf("[%d%%][%c][%s]\r",i,split[i%4],buf);
    fflush(stdout);
    usleep(1000*1000);
  }
  return 0;
}
