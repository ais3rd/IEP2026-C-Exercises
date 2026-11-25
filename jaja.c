#include <stdio.h>

int main(void){

int i;
int array[5];

/* initialization of array */
for( i = 0; i < 5; i++ ) {

array[i] = 10 * ( i + 1 );
}

for( i = 0; i < 5; i++ ) {
printf(" data[%d] =\t%d.\n", i, array[i]);
}

// descending
for( i = 0; i < 5; i++ ) {
        array[i] = 10 * ( 5 - i );
}
for( i = 0; i < 5; i++ ) {

printf(" data[%d] =\t%d.\n", i, array[i]);

// sort using bubble sort


}
return 0;

}