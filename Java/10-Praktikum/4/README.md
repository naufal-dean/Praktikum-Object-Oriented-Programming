Publish/subscribe pattern merupakan sebuah design pattern dimana terdapat sebuah kelas yang bekerja sebagai Publisher (mempublikasikan setiap perubahan yang ada) dan juga kelas yang bekerja sebagai Subscriber (menerima setiap perubahan yang ada dari kelas yang disubscribe).

Pada soal ini, kita akan mengimplementasi sebuah sistem Mailing List dengan menggunakan EventChannel. Secara garis besar alur proses sistem ini adalah sebagai berikut:

- Ada 2 entitas, yakni EmailAccountStudent dan EmailAccountTeacher.
- EmailAccountStudent dapat subscribe ke sebuah kode mata kuliah.
- EmailAccountTeacher dapat mengirimkan email / tugas ke sebuah kode mata kulaih.
- Jika sebuah email / tuga dikirim, semua EmailAccountStudent akan menerima email / tugas itu.
- Di Pub/sub pattern:
    - Email / tugas adalah Event
    - EmailAccountStudent adalah Subscriber, sebuah objek yang akan menerima event bila ada event baru
    - EmailAccountTeacher adalah Publisher, sebuah objek yang mampu mengirimkan perubahan
    - Kode mata kuliah adalah topic, sehingga tidak semua student mendapat event, hanya yang subscribe ke topik tertentu
    - Mailserver adalah EventChannel, yang mengorkestrasikan sistem ini.

Diberikan [Milist.zip](Milist.zip), lengkapi dan kumpulkan kembali MailServer.java.
