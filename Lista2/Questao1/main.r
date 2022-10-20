bin_search <- function (v, t) {
      lo <- 1
      hi <- length(v)
      while (lo <= hi) {
            mid = round((lo + hi) / 2)
            
            if (abs(v[mid] - t) <= 0 ) {
                  return(mid)
                  print(mid)
                  break
            } else if (v[mid] < t) {
                  lo = mid + 1
            } else {
                  hi = mid - 1
            }
      }
}
vector2 <- list(c(10,11,12,13,14), c(12))
do.call(bin_search, vector2)
