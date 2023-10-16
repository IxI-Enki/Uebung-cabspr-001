/*------------------------------------------------------------------------------
 *                      HTBLA-Leonding / Class: 3ACIF                           
 *------------------------------------------------------------------------------
 *                      Jan Ritt                                                
 *------------------------------------------------------------------------------
 *  Description:  Program to calculate the volume and base of a quader.
 *----------------------------------------------------------------------------*/
 #include <stdio.h>

int main(void) 
{
	int lenght;
	int width;
	int height;
	int base;
	int coat;
	int volume;
	
	printf("\n Quarderberechner");
	printf("\n ================");
	printf("\nGeben Sie die Laenge Ihres Quaders ein.");
	scanf("%d",&lenght);
	printf("Geben Sie die Breite Ihres Quaders ein.");
	scanf("%d",&width);
	printf("Geben Sie die Hoehe Ihres Quaders ein.");
	scanf("%d",&height);
  printf(" ----------------");
	base = lenght * width;
	printf("\nDie Grundflaeche ihres Quaders ist %d.",base);
	coat = (2*(width+lenght))*height;
	printf("\nDer Mantel ihres Quaders ist %d.",coat);
	volume = lenght * width * height;
	printf("\nDas Volumen ihres Quaders ist %d.",volume);
	printf("\n ----------------");

	return 0;
}
