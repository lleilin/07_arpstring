#include <stdio.h>
#include <string.h>

double average(int*, int);
void copy(int*, int*, int);
int slength(char*);

int main() {
  int a[] = {1, 2, 3};
  printf("Average of array a: %f\n", average(a, 3));

  int b[3];
  printf("a[0]: %d\n",a[0]);
  printf("a[1]: %d\n",a[1]);
  printf("a[2]: %d\n",a[2]);
  printf("b[0]: %d\n",b[0]);
  printf("b[1]: %d\n",b[1]);
  printf("b[2]: %d\n",b[2]);
  copy(a, b, 3);
  printf("COPY A to B\n");
  printf("b[0]: %d\n",b[0]);
  printf("b[1]: %d\n",b[1]);
  printf("b[2]: %d\n\n",b[2]);

  char str[] = "School";
  printf("Length of \"%s\": %d \n\n",str ,slength(str));

  char sa[] = "apple";
  char sb[] = "banana";
  printf("sa: %s\n",sa);
  printf("sb: %s\n",sb);
  printf("Copy sb to sa\n");
  strcpy(sa, sb);
  printf("sa: %s\n",sa);
  printf("sb: %s\n\n",sb);

  char sc[] = "apple";
  char sd[] = "banana";
  printf("sc: %s\n",sc);
  printf("sd: %s\n",sd);
  printf("Cat sd to sc\n");
  strcat(sc, sd);
  printf("sc: %s\n",sc);
  printf("sd: %s\n\n",sd);

  char se[] = "apple";
  char sf[] = "banana";
  printf("se: %s\n",se);
  printf("sf: %s\n",sf);
  printf("Compare sf to se\n");
  printf("%d\n\n", strcmp(se, sf) );

  char sg[] = "apple";
  printf("sg: %s\n",sg);
  printf("returns pointer to the first l of sg\n");
  printf("%s\n",strchr(sg, 'l'));

  return 0;
}

double average(int* ip, int i) {
  int j;
  double sum = 0.0;
  for (j = 0; j < i; j++) {
    sum += *(ip + j);
  }
  return sum / i;
}

void copy(int* ap, int* bp, int i) {
  int j;
  for (j = 0; j < i; j++) {
    *(bp + j) = *(ap + j);
  }

}

int slength(char* sp) {
  int count = 0;
  while (*(sp + count)) {
    count++;
  }
  return count;
}
