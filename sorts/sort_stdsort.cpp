#include "../fwk/fwk_sort.h"

namespace {
	struct  _ : public ArraySort {
		_() {
			name = "Introsort";
			accessQuota = 120000;
		}
		void sort(ArrayList<int>& arr) {
			std::sort(0, arr.sz);
		}
	} _;
}
Sort* sort_stdsort = &::_;