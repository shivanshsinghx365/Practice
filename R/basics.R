#R is case sensitive
#there are 4 windows in R studio : 
#1. first is used for writing scripts
#2. used to see the output & reading
#3. unknown
#4. plotting, packages and help

getwd() #is for getting current working directory
setwd("/home/ubuntu/Practice/R") 
#is for setting working directory, give directory path in "" quotes
getwd()
computerdata=read.csv("Computer_Data.csv")
#to read a file we write    variable=read.csv("file_name.extension")
View(computerdata) #to view data
nrow(computerdata) #to view number of rows
ncol(computerdata) #to view number of columns
names(computerdata) #to view column name
# is used for comments
dim(computerdata) #to view both numbers of row and column
head(computerdata) #for first 6 rows
tail(computerdata) #for last 6 rows
computerdata[7,] #to view 7th row
computerdata[11] #to view 11th column
computerdata[2,2] #to view 2nd row 2nd column
computerdata[7:12,] #to view from 7th to 12th row
computerdata[7:10] #to view from 7th to 10th column
computerdata[c(3,5,7),] #to view specific rows
computerdata[c(4,7)] #to view specific columns
computerdata[c(1000,2000),c(4,5,7)] #for specific row and column
computerdata[-c(1),] #to delete 1st row