
def insertion_sort(arr: list[int]) -> list[int]:
    n = len(arr)
    i = 1
    for i in range(n):
        cValue = arr[i]
        position = i
        print(f"Considering swapping element {cValue} at index {i}")
        while (position > 0 and arr[position - 1] > cValue):
            arr[position] = arr[position - 1]
            position = position - 1
        arr[position] = cValue
    return arr



def selection_sort(arr):
    for i in range(len(arr)):
        position = i
        for j in range(i + 1, len(arr)):
            if arr[j] < arr[position]:
                position = j
        temp = arr[i]
        arr[i] = arr[position]
        arr[position] = temp

    return arr

def bubble_sort(arr:list[int]) -> list[int]:
    n = len(arr)
    for pas in range(n - 1, -1, -1):
        for i in range(pas):
            if arr[i] > arr[ i + 1]:
                temp = arr[i]
                arr[i] = arr[i + 1]
                arr[i + 1] = temp
    return arr


def binary_search_iterative(arr: list[int], target: int) -> int:
    left, right = 0, len(arr) - 1

    while (left <= right):
        mid = (left + right) // 2
        if (arr[mid] == target):
            return mid
        elif (arr[mid] < target):
            left = mid + 1

        else:
            right = mid - 1

    return -1

def shellSort(arr:list[int]) -> list[int]:
    n = len(arr)
    gap = n // 2 ## Start with a large gap, then reduce the gap
    while(gap > 0): ## Continue until gap is reduced 0
        i = gap
        while(i < n):
            temp = arr[i]
            j = i - gap
            while(j >= 0 and arr[j] > temp):
                arr[j + gap] = arr[j]
                j = j - gap
            arr[j + gap] = temp 
            i = i + 1
        gap //= 2
    return arr


# def shell_sort(arr):
#     n = len(arr)  # Length of the array
#     gap = n // 2  # Initial gap

#     while gap > 0:  # Outer loop reduces the gap
#         i = gap
#         while i < n:  # Traverse elements starting from the gap
#             temp = arr[i]  # Temporary store the current element
#             j = i - gap

#             # Perform gap-based insertion sort
#             while j >= 0 and arr[j] > temp:
#                 arr[j + gap] = arr[j]
#                 j -= gap
            
#             arr[j + gap] = temp  # Place the stored element in its correct position
#             i += 1
        
#         gap //= 2  # Reduce the gap

#     return arr
A = [4, 2, 6, 1, 3]
# sorted_array = shellSort(A)

# print(sorted_array)

## In memory
def reversearray(arr):

    l, r = 0, len(arr) - 1

    while l < r:
        arr[l], arr[r] = arr[r], arr[l]
        l += 1
        r -= 1
    return arr

def reverse(arr):

    reversed_list = arr[::-1]

    return reversed_list

def r(arr):
    reverse_list = []

    n = len(arr)

    for i in range(n - 1, - 1, -1):
        reverse_list.append(arr[i])

    return reverse_list


print(r(A))





