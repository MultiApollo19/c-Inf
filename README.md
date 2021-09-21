# Notatka

## *Algorytm euklidesa*

Większą z wartości pomniejszamy o wartość mniejszej do momentu zrównania wartości, otrzymana liczba do NWD.

##### Przykład: 

|   | 12  | 8  |
| ------------ | ------------ | ------------ |
|  1 | 12-8=4  | 8  |
|  2 | 4  | 8-4=4  |
|  |  |NWD = 4|

## *Sito eratostenesa*

![alt text](https://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif)
[Wikipedia](https://pl.wikipedia.org/wiki/Sito_Eratostenesa)

#### Wyznaczanie liczb pierwszych na przedziale <2,n>:
  
Oznaczamy wszystkie liczby w tablicy jako pierwsze, po czym pętla iterująca się od 2 do sqrt(n) po napotkaniu liczby pierwszej oznacza jako liczbę złozoną wszystkie jej wielokrotności.
