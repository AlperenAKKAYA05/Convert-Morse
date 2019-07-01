#include "mors.h"

int Mors()
{
	int kerekterdongu = 0;
	int kelime;
	
	while(kerekterdongu!='/*')	{
    kerekterdongu++;
    scanf("%c",&kelime);
    if(kelime=='a'  || kelime=='A')
    printf(".- ");
    else if (kelime=='b' || kelime=='B')
    printf("-... ");
    else if (kelime=='c' || kelime=='C')
    printf("-.-. ");
    else if (kelime=='d' || kelime=='D')
    printf("-.. ");
    else if (kelime=='e' || kelime=='E')
    printf(". ");
    else if (kelime=='f' || kelime=='F')
    printf("..-. ");
    else if (kelime=='g' || kelime=='G')
    printf("--. ");
    else if (kelime=='h' || kelime=='H')
    printf(".... ");
    else if (kelime=='i' || kelime=='Ý')
    printf(".. ");
    else if (kelime=='j' || kelime=='J')
    printf(".--- ");
    else if (kelime=='k' || kelime=='K')
    printf("-.- ");
    else if (kelime=='l' || kelime=='L')
    printf(".-.. ");
    else if (kelime=='m' || kelime=='M')
    printf("-. ");
    else if (kelime=='n' || kelime=='N')
    printf("-. ");
    else if (kelime=='o' || kelime=='O')
    printf("--- ");
    else if (kelime=='p' || kelime=='P')
    printf(".--. ");
    else if (kelime=='r' || kelime=='R')
    printf("--.- ");
    else if (kelime=='s' || kelime=='S')
    printf(".-. ");
    else if (kelime=='t' || kelime=='T')
    printf("- ");
    else if (kelime=='u' || kelime=='U')
    printf("..- ");
    else if (kelime=='v' || kelime=='V')
    printf("...- ");
    else if (kelime=='w' || kelime=='W')
    printf(".-- ");
    else if (kelime=='x' || kelime=='X')
    printf("-..- ");
    else if (kelime=='y' || kelime=='Y')
    printf("-.-- ");
    else if (kelime=='z' || kelime=='Z')
    printf("--.. ");
    else if (kelime=='0')
    printf("----- ");
    else if (kelime=='1')
    printf(".---- ");
    else if (kelime=='2')
    printf("..--- ");
    else if (kelime=='3')
    printf("...-- ");
    else if (kelime=='4')
    printf("....- ");
    else if (kelime=='5')
    printf("..... ");
    else if (kelime=='6')
    printf("-.... ");
    else if (kelime=='7')
    printf("--... ");
    else if (kelime=='8')
    printf("---.. ");
    else if (kelime=='9')
    printf("----- ");
    else if (kelime==' ')
    printf("    ");
    else
    printf("\n");
    /*
    printf("%c", kelime);
    */
		}
	}
