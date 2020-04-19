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

intel i5 8250u @ 1.6gHz, 8.0GB ram

v0.4

1. Įveskite studentų kiekį bei pažymiu kiekį, kuris veliau bus naudojamas generuoti studentų sąrašui.

2. Palaukit, kol programa baigs savo darba.

3. Baigus darba, programa išmes bendrą informaciją, apie tai, kiek truko failų sudarymas ir studentų **sort'inimas**.

Failo skaitymas (10 pazymiu)

| Įrašų kiekis | std::vector |
|--|--|
| 1000 | 0,01s | 
| 10000 |  0.094s |
| 100000 |  0.969s | 
| 1000000 | 11.994s | 
| 10000000 | 299.54395s | 

Rusiavimas ir failo isvedimas (10 pazymiu)

| Įrašų kiekis | std::vector |
|--|--|
| 1000 | 0.029s | 
| 10000 |  0.211s |
| 100000 |  2.094s | 
| 1000000 | 23.907s | 
| 10000000 | 230.852s | 

v0.3

1. Įveskite + arba - (atitinkamai skaityti iš failo ar pačiam įrašyti duomenis);

2. Jeigu pasirinkot skaitymą iš failo, tai viskas bus padaryta be papildomų pastangų (failo pavadinimas turi būti "Kursiokai.txt");

3. Jeigu pasirinkot duomenų įvedimą, tai sekite viską, kas bus nurodyta kompiliatoriuje;

4. Sukurtas sąrašas žmonių su ju vardais, galutiniais įvertinimais ir pažymių mediana!

v0.2

1. Įveskite + arba - (atitinkamai skaityti iš failo ar pačiam įrašyti duomenis);

2. Jeigu pasirinkot skaitymą iš failo, tai viskas bus padaryta be papildomų pastangų (failo pavadinimas turi būti "Kursiokai.txt");

3. Jeigu pasirinkot duomenų įvedimą, tai sekite viską, kas bus nurodyta kompiliatoriuje;

4. Sukurtas sąrašas žmonių su ju vardais, galutiniais įvertinimais ir pažymių mediana!

v0.1

1. Įveskite studentu kieki;

2. Iveskite studento varda / pavarde;

3. Iveskite atitinkama raide, t - ivesti pazymius, n - ivesti, bet be ribojimo (ivesti stop norint stabdyti ivedima), r - random sugeneruoti pazymiai;

4. Iveskite egzamino pazymi (jei pasirinkot random pazymius, jis bus sugeneruotas atsitiktinai).

# Releases

v0.4 

Programa, kurioje *random* sugeneruotus studentus įrašoma į du skirtingus failus (>=5 gal. balas, ir <5 gal. balas) ir apskaičiuoja programos veikimo laiką : kol sukuriami failai, įrašomi studentai į skirtingus failus.

v0.3 

Programa, kurioje yra galimybė skaityti iš failo bei naudojami header **.h** failai. Kartu yra ir skaitymas (v0.2) jos padarytos ir sukeltos bendroje v0.3 versijoje.

v0.2

Programa, kurioje yra galimybe skaityti studentu duomenu failus

v0.1

Programa, kuri skaiciuoja studentu galutini ivertinima, ivedant studento varda/pavarde, pazymiu kieki bei pacius pazymius

