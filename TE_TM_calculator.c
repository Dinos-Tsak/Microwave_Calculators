// TE_TM_calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<stdio.h>
#include <stdlib.h>
#include<math.h>

void bubleshort(int arr[],int total);
void TE_freq(float epsilon, float mi, float width, float hight, int first_rithm );
void TM_freq(float epsilon, float mi, float width, float hight ,int first_rithm );

int main()
{
	float total;
	float first_rithm;
	float width, hight, epsilon, mi ,fc,arr[first_rithm];

	printf("Wavegide dimentions: \n");
	printf("Width = "); scanf("%f", &width);
	printf("Hight = "); scanf(" %f", &hight);

	printf("Electric permittivity = ");
	scanf("%f", &epsilon);
	printf("Magnetic permeability = "); scanf("%f", &mi);
	printf("Inpout how many rithms = "); scanf("%d", &first_rithm);

	TE_freq(epsilon, mi, width, hight,first_rithm);
	TM_freq(epsilon, mi, width, hight,first_rithm);
	arr[total]=fc;
	bubleshort(arr[first_rithm],total);
	system("pause");
	return 0;
}

void TE_freq(float epsilon, float mi, float width, float hight, int first_rithm)
{

	float pol,tot,r1,r2,r3,r2p,r3p,fc;

	float m,n;
	for ( m = 1; m <= first_rithm; m++)
		for( n = 1; n <= first_rithm; n++)
		{
				pol = epsilon * mi;
			r1 = 1 / (2 * pol);
			r2 = m / width; r2p = r2 * r2;
			r3 = n / hight; r3p = r3 * r3;
			tot = r2p + r3p;
			fc = r1 * sqrt(tot);
            
            int total=first_rithm*first_rithm;
            int arr[total];
            arr[total]= fc;
            int out;
            bubleshort(arr[total],total);
            int t;
            for (t=0;t<first_rithm;t++)
            {
            	out=arr[total];
            	printf("fc_%d,%d = %f\n", m, n, out);
			}
			   				
        // return 0;
		             
        }

	
}

void TM_freq(float epsilon, float mi, float width, float hight,int first_rithm)
{
float pol,tot,r1,r2,r3,r2p,r3p,fc;

	int m,n;
	for ( m = 0; m <= first_rithm; m++)
		for( n = 0; n <= first_rithm; n++)
		{
			if (m != 0 && n != 0)
			{
				pol = epsilon * mi;
			r1 = 1 / (2 * pol);
			r2 = m / width; r2p = r2 * r2;
			r3 = n / hight; r3p = r3 * r3;
			tot = r2p + r3p;
			fc = r1 * sqrt(tot);

            } 
			printf("fc_%d,%d = %f\n", m, n, fc);

}
}

void bubleshort(int arr[first_rithm],int total)
{
	
	int i,k,temp;//,*p;
	//p=&fc;
	for (i=1;i<total;i++)
	{
		for (k=total-1;k>=i;k--)
		{
			if (arr[k]<arr[k-1])
			{
				temp=arr[k];
				arr[k]=arr[k-1];
				arr[k-1]=temp;
			}
		}
	}
}
