#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
	//Basic
    char my_char = 'D';
    int my_int = -15;
    unsigned int my_unsigned_int = 5;
    float my_float = 2.58;
    char my_string[20] = "Welcome";

    printf("char: %c\n", my_char);
    printf("int: %d\n", my_int);
    printf("unsigned int: %u\n", my_unsigned_int);
    printf("float: %.4f\n", my_float); // print a float with 4 decimal places
    printf("string: %20s\n", my_string); // print a string in column at width 20

    FILE* fp;
    fp = fopen("text.txt", "w"); // write
    fprintf(fp, "Hello World 2021");
    fprintf(fp, "Data Structures");
    fclose(fp);

    fp = fopen("text.txt", "r"); // read mode
    char str1[20];
    char str2[20];
    int year;
    fscanf(fp, "%s %s %d", str1, str2, &year);
    printf("str1 = %s str2 = %s year = %d\n", str1, str2, year);
    
    // use fgets() to read rest of line "Data Structures"
    char str3[20];
    if (fgets(str3, 20, fp) != NULL)
    {
        printf("str3 = %s\n", str3);
    }
    fclose(fp);

    // char input_string[20];
    // int number;
    // printf("Please input the string: ");
    // scanf("%s", input_string);
    // printf("Please input the number: ");
    // scanf("%d", &number);
    // printf("input_string = %s, number = %d\n", input_string, number);
    
    // sscanf()
    char date[40] = "Tuesday Jan 26";
    char weekday[20], month[20];
    int day;
    sscanf(date, "%s %s %d", weekday, month, &day);
    printf("month = %s, day = %d, weekday = %s\n", month, day, weekday);
    
    // atoi(), atof(), abs()
    char string_to_float[20] = "3.14";
    char string_to_int[20] = "-80";
    float the_float;
    int the_int;
    the_float = atof(string_to_float);
    the_int = atoi(string_to_int);
    the_int = abs(the_int);
    printf("float = %.4f, int = %d\n", the_float, the_int);

    // malloc(), calloc(), realloc(), free()
    int* int_malloc = malloc(5 * sizeof(int));
    int i;
    for (i = 0; i < 5; ++i)
    {
        int_malloc[i] = i;
    }
    for (i = 0; i < 5; ++i)
    {
        printf("int_malloc[%d] = %d\n", i, int_malloc[i]);
    }

    int* int_calloc = (int*)calloc(5, sizeof(int));
    for (i = 0; i < 5; ++i)
    {
        printf("int_calloc[%d] = %d\n", i, int_calloc[i]);
    }

    int_calloc = realloc(int_calloc, 8 * sizeof(int));
    int_calloc[5] = 5;
    int_calloc[6] = 6;
    int_calloc[7] = 7;
    for (i = 0; i < 8; ++i)
    {
        printf("int_calloc[%d] = %d\n", i, int_calloc[i]);
    }

    free(int_malloc);
    free(int_calloc);
    
    // generate a random number from 26-99
    srand(time(0));
    printf("random number = %d\n", 26 + rand()%74);
    printf("random number = %d\n", 26 + rand()%74);
    printf("random number = %d\n", 26 + rand()%74);
    printf("random number = %d\n", 26 + rand()%74);
    printf("random number = %d\n", 26 + rand()%74);
    printf("random number = %d\n", 26 + rand()%74);
    
    char new_string_1[20] = "hello";
    char new_string_2[20]; 
    strcpy(new_string_2, new_string_1);
    strcat(new_string_1, " world");
    printf("new_string_1 = %s\n", new_string_1);
    printf("new_string_2 = %s\n", new_string_2);
    printf("length new_string_2 = %d\n", strlen(new_string_2));
    strcat(new_string_2, " world");
    if (strcmp(new_string_1, new_string_2) == 0)
    {
        printf("These two strings are equal.\n");
    }
    char new_string_3[20] = "abc";
    char new_string_4[20] = "def";
    if (strcmp(new_string_3, new_string_4) == 0)
    {
        printf("These two strings are equal.\n");
    }
    else if (strcmp(new_string_3, new_string_4) < 0)
    {
        printf("string 3 comes before string 4\n");
        exit(0);
    }
    else
    {
        printf("string 3 comes after string 4\n");
    }
    printf("Hello world!!\n");

    return 0;
}
