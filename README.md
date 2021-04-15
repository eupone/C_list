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
| insert | insérer un element | la liste , la position , l'element |  |
| del | supprime un element | la liste , la position |  |
| ret | retourne un element | la liste , la position | void* |
| pop | retourne un elment et le supprimer de la liste | la liste , la position | void* |
| add | ajouter un element à la fin de la liste | la liste , l'element |  |

#### les prototypes :
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
- [ ] l'autre sens 
- [ ] des fonctions sympatiques et utiles
- [x] boire un café
- [x] manger
- [ ] dormir
