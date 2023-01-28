import java.util.*;

class E3_insertion_sorts {

  public static void main(String args[]) {
    int arr[] = { 3, 5, 9, 7, 8, 1, 2 };
    int i, j;

    for (i = 1; i < arr.length; i++) {
      int current = arr[i];
      for (j = i - 1; j >= 0 && current < arr[j]; j--) {
        arr[j + 1] = arr[j];
      }
      arr[j + 1] = current;
    }
    for (i = 0; i < arr.length; i++) {
      System.out.printf(arr[i] + " ");
    }
  }
}
