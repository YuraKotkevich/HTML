import java.io.*;
import java.util.Scanner;

public class fileWrite {
    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);
        System.out.print("Enter text: ");
        String text = in.nextLine();
        in.close();

        try (FileWriter writer = new FileWriter("D:/Laba2/text.txt", false)) {
            writer.write(text);
            writer.flush();
        } catch (IOException ex) {

            System.out.println(ex.getMessage());
        }
    }

}
