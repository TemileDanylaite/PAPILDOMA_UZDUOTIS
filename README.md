#Ši programa skirta patyrinėti, kaip asociatyvūs konteineriai yra efektyvesni už sekos konteinerius, atliekant tam tikras tekstines operacijas.

Kodo dalys:

1.	Žodžių dažnio skaičiavimas:Skaičiuojama, kiek kartų kiekvienas skirtingas žodis pasikartoja tekste.
2.	Cross-reference tipo lenteles kūrimas:Sudaroma lentelė, kurioje nurodoma, kuriose teksto eilutėse paminėtas kiekvienas daugiau nei vieną kartą pasikartojantis žodis.
3.	URL adresų suradimas:Tekste surandami visi URL adresai ir išvedami į failą.

#Norint naudotis programa, reikia atlikti šiuos veiksmus:

•	Įdėti į text.txt failą norimą tekstą su nemažiau kaip 1000 žodžių bei URL adresais.

•	Paleisti kodą.

Pagrindinės funkcijos:

• std::map<std::string, int> wordCount: Naudojama saugoti kiekvieno žodžio pasirodymų skaičių.
• std::map<std::string, std::set<int>> wordLines: Naudojama, kad užtikrintų unikalius eilutės numerius kiekvienam žodžiui.
• std::regex urlRegex(R"((https?://)?(www\.)?([a-zA-Z0-9.-]+\.[a-zA-Z]{2,})(:\d+)?(/[^\s]*)?)"): Naudojama, kad surasti atitikmenis, kurie atitinka URL struktūrą.


#Rezultatas : txt failuose bus išvedami pasikartojantys žodžiai, cross—reference lentelė bei URL adresai rasti tekste.


#Naudotos bibliotekos:

- `<iostream>`
- `<fstream>`
- `<sstream>`
- `<map>`
- `<set>`
- `<regex>`
- `<vector>`
- `<algorithm>`
- `<string>`
