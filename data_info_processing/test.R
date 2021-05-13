print("welcome")
setwd("C:/workspace/Git/KNOU/data_info_processing")
getwd()
data <- read.table(file="score.txt", 
                   header = FALSE, 
                   stringsAsFactors = FALSE)
data
head(data)
data_sum <- sum(data)
data_sum
# apply( ) 함수 : 배열 또는 행렬에 함수 FUN을 MARGIN 방향으로 적용하여 결과를 벡터, 배열 또는 리스트로 반환
# apply(
#   X,       # 배열 또는 행렬
#   MARGIN,  # 함수를 적용하는 방향. 1은 행 방향, 2는 열 방향
#   # c(1, 2)는 행과 열 방향 모두를 의미
#   FUN      # 적용할 함수
# )

#평균
data_mean <- apply(data,1,mean)
#중앙값
data_median <- apply(data,1,median) 
#표본분산
data_var <- apply(data,1,var)
#표본표준편차
data_sd <- apply(data,1,sd)
#변동계수(CV: Coefficient of Variation)
#변동계수 = 표준편차 / 평균
#   CV(x) = sd(x) / mean(x)
data_cv <- data_sd / data_mean

data_mean
data_median
data_var
data_sd
data_cv

#줄기-잎 그림
score=scan("score.txt")
stem(score)
#히스토그램
hist(score)
#상자그림
summary(score)
boxplot(score)

#최빈값
data_freq <- which(score==max(score))
data_freq

#왜도
install.packages("moments")
library(moments)
data_skew <- skewness(score)
data_skew

# score.txt 에서 이상값 제거
data_ <- read.table(file="score_.txt", 
                   header = FALSE, 
                   stringsAsFactors = FALSE)
data_
score_=scan("score_.txt")
summary(score_)
boxplot(score_)
