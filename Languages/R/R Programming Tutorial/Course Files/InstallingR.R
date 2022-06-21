# File:   InstallingR.R
# Course: R: An Introduction (with RStudio)

# LOAD DATA ################################################

library(datasets)  # Load built-in datasets

# SUMMARIZE DATA ###########################################

head(iris)         # Show the first six lines of iris data
summary(iris)      # Summary statistics for iris data
plot(iris)         # Scatter plot matrix for iris data
tail(iris)         # Show the last 6 lines of iris data
# iris is a popular data set based on iris flower

# CLEAN UP #################################################

# Clear packages
detach("package:datasets", unload = TRUE)  # For base

# Clear plots
dev.off()  # But only if there IS a plot

# Clear console

# Clear mind :)
