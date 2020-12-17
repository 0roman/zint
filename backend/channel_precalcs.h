/*
    libzint - the open source barcode library
    Copyright (C) 2020 Robin Stuart <rstuart114@gmail.com>

    Redistribution and use in source and binary forms, with or without
    modification, are permitted provided that the following conditions
    are met:

    1. Redistributions of source code must retain the above copyright
       notice, this list of conditions and the following disclaimer.
    2. Redistributions in binary form must reproduce the above copyright
       notice, this list of conditions and the following disclaimer in the
       documentation and/or other materials provided with the distribution.
    3. Neither the name of the project nor the names of its contributors
       may be used to endorse or promote products derived from this software
       without specific prior written permission.

    THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
    ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
    IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
    ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE
    FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
    DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
    OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
    HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
    LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
    OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
    SUCH DAMAGE.
 */
/* vim: set ts=4 sw=4 et : */

/* Channel code precalculated values to avoid excessive looping */
/* To generate uncomment CHANNEL_GENERATE_PRECALCS define and run "./test_channel -f generate -g" */
/* Paste result below here */
static channel_precalc channel_precalcs7[] = {
    {  115338, { 1, 3, 1, 1, 1, 1, 5, 1, }, { 1, 1, 1, 2, 1, 2, 3, 3, }, { 1, 7, 5, 5, 5, 5, 5, }, { 1, 7, 7, 7, 6, 6, 5, }, },
    {  230676, { 1, 1, 2, 2, 4, 1, 1, 2, }, { 1, 2, 1, 3, 2, 1, 3, 1, }, { 1, 7, 7, 6, 5, 2, 2, }, { 1, 7, 6, 6, 4, 3, 3, }, },
    {  346014, { 1, 2, 3, 1, 1, 1, 3, 2, }, { 1, 2, 2, 1, 1, 3, 1, 3, }, { 1, 7, 6, 4, 4, 4, 4, }, { 1, 7, 6, 5, 5, 5, 3, }, },
    {  461352, { 1, 2, 1, 1, 1, 2, 2, 4, }, { 1, 3, 1, 1, 3, 2, 2, 1, }, { 1, 7, 6, 6, 6, 6, 5, }, { 1, 7, 5, 5, 5, 3, 2, }, },
};
static channel_precalc channel_precalcs8[] = {
    {  119121, { 2, 1, 3, 2, 1, 3, 2, 1, }, { 1, 1, 1, 4, 3, 2, 1, 2, }, { 8, 7, 7, 5, 4, 4, 2, }, { 8, 8, 8, 8, 5, 3, 2, }, },
    {  238242, { 2, 1, 1, 2, 2, 2, 1, 4, }, { 1, 1, 3, 1, 1, 2, 4, 2, }, { 8, 7, 7, 7, 6, 5, 4, }, { 8, 8, 8, 6, 6, 6, 5, }, },
    {  357363, { 2, 2, 1, 4, 1, 1, 1, 3, }, { 1, 1, 1, 1, 3, 2, 5, 1, }, { 8, 7, 6, 6, 3, 3, 3, }, { 8, 8, 8, 8, 8, 6, 5, }, },
    {  476484, { 2, 2, 1, 1, 3, 2, 3, 1, }, { 1, 1, 3, 1, 2, 2, 3, 2, }, { 8, 7, 6, 6, 6, 4, 3, }, { 8, 8, 8, 6, 6, 5, 4, }, },
    {  595605, { 2, 3, 3, 2, 1, 1, 1, 2, }, { 1, 1, 2, 1, 1, 1, 5, 3, }, { 8, 7, 5, 3, 2, 2, 2, }, { 8, 8, 8, 7, 7, 7, 7, }, },
    {  714726, { 2, 1, 1, 6, 1, 1, 2, 1, }, { 1, 2, 1, 3, 1, 4, 1, 2, }, { 8, 7, 7, 7, 2, 2, 2, }, { 8, 8, 7, 7, 5, 5, 2, }, },
    {  833847, { 2, 1, 1, 3, 1, 3, 3, 1, }, { 1, 2, 3, 1, 1, 3, 2, 2, }, { 8, 7, 7, 7, 5, 5, 3, }, { 8, 8, 7, 5, 5, 5, 3, }, },
    {  952968, { 2, 2, 2, 3, 2, 1, 2, 1, }, { 1, 2, 2, 1, 2, 2, 2, 3, }, { 8, 7, 6, 5, 3, 2, 2, }, { 8, 8, 7, 6, 6, 5, 4, }, },
    { 1072089, { 2, 5, 1, 1, 2, 2, 1, 1, }, { 1, 2, 1, 3, 1, 3, 3, 1, }, { 8, 7, 3, 3, 3, 2, 1, }, { 8, 8, 7, 7, 5, 5, 3, }, },
    { 1191210, { 2, 2, 1, 2, 1, 1, 3, 3, }, { 1, 3, 1, 1, 5, 1, 1, 2, }, { 8, 7, 6, 6, 5, 5, 5, }, { 8, 8, 6, 6, 6, 2, 2, }, },
    { 1310331, { 2, 1, 2, 1, 2, 3, 2, 2, }, { 1, 4, 1, 3, 1, 1, 2, 2, }, { 8, 7, 7, 6, 6, 5, 3, }, { 8, 8, 5, 5, 3, 3, 3, }, },
    { 1429452, { 2, 2, 1, 2, 2, 3, 2, 1, }, { 1, 5, 3, 1, 2, 1, 1, 1, }, { 8, 7, 6, 6, 5, 4, 2, }, { 8, 8, 4, 2, 2, 1, 1, }, },
    { 1548573, { 3, 1, 1, 2, 5, 1, 1, 1, }, { 1, 1, 2, 2, 1, 2, 5, 1, }, { 8, 6, 6, 6, 5, 1, 1, }, { 8, 8, 8, 7, 6, 6, 5, }, },
    { 1667694, { 3, 2, 2, 1, 1, 3, 2, 1, }, { 1, 1, 1, 1, 2, 4, 3, 2, }, { 8, 6, 5, 4, 4, 4, 2, }, { 8, 8, 8, 8, 8, 7, 4, }, },
    { 1786815, { 3, 4, 2, 1, 2, 1, 1, 1, }, { 1, 1, 2, 1, 1, 2, 1, 6, }, { 8, 6, 3, 2, 2, 1, 1, }, { 8, 8, 8, 7, 7, 7, 6, }, },
    { 1905936, { 3, 2, 1, 3, 1, 3, 1, 1, }, { 1, 2, 1, 1, 1, 4, 2, 3, }, { 8, 6, 5, 5, 3, 3, 1, }, { 8, 8, 7, 7, 7, 7, 4, }, },
    { 2025057, { 3, 1, 2, 2, 1, 1, 4, 1, }, { 1, 3, 2, 1, 1, 1, 5, 1, }, { 8, 6, 6, 5, 4, 4, 4, }, { 8, 8, 6, 5, 5, 5, 5, }, },
    { 2144178, { 3, 1, 2, 1, 2, 2, 2, 2, }, { 1, 5, 1, 1, 4, 1, 1, 1, }, { 8, 6, 6, 5, 5, 4, 3, }, { 8, 8, 4, 4, 4, 1, 1, }, },
    { 2263299, { 4, 2, 1, 2, 1, 1, 1, 3, }, { 1, 1, 1, 1, 3, 3, 3, 2, }, { 8, 5, 4, 4, 3, 3, 3, }, { 8, 8, 8, 8, 8, 6, 4, }, },
    { 2382420, { 4, 2, 1, 1, 1, 1, 4, 1, }, { 1, 2, 2, 2, 2, 2, 2, 2, }, { 8, 5, 4, 4, 4, 4, 4, }, { 8, 8, 7, 6, 5, 4, 3, }, },
    { 2501541, { 5, 1, 1, 2, 2, 1, 1, 2, }, { 1, 1, 2, 3, 3, 1, 1, 3, }, { 8, 4, 4, 4, 3, 2, 2, }, { 8, 8, 8, 7, 5, 3, 3, }, },
    { 2620662, { 6, 1, 1, 1, 2, 1, 1, 2, }, { 1, 2, 4, 1, 2, 3, 1, 1, }, { 8, 3, 3, 3, 3, 2, 2, }, { 8, 8, 7, 4, 4, 3, 1, }, },
    { 2739783, { 1, 1, 1, 1, 3, 3, 4, 1, }, { 2, 1, 2, 1, 6, 1, 1, 1, }, { 8, 8, 8, 8, 8, 6, 4, }, { 8, 7, 7, 6, 6, 1, 1, }, },
    { 2858904, { 1, 1, 2, 3, 3, 1, 3, 1, }, { 2, 1, 3, 1, 3, 1, 2, 2, }, { 8, 8, 8, 7, 5, 3, 3, }, { 8, 7, 7, 5, 5, 3, 3, }, },
    { 2978025, { 1, 2, 2, 4, 1, 2, 1, 2, }, { 2, 1, 1, 1, 1, 3, 4, 2, }, { 8, 8, 7, 6, 3, 3, 2, }, { 8, 7, 7, 7, 7, 7, 5, }, },
    { 3097146, { 1, 2, 2, 1, 3, 3, 2, 1, }, { 2, 1, 3, 3, 2, 2, 1, 1, }, { 8, 8, 7, 6, 6, 4, 2, }, { 8, 7, 7, 5, 3, 2, 1, }, },
    { 3216267, { 1, 3, 1, 1, 1, 3, 1, 4, }, { 2, 1, 3, 2, 3, 2, 1, 1, }, { 8, 8, 6, 6, 6, 6, 4, }, { 8, 7, 7, 5, 4, 2, 1, }, },
    { 3335388, { 1, 1, 1, 4, 4, 1, 2, 1, }, { 2, 2, 1, 1, 1, 1, 3, 4, }, { 8, 8, 8, 8, 5, 2, 2, }, { 8, 7, 6, 6, 6, 6, 6, }, },
    { 3454509, { 1, 1, 2, 4, 3, 1, 2, 1, }, { 2, 2, 2, 5, 1, 1, 1, 1, }, { 8, 8, 8, 7, 4, 2, 2, }, { 8, 7, 6, 5, 1, 1, 1, }, },
    { 3573630, { 1, 2, 1, 3, 1, 2, 3, 2, }, { 2, 2, 2, 1, 1, 4, 2, 1, }, { 8, 8, 7, 7, 5, 5, 4, }, { 8, 7, 6, 5, 5, 5, 2, }, },
    { 3692751, { 1, 4, 2, 3, 2, 1, 1, 1, }, { 2, 2, 1, 1, 2, 1, 2, 4, }, { 8, 8, 5, 4, 2, 1, 1, }, { 8, 7, 6, 6, 6, 5, 5, }, },
    { 3811872, { 1, 1, 2, 1, 3, 5, 1, 1, }, { 2, 3, 3, 2, 2, 1, 1, 1, }, { 8, 8, 8, 7, 7, 5, 1, }, { 8, 7, 5, 3, 2, 1, 1, }, },
    { 3930993, { 1, 1, 1, 1, 6, 2, 2, 1, }, { 2, 4, 1, 2, 1, 3, 1, 1, }, { 8, 8, 8, 8, 8, 3, 2, }, { 8, 7, 4, 4, 3, 3, 1, }, },
    { 4050114, { 1, 3, 3, 2, 2, 1, 2, 1, }, { 2, 6, 2, 1, 1, 1, 1, 1, }, { 8, 8, 6, 4, 3, 2, 2, }, { 8, 7, 2, 1, 1, 1, 1, }, },
    { 4169235, { 2, 1, 2, 2, 4, 2, 1, 1, }, { 2, 1, 2, 1, 1, 1, 4, 3, }, { 8, 7, 7, 6, 5, 2, 1, }, { 8, 7, 7, 6, 6, 6, 6, }, },
    { 4288356, { 2, 2, 2, 1, 1, 3, 3, 1, }, { 2, 1, 1, 4, 2, 1, 1, 3, }, { 8, 7, 6, 5, 5, 5, 3, }, { 8, 7, 7, 7, 4, 3, 3, }, },
    { 4407477, { 2, 3, 3, 1, 2, 1, 1, 2, }, { 2, 1, 3, 2, 4, 1, 1, 1, }, { 8, 7, 5, 3, 3, 2, 2, }, { 8, 7, 7, 5, 4, 1, 1, }, },
    { 4526598, { 2, 1, 4, 1, 4, 1, 1, 1, }, { 2, 2, 2, 1, 2, 3, 1, 2, }, { 8, 7, 7, 4, 4, 1, 1, }, { 8, 7, 6, 5, 5, 4, 2, }, },
    { 4645719, { 2, 4, 2, 1, 1, 2, 1, 2, }, { 2, 2, 1, 1, 3, 2, 3, 1, }, { 8, 7, 4, 3, 3, 3, 2, }, { 8, 7, 6, 6, 6, 4, 3, }, },
    { 4764840, { 2, 1, 1, 1, 2, 4, 1, 3, }, { 2, 4, 1, 2, 1, 3, 1, 1, }, { 8, 7, 7, 7, 7, 6, 3, }, { 8, 7, 4, 4, 3, 3, 1, }, },
    { 4883961, { 3, 1, 1, 3, 2, 2, 1, 2, }, { 2, 1, 2, 2, 2, 1, 2, 3, }, { 8, 6, 6, 6, 4, 3, 2, }, { 8, 7, 7, 6, 5, 4, 4, }, },
    { 5003082, { 3, 3, 3, 1, 1, 1, 2, 1, }, { 2, 1, 2, 1, 1, 3, 1, 4, }, { 8, 6, 4, 2, 2, 2, 2, }, { 8, 7, 7, 6, 6, 6, 4, }, },
    { 5122203, { 3, 1, 1, 2, 1, 2, 1, 4, }, { 2, 3, 1, 1, 1, 2, 4, 1, }, { 8, 6, 6, 6, 5, 5, 4, }, { 8, 7, 5, 5, 5, 5, 4, }, },
    { 5241324, { 4, 1, 1, 3, 1, 2, 2, 1, }, { 2, 1, 3, 1, 1, 3, 3, 1, }, { 8, 5, 5, 5, 3, 3, 2, }, { 8, 7, 7, 5, 5, 5, 3, }, },
    { 5360445, { 4, 3, 1, 1, 2, 1, 1, 2, }, { 2, 4, 1, 3, 2, 1, 1, 1, }, { 8, 5, 3, 3, 3, 2, 2, }, { 8, 7, 4, 4, 2, 1, 1, }, },
    { 5479566, { 1, 1, 3, 1, 3, 2, 1, 3, }, { 3, 1, 1, 2, 1, 2, 1, 4, }, { 8, 8, 8, 6, 6, 4, 3, }, { 8, 6, 6, 6, 5, 5, 4, }, },
    { 5598687, { 1, 2, 1, 1, 5, 1, 3, 1, }, { 3, 1, 1, 1, 1, 3, 1, 4, }, { 8, 8, 7, 7, 7, 3, 3, }, { 8, 6, 6, 6, 6, 6, 4, }, },
    { 5717808, { 1, 3, 1, 2, 1, 3, 1, 3, }, { 3, 1, 1, 2, 4, 1, 1, 2, }, { 8, 8, 6, 6, 5, 5, 3, }, { 8, 6, 6, 6, 5, 2, 2, }, },
    { 5836929, { 1, 1, 2, 3, 1, 2, 3, 2, }, { 3, 2, 1, 1, 1, 1, 2, 4, }, { 8, 8, 8, 7, 5, 5, 4, }, { 8, 6, 5, 5, 5, 5, 5, }, },
    { 5956050, { 1, 2, 3, 3, 2, 2, 1, 1, }, { 3, 2, 3, 1, 1, 1, 1, 3, }, { 8, 8, 7, 5, 3, 2, 1, }, { 8, 6, 5, 3, 3, 3, 3, }, },
    { 6075171, { 1, 3, 1, 1, 3, 3, 2, 1, }, { 3, 3, 1, 1, 3, 1, 2, 1, }, { 8, 8, 6, 6, 6, 4, 2, }, { 8, 6, 4, 4, 4, 2, 2, }, },
    { 6194292, { 2, 1, 1, 3, 4, 1, 2, 1, }, { 3, 1, 2, 1, 3, 1, 3, 1, }, { 8, 7, 7, 7, 5, 2, 2, }, { 8, 6, 6, 5, 5, 3, 3, }, },
    { 6313413, { 2, 3, 2, 2, 1, 2, 2, 1, }, { 3, 1, 1, 2, 1, 3, 2, 2, }, { 8, 7, 5, 4, 3, 3, 2, }, { 8, 6, 6, 6, 5, 5, 3, }, },
    { 6432534, { 2, 3, 1, 1, 2, 2, 3, 1, }, { 3, 2, 1, 2, 3, 1, 2, 1, }, { 8, 7, 5, 5, 5, 4, 3, }, { 8, 6, 5, 5, 4, 2, 2, }, },
    { 6551655, { 3, 1, 1, 2, 1, 4, 1, 2, }, { 3, 1, 2, 3, 1, 1, 3, 1, }, { 8, 6, 6, 6, 5, 5, 2, }, { 8, 6, 6, 5, 3, 3, 3, }, },
    { 6670776, { 3, 1, 1, 1, 1, 3, 4, 1, }, { 3, 3, 1, 2, 1, 1, 3, 1, }, { 8, 6, 6, 6, 6, 6, 4, }, { 8, 6, 4, 4, 3, 3, 3, }, },
    { 6789897, { 5, 2, 1, 1, 2, 1, 2, 1, }, { 3, 1, 1, 1, 2, 2, 3, 2, }, { 8, 4, 3, 3, 3, 2, 2, }, { 8, 6, 6, 6, 6, 5, 4, }, },
    { 6909018, { 1, 2, 2, 2, 2, 1, 4, 1, }, { 4, 1, 1, 2, 1, 2, 1, 3, }, { 8, 8, 7, 6, 5, 4, 4, }, { 8, 5, 5, 5, 4, 4, 3, }, },
    { 7028139, { 1, 1, 3, 2, 2, 2, 1, 3, }, { 4, 2, 2, 1, 2, 2, 1, 1, }, { 8, 8, 8, 6, 5, 4, 3, }, { 8, 5, 4, 3, 3, 2, 1, }, },
    { 7147260, { 2, 1, 4, 3, 2, 1, 1, 1, }, { 4, 1, 1, 1, 4, 1, 1, 2, }, { 8, 7, 7, 4, 2, 1, 1, }, { 8, 5, 5, 5, 5, 2, 2, }, },
    { 7266381, { 2, 4, 1, 3, 2, 1, 1, 1, }, { 4, 2, 1, 1, 1, 2, 1, 3, }, { 8, 7, 4, 4, 2, 1, 1, }, { 8, 5, 4, 4, 4, 4, 3, }, },
    { 7385502, { 4, 2, 1, 3, 1, 2, 1, 1, }, { 4, 1, 1, 4, 2, 1, 1, 1, }, { 8, 5, 4, 4, 2, 2, 1, }, { 8, 5, 5, 5, 2, 1, 1, }, },
    { 7504623, { 1, 1, 3, 4, 3, 1, 1, 1, }, { 5, 2, 1, 1, 1, 1, 1, 3, }, { 8, 8, 8, 6, 3, 1, 1, }, { 8, 4, 3, 3, 3, 3, 3, }, },
    { 7623744, { 3, 1, 1, 2, 2, 1, 2, 3, }, { 5, 2, 1, 1, 1, 2, 1, 2, }, { 8, 6, 6, 6, 5, 4, 4, }, { 8, 4, 3, 3, 3, 3, 2, }, },
};