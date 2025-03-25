#include <stdio.h>

int main() {
    int choice;

    // Display course options to the user
    printf("Select a course:\n");
    printf("1. CSE\n");
    printf("2. AI & ML\n");
    printf("3. ECE\n");
    printf("4. Mechanical\n");
    printf("Enter your choice (1-4): ");
    scanf("%d", &choice);

    // Use a switch statement to display the selected course
    switch (choice) {
        case 1:
            printf("You selected CSE.\n");
            break;
        case 2:
            printf("You selected AI & ML.\n");
            break;
	default:
            printf("Invalid choice! Please select a number between 1 and 4.\n");
    }

    return 0;
}
