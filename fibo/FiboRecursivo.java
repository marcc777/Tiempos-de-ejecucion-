import java.time.Duration;
import java.time.Instant;

public class Main {

    // Declaracion de la funcion
    public static int fibo(int n)
    {
        if (n == 0 || n == 1) 
        {
            return n;
        }
        else 
        {
            return fibo(n - 1) + fibo(n - 2);
        }
    }

    public static void main(String[] args) 
    {
        // Inicia la medicion del tiempo
        Instant start = Instant.now();

        System.out.println(fibo(40));

        // Finaliza la medicion del tiempo
        Instant end = Instant.now();

        // Calcula la duración
        Duration duration = Duration.between(start, end);
        System.out.println("Tiempo de ejecución: " + duration.toMillis() / 1000.0 + " segundos");
    }
}
