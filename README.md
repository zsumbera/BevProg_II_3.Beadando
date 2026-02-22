# 🚢 Torpedó Játék – C++ (Flugi Graphics)

Grafikus megvalósítású **Torpedó (Battleship)** játék C++ nyelven, az egyedi **Flugi Graphics** grafikus könyvtár felhasználásával.

---

## 📌 Projekt leírás

Ez a projekt a klasszikus Torpedó játék modern, grafikus változata, amely nem konzolos felületen, hanem a **Flugi Graphics** könyvtár által biztosított ablakkezeléssel és rajzolási funkciókkal működik.

A játék célja az ellenfél hajóinak teljes elsüllyesztése stratégiai lövések segítségével.

---

## 🎮 Fő funkciók

- 🖥️ Grafikus játéktábla megjelenítés (rács, koordináták)
- 🚢 Hajók vizuális elhelyezése
- 🎯 Egérkattintással történő célzás
- 💥 Találat / mellélövés animáció
- 🔄 Játékos vs Gép mód
- 🧠 Véletlenszerű vagy egyszerű AI stratégia
- 🏆 Győzelmi képernyő

---

## 🛠️ Használt technológiák

- **C++**
- **Flugi Graphics** (egyedi grafikus könyvtár)
- Standard Library:
  - `<vector>`
  - `<string>`
  - `<cstdlib>`
  - `<ctime>`

---

## 🖼️ Grafikus működés

A játék a következő grafikus elemeket használja:

- Ablak létrehozása (`createWindow`)
- Négyzetháló rajzolása
- Textúrák vagy színezett téglalapok hajókhoz
- Egéresemény-kezelés
- Frissítési ciklus (render loop)

---
