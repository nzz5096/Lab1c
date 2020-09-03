// Author: Nasser Zaher nzz5096@psu.edu
//Collaborator: Emma Mayhan edm5255@psu.edu
//Collaborator: Kate Acosta kaa5772@psu.edu
//Collaborator: Sapna Nattuvetty ssn5171@psu.edu

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int main(void) {
  char* celsius = readline("Enter temperature in Celsius: \n");
  double fahrenheit = atof(celsius);
  fahrenheit = ((int) celsius*9/5 + 32);
  printf("%f° in Celsius is equivalent to %f° Fahrenheit.", atof(celsius), fahrenheit);

}
