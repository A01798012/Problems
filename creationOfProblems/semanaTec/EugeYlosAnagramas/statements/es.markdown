# Descripción
Euge es una un programador competitivo, recientemente hizo un problema en el que tenía una sopa de letras y tenía que encontrar todos los anagramas de las palabras solicitadas dentro de la sopa de letras. Euge es muy bueno resolviendo problemas, pero sus amigos no tanto. Por eso es que tomó de inspiración en la parte de los anagramas. 

Una palabra es un anagrama de sí misma y un anagrama de una palabra $s$ es una palabra $x$, tal que $x$ tenga las mismas letras que $s$, el mismo número de veces y no importa el orden de las letras. Por ejemplo: tomemos $s=cola$  y $x=loca$. Podemos ver que $s$ y $x$ tienen una **"c"**, una **"o"**, una **"l"** y una **"a"**, por lo que $x$ es anagrama de $s$ y viceversa.

Euge, tras explicarles lo que es un anagrama a sus amigos, les planteó el siguiente problema a sus amigos. Euge les dijo que les iba a dar una lista de $N$ palabras y ellos tenían que crear un programa que separara las palabras por grupos de anagramas. Al final ellos tienen que decir cuantos grupos de anagramas se hicieron.
# Entrada
En el primer renglon un entero $N$ $(N>0)$. Para los siguientes $N$ renglones una palabra en minúsculas $s_i$  $(1<=i<=N)$.
# Salida
En el primer renglon y único renglón, un número $M$, el número de grupos de anagramas que hay en la lista de palabras.

# Ejemplo

||input
7
iman
garcia
patio
mani
gracia
mango
graiac

||output
4
||description
El primero grupo solo tiene $\{mango\}$, el segundo solamente tiene 
${patio}$, el tercero $\{garcia, gracia, graiac\}$ y el cuarto $\{iman, mani\}$. 

Por lo que se formaron 4 grupos de anagramas.
||end

# Límites

* Es garantizado que la longitud de todas las palabras $s_i$ es menor que $2\cdot10^5$. Formalmente, $\sum_{i=1}^{N}len(s_i)<= 2\cdot10^5$
