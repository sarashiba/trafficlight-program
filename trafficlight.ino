// Pin konfigurasi untuk Utara, Timur, Selatan, Barat
int merahUtara = 2, kuningUtara = 3, hijauUtara = 4;
int merahTimur = 5, kuningTimur = 6, hijauTimur = 7;
int merahSelatan = 8, kuningSelatan = 9, hijauSelatan = 10;
int merahBarat = 11, kuningBarat = 12, hijauBarat = A0;

void setup() {
  // Atur semua pin sebagai output
  pinMode(merahUtara, OUTPUT); pinMode(kuningUtara, OUTPUT); pinMode(hijauUtara, OUTPUT);
  pinMode(merahTimur, OUTPUT); pinMode(kuningTimur, OUTPUT); pinMode(hijauTimur, OUTPUT);
  pinMode(merahSelatan, OUTPUT); pinMode(kuningSelatan, OUTPUT); pinMode(hijauSelatan, OUTPUT);
  pinMode(merahBarat, OUTPUT); pinMode(kuningBarat, OUTPUT); pinMode(hijauBarat, OUTPUT);

  // Kondisi default Semua lampu merah
  semuaMerah();
}

void loop() {
  // Sesuai arah jarum jam Utara -> Timur -> Selatan -> Barat
  aktifkanSimpang(merahUtara, kuningUtara, hijauUtara);
  aktifkanSimpang(merahTimur, kuningTimur, hijauTimur);
  aktifkanSimpang(merahSelatan, kuningSelatan, hijauSelatan);
  aktifkanSimpang(merahBarat, kuningBarat, hijauBarat);
}

void semuaMerah() {
  // Nyalakan semua lampu merah, matikan kuning dan hijau
  digitalWrite(merahUtara, HIGH); digitalWrite(kuningUtara, LOW); digitalWrite(hijauUtara, LOW);
  digitalWrite(merahTimur, HIGH); digitalWrite(kuningTimur, LOW); digitalWrite(hijauTimur, LOW);
  digitalWrite(merahSelatan, HIGH); digitalWrite(kuningSelatan, LOW); digitalWrite(hijauSelatan, LOW);
  digitalWrite(merahBarat, HIGH); digitalWrite(kuningBarat, LOW); digitalWrite(hijauBarat, LOW);
}

void aktifkanSimpang(int pinMerah, int pinKuning, int pinHijau) {
  // Matikan lampu merah di simpang ini, nyalakan lampu hijau
  digitalWrite(pinMerah, LOW);
  digitalWrite(pinHijau, HIGH);
  delay(5000); // Hijau menyala 5 detik

  // Matikan hijau, mulai fase kuning
  digitalWrite(pinHijau, LOW);

  // Efek kuning kedip 3 kali
  for(int i = 0; i < 3; i++) {
    digitalWrite(pinKuning, HIGH);
    delay(300); // Nyala sementara
    digitalWrite(pinKuning, LOW);
    delay(300); // Mati sementara
  }

  // Kuning menyala selama 2 detik penuh
  digitalWrite(pinKuning, HIGH);
  delay(2000);
  digitalWrite(pinKuning, LOW);

  // Kembali ke merah
  digitalWrite(pinMerah, HIGH);
}
