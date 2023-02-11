import java.io.*;

public class fileRead {

    public static void main(String[] args) {

        try (FileReader reader = new FileReader("D:/Laba2/text.txt")) {
            // читаем посимвольно
            int c;
            int count = 0;
            while ((c = reader.read()) != -1) {
                count++;
                System.out.print((char) c);
            }
            System.out.print("\nNumber of characters: " + count);
        } catch (IOException ex) {

            System.out.println(ex.getMessage());
        }

    }
}