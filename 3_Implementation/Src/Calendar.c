
int main(void)
{
	int year, daycode, leapyear;
	
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);
	calendar(year, daycode);
	printf("\n");
}
