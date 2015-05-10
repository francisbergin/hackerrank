#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <assert.h>

int maxXor(int l, int r) {
	int ans = 0;
	int l1 = 0, r1 = 0;
	for (l1 = l; l1 < r; l1++){
		for (r1 = l1+1; r1 <= r; r1++){
			if((l1^r1) > ans)
				ans = (l1^r1);		
		}
	}
	return ans;
}

int main() {
    int res;
    int _l;
    scanf("%d", &_l);
    
    int _r;
    scanf("%d", &_r);
    
    res = maxXor(_l, _r);
    printf("%d", res);
    
    return 0;
}
