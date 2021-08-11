
#include "Lapse.h"
#include "../fwk/fwk_sort.h"
#include "HayateShiki.h"

namespace {
	struct  _ : public ArraySort {
		_() {
			name = "Hayate-Shiki";
			accessQuota = 120000;
		}
		void sort(ArrayList<int>& arr) {
			HayateShiki::sort(arr, 0, arr.sz);
		}
	} _;
}
Sort* sort_hayate_shiki = &::_;
