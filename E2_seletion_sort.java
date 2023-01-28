import java.util.*;

class E2_seletion_sort {

  public static void main(String args[]) {
    int arr[] = { 3, 5, 9, 7, 8, 1, 2 };
    int j, i;

    for (i = 0; i < arr.length - 1; i++) {
      int smallest = i;
      for (j = i + 1; j < arr.length; j++) {
        if (arr[smallest] > arr[j]) {
          smallest = j;
        }
      }
      int temp = arr[smallest];
      arr[smallest] = arr[i];
      arr[i] = temp;
    }

    for (i = 0; i < arr.length; i++) {
      System.out.printf(arr[i] + " ");
    }
  }
}
