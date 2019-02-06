#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>

int resistor_value(char color[10]);
float tolerance(char color_t[10]);

main()
{
    char a;
    label:
    system("cls");
	main_program();
    printf("\n\nRun again?......[Y/N]: ");
    scanf("%s",&a);
    if(a == 'Y' || a == 'y' )
    {
     goto label;
    }

    else
    {
     system("cls");
     exit(0);
    }
    getch();
}

/*Function declaration*/
main_program()
{
    char color1[10],color2[10],color3[10],color4[10],color5[10];
	int a,b,c,z,band;
	float d,e;
	
	printf("\nNo. Of color of your resistor : ");
	scanf("%d",&band);
	
	if(band==4)
	{	
	printf("\nEnter four colors of your resistor (Maintain a space between two color & all in CAPITAL LETTERS ) :\n\n");
	scanf("%s%s%s%s",&color1,&color2,&color3,&color4);
	
	/*CONVERT STRING TO INTEGER*/
	a=resistor_value(color1);
	b=resistor_value(color2);
    c=resistor_value(color3);
	d=tolerance(color4);
	
	z=(10*a+b)*pow(10,c); //CLACULATION
	
	if(z>=1000 && z<1000000)
	{
	z=z/1000;	
	printf("\nYour resistor is %dK%c and %.2f%c tolerance.",z,490,d,37);
	}
	
	else if(z >= 1000000)
	{
	z=z/1000000;	
	printf("\nYour resistor is %dM%c and %.2f%c tolerance.",z,490,d,37);
	}
	
	else
	{
	printf("\nYour resistor is %d%c and %.2f%c tolerance.",z,490,d,37);
	}
	
	}
	
	if(band==5)
	{
	printf("\nEnter five colors of your resistor (Maintain a space between two color & all in CAPITAL LETTERS ) :\n\n");
	scanf("%s%s%s%s%s",&color1,&color2,&color3,&color4,color5);
	
	/*CONVERT STRING TO INTEGER*/
	a=resistor_value(color1);
	b=resistor_value(color2);
    c=resistor_value(color3);
	d=resistor_value(color4);
	e=tolerance(color5);
	
	z=(100*a+10*b+c)*pow(10,d); //CLACULATION
	
	if(z>=1000 && z<1000000)
	{
	z=z/1000;	
	printf("\nYour resistor is %dK%c and %.2f%c tolerance.",z,490,e,37);
	}
	
	else if(z >= 1000000)
	{
	z=z/1000000;	
	printf("\nYour resistor is %dM%c and %.2f%c tolerance.",z,490,e,37);
	}
	
	else
	{
	printf("\nYour resistor is %d%c and %.2f%c tolerance.",z,490,e,37);	
	}
	
	}
	
}

/*Function declaration*/
int resistor_value(char color[10])
{
	int color_value;
	
	if (strcmp(color,"BLACK")==0)
 	{
 		color_value=0;
	}
	
	else if (strcmp(color,"BROWN")==0)
 	{
 		color_value=1;
	}
	
	else if (strcmp(color,"RED")==0)
 	{
 		color_value=2;
	}
	
	else if (strcmp(color,"ORANGE")==0)
 	{
 		color_value=3;
	}
	
	else if (strcmp(color,"YELLOW")==0)
 	{
 		color_value=4;
	}
	
	else if (strcmp(color,"GREEN")==0)
 	{
 		color_value=5;
	}
	
	else if (strcmp(color,"BLUE")==0)
 	{
 		color_value=6;
	}
	
	else if (strcmp(color,"VIOLET")==0)
 	{
 		color_value=7;
	}
	
	else if (strcmp(color,"GREY")==0)
 	{
 		color_value=8;
	}
	
	else if (strcmp(color,"WHITE")==0)
 	{
 		color_value=9;
	}
	
	return color_value;
}

/*Function declaration*/

float tolerance(char color_t[10])
{
	float color_tol;
	
	if (strcmp(color_t,"BROWN")==0)
 	{
 		color_tol=1.0;
	}
	
	else if (strcmp(color_t,"RED")==0)
 	{
 		color_tol=2.0;
	}
	
	else if (strcmp(color_t,"GREEN")==0)
 	{
 		color_tol=0.5;
	}
	
	else if (strcmp(color_t,"BLUE")==0)
 	{
 		color_tol=0.25;
	}
	
	else if (strcmp(color_t,"VIOLET")==0)
 	{
 		color_tol=0.10;
	}
	
	else if (strcmp(color_t,"GREY")==0)
 	{
 		color_tol=0.05;
	}
	
	else if (strcmp(color_t,"GOLD")==0)
 	{
 		color_tol=5.0;
	}
	
	else if (strcmp(color_t,"SILVER")==0)
 	{
 		color_tol=10.0;
	}
	
	return color_tol;
}

// Developed by Amit Sen
