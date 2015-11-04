import java.util.Scanner;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        Date dateReturned = new Date(sc.nextInt(), sc.nextInt(), sc.nextInt());
        Date dueDate = new Date(sc.nextInt(), sc.nextInt(), sc.nextInt());

        if (dateReturned.equals(dueDate) || dueDate.after(dateReturned))
            System.out.println(0);
        else if (dateReturned.sameMonth(dueDate))
            System.out.println(dateReturned.daysAfter(dueDate) * 15);
        else if (dateReturned.sameYear(dueDate))
            System.out.println(dateReturned.monthsAfter(dueDate) * 500);
        else
            System.out.println(10000);

        sc.close();
    }
}

class Date {
    private int day;
    private int month;
    private int year;

    public Date(int day, int month, int year) {
        this.day = day;
        this.month = month;
        this.year = year;
    }

    public boolean equals(Date otherDate) {
        if (day == otherDate.day && month == otherDate.month && year == otherDate.year)
            return true;

        return false;
    }

    public boolean after(Date otherDate) {
        if (year > otherDate.year)
            return true;

        if (year == otherDate.year && month > otherDate.month)
            return true;

        if (year == otherDate.year && month == otherDate.month && day > otherDate.day)
            return true;

        return false;
    }

    public boolean sameYear(Date otherDate) {
        if (year == otherDate.year)
            return true;

        return false;
    }

    public boolean sameMonth(Date otherDate) {
        if (month == otherDate.month && year == otherDate.year)
            return true;

        return false;
    }

    public int daysAfter(Date otherDate) {
        return day - otherDate.day;
    }

    public int monthsAfter(Date otherDate) {
        return month - otherDate.month;
    }
}
