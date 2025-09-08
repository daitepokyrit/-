import java.util.ArrayList;
import java.util.List;

public class Main {
    public static void main(String[] args) {
        List<Integer> spisok = new ArrayList<>();
        spisok.add(1);
        spisok.add(2);
        spisok.add(3);
        spisok.add(4);
        
        if (!spisok.isEmpty()) {
            spisok.remove(spisok.size() - 1);
        }

        
        spisok.add(10);
        
        System.out.println(spisok); // [1, 2, 3, 10]
    }
}
