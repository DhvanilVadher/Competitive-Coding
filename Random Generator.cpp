//Source: http://codeforces.com/blog/entry/61587
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

int getRand(int l, int r)
{
	uniform_int_distribution<int> uid(l, r);
	return uid(rng);
}

