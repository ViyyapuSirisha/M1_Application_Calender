
int main(void)
{
//  int y3 = 2000;
//  int y3 = 1946;
//  printYear(y3);
  int y;
  int quit=0;

  do
    {
        printf("Please enter which Year to Print For You (0 to quit): ");
        scanf("%d",&y);
        printf("\n");

        if(y==0)
            quit = 1;
        else
            printYear(y);

    }while(!quit);

  return 0;
}
