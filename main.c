/**
 ******************************************************************************
 * @file           : task 4
 * @author         : ola ahmed
 * @brief          : functions task
 ******************************************************************************
 */

/* ********************** Includes Section Start ********************** */
    #include <stdio.h>
    #include <stdlib.h>
/* ********************** Includes Section End   ********************** */

/* ********************** Macro Section Start ************************* */

/* ********************** Macro Section End   ************************* */

/* ******************* Global Variables Section Start ************** */

/* ********************** Global Variables  Section End   ************* */

/* ********************** Global Decleration Section Start ************* */
unsigned int get_average(void);
        void max_min(void);
/* ********************** Global Decleration  Section End   ************ */

/* ********************** Sub-Program Declerations Section Start ******* */

/* ********************** Sub-Program Declerations Section End ******* */

/* ********************** Sub-Program Section Start ************* */
   int main()
{
    unsigned int ave;
    ave = get_average();
    printf("\n the average is %d",ave);
    max_min();
    return 0;
}
/* ********************** Sub-Program Section End ************* */

/* ********************** Sub-Program definition Section Start ******* */

//number1
unsigned int get_average(void)
    {
        unsigned int number1;
        unsigned int number2;
        float average;
        printf("please enter the first number:");
        scanf("%i",&number1);
        printf("\n please enter the second number:");
        scanf("%i",&number2);
        average=(number1+number2)/2;
        return average ;
    }

//number2

void max_min(void)
    {
    unsigned int first_num,second_num,third_num,fourth_num,max1,max2,min1,min2;
    printf("\n please enter the four numbers:");
        scanf("%i",&first_num);
        scanf("%i",&second_num);
        scanf("%i",&third_num);
        scanf("%i",&fourth_num);

    if(first_num>second_num)
    {
        max1=first_num;
        min1=second_num;
    }
    else if ((first_num==second_num)||(third_num==fourth_num))
    {
        printf("\n there are equal numbers");
    }
    else
    {
        max1=second_num;
        min2=first_num;
    }
    if(third_num>fourth_num)
    {
        max2=third_num;
        min2=fourth_num;
    }
    else
    {
        max2=fourth_num;
        min2=third_num;
    }
    if (max1>max2)
    {
        printf("\n maximum number is %d",max1);
    }
    else
    {
       printf("\n maximum number is %d",max2);
    }
    if (min1>min2)
    {
        printf("\n minimum number is %d",min2);
    }
    else
    {
        printf("\n minimum number is %d",min1);
    }
        return 0 ;
    }

/* ********************** Sub-Program definitions Section End ******* */

/**
 ******************************************************************************
 User          Date                 Brief
 ******************************************************************************
 ola ahmed      1 feb 2024           fourth task 1 ,2
*/
