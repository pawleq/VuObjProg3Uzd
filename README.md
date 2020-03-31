# VuObjProg2Uzd
Objektinio programavimo 2 užduotis

Paulius Mykolaitis ISI I grupė, II pogrupis

# Kaip paleisti programą?
Jeigu naudojate CodeBlocks, sekite šiuos žingsnius :

1. Atidarome ***main.cpp*** failą.
2. Sukompiliuojame kodą ir paleidžiame programą.

Jeigu naudojate C++ compiler, pavyzdziui, GCC, tai :

Norint paleisti šią programa g++ compiler pagalba, nuėję į failo vietą, rašykite : 

Makefile commands:

**make**

Sukuria .o failus ir juos sulinkina i "main" faila;

**clean**

Ištrina main ir .o failus.

Galite naudoti programą.

# Kaip naudoti programą?
v0.5

intel i5 8250u @ 1.6gHz, 8.0GB ram

1. Atsidarome **SarasoGen.cpp** faila, ji sukompiliuojame ir parasome, kiek studentu norime sugerenuoti ir kiek pazymiu;

2. Tada atisdarome tam tikra faila : jei norite programos su deque konteineriu - DeQueMain.cpp, jei su list - listMain.cpp, o jeigu su vector - vectorMain.cpp;

3. Suvedame, kas yra prasoma, o paprasius failo, is kurio skaityti duomenis, iveski **kursiokai.txt**.

Failu generavimas su 10 pazymiu

| Įrašų kiekis |
|--|
| 1000 | 0,03452s |
| 10000 |  0,98574s | 
| 100000 |  1,5652s |
| 1000000 | 12.45678s |
| 10000000 | 120,54512s |

Nuskaitymas is failu ir rusiavimas su 10 pazymiu

| Įrašų kiekis | std::vector | std::deque | std::list |
|--|--|--|--|
| 1000 | 0.066569s | 0,058194s | 0.048926s |
| 10000 |  0.431014s | 0.303188s | 0.249416s |
| 100000 |  4.26723s | 3.3032s | 2.84872s |
| 1000000 | 54.84579s | 51.7396s | 28.9781s |
| 10000000 | 299.54395s | 285.54856s | 232.5684s |


v0.4

1. Įveskite studentų kiekį bei pažymiu kiekį, kuris veliau bus naudojamas generuoti studentų sąrašui.

2. Palaukit, kol programa baigs savo darba.

3. Baigus darba, programa išmes bendrą informaciją, apie tai, kiek truko failų sudarymas ir studentų **sort'inimas**.

| Studentų kiekis  | Programos laikas |
| ------------- | ------------- | 
| 1000 su 10 pazymiu | 0.066569s | 
| 10000 su 10 pazymiu | 0.431014s | 
| 100000 su 10 pazymiu | 4.26723s | 
| 1000000 su 10 pazymiu | 54.84579s | 
| 10000000 su 10 pazymiu | 299.54395s | 

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

v0.2

Programa, kurioje yra galimybe skaityti studentu duomenu failus

v0.1

Programa, kuri skaiciuoja studentu galutini ivertinima, ivedant studento varda/pavarde, pazymiu kieki bei pacius pazymius
