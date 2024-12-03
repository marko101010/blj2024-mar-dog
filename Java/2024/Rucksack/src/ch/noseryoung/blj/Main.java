package ch.noseryoung.blj;

import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        ArrayList<Rucksack> Things = new ArrayList<>();
        Things.add(new Rucksack("Apfel"));
        Things.add(new Rucksack("Wassermelone"));

        System.out.println(Things);

        ArrayList<String> items = new ArrayList<>();
        items.add("Apfel");

        System.out.println(items);

    }
}
