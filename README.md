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


## *Sortowania*

### *Bombelkowe*

Porównujemy liczbę i jej następnik i zamieniamy jeśli są w niewłaściwej kolejności. Po czym porownujemy owy następnik z jego następnikiem itd. Istnieje wiele wariantów tego sortowania np: 

- Podstawowe ~ Skoro w jednym cyklu minimum jedna lcizba będzie posortowana to powtażamy ten cykl (n-1) raza. W całym sortowaniu (n-1)^2 porównań
- Upgrade stage 1 ~ Po jednym cyklu mamy posortowaną 1 wartość tak więc w kolejnym cyklu możemy zmiejszyć liczbę porównan o 1.
