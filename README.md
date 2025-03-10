
# Türkiye Plaka Kodu ile Şehir Bulma Programı  

## 📌 Proje Hakkında  
Bu proje, kullanıcının girdiği plaka numarasına göre Türkiye'deki şehirleri bulan basit bir **C programıdır**.  
Program, **plaka.txt** adlı dosyadan şehir isimlerini ve plaka kodlarını okuyarak, girilen plaka koduna karşılık gelen şehri ve bulunduğu bölgeyi ekrana yazdırır.  

## 🔑 Özellikler  
- Kullanıcıdan plaka kodu alma  
- Plaka koduna ait şehri ve bölgesini ekrana yazdırma  
- **Türkçe karakter desteği** (ç, ğ, ö, ü, ş, ı)  
- Hatalı plaka kodu için bilgilendirme  

## 🛠 Kullanılan Kütüphaneler  
- `stdio.h`  
- `stdlib.h`  
- `string.h`  
- `locale.h` (Türkçe karakter desteği için)  
- `wchar.h` (Geniş karakter desteği)  

## 📂 Dosya Yapısı  
```
/PlakaKoduProgrami  
│  
├── plaka.txt          // Türkiye illeri ve plaka kodları listesi  
└── main.c             // Programın kaynak kod dosyası  
```  

### plaka.txt Örneği:  
```
1 Adana  
2 Adıyaman  
3 Afyonkarahisar  
...  
61 Trabzon  
...  
81 Düzce  
```  

## 💻 Programı Çalıştırma  
1. **plaka.txt** dosyasını proje klasörüne ekleyin.  
2. Terminal veya komut satırında programı derleyin:  
```bash
gcc main.c -o plaka
```  
3. Programı çalıştırın:  
```bash
./plaka
```  

## ✅ Örnek Çalışma  
```
Lütfen bir plaka kodu giriniz: 61  
Trabzon Doğu Karadeniz bölgesinde yer alır.
```  

## ⚙️ Teknik Bilgiler  
- **plaka.txt** dosyasındaki veriler satır satır okunur.  
- Kullanıcının girdiği plaka kodu dosyadaki verilerle karşılaştırılır.  
- Eşleşme bulunursa şehir ve bölge bilgisi ekrana yazdırılır.  
- Türkçe karakter desteği için:  
```c
setlocale(LC_ALL, "Turkish");
```  

## ⚠️ Notlar  
- Plaka kodları 1 ile 81 arasında olmalıdır.  
- Geçersiz plaka kodu girilirse kullanıcı uyarılır.  

## 👨‍💻 Geliştirici  
- **Bahattin Yunus Çetin**  

## 📜 Lisans  
Bu proje tamamen **eğitim amaçlı** hazırlanmıştır.  
