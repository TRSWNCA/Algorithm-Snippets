int qpow(int x, int y, int mod) {
  int res = 1;
  for (; y; y >>= 1, x = 1ll * x * x % mod)
    if (y & 1) res = 1ll * res * x % mod;
  return res;
}
