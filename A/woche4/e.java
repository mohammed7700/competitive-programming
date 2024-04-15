import java.util.HashMap;
import java.util.Scanner;

public class ProblemE {

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        int n = s.nextInt();
        int k = s.nextInt();
        int[] sub = new int[n];

        for (int i = 0; i < n; i++) {
            sub[i] = s.nextInt();
        }
        s.close();

        HashMap<Long, Long> temp1 = new HashMap<>();
        HashMap<Long, Long> temp2 = new HashMap<>();
        long result = 0;

        for (int j = 0; j < n; j++) {
            long current = sub[j];
            result += temp2.getOrDefault(current, 0L);
            long next = current * k;
            temp2.put(next, temp2.getOrDefault(next, 0L) + temp1.getOrDefault(current, 0L));
            temp1.put(next, temp1.getOrDefault(next, 0L) + 1);
        }
        System.out.println(result);
    }
}
