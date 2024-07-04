V Hornonitrianskych Baniach sa rozhodli obnoviť ťažbu uhlia v šachte svätej Barbory. Šachtu si pre potreby príkladu predstavujme ako jeden dlhý tunel, bez rôznych vetvení.
Pri každé ložisko ulhia v tejto šachte už stihli najatí pyrotechnici umiestniť dostatočné množstvo dynamitu. Mapu šachty máte k dispozícii a je daná jedným reťazcom znakov ′1′ a ′0′. Ak je na mieste i na tejto mape zapísaný znak ′1′, ide o ložisko pri ktorom je už dynamit, ak je zapísaný znak ′0′, ide o miesto kde sa nenachádza žiadne uhlie a teda tam nie je ani žiaden dynamit.
Vedenie bane chce čo najlacnejšie odpáliť dynamity pri všetkých ložiskách, na čo si najalo najlepšieho pyrotechnika na celej hornej Nitre, Fera z Hradišťa. Ak Fero aktivuje dynamit pri ložisku na mieste x, ten vybuchne a aktivuje aj dynamity pri susedných ložiskách, teda na miestach x + 1 a x − 1 a induktívne ďalej. Teda stačí, aby Fero aktivoval jeden dynamit v spojitom úseku dynamitov na to, aby efektívne odpálil všetky dynamity na tomto úseku. Za aktiváciu jedného dynamitu Fero berie a korún. 1 Túto operáciu vie Fero zopakovať koľko krát len chcete, za predpokladu, že mu dostatočne zaplatíte.
Fero však vedeniu bane ponúkol, že za poplatok b korún umiestniť dynamit na miesto kde sa nenachádza ložisko, t.j. také, čo je na mape označené ako ′0′. Túto operáciu vie tiež zopakovať koľko krát len chcete. To sa niekedy môže oplatiť viac, ako separátne odpalovať dva dynamity na dvoch nateraz nesúvislých úsekoch.
Koľko najmenej korún musí vedenie bane Ferovi zaplatiť tak, aby dosiahli svoj cieľ, teda odpálenie všetkých dynamitov, ktoré sú aktuálne už položené pri ložiskách uhlia?

Vstup

Na prvom riadku je číslo t a platí 1 ≤ t ≤ 105. Číslo t reprezentuje počet testovacích vstupov. Nasleduje týchto t testovacích vstupov.
Každý testovací vstup pozostáva z dvoch riadkov. V prvom riadku sú čísla a a b (1 ≤ a, b ≤ 3000) - koľko korún berie Fero za odpálenie dynamitu a umiestnenie nového dynamitu. V druhom riadku je jeden binárny reťazec reprezentujúci mapu šachty.
Súčet dĺžok všetkých máp cez všetky testovacie vstupy nepresiahne 105. 

Výstup

Na výstup vypíšte jedno číslo a to minimálny možný počet korún, ktoré treba Ferovi zaplatiť.
