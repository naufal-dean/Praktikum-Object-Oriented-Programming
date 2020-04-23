// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 23 April 2020
// Topik  : Reflection

import java.util.*;
import java.lang.reflect.Field;
import java.lang.reflect.Method;

public class LaptopTest {
    // Anda boleh menambahkan atribut yang diperlukan
    private String className;

    public LaptopTest(String className) {
        /**
         * Memeriksa apakah ada kelas dengan nama className.
         * Jika tidak, tuliskan "Tidak ada kelas dengan nama yang diberikan" (tanpa petik) ke layar
         */
         this.className = className;
         try {
            Class.forName(className);
         } catch (Exception e) {
            System.out.println("Tidak ada kelas dengan nama yang diberikan");
         }
    }

    public boolean testMethods() {
        boolean passed = true;
        try {
            Method[] methods = Class.forName(this.className).getDeclaredMethods();
            if (methods.length == 1) {
                // Jika nama method bukan getRamSize, tuliskan "Nama method harus getRamSize" (tanpa petik) ke layar
                // Jika tipe return bukan Integer, tuliskan "Tipe return method harus Integer" (tanpa petik) ke layar
                if (!methods[0].getName().equals("getRamSize")) {
                    System.out.println("Nama method harus getRamSize");
                    passed = false;
                }
                if (!methods[0].getReturnType().equals(Integer.class)) {
                    System.out.println("Tipe return method harus Integer");
                    passed = false;
                }
            } else {
                // Menuliskan "Banyaknya method hanya boleh 1" (tanpa petik) ke layar
                System.out.println("Banyaknya method hanya boleh 1");
                passed = false;
            }
        } catch (Exception e) {
            passed = false;
        }
        // Return true jika semua tes berhasil
        // Jika ada 1 yang salah, return false
        return passed;
    }

    public boolean testFields() {
        boolean passed = true;
        try {
            Field[] fields = Class.forName(this.className).getDeclaredFields();
            if (fields.length == 1) {
                // Jika nama field bukan serialNumber, tuliskan "Nama field harus serialNumber" (tanpa petik) ke layar
                if (!fields[0].getName().equals("serialNumber")) {
                    System.out.println("Nama field harus serialNumber");
                    passed = false;
                }
                // Jika tipe return bukan String, tuliskan "Tipe field harus String" (tanpa petik) ke layar
                if (!fields[0].getType().equals(String.class)) {
                    System.out.println("Tipe field harus String");
                    passed = false;
                }
            } else {
                // Menuliskan "Banyaknya field hanya boleh 1" (tanpa petik) ke layar
                System.out.println("Banyaknya field hanya boleh 1");
                passed = false;
            }
        } catch (Exception e) {
            passed = false;
        }
        // Return true jika semua tes berhasil
        // Jika ada 1 yang salah, return false
        return passed;
    }
}
