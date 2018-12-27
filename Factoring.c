#include <stdio.h>
int main()

{
    int number, i, h, p, ilan;
	
	for(p=10; p = 1; ++p) {
	ilan=0;
    printf("Enter an integer: ");
    scanf("%d",&number);
	
	if (number >= 0){
		 printf("Factors of %d are: ", number);
    for(i=1; i <= number; ++i)
    {
        if (number%i == 0)
        {
            printf("%d ",i);
            ++ilan;
        }
    }
	printf("\n%d has %d factors", number, ilan);
	}
	if (number <0){
		 printf("Factors of %d are: ", number);
    for(h=-1; h>= number; --h)
    {
        if (number%h == 0)
        {
            printf("%d ",h);
            ++ilan;
        }
    }
	printf("\n%d has %d factors", number, ilan);
	}
	printf("\n\n");
	getchar();  
};
    return 0;
}
