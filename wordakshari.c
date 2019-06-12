/*wordakshari*/
#include<stdio.h>
#include<string.h>
int main()
{
  char a[50][50];
  int i,j,f[50],n=0;
  for(i=0;i<50;i++)
  {
    scanf("%s",a[i]);
    f[i]=0;
    n++;
    if(!strcmp(a[i],"####"))
      break;
  }
  print("%s\n",a[0]);
  f[0]=1;
  i=0;
  while(i<n)
  {
    for(j=1;j<n;j++)
    {
      if(f[i]=0)
      {
        if(a[i][strlen(a[i]-1)==a[j][0])
        {
          printf("%s\n",a[j]);
          f[j]=1;
          break;
        }
      }
    }
    i=j;
  }
  return 0;
}
   
