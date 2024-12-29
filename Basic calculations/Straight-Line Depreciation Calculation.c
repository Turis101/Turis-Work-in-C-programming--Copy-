/*
Calculate the annual depreciation for an asset
with a cost of UGX 5000, a residual value of UGX 500, and a useful life of 5 years.
- Formula: depreciation = (asset_cost - residual_value) / useful_life
*/

#include <stdio.h>
#include <stdlib.h>

const int asset_cost = 5000, residual_value = 500, useful_life = 5;
int depreciation = (asset_cost - residual_value) / useful_life;

int main()
{
    printf("The annual depreciation for an asset with a cost of UGX%d, a residual value of UGX%d and a useful life of %dyears is: %d\n", asset_cost, residual_value, useful_life, depreciation);

    return 0;
}
