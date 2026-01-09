# ft_printf

Réimplémentation de printf - Projet 42 Paris

## À propos

ft_printf est une réimplémentation de la fonction printf de la libc. Le projet consiste à recréer les fonctionnalités principales de printf en gérant les différents formats et flags.

C'est un projet complexe qui m'a permis de comprendre les fonctions variadiques et la gestion de formats. J'ai appris à parser des chaînes de format, gérer différents types de données, et convertir entre différentes bases numériques.

## Compilation

```bash
make
```

Cela génère la bibliothèque statique `libftprintf.a`.

## Utilisation

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hello %s, you are %d years old\n", "World", 42);
    ft_printf("Pointer: %p\n", main);
    ft_printf("Hex: %x\n", 255);
    return (0);
}
```

Pour compiler avec ft_printf :

```bash
gcc main.c -L. -lftprintf -I.
```

## Formats supportés

- `%c` : caractère
- `%s` : chaîne de caractères
- `%p` : pointeur (hexadécimal avec préfixe 0x)
- `%d`, `%i` : entier décimal signé
- `%u` : entier non signé
- `%x` : hexadécimal en minuscules
- `%X` : hexadécimal en majuscules
- `%%` : caractère %

## Flags supportés

- `-` : alignement à gauche
- `0` : padding avec zéros
- `.` : précision
- `*` : largeur/précision dynamique

## Ce que j'ai appris

- Fonctions variadiques (`va_list`, `va_start`, `va_arg`, `va_end`)
- Parsing de chaînes de format complexes
- Gestion de différents types de données
- Conversion entre bases (décimal, hexadécimal)
- Gestion de la précision et de la largeur
- Formatage de sortie avec différents flags

## Structure

Le projet est organisé en plusieurs fichiers :
- `ft_printf.c` : fonction principale
- `ft_parse.c` : parsing du format
- `ft_convert.c` : conversions de types
- `ft_utils.c` : fonctions utilitaires

---

**Projet réalisé dans le cadre du cursus 42 Paris**
