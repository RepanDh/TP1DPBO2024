# TP1DPBO2024

## janji

Saya Repan Dhia Nararya NIM [2202331] mengerjakan Latihan Praktikum Desain Pemrograman Berorientasi Objek dalam mata kuliah Desain Pemrograman Berorientasi Objek untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

### Desain Diagram
![1 drawio](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/7a42bd6d-39fa-4013-bae5-64d6501e2806)

Class Item memiliki atribut :
- namaItem
- quantity

Class Character memiliki atribut:
- name
- gender
- weapon
- role
- HP
- ATK
- Def
- Speed
- Luck
- Level
- PoinSkill
- Item

Class Npc memiliki atribut :
- isEnemy
- shopitems

### Desain Class
1. Class item.
   class ini merepresentasikan item yang dapat dimiliki oleh karakter. Setiap item memiliki nama dan kuantitas.
2. Class Character
   Kelas ini merepresentasikan karakter dalam game. Setiap karakter memiliki atribut seperti nama, gender, senjata, peran, HP, ATK, def, speed, luck, level, poinSkill, dan   daftar item. Kelas ini juga memiliki metode untuk menambah dan menghapus item, menyerang karakter lain, dan meningkatkan stat.
3. Class Npc
   Kelas ini merupakan turunan dari kelas Character dan merepresentasikan NPC dalam game. Selain atribut yang diwarisi dari kelas Character, kelas Npc juga memiliki atribut isEnemy dan daftar shopItem. Kelas ini juga memiliki metode untuk memberikan informasi, memberikan quest, melakukan perdagangan, dan lainnya.

### Desain Program
Program ini adalah simulasi game RPG sederhana di mana user dapat memilih karakter dan berinteraksi dengan NPC. Pengguna dapat meningkatkan stat karakter, mengambil quest dari NPC, berdagang dengan NPC, melawan NPC jahat, dan mencoba berbicara dengan NPC tertentu.

### Alur Program 
1. Program pertama kali membuat beberapa item dan karakter, serta beberapa NPC dengan item mereka masing-masing.
2. Program kemudian meminta user untuk memilih karakter.
3. Setelah itu, program memasuki loop di mana pengguna dapat memilih untuk melakukan berbagai aksi seperti meningkatkan stat, mengambil quest, berdagang, melawan NPC, atau mencoba berbicara dengan NPC tertentu.
4. Program akan terus berjalan sampai pengguna memilih untuk keluar.

### Dokumentasi
![Screenshot 2024-03-13 235246](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/908a6a1e-afe6-4c7b-a47d-783614c71057)
![Screenshot 2024-03-13 235242](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/711375c9-03a3-4a6f-a936-204fe3a88346)
![Screenshot 2024-03-13 235238](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/333bc542-e2de-4ba7-a65a-84e3510652e7)
![Screenshot 2024-03-13 235235](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/4c992d14-c07f-495e-ab6d-5fa73186009f)
![Screenshot 2024-03-13 235230](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/5033afd1-53f3-458f-98d5-9cfdfbadddd3)
![Screenshot 2024-03-13 235250](https://github.com/RepanDh/TP1DPBO2024/assets/133224998/4a7a4048-178f-4b4b-a6b2-370858393435)

