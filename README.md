# 🚦 Traffic Light 4 Sisi Menggunakan Arduino Uno

## Overview
Project ini merupakan simulasi **lampu lalu lintas (Traffic Light) untuk 4 persimpangan** menggunakan Arduino Uno. Tujuan dari project ini adalah untuk memahami konsep dasar **pemrograman mikrokontroler**, penggunaan **GPIO (General Purpose Input Output)**, serta pengaturan **waktu (timing)** dalam sistem embedded yang lebih kompleks.

Pada project ini, 12 LED digunakan untuk merepresentasikan lampu lalu lintas di empat sisi jalan
- 🔴 4 LED Merah (Stop)
- 🟡 4 LED Kuning (Bersiap Jalan)
- 🟢 4 LED Hijau (Jalan)

Arduino akan mengatur nyala LED secara bergantian memastikan tidak ada tabrakan antar jalur pada persimpangan jalan.

## Objectives
Tujuan dari project ini adalah
- Memahami dasar penggunaan **Arduino dan mikrokontroler**.
- Mempelajari cara mengontrol **banyak LED menggunakan pin digital**.
- Mengimplementasikan **logika sekuensial bersyarat dan delay waktu**.
- Memahami dasar **simulasi sistem kontrol persimpangan lalu lintas**.

## Components Required
Komponen yang digunakan pada project ini antara lain
- 1x Arduino Uno R3
- 12x LED (4 Merah, 4 Kuning, 4 Hijau)
- 12x Resistor 220Ω
- Breadboard
- Kabel Jumper secukupnya

## Circuit Diagram
Rangkaian terdiri dari 12 LED yang masing-masing dihubungkan ke pin digital Arduino melalui resistor 220Ω untuk membatasi arus.

Koneksi Jalur pada Pin Digital
- Jalur 1 -> Merah (Pin 2), Kuning (Pin 3), Hijau (Pin 4)
- Jalur 2 -> Merah (Pin 5), Kuning (Pin 6), Hijau (Pin 7)
- Jalur 3 -> Merah (Pin 8), Kuning (Pin 9), Hijau (Pin 10)
- Jalur 4 -> Merah (Pin 11), Kuning (Pin 12), Hijau (Pin 13)

Setiap LED dihubungkan ke **ground (GND)** secara paralel pada breadboard.

## How It Works
Program Arduino akan menyalakan LED secara bergantian dengan urutan siklus memutar dari Jalur 1 hingga Jalur 4. Logika utamanya adalah
1. Satu jalur mendapat giliran **Hijau menyala** (kendaraan berjalan) selama 3 detik, sementara 3 jalur lainnya tertahan oleh lampu **Merah**.
2. Jalur tersebut kemudian beralih ke **Kuning menyala** (persiapan berhenti) selama 1 detik.
3. Siklus berpindah ke jalur berikutnya, dan jalur sebelumnya kembali ke status **Merah**.
4. Siklus ini akan terus berulang secara otomatis selama Arduino dialiri tegangan listrik.

Project ini dibuat sebagai bagian dari pembelajaran mata kuliah **Pemrograman Sistem Tertanam**.
