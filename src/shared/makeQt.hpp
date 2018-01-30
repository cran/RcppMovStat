#ifndef __UTILITIES__
#define __UTILITIES__

// quantile setup
struct quantile {
  int lo, hi, n, total;
  double hlo, hhi;
};

quantile make_quantile(int n, double prob) {
  quantile res; 
  double index = (n - 1) * prob;
  res.lo = floor(index);
  res.hi = res.lo + 1;
  res.hhi = index - res.lo;
  res.hlo = 1 - res.hhi;
  return res;	
}

#endif // __UTILITIES__