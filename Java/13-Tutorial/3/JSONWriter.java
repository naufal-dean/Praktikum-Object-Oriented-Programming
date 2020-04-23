// Nama   : Naufal Dean Anugrah
// NIM    : 13518123
// Tanggal: 23 April 2020
// Topik  : Reflection

import java.util.Map;
import java.util.TreeMap;
import java.util.stream.Collectors;
import java.lang.reflect.*;

class JSONWriter {
    private Object o;

    public JSONWriter(Object o) {
        this.o = o;
    }

    public String mapToJSON(Map<String, String> jsonFieldMap) {
        String jsonString = jsonFieldMap
            .entrySet()
            .stream()
            .map(entry -> "\"" + entry.getKey() + "\":\"" + entry.getValue() + "\"")
            .collect(Collectors.joining(","));

        return "{" + jsonString + "}";
    }

    public String toString() {
        Map<String, String> jsonFieldMap = new TreeMap<>();
        // TODO:
        // Untuk setiap field di kelas o, periksa apakah memiliki anotasi dengan
        // field.isAnnotationPresent(JSONField.class).
        // Jika ada, tambahkan entry ke jsonFieldMap dengan <key,value> =
        //   key = nama field
        //   value = nilai dari field
        // ...lengkapi di sini
        Field[] fields = this.o.getClass().getDeclaredFields();
        for (Field field : fields) {
            if (field.isAnnotationPresent(JSONField.class)) {
                try {
                    field.setAccessible(true);
                    jsonFieldMap.put(field.getName(), (String) field.get(this.o));
                } catch (Exception e) {
                    // pass
                }
            }
        }
        return mapToJSON(jsonFieldMap);
    }
}
