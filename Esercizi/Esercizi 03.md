Si implementi la classe `Rational` che consenta di rappresentare dei numeri razionali (1/3, 3/4, ecc). La classe deve avere le seguenti proprietà:

- Deve essere possibile costruire un oggetto `Rational` specificando solo il numeratore (numero intero) o entrambi i valori (sia numeratore che denominatore); Quando viene costruito un oggetto `Rational`, il numero da questo rappresentato deve essere normalizzato. Il segno, deve essere sempre incluso solo nel numeratore. 

Se ad esempio venisse chiamato il costruttore `Rational r{-24, -12}`, questo dovrebbe memorizzare il numero normalizzato `{-2, 1}`.

- Deve essere possibile sommare due numeri razionale, il risultato deve essere un numero razionale:
    `Rational op = r1 + r2;`
- Deve essere possibile eseguire la somma in-place:
    `r1 += r2;`
- Deve essere possibile verificare se due numeri razionali sono uguali:
    `if (r1 == r2) { //... }`
- Deve essere possibile confrontare se un numero intero è uguale ad un numero razionale:
    `if (1 == r2) { //... }`
    `if (1 == r2) { //... }`
- Deve essere possibile confrontare due numeri razionali tra loro o con numeri interi (`>, <, !=, <=, >=`)
- Deve essere possibile scrivere e leggere numeri razionali da file. La lettura deve essere funzionante anche per i numeri interi. Si veda `rational_numbers.txt` come esempio.
- Deve essere possibile definire una `unorderd_map<Rational, int>`, ad esempio per contare quante volte un numero razionale compare in un vettore.




