import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        // Создаем смешанный список с использованием Object
        List<Object> spisok = new ArrayList<>();
        spisok.add(1);
        spisok.add(2);
        spisok.add(3);
        spisok.add("a");
        spisok.add("b");
        spisok.add("d");
        
        List<Integer> spisokChisla = new ArrayList<>();
        
        for (Object el : spisok) {
            if (el instanceof Integer) {
                spisokChisla.add((Integer) el);
            }
        }
        
        System.out.println(spisokChisla);
    }
}