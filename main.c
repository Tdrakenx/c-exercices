#include <stdio.h>

// Premier exercice : Déclarer et Afficher

// int main() {
//     int a = 5;
//     float b = 3.14;
//     char c = 'A';
//     printf("Hello world!\n");
//     printf("a = %d, b = %.2f, c = %c", a, b, c);
//     return 0;
// }

// Second exercice : Observe la différence

// int main(){
//     int a = -1;
//     unsigned int b = -1;

//     printf("a = %d, b = %u\n", a, b);
//     return 0;
// }

// Premier exercice : Calculette auto

// int main() {
//     int a = 5;
//     int b = 10;
//     int sum = a + b;
//     int product = a * b;
//     int difference = a - b;
//     int quotient = a / b;
//     int remainder = a % b;
//     printf("The sum of %d and %d is %d\n", a, b, sum);
//     printf("The product of %d and %d is %d\n", a, b, product);
//     printf("The difference of %d and %d is %d\n", a, b, difference);éé: %d\n", x <= y);
//     printf("The quotient of %d and %d is %d\n", a, b, quotient);
//     printf("The remainder of %d and %d is %d\n", a, b, remainder);
//     return 0;

// }

//Second exercice

// int main() {
//     int x = 5;
//     int y = 8;
//     printf("x<y: %d\n", x < y);
//     printf("x>y: %d\n", x > y);
//     printf("x==y: %d\n", x == y);
//     printf("x!=y: %d\n", x != y);
//     printf("x<10 && y<10: %d\n", x < 10 && y < 10);
//     printf("x<10 || y>10: %d\n", x < 10 || y > 10);
//     return 0;
// }

//La calculatrice d’IMC

// int main () {
//     float weight = 0, height = 0, imc = 0;

//     printf("enter weight and height in kg and meters, respectively\n");
//     scanf("%f%f", &weight, &height);
//     // scanf("%f", &weight);
//     // scanf("%f", &height);
    
//     imc = weight / (height * height);

//     printf("the IMC is : %.2f \n", imc);

//     return 0;

// }

//La majuscule automatique

// int main () {
//     char lowercase_letter ;
//     char uppercase_letter ;
    
//     printf("type a lowercase letter\n");
//     scanf("%c", &lowercase_letter);

//     uppercase_letter = lowercase_letter - 32;

//     printf("the uppercase version of this letter is : %c \n", uppercase_letter);

//     return 0;
// }

//EXERCICE BOSS 1 : Le Ticket de Caisse

// int main () {
//     char article;
//     float unit_price, total_price;
//     int quantity;
//     const float TVA = 0.2;

//     printf("Enter the initial of the article \n");
//     scanf("%c", &article);
//     printf("Enter the unit price \n");
//     scanf("%f", &unit_price);
//     printf("Enter the desired quantity \n");
//     scanf("%d", &quantity);

//     total_price = unit_price * quantity * (1 + TVA);

//     printf("=== TICKET DE CAISSE ===\n");
//     printf("Article     : %c \n", article);
//     printf("Quantite    : %d \n", quantity);
//     printf("Prix U. HT  : %.2f eur \n", unit_price);
//     printf("------------------------\n");
//     printf("TOTAL TTC   : %.2f eur \n", total_price);
//     printf("========================\n");

//     return 0;
// }

// Inverse

// int main (){
//     int a, b;
//     printf("Enter a and b : ");
//     scanf("%d",&a);
//     scanf("%d",&b);

//     printf("a = %d, b = %d \n", a, b);

//     b = a + b;
//     a = b - a;
//     b = b - a;

//     printf("a = %d, b = %d\n", a, b);

//     return 0;

// }


// Premier exercice : < ? > ? = ?

// int main(){
//     int x, y;
//     printf("Enter x and y : ");
//     scanf("%d",&x);
//     scanf("%d",&y);
    
//     if(x>y){
//         printf("%d est plus grand que %d \n", x , y);
//     }else if(x<y){
//         printf("%d est plus petit que %d \n", x , y);
//     }else{
//         printf("%d est égal à %d \n", x , y);
//     }

//     return 0;
// }

// Second exercice : Mon Premier Menu

// int main () {
//     int n;
//     printf("=== MENU ===\n");
//     printf("1 - Démarrer\n");
//     printf("2 - Arrêter\n");
//     printf("3 - Redémarrer\n");
//     printf("============\n");
//     printf("Choisissez une option : \n");

//     scanf("%d", &n);

//     switch (n) {
//         case 1:
//             printf("1 - Démarrer\n");
//             break;
//         case 2:
//             printf("2 - Arrêter\n");
//             break;
//         case 3:
//             printf("3 - Redémarrer\n");
//             break;
//         default:
//             printf("Choix invalide \n");
//     }
// }


// Troisième exercice : Années bissextiles

// int main () {
//     int year;
//     printf("Enter a year : ");
//     scanf("%d", &year);

//     if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
//         printf("%d is a leap year \n", year);
//     } else {
//         printf("%d is not a leap year \n", year);
//     }

//     return 0;
// }


// Quatrième exercice : Le Distributeur de Boissons

// int main () {
//     int choice;
//     printf("=== Distributeur de Boissons ===\n");
//     printf("1 - Café\n");
//     printf("2 - Thé\n");
//     printf("3 - Chocolat\n");
//     printf("===============================\n");
//     printf("Choisissez une boisson : \n");

//     scanf("%d", &choice);

//     switch (choice) {
//         case 1:
//             printf("Vous avez choisi : Café\n");
//             break;
//         case 2:
//             printf("Vous avez choisi : Thé\n");
//             break;
//         case 3:
//             printf("Vous avez choisi : Chocolat\n");
//             break;
//         default:
//             printf("Choix invalide \n");
//     }

//     return 0;
// }

// EXERCICE BOSS 2 : Le Videur du Nightclub

// int main() {
// 	int age;
// 	int vip;
// 	float argent;

// 	printf("Quel est votre age ? ");
// 	if (scanf("%d", &age) != 1 || age < 0) {
// 		printf("Age invalide\n");
// 		return 1;
// 	}

// 	printf("Etes-vous sur la liste VIP ? (1 pour Oui, 0 pour Non) ");
// 	if (scanf("%d", &vip) != 1 || (vip != 0 && vip != 1)) {
// 		printf("Reponse VIP invalide\n");
// 		return 1;
// 	}

// 	printf("Combien d'argent avez-vous sur vous ? ");
// 	if (scanf("%f", &argent) != 1 || argent < 0) {
// 		printf("Montant invalide\n");
// 		return 1;
// 	}

// 	if (age < 18) {
// 		printf("Retourne boire du lait\n");
// 	} else if (vip == 1) {
// 		printf("Bienvenue VIP !\n");
// 	} else if (argent < 20) {
// 		printf("Pas assez d'argent\n");
// 	} else {
// 		printf("Entrée classique autorisée\n");
// 	}

// 	return 0;
// }


// Premier exercice : Apprends à compter

// int main() {
//     int i = 1;
//     while (i <= 10) {
//         printf("%d\n", i);
//         i++;
//     }
//     return 0;
// }


// Deuxième exercice : Bienvenue en maternelle

// int main() {
//     int sum = 0;
//     for (int i = 1; i <= 5; i++)
//         sum += i;
//     printf("La somme des nombres de 1 à 5 est : %d\n", sum);

//     return 0;
// }

// Troisième exercice : La Pyramide de Mario

// int main() {
//     int height;
//     printf("Enter the height of the pyramid (1-10): ");
//     scanf("%d", &height);

//     if (height < 1 || height > 10) {
//         printf("Height must be between 1 and 10.\n");
//         return 1;
//     }

//     for (int i = 1; i <= height; i++) {
//         for (int k = 0; k < i; k++) {
//             printf("*");
//         }
//         for (int j = 0; j < height - i; j++) {
//             printf(" ");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Quatrième exercice : Contrôle de saisie strict

// int main() {
//     int number;
//     printf("Enter a number between 10 and 20: ");
//     do
//     {
//         scanf("%d", &number);
//         if (number < 10 || number > 20) {
//             printf("Invalid input. \nPlease enter a number between 10 and 20: ");
//         }
//     } while (number < 10 || number > 20);
    
//     return 0;
// }

// EXERCICE BOSS 3 : Le Hacker du Code PIN

int main() {
    int pin;
    int attempts = 0;
    const int MAX_ATTEMPTS = 3;

    printf("Enter your PIN code: ");
    while (attempts < MAX_ATTEMPTS) {
        if (scanf("%d", &pin) != 1) {
            attempts++;
            printf("\nInvalid input. Try again (%d attempts left): ", MAX_ATTEMPTS - attempts);
            while (getchar() != '\n');
            continue;
        }

        if (pin == 1234) {
            printf("\nAccess granted.\n");
            return 0;
        } else {
            attempts++;
            if (attempts < MAX_ATTEMPTS) {
                printf("\nIncorrect PIN. Try again (%d attempts left): ", MAX_ATTEMPTS - attempts);
            }
        }
    }

    printf("\nPhone locked. Too many incorrect attempts.\n");
    return 1;
}