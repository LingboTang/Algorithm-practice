def compare_array(array):
    larger_array = []
    smaller_array = []
    if len(array) == 1:
        return list(array[0])*2
    elif len(array)%2 ==0:
        index0 = 0
        index1 = 1
        while True:
            try:
                if array[index0] > array[index1]:
                    larger_array.append(array[index0])
                    smaller_array.append(array[index1])
                elif array[index0] < array[index1]:
                    larger_array.append(array[index1])
                    smaller_array.append(array[index0])
                index0 +=2
                index1 +=2
            except IndexError:
                break
        return compare_array(larger_array),compare_array(samller_array)
                
