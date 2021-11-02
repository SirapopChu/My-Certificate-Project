package com.company;

import java.util.*;

public class Morse_translator_Project {
    public static void main(String[] args) {
        select_mode();
    }

    public static void select_mode() {
        int a;
        Scanner sc1 = new Scanner(System.in);
        System.out.println("Select Mode: ");
        a = sc1.nextInt();

        if (a == 1)
            translatetothai();
        else if (a == 2)
            translatetoenglish();
        else
            System.out.println("Error! Try again");
            select_mode();

    }

    public static void translatetothai() {
        Scanner sc2 = new Scanner(System.in);
        System.out.println("Enter your word: ");
        String thaiToMorse = sc2.nextLine();
        thaiToMorse = thaiToMorse.toLowerCase();

        int counter = 0;

        while (counter < thaiToMorse.length()) {
            Map<Character, String> morse = new HashMap<>();
            morse.put('ก', "--.");
            morse.put('ข', "-.-.");
            morse.put('ค', "-.-");
            morse.put('ง', "-.--.");
            morse.put('จ', "-..-.");
            morse.put('ฉ', "----");
            morse.put('ช', "-..-");
            morse.put('ฌ', "-..-");
            morse.put('ซ', "--..");
            morse.put('ญ', ".---");
            morse.put('ด', "-..");
            morse.put('ฎ', "-..");
            morse.put('ต', "-");
            morse.put('ฏ', "-");
            morse.put('ถ', "-.-..");
            morse.put('ฐ', "-.-..");
            morse.put('ท', "-..--");
            morse.put('ธ', "-..--");
            morse.put('ฑ', "-..--");
            morse.put('ฒ', "-..--");
            morse.put('น', "-.");
            morse.put('ณ', "-.");
            morse.put('บ', "-...");
            morse.put('ป', ".--.");
            morse.put('ผ', "--.-");
            morse.put('ฝ', "-.-.-");
            morse.put('พ', ".--..");
            morse.put('ภ', ".--..");
            morse.put('ฟ', "..-.");
            morse.put('ม', "--");
            morse.put('ย', "-.--");
            morse.put('ร', ".-.");
            morse.put('ล', ".-..");
            morse.put('ฬ', ".-..");
            morse.put('ว', ".--");
            morse.put('ส', "...");
            morse.put('ห', "....");
            morse.put('อ', "-...-");
            morse.put('ฮ', "--.--");
            morse.put('ฤ', ".-.--");
            morse.put('ะ', ".-...");
            morse.put('า', ".-");
            morse.put('ิ', "..-..");
            morse.put('ี', "..");
            morse.put('ุ', "..--.");
            morse.put('ู', "---.");
            morse.put('เ', ".");
            morse.put('ไ', ".-.-");
            morse.put('ใ', ".-.-");
            morse.put('โ', "---");
            morse.put('ำ', "...-.");
            morse.put('่', "..-");
            morse.put('้', "...-");
            morse.put('๊', "--...");
            morse.put('๋', ".-.-.");
            morse.put('ั', ".--.-");
            morse.put('็', "---..");
            morse.put('์', "--..-");
            morse.put('ๆ', "-.---");
            morse.put(' '," ");
            System.out.print(morse.get(thaiToMorse.charAt(counter)));
            counter++;

        }
        System.exit(0);
    }
    public static void translatetoenglish()  {
        Scanner sc3 = new Scanner(System.in);
        System.out.println("Enter your word: ");
        String englishToMorse = sc3.nextLine();
        englishToMorse = englishToMorse.toLowerCase();

        int counter = 0;

        while (counter < englishToMorse.length()) {
            Map<Character, String> morse = new HashMap<>();
            morse.put('a', ".-");
            morse.put('b', "-...");
            morse.put('c', "-.-.");
            morse.put('d', "-..");
            morse.put('e', ".");
            morse.put('f', "..-.");
            morse.put('g', "--.");
            morse.put('h', "....");
            morse.put('i', "..");
            morse.put('j', ".---");
            morse.put('k', "-.-");
            morse.put('l', ".-..");
            morse.put('m', "--");
            morse.put('n', "-.");
            morse.put('o', "---");
            morse.put('p', ".--.");
            morse.put('q', "--.-");
            morse.put('r', ".-.");
            morse.put('s', "...");
            morse.put('t', "-");
            morse.put('u', "..-");
            morse.put('v', "...-");
            morse.put('w', ".--");
            morse.put('x', ".--");
            morse.put('y', "-.--");
            morse.put('z', "--..");
            morse.put('0', "-----");
            morse.put('1', ".----");
            morse.put('2', "..---");
            morse.put('3', "...--");
            morse.put('4', "....-");
            morse.put('5', ".....");
            morse.put('6', "-....");
            morse.put('7', "--...");
            morse.put('8', "---..");
            morse.put('9', "----.");
            morse.put(' '," ");
            System.out.print(morse.get(englishToMorse.charAt(counter)));
            counter++;

        }
        System.exit(0);
    }
}
