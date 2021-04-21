# C-list
## faites des listes en C !


C-list est un moyen de faire des listes en C
- doublement chainé
- facile à utiliser
- bien pensée


# comment l'utiliser  :
## les types :
il n'y a qu'un seul type , celui de la liste noté List et s'initiant
```c
List *ma_liste = init("ce que vous voulez")
```


## les fonctions :
| fonction | utilité | argument | retour |
| ------ | ------ | ---- | ------ |
| init | initité la liste | le premier element |List |
| |  |  | |
| finsert | insérer un element en partant du début | la liste , la position , l'element |  |
| insert | insérer un element en choisisant le chemin le plus court| la liste , la position , l'element |  |
| rinsert | insérer un element en partant de la fin | la liste , la position , l'element |  |
| |  |  | |
| fdel | supprime un element en partant du début | la liste , la position |  |
| del | supprime un element en choisisant le chemin le plus court | la liste , la position |  |
| rdel | supprime un element en partant de la fin | la liste , la position |  |
| |  |  | |
| fret | retourne un element en partant du debut| la liste , la position | void* |
| ret | retourne un element en choisisant le chemin le plus cout | la liste , la position | void* |
| rret | retourne un element en partant de la fin | la liste , la position | void* |
| |  |  | |
| fpop | retourne un elment et le supprimer de la liste en partant du début | la liste , la position | void* |
| pop | retourne un elment et le supprimer de la liste en choisisant le chemin le plus court | la liste , la position e | void* |
| rpop | retourne un elment et le supprimer de la liste en partant de la fin | la liste , la position | void* |
| |  |  | |
| add | ajouter un element à la fin de la liste | la liste , l'element |  |

#### les prototypes :
les equivalents des fonctions on le même prototype, par exemple **rdel** a le _même prototype_ que **del**
```c 
    List *init(void * first_var)
```
```c 
    void insert(List *liste,int pos,void *elem)
```

```c 
    void del(List *liste,int pos)
```
```c 
    void *ret(List *liste , int pos)
```
```c 
    void *pop(List *liste , int pos)
```
```c 
    void add(List *liste,void* elem)
```



## Installation

telecharger list.c et list.h dans votre repertoir et ajouter les a la compilation 
ex : 
```
gcc vos_fichiers.c list.c 
```


# todo : 
- [x] base
- [x] l'autre sens 
- [x] des fonctions sympatiques et utiles
- [ ] encore plus de fonctions sympatiques et utiles
- [x] boire un café
- [x] manger
- [ ] dormir
