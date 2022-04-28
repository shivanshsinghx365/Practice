#Vectors
x<-c(1,2,3) #stores 1,2,3
print(x) #print 1 2 3
y <- c(1:15) # stored numbers from 1 to 15
print(y)
typeof(y) #shows type of data stored in vector
length(x) #prints number of elements in vector
#for loop 1
for (i in 1:10){
  print(i)
}
#for loop 2
for (i in 1:5) print(i)
#passing a vector
for (i in x) print(i)
for (i in c(1:5)) print(i)

#calculate sum
sum=0
for(i in 1:25){
  sum=sum+i
}
print(sum)
#calculate mean
mean=sum/25
print(mean)