// Author: Nasser Zaher nzz5096@psu.edu
//Collaborator: Emma Mayhan edm5255@psu.edu
//Collaborator: Kate Acosta kaa5772@psu.edu
//Collaborator: Sapna Nattuvetty ssn5171@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char *ctemp = readline("Enter temperature in celsius: ");
  double celsius, fahrenheit;
  celsius = atof(fahrenheit*1.8) + 32;
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", celsius, fahrenheit);

}
