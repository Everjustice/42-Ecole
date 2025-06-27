# 42 Piscine - C Modules

Her klasör belirli bir C programlama konusunu kapsar. Aşağıda kısa özetler mevcut:

---

## 📂 Klasörler

| Klasör | Konu                     | Açıklama                                     |
|--------|--------------------------|----------------------------------------------|
| C00    | Yazdırma Fonksiyonları   | Temel yazdırma (`putchar`, `print_comb` vs.) |
| C01    | Fonksiyonlar & Koşullar  | `swap`, `strlen`, `strcmp` vs.               |
| C02    | String İşlemleri         | `strcat`, `strncat`, `strstr` vs.            |
| C03    | Pointer & Karşılaştırma  | `strncpy`, `atoi`, `strncmp`                 |
| C04    | Rekürsif Fonksiyonlar    | Faktöriyel, üs alma, fibonacci                |
| C05    | Rekürsif - Gelişmiş      | Asallık kontrolü, sayı sayma vs.             |
| C06    | Argüman İşleme           | Parametre yazdırma (`argv`)                  |
| C07    | Bellek & Dizi            | `range`, `ultimate_range`, `split_whitespaces` |
| C08    | Malloc & Dönüştürme      | `strdup`, `concat_params`, `convert_base`    |

---

## 🧪 Derleme

```bash
cc -Wall -Wextra -Werror *.c
