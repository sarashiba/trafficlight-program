# 🚦 Traffic Light 4 Sisi Menggunakan Arduino Uno

## Overview
Project ini merupakan simulasi lampu lalu lintas untuk 4 persimpangan menggunakan Arduino Uno. Tujuan dari project ini adalah memahami konsep dasar pemrograman mikrokontroler, penggunaan GPIO, serta pengaturan waktu dalam sistem embedded yang lebih kompleks.

Pada project ini, 12 LED digunakan untuk merepresentasikan lampu lalu lintas di empat sisi jalan (Utara, Timur, Selatan, Barat)
- 🔴 4 LED Merah (Stop)
- 🟡 4 LED Kuning (Bersiap Jalan)
- 🟢 4 LED Hijau (Jalan)

Arduino akan mengatur nyala LED secara bergantian memutar searah jarum jam untuk memastikan tidak ada tabrakan antar jalur.

## Objectives
Tujuan dari project ini adalah
- Memahami dasar penggunaan Arduino dan mikrokontroler.
- Mempelajari cara mengontrol banyak LED menggunakan pin digital.
- Mengimplementasikan logika sekuensial bersyarat, perulangan (looping), dan delay waktu.
- Memahami dasar simulasi sistem kontrol persimpangan lalu lintas otomatis.

## Components Required
Komponen yang digunakan pada project ini antara lain
- 1x Arduino Uno R3
- 12x LED (4 Merah, 4 Kuning, 4 Hijau)
- 12x Resistor 220Ω
- Breadboard
- Kabel Jumper secukupnya

## Circuit Diagram
Rangkaian terdiri dari 12 LED yang masing-masing dihubungkan ke pin digital Arduino melalui resistor 220Ω untuk membatasi arus.

Koneksi Jalur pada Pin
- Utara -> Merah (Pin 2), Kuning (Pin 3), Hijau (Pin 4)
- Timur -> Merah (Pin 5), Kuning (Pin 6), Hijau (Pin 7)
- Selatan -> Merah (Pin 8), Kuning (Pin 9), Hijau (Pin 10)
- Barat -> Merah (Pin 11), Kuning (Pin 12), Hijau (Pin A0)

Setiap LED dihubungkan ke ground (GND) secara paralel pada breadboard.

## How It Works
Program Arduino akan menyalakan LED secara bergantian dengan urutan memutar searah jarum jam (Utara -> Timur -> Selatan -> Barat). Logika utamanya adalah
1. Kondisi default semua jalur ditahan oleh lampu Merah.
2. Satu jalur mendapat giliran Hijau menyala (kendaraan berjalan) selama 5 detik.
3. Lampu Hijau mati, lalu lampu Kuning berkedip 3 kali sebelum akhirnya menyala solid selama 2 detik (persiapan berhenti).
4. Siklus berpindah ke simpang berikutnya, dan jalur sebelumnya kembali ke status Merah.
5. Siklus ini akan terus berulang secara otomatis.

Project ini dibuat sebagai bagian dari pembelajaran mata kuliah Pemrograman Sistem Tertanam.
