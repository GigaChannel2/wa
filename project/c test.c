#include <stdio.h>

//Compiler version gcc  6.3.0

int v1;
int v2;
int op;
int totpl;
int totm;
int totp;
int totx;
int i;
char ans;

int main(void)
{
	ans = NULL;
	v1 = NULL;
	v2 = NULL;
	op = NULL;
	totpl = NULL;
	totm = NULL;
	totp = NULL;
	totx = NULL;
	i = NULL;
	calculate();
}
int calculate()
{
  printf("Nominal Pertama: ");
  scanf("%d", &v1);
  totpl=v1;
  totm=v1;
  totp=v1;
  totx=v1;
  printf("Nominal Kedua: ");
  scanf("%d", &v2);
  printf("1.Tambah 2.Kurang 3.Kali 4.Pangkat ");
  scanf("%d", &op);
  for(i=1; i<v2; ++i)
      {
        totp=totp*v1;
      }
  switch(op)
  {
    case 1:
      printf(" Jawabannya Adalah %d", totpl+v2);
      break;
    case 2:
      printf(" Jawabannya Adalah %d", totm-v2);
      break;
    case 3:
      printf(" Jawabannya adalah %d", totx*v2);
      break;
    case 4:
      printf(" Jawabannya adalah %d", totp);
      break;
  }
  printf("\n");
  printf("Continue Calculating? Press Y If Yes, Press Anything If No ");
  getchar();
  ans = getchar();
  while (ans=='y') {
  	return main();
  }
  return 0;
  
}