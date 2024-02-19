import math


#age values

ages = [13, 15, 16, 16, 19, 20, 20, 21, 22, 22, 25, 25, 25, 25, 30, 33, 33, 35, 35, 35, 35, 36, 40,
45, 46, 52, 70]


length = len(ages)

#defining main function
def main():
    

    def median_ages():
        if length % 2 == 0:
            med1 = ages[(length)//2]
            med2 = ages[(length)//2 -1]
            return (med1 + med2)/2
        else:
            return ages[length//2]
    print("The median age is",median_ages())

    def ages_mean():
        print("The mean is ",round((sum(ages)) / len(ages),2))


    def mode_ages():
        mode_values = []
        for n in ages:
            if ages.count(n) > 2:
                mode_values.append(n)
        while len(mode_values) > 2:
            for m in mode_values:
                if m in mode_values:
                    mode_values.remove(m)
        if len(mode_values) == 2:
            return print("The data is bimodal and the modes are",mode_values)
        elif len(mode_values) == 1:
            return print("The data has one mode and it is",mode_values)
        elif len(mode_values) == 3:
            return print("The data is trimodal and the modes are",mode_values)
        else:
            return print("The data is multimodal and the modes are",mode_values)

    def midrange():
        midrange_value = (min(ages) + max(ages)) / 2
        print("The midrange is ",midrange_value)


    def variance():
        mean = (sum(ages)) / length
        variance_list = []
        for n in ages:
            variance_list.append((n - mean)**2)
        variance_final = (sum(variance_list)) / (length - 1)
        print("The variance is ",round(variance_final,2))


    def standard_dev():
        step1 = sum(ages) / length
        D = []
        for n in ages:
            D.append((step1 - n)**2)
        distance_sum = sum(D)
        sum_average = distance_sum / (length - 1)
        ages_standard_dev = sum_average**(1/2)
        print("The standard deviation is",round(ages_standard_dev,2))


    def first_Q():
        fQ = ages[0:13]
        FirstQuartile = []
        if len(fQ) % 2 == 0:
            med1 = fQ[(len(fQ))//2]
            med2 = fQ[(len(fQ))//2 -1]
            FirstQuartile.append((med1 + med2)/2)
        else:
            FirstQuartile.append(fQ[len(fQ)//2])
        return FirstQuartile

    def third_Q():
        tQ = ages[13:-1]
        ThirdQ = []
        if len(tQ) % 2 == 0:
            med1 = fQ[(len(tQ))//2]
            med2 = fQ[(len(tQ))//2 -1]
            ThirdQ.append((med1 + med2)/2)
        else:
            ThirdQ.append(tQ[len(tQ)//2])
        return ThirdQ

    median_ages()
    ages_mean()
    mode_ages()
    midrange()
    variance()
    standard_dev()
    first_Q()
    third_Q()
    
    #five number summary

    print('\n',"The five number summary is:", '\n')
    print("The minumum age is",min(ages))
    print("The first quartile is",first_Q())
    print("The median is",median_ages())
    print("The third quartile is",third_Q())
    print("The maximum age is",max(ages))

main()