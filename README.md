# c-exercices

Exercices d'apprentissage du langage C : variables, opérateurs, entrées/sorties, conditions, boucles et validation de saisie.

Ce dépôt regroupe mes premiers programmes en C. Ce sont des exercices de base, pas un projet abouti.

## Contenu

| Thème | Exercices |
|---|---|
| Variables et types | Déclarer et afficher, `int` signé vs `unsigned` |
| Opérateurs | Calculette, comparaisons et opérateurs logiques |
| Entrées / sorties (`scanf`, `printf`) | Calculatrice d'IMC, majuscule automatique, ticket de caisse, échange de deux variables |
| Conditions (`if`, `switch`) | Comparaison de deux nombres, menu, années bissextiles, distributeur de boissons, videur de nightclub |
| Boucles (`while`, `for`, `do while`) | Compter jusqu'à 10, somme de 1 à 5, pyramide, contrôle de saisie, code PIN |

L'exercice actuellement actif dans `main.c` est **le code PIN** (3 tentatives maximum, gestion des saisies invalides). Les autres exercices sont conservés en commentaire dans le même fichier.

## Compilation et exécution

Prérequis : `gcc` et `make`.

```bash
make
./main
```

Pour supprimer l'exécutable :

```bash
make clean
```

Les options de compilation sont `-Wall -Wextra -g`.

## Utiliser un autre exercice

Les exercices sont commentés dans `main.c`. Pour en tester un, commente l'exercice actif, décommente celui voulu, puis relance `make`.

## Limites connues

- Tous les exercices sont dans un seul fichier, ce qui n'est pas pratique à long terme.
- Les programmes ne gèrent pas tous les cas de saisie invalide.

## Suite prévue

- Un fichier par exercice (`src/`), avec un `Makefile` adapté.
- Pointeurs, tableaux, chaînes de caractères, allocation dynamique.
