# VuObjProg2Uzd
Objektinio programavimo 2 užduotis

Paulius Mykolaitis ISI I grupė, II pogrupis

# Kaip paleisti programą?
Jeigu naudojate CodeBlocks, sekite šiuos žingsnius :

1. Atidarome ***main.cpp*** failą.
2. Sukompiliuojame kodą ir paleidžiame programą.

Jeigu naudojate C++ compiler, pavyzdziui, GCC, tai :

Norint paleisti šią programa g++ compiler pagalba, nuėję į failo vietą, rašykite : 
**make clean**

***make**

**./app**

Galite naudoti programą.

# Kaip naudoti programą?
v0.5

Duomenų skaitymas iš failų
| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 |  | |  | 
| 10000 | |  |  |
| 100000 |   |  | | 
| 1000000 |  |  |  | 
| 10000000 |  |  |  |


 Duomenų rūšiavimas į dvi kategorijas:
| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 |  |  |  |
| 10000 |  |  |  |
| 100000 |   |  |  |
| 1000000 | |  |  | 
| 10000000 |  | |  |
 
v0.4
1. Įveskite failo pavadnima, studentų kiekį bei pažymiu kiekį, kuris veliau bus naudojamas generuoti studentų sąrašui.

2. Palaukit, kol programa baigs savo darba.

3. Baigus darba, programa išmes visą informacija, apie tai, kiek truko failų sudarymas ar studento **sort'inimas**.

| Studentų kiekis  | Failų generavimas | Duomenų nuskaitymas | Studentų rūšiavimas | Išvedimas į naujus failus |
| ------------- | ------------- | ------------- | ------------- | ------------- |
| 1000  | 0.0334759s | 0.050547s | 0.03608996s | 0.0328836s |
| 10000  | 0.328879s | 0.407449s | 0.332487s | 0.30899s |
| 100000 | 2.97213s | 5.29333s | 4.19421s | 3.45287s |
| 1000000 | 28.2486s | 51.9048s	 | 43.8148s | 36.3797s |
| 10000000 | 299.395s | 482.684s | 439.999s | 337.5145s |

v0.3

1. Įveskite + arba - (atitinkamai skaityti iš failo ar pačiam įrašyti duomenis);

2. Jeigu pasirinkot skaitymą iš failo, tai viskas bus padaryta be papildomų pastangų (failo pavadinimas turi būti "Kursiokai.txt");

3. Jeigu pasirinkot duomenų įvedimą, tai sekite viską, kas bus nurodyta kompiliatoriuje;

4. Sukurtas sąrašas žmonių su ju vardais, galutiniais įvertinimais ir pažymių mediana!

# Releases
v0.5 

Programa skirta skaiciuoti laika su std::list, std::deque ir std::vector.

v0.4 

Programa, kurioje *random* sugeneruotus studentus įrašoma į du skirtingus failus (>=5 gal. balas, ir <5 gal. balas) ir apskaičiuoja programos veikimo laiką : kol sukuriami failai, įrašomi studentai į skirtingus failus.

v0.3 

Programa, kurioje yra galimybė skaityti iš failo bei naudojami header **.h** failai. Kartu yra ir skaitymas (v0.2) jos padarytos ir sukeltos bendroje v0.3 versijoje.

