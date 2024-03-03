/* 10_obfuscated_dweight.c - Demonstrates which spaces are essential in the dweight program */

#include <stdio.h>
int main(void){int length,width,height,volume,weight;length=12;width=10;height=8;volume=height*width*length;weight=(volume+165)/166;printf("Dimensions: %dx%dx%d\n",length,width,height);printf("Volume (cubic inches):%d\n",volume);printf("Dimensional wight (pounds): %d\n",weight);return 0;}

/* 1. The space in #include <stdio.h>
 * 2. The space in declaration (int identifier)
 * 3. Space in sentences for readability
 */