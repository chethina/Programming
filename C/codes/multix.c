#include<stdio.h>

void area_trangle();
void area_rec();
void area_circle();
void circum_c();


int main(){
    int ch;
    while (10)
    {
        printf("\n ");
        printf("---------------------------------------------------------------");
        printf("\n1.Find Area of a Triangle?");
        printf("\n2.Find Area of a Quadrilateral?");
        printf("\n3.Find Area of a Circle?");
        printf("\n4.Find Circumference of a Circle?");
        printf("\nWhich Operation do you want to Perform :  ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch)
        {
            case 1:
            area_trangle();
            break;
            case 2:
            area_rec();
            break;
            case 3:
            area_circle();
            break;
            case 4:
            circum_c();
            break;
            default:
            printf("\nIncorrect Choice :---:");

        }
    }
}

void area_trangle()
{
    float base;
    float height;
    float area;
    printf("\nEnter the base of the triangle : ");
    scanf("%f", &base);
    printf("\nEnter the height of the triangle : ");
    scanf("%f", &height);
    area = (height * base);
    area = area/2;
    printf("\nArea of the triangle is = %f", area);
}

void area_rec()
{
    float base;
    float height;
    float area;
    printf("\nEnter the base of the Quadrilateral : ");
    scanf("%f", &base);
    printf("\nEnter the height of the Quadrilateral : ");
    scanf("%f", &height);
    area = (height * base);
    printf("\nArea of the Quadrilateral is = %f", area);
}

void area_circle()
{
    float diameter;
    float radius;
    float t;
    int choice;
    float area;

    t = 22/7;
    printf("\n1.Enter the diameter of the circle?");
    printf("\n2.Enter the radius of the circle?");
    printf("\nEnter your choice : ");
    scanf("%i", &choice);
    if (choice == 1)
    {
        printf("\nDiameter of the Circle : ");
        scanf("%f", &diameter);
        radius = diameter/2;
        area = t*radius*radius;
        printf("\nArea of the Circle is = %f", area);
    }else if (choice == 2)
    {
        printf("\nRadius of the Circle : ");
        scanf("%f", &radius);
        area = t*radius*radius;
        printf("\nArea of the Circle is = %f", area);        
    }else{
        printf("Error Choice");
    }
    
}

void circum_c()
{

}