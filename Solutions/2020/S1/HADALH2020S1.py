num = int(input())

data = []

for counter in range(num):
    currentinput = input()
    data.append(currentinput)

newdata = []

for item in data:
    item = item.split()
    newdata.append(item)

finaldata = newdata

for index in range(len(newdata)):
    for counter in range(len(newdata[index])):
        val = int(newdata[index][counter])
        finaldata[index][counter] = val

finaldata.sort()
speeds = []

for counter in range(1, len(data)):
    currentspeed = (finaldata[counter][1] - finaldata[counter - 1][1])/(finaldata[counter][0] - finaldata[counter - 1][0])
    currentspeed = abs(currentspeed)

    speeds.append(currentspeed)

finalspeed = max(speeds)

print(finalspeed)
