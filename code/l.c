
#include <stdio.h>
struct student {
    int roll;
    float marks;
} node[5];

int main() {

    printf("Storing 5 student marks usign linked list\n");

    // storing information
    for (int i = 0; i < 5; ++i) {

        printf("Enter student roll: ");
        scanf("%d", &node[i].roll);
        printf("Enter student marks: ");
        scanf("%f", &node[i].marks);
    }
    printf("\n\n5 Student marks are:\n\n");

    // Display Storing information
    printf("Roll        Marks\n");
    for (int i = 0; i < 5; ++i)
    {
        printf("%d            ", node[i].roll);
        printf("%.1f", node[i].marks);
        printf("\n");
    }
    return 0;
}
