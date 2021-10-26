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
## *Dziel i rzqdź (Polish Edition)*

Cennym pojedściem przy algorytmizacji procesów jest metoda dziel i rządź tj. podział badanego zbioru na mniejsze podzbiory i analizowaniu ich niezależnie np. w wypadku wyszukiwania ekstremów w zbiorze. Możemy podzielić go na zbiór liczb większych i mniejszych w pierwszym wyszukując tylko minimum, a w drugim tylko maksimum. 

## *Zamiana dwóch zmiennych*

 0. swap(); <- "JESTES 2-gim najlepszym władcą"
 1. int a,b,tmp tmp=a;a=b;b=tmp; <- "Staszek jest najlepsze"
 2. a=a+b;b=a-b;a=a-b; / a=a-b;b=a+b;a=b-a; <- TO TAKIE SEEE, ale ujdzie
 3. a=a*b;b=b/a;a=a/b; <- UNIKAĆ JAK ŁOGNIA!
 4. Coś tam z xorem coś jak: a=a xor b; b= a xor b ; a= a xor b; (Alternatywa wykluczająca/rozłączna/róznica symetryczna/Suma poprzeczna/Kontrawalnecja/ekskluzja/suma modulo 2) takie... niepowtarzalne <- Niby tak, ale nie do końca. Zdobyło Laur konsumenta 2021!.
 5. Triki programistyczne HEHEUHE (pewno Stackoverflow, tam są sami "programiści"....chociaż oni dają jakieś porady, a nie jak na Elektrodzie)

## *Sortowania*

### *Bombelkowe*

Porównujemy liczbę i jej następnik i zamieniamy jeśli są w niewłaściwej kolejności. Po czym porownujemy owy następnik z jego następnikiem itd. Istnieje wiele wariantów tego sortowania np: 

- Podstawowe ~ Skoro w jednym cyklu minimum jedna lcizba będzie posortowana to powtażamy ten cykl (n-1) raza. W całym sortowaniu (n-1)^2 porównań
- Upgrade stage 1 ~ Po jednym cyklu mamy posortowaną 1 wartość tak więc w kolejnym cyklu możemy zmiejszyć liczbę porównan o 1.

### *Kubełkowe*

Jest to najbardziej wydajne obliczeniowo sortowanie jednak jedno z najmniej wydajnych jeśli chodzi o wykorzystaną pamięć. Wykorzystuje ono tablice pomocniczą,w której odnotowujemy czestotliwość występowania poszczególnych wartości,a następnie wypełniamy badaną tablice wartościami zgodnie z danymi tablicy pomocniczej.

Wystapienie poszczególnych wartości wykorzystujac wartość z tablicy badanej jako indeks tablicy pomocniczej => for(int i=0;i<n;i++)tmp[t[i]]=1;

### *Zwariowane*

Polega ono na losowej zamianie elementów zbioru, do momentu przypadkowego uporządkowania całosci. Z tego względu iż algorytm ten może wykonywać sie w nieskończonym czasie nie zawsze jest klasyfikowany jako algorytm.

### *Sortowanie przez selekcję (wybór)*

Znajdujemy najmniejszy element w zbiorze i wstawiamy je na właściwe miejsce. Czynność powtarzamy wyszukując minimum na coraz mniejszym ziorze wartości.
*Apropo defaqto*
W pierwszym wyszukiwaniu będzie n-1, nastepnym n-2,... itd. porównań.
W sumie dokonamy n-1 zamian i n*(n-1)/2 porównań.
