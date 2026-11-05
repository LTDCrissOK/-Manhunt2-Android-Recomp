#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2008
// Address: 0x1d2008 - 0x1d2480
void sub_001D2008_0x1d2008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2008_0x1d2008");
#endif

    switch (ctx->pc) {
        case 0x1d2008u: goto label_1d2008;
        case 0x1d200cu: goto label_1d200c;
        case 0x1d2010u: goto label_1d2010;
        case 0x1d2014u: goto label_1d2014;
        case 0x1d2018u: goto label_1d2018;
        case 0x1d201cu: goto label_1d201c;
        case 0x1d2020u: goto label_1d2020;
        case 0x1d2024u: goto label_1d2024;
        case 0x1d2028u: goto label_1d2028;
        case 0x1d202cu: goto label_1d202c;
        case 0x1d2030u: goto label_1d2030;
        case 0x1d2034u: goto label_1d2034;
        case 0x1d2038u: goto label_1d2038;
        case 0x1d203cu: goto label_1d203c;
        case 0x1d2040u: goto label_1d2040;
        case 0x1d2044u: goto label_1d2044;
        case 0x1d2048u: goto label_1d2048;
        case 0x1d204cu: goto label_1d204c;
        case 0x1d2050u: goto label_1d2050;
        case 0x1d2054u: goto label_1d2054;
        case 0x1d2058u: goto label_1d2058;
        case 0x1d205cu: goto label_1d205c;
        case 0x1d2060u: goto label_1d2060;
        case 0x1d2064u: goto label_1d2064;
        case 0x1d2068u: goto label_1d2068;
        case 0x1d206cu: goto label_1d206c;
        case 0x1d2070u: goto label_1d2070;
        case 0x1d2074u: goto label_1d2074;
        case 0x1d2078u: goto label_1d2078;
        case 0x1d207cu: goto label_1d207c;
        case 0x1d2080u: goto label_1d2080;
        case 0x1d2084u: goto label_1d2084;
        case 0x1d2088u: goto label_1d2088;
        case 0x1d208cu: goto label_1d208c;
        case 0x1d2090u: goto label_1d2090;
        case 0x1d2094u: goto label_1d2094;
        case 0x1d2098u: goto label_1d2098;
        case 0x1d209cu: goto label_1d209c;
        case 0x1d20a0u: goto label_1d20a0;
        case 0x1d20a4u: goto label_1d20a4;
        case 0x1d20a8u: goto label_1d20a8;
        case 0x1d20acu: goto label_1d20ac;
        case 0x1d20b0u: goto label_1d20b0;
        case 0x1d20b4u: goto label_1d20b4;
        case 0x1d20b8u: goto label_1d20b8;
        case 0x1d20bcu: goto label_1d20bc;
        case 0x1d20c0u: goto label_1d20c0;
        case 0x1d20c4u: goto label_1d20c4;
        case 0x1d20c8u: goto label_1d20c8;
        case 0x1d20ccu: goto label_1d20cc;
        case 0x1d20d0u: goto label_1d20d0;
        case 0x1d20d4u: goto label_1d20d4;
        case 0x1d20d8u: goto label_1d20d8;
        case 0x1d20dcu: goto label_1d20dc;
        case 0x1d20e0u: goto label_1d20e0;
        case 0x1d20e4u: goto label_1d20e4;
        case 0x1d20e8u: goto label_1d20e8;
        case 0x1d20ecu: goto label_1d20ec;
        case 0x1d20f0u: goto label_1d20f0;
        case 0x1d20f4u: goto label_1d20f4;
        case 0x1d20f8u: goto label_1d20f8;
        case 0x1d20fcu: goto label_1d20fc;
        case 0x1d2100u: goto label_1d2100;
        case 0x1d2104u: goto label_1d2104;
        case 0x1d2108u: goto label_1d2108;
        case 0x1d210cu: goto label_1d210c;
        case 0x1d2110u: goto label_1d2110;
        case 0x1d2114u: goto label_1d2114;
        case 0x1d2118u: goto label_1d2118;
        case 0x1d211cu: goto label_1d211c;
        case 0x1d2120u: goto label_1d2120;
        case 0x1d2124u: goto label_1d2124;
        case 0x1d2128u: goto label_1d2128;
        case 0x1d212cu: goto label_1d212c;
        case 0x1d2130u: goto label_1d2130;
        case 0x1d2134u: goto label_1d2134;
        case 0x1d2138u: goto label_1d2138;
        case 0x1d213cu: goto label_1d213c;
        case 0x1d2140u: goto label_1d2140;
        case 0x1d2144u: goto label_1d2144;
        case 0x1d2148u: goto label_1d2148;
        case 0x1d214cu: goto label_1d214c;
        case 0x1d2150u: goto label_1d2150;
        case 0x1d2154u: goto label_1d2154;
        case 0x1d2158u: goto label_1d2158;
        case 0x1d215cu: goto label_1d215c;
        case 0x1d2160u: goto label_1d2160;
        case 0x1d2164u: goto label_1d2164;
        case 0x1d2168u: goto label_1d2168;
        case 0x1d216cu: goto label_1d216c;
        case 0x1d2170u: goto label_1d2170;
        case 0x1d2174u: goto label_1d2174;
        case 0x1d2178u: goto label_1d2178;
        case 0x1d217cu: goto label_1d217c;
        case 0x1d2180u: goto label_1d2180;
        case 0x1d2184u: goto label_1d2184;
        case 0x1d2188u: goto label_1d2188;
        case 0x1d218cu: goto label_1d218c;
        case 0x1d2190u: goto label_1d2190;
        case 0x1d2194u: goto label_1d2194;
        case 0x1d2198u: goto label_1d2198;
        case 0x1d219cu: goto label_1d219c;
        case 0x1d21a0u: goto label_1d21a0;
        case 0x1d21a4u: goto label_1d21a4;
        case 0x1d21a8u: goto label_1d21a8;
        case 0x1d21acu: goto label_1d21ac;
        case 0x1d21b0u: goto label_1d21b0;
        case 0x1d21b4u: goto label_1d21b4;
        case 0x1d21b8u: goto label_1d21b8;
        case 0x1d21bcu: goto label_1d21bc;
        case 0x1d21c0u: goto label_1d21c0;
        case 0x1d21c4u: goto label_1d21c4;
        case 0x1d21c8u: goto label_1d21c8;
        case 0x1d21ccu: goto label_1d21cc;
        case 0x1d21d0u: goto label_1d21d0;
        case 0x1d21d4u: goto label_1d21d4;
        case 0x1d21d8u: goto label_1d21d8;
        case 0x1d21dcu: goto label_1d21dc;
        case 0x1d21e0u: goto label_1d21e0;
        case 0x1d21e4u: goto label_1d21e4;
        case 0x1d21e8u: goto label_1d21e8;
        case 0x1d21ecu: goto label_1d21ec;
        case 0x1d21f0u: goto label_1d21f0;
        case 0x1d21f4u: goto label_1d21f4;
        case 0x1d21f8u: goto label_1d21f8;
        case 0x1d21fcu: goto label_1d21fc;
        case 0x1d2200u: goto label_1d2200;
        case 0x1d2204u: goto label_1d2204;
        case 0x1d2208u: goto label_1d2208;
        case 0x1d220cu: goto label_1d220c;
        case 0x1d2210u: goto label_1d2210;
        case 0x1d2214u: goto label_1d2214;
        case 0x1d2218u: goto label_1d2218;
        case 0x1d221cu: goto label_1d221c;
        case 0x1d2220u: goto label_1d2220;
        case 0x1d2224u: goto label_1d2224;
        case 0x1d2228u: goto label_1d2228;
        case 0x1d222cu: goto label_1d222c;
        case 0x1d2230u: goto label_1d2230;
        case 0x1d2234u: goto label_1d2234;
        case 0x1d2238u: goto label_1d2238;
        case 0x1d223cu: goto label_1d223c;
        case 0x1d2240u: goto label_1d2240;
        case 0x1d2244u: goto label_1d2244;
        case 0x1d2248u: goto label_1d2248;
        case 0x1d224cu: goto label_1d224c;
        case 0x1d2250u: goto label_1d2250;
        case 0x1d2254u: goto label_1d2254;
        case 0x1d2258u: goto label_1d2258;
        case 0x1d225cu: goto label_1d225c;
        case 0x1d2260u: goto label_1d2260;
        case 0x1d2264u: goto label_1d2264;
        case 0x1d2268u: goto label_1d2268;
        case 0x1d226cu: goto label_1d226c;
        case 0x1d2270u: goto label_1d2270;
        case 0x1d2274u: goto label_1d2274;
        case 0x1d2278u: goto label_1d2278;
        case 0x1d227cu: goto label_1d227c;
        case 0x1d2280u: goto label_1d2280;
        case 0x1d2284u: goto label_1d2284;
        case 0x1d2288u: goto label_1d2288;
        case 0x1d228cu: goto label_1d228c;
        case 0x1d2290u: goto label_1d2290;
        case 0x1d2294u: goto label_1d2294;
        case 0x1d2298u: goto label_1d2298;
        case 0x1d229cu: goto label_1d229c;
        case 0x1d22a0u: goto label_1d22a0;
        case 0x1d22a4u: goto label_1d22a4;
        case 0x1d22a8u: goto label_1d22a8;
        case 0x1d22acu: goto label_1d22ac;
        case 0x1d22b0u: goto label_1d22b0;
        case 0x1d22b4u: goto label_1d22b4;
        case 0x1d22b8u: goto label_1d22b8;
        case 0x1d22bcu: goto label_1d22bc;
        case 0x1d22c0u: goto label_1d22c0;
        case 0x1d22c4u: goto label_1d22c4;
        case 0x1d22c8u: goto label_1d22c8;
        case 0x1d22ccu: goto label_1d22cc;
        case 0x1d22d0u: goto label_1d22d0;
        case 0x1d22d4u: goto label_1d22d4;
        case 0x1d22d8u: goto label_1d22d8;
        case 0x1d22dcu: goto label_1d22dc;
        case 0x1d22e0u: goto label_1d22e0;
        case 0x1d22e4u: goto label_1d22e4;
        case 0x1d22e8u: goto label_1d22e8;
        case 0x1d22ecu: goto label_1d22ec;
        case 0x1d22f0u: goto label_1d22f0;
        case 0x1d22f4u: goto label_1d22f4;
        case 0x1d22f8u: goto label_1d22f8;
        case 0x1d22fcu: goto label_1d22fc;
        case 0x1d2300u: goto label_1d2300;
        case 0x1d2304u: goto label_1d2304;
        case 0x1d2308u: goto label_1d2308;
        case 0x1d230cu: goto label_1d230c;
        case 0x1d2310u: goto label_1d2310;
        case 0x1d2314u: goto label_1d2314;
        case 0x1d2318u: goto label_1d2318;
        case 0x1d231cu: goto label_1d231c;
        case 0x1d2320u: goto label_1d2320;
        case 0x1d2324u: goto label_1d2324;
        case 0x1d2328u: goto label_1d2328;
        case 0x1d232cu: goto label_1d232c;
        case 0x1d2330u: goto label_1d2330;
        case 0x1d2334u: goto label_1d2334;
        case 0x1d2338u: goto label_1d2338;
        case 0x1d233cu: goto label_1d233c;
        case 0x1d2340u: goto label_1d2340;
        case 0x1d2344u: goto label_1d2344;
        case 0x1d2348u: goto label_1d2348;
        case 0x1d234cu: goto label_1d234c;
        case 0x1d2350u: goto label_1d2350;
        case 0x1d2354u: goto label_1d2354;
        case 0x1d2358u: goto label_1d2358;
        case 0x1d235cu: goto label_1d235c;
        case 0x1d2360u: goto label_1d2360;
        case 0x1d2364u: goto label_1d2364;
        case 0x1d2368u: goto label_1d2368;
        case 0x1d236cu: goto label_1d236c;
        case 0x1d2370u: goto label_1d2370;
        case 0x1d2374u: goto label_1d2374;
        case 0x1d2378u: goto label_1d2378;
        case 0x1d237cu: goto label_1d237c;
        case 0x1d2380u: goto label_1d2380;
        case 0x1d2384u: goto label_1d2384;
        case 0x1d2388u: goto label_1d2388;
        case 0x1d238cu: goto label_1d238c;
        case 0x1d2390u: goto label_1d2390;
        case 0x1d2394u: goto label_1d2394;
        case 0x1d2398u: goto label_1d2398;
        case 0x1d239cu: goto label_1d239c;
        case 0x1d23a0u: goto label_1d23a0;
        case 0x1d23a4u: goto label_1d23a4;
        case 0x1d23a8u: goto label_1d23a8;
        case 0x1d23acu: goto label_1d23ac;
        case 0x1d23b0u: goto label_1d23b0;
        case 0x1d23b4u: goto label_1d23b4;
        case 0x1d23b8u: goto label_1d23b8;
        case 0x1d23bcu: goto label_1d23bc;
        case 0x1d23c0u: goto label_1d23c0;
        case 0x1d23c4u: goto label_1d23c4;
        case 0x1d23c8u: goto label_1d23c8;
        case 0x1d23ccu: goto label_1d23cc;
        case 0x1d23d0u: goto label_1d23d0;
        case 0x1d23d4u: goto label_1d23d4;
        case 0x1d23d8u: goto label_1d23d8;
        case 0x1d23dcu: goto label_1d23dc;
        case 0x1d23e0u: goto label_1d23e0;
        case 0x1d23e4u: goto label_1d23e4;
        case 0x1d23e8u: goto label_1d23e8;
        case 0x1d23ecu: goto label_1d23ec;
        case 0x1d23f0u: goto label_1d23f0;
        case 0x1d23f4u: goto label_1d23f4;
        case 0x1d23f8u: goto label_1d23f8;
        case 0x1d23fcu: goto label_1d23fc;
        case 0x1d2400u: goto label_1d2400;
        case 0x1d2404u: goto label_1d2404;
        case 0x1d2408u: goto label_1d2408;
        case 0x1d240cu: goto label_1d240c;
        case 0x1d2410u: goto label_1d2410;
        case 0x1d2414u: goto label_1d2414;
        case 0x1d2418u: goto label_1d2418;
        case 0x1d241cu: goto label_1d241c;
        case 0x1d2420u: goto label_1d2420;
        case 0x1d2424u: goto label_1d2424;
        case 0x1d2428u: goto label_1d2428;
        case 0x1d242cu: goto label_1d242c;
        case 0x1d2430u: goto label_1d2430;
        case 0x1d2434u: goto label_1d2434;
        case 0x1d2438u: goto label_1d2438;
        case 0x1d243cu: goto label_1d243c;
        case 0x1d2440u: goto label_1d2440;
        case 0x1d2444u: goto label_1d2444;
        case 0x1d2448u: goto label_1d2448;
        case 0x1d244cu: goto label_1d244c;
        case 0x1d2450u: goto label_1d2450;
        case 0x1d2454u: goto label_1d2454;
        case 0x1d2458u: goto label_1d2458;
        case 0x1d245cu: goto label_1d245c;
        case 0x1d2460u: goto label_1d2460;
        case 0x1d2464u: goto label_1d2464;
        case 0x1d2468u: goto label_1d2468;
        case 0x1d246cu: goto label_1d246c;
        case 0x1d2470u: goto label_1d2470;
        case 0x1d2474u: goto label_1d2474;
        case 0x1d2478u: goto label_1d2478;
        case 0x1d247cu: goto label_1d247c;
        default: break;
    }

    ctx->pc = 0x1d2008u;

label_1d2008:
    // 0x1d2008: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1d2008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1d200c:
    // 0x1d200c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1d200cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1d2010:
    // 0x1d2010: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1d2010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
label_1d2014:
    // 0x1d2014: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1d2014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_1d2018:
    // 0x1d2018: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1d2018u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d201c:
    // 0x1d201c: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1d201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
label_1d2020:
    // 0x1d2020: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x1d2020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1d2024:
    // 0x1d2024: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1d2024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_1d2028:
    // 0x1d2028: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d2028u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d202c:
    // 0x1d202c: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1d202cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
label_1d2030:
    // 0x1d2030: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2034:
    // 0x1d2034: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1d2034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_1d2038:
    // 0x1d2038: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1d2038u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d203c:
    // 0x1d203c: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1d203cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_1d2040:
    // 0x1d2040: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1d2040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
label_1d2044:
    // 0x1d2044: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1d2044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1d2048:
    // 0x1d2048: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x1d2048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_1d204c:
    // 0x1d204c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d204cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2050:
    // 0x1d2050: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d2050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d2054:
    // 0x1d2054: 0x40f809  jalr        $v0
label_1d2058:
    if (ctx->pc == 0x1D2058u) {
        ctx->pc = 0x1D2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2054u;
        // 0x1d2058: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D205Cu;
        goto label_1d205c;
    }
    ctx->pc = 0x1D2054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D205Cu);
        ctx->pc = 0x1D2058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2054u;
        // 0x1d2058: 0xafa0003c  sw          $zero, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2054u, 0x1D205Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D205Cu;
label_1d205c:
    // 0x1d205c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d205cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2060:
    // 0x1d2060: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x1d2060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
label_1d2064:
    // 0x1d2064: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2068:
    // 0x1d2068: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d2068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d206c:
    // 0x1d206c: 0x40f809  jalr        $v0
label_1d2070:
    if (ctx->pc == 0x1D2070u) {
        ctx->pc = 0x1D2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D206Cu;
        // 0x1d2070: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2074u;
        goto label_1d2074;
    }
    ctx->pc = 0x1D206Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2074u);
        ctx->pc = 0x1D2070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D206Cu;
        // 0x1d2070: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D206Cu, 0x1D2074u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2074u;
label_1d2074:
    // 0x1d2074: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x1d2074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2078:
    // 0x1d2078: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d2078u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d207c:
    // 0x1d207c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1d207cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2080:
    // 0x1d2080: 0x86a50008  lh          $a1, 0x8($s5)
    ctx->pc = 0x1d2080u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_1d2084:
    // 0x1d2084: 0xc0747c0  jal         func_1D1F00
label_1d2088:
    if (ctx->pc == 0x1D2088u) {
        ctx->pc = 0x1D2088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2084u;
        // 0x1d2088: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D208Cu;
        goto label_1d208c;
    }
    ctx->pc = 0x1D2084u;
    SET_GPR_U32(ctx, 31, 0x1D208Cu);
    ctx->pc = 0x1D2088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2084u;
    // 0x1d2088: 0xe6a00010  swc1        $f0, 0x10($s5) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D1F00u, 0x1D2084u, 0x1D208Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D208Cu;
label_1d208c:
    // 0x1d208c: 0x86a20008  lh          $v0, 0x8($s5)
    ctx->pc = 0x1d208cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_1d2090:
    // 0x1d2090: 0x184000ee  blez        $v0, . + 4 + (0xEE << 2)
label_1d2094:
    if (ctx->pc == 0x1D2094u) {
        ctx->pc = 0x1D2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2090u;
        // 0x1d2094: 0x3c161fff  lui         $s6, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2098u;
        goto label_1d2098;
    }
    ctx->pc = 0x1D2090u;
    {
        const bool branch_taken_0x1d2090 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1D2094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2090u;
        // 0x1d2094: 0x3c161fff  lui         $s6, 0x1FFF (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)8191 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2090) {
            ctx->pc = 0x1D244Cu;
            goto label_1d244c;
        }
    }
    ctx->pc = 0x1D2098u;
label_1d2098:
    // 0x1d2098: 0x36d6ffff  ori         $s6, $s6, 0xFFFF
    ctx->pc = 0x1d2098u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
label_1d209c:
    // 0x1d209c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d209cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d20a0:
    // 0x1d20a0: 0xc074958  jal         func_1D2560
label_1d20a4:
    if (ctx->pc == 0x1D20A4u) {
        ctx->pc = 0x1D20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20A0u;
        // 0x1d20a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20A8u;
        goto label_1d20a8;
    }
    ctx->pc = 0x1D20A0u;
    SET_GPR_U32(ctx, 31, 0x1D20A8u);
    ctx->pc = 0x1D20A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D20A0u;
    // 0x1d20a4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2560u, 0x1D20A0u, 0x1D20A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D20A8u;
label_1d20a8:
    // 0x1d20a8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1d20a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d20ac:
    // 0x1d20ac: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d20acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d20b0:
    // 0x1d20b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d20b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d20b4:
    // 0x1d20b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d20b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d20b8:
    // 0x1d20b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d20b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d20bc:
    // 0x1d20bc: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d20bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d20c0:
    // 0x1d20c0: 0x40f809  jalr        $v0
label_1d20c4:
    if (ctx->pc == 0x1D20C4u) {
        ctx->pc = 0x1D20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20C0u;
        // 0x1d20c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20C8u;
        goto label_1d20c8;
    }
    ctx->pc = 0x1D20C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D20C8u);
        ctx->pc = 0x1D20C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20C0u;
        // 0x1d20c4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D20C0u, 0x1D20C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D20C8u;
label_1d20c8:
    // 0x1d20c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1d20c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1d20cc:
    // 0x1d20cc: 0x3c025451  lui         $v0, 0x5451
    ctx->pc = 0x1d20ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)21585 << 16));
label_1d20d0:
    // 0x1d20d0: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1d20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d20d4:
    // 0x1d20d4: 0x34424553  ori         $v0, $v0, 0x4553
    ctx->pc = 0x1d20d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)17747);
label_1d20d8:
    // 0x1d20d8: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1d20d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_1d20dc:
    // 0x1d20dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d20dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d20e0:
    // 0x1d20e0: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1d20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1d20e4:
    // 0x1d20e4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d20e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d20e8:
    // 0x1d20e8: 0x3b80b  movn        $s7, $zero, $v1
    ctx->pc = 0x1d20e8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 0));
label_1d20ec:
    // 0x1d20ec: 0x40f809  jalr        $v0
label_1d20f0:
    if (ctx->pc == 0x1D20F0u) {
        ctx->pc = 0x1D20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20ECu;
        // 0x1d20f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D20F4u;
        goto label_1d20f4;
    }
    ctx->pc = 0x1D20ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D20F4u);
        ctx->pc = 0x1D20F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D20ECu;
        // 0x1d20f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D20ECu, 0x1D20F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D20F4u;
label_1d20f4:
    // 0x1d20f4: 0x87a30010  lh          $v1, 0x10($sp)
    ctx->pc = 0x1d20f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1d20f8:
    // 0x1d20f8: 0x2406c000  addiu       $a2, $zero, -0x4000
    ctx->pc = 0x1d20f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_1d20fc:
    // 0x1d20fc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d20fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2100:
    // 0x1d2100: 0x27a50012  addiu       $a1, $sp, 0x12
    ctx->pc = 0x1d2100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 18));
label_1d2104:
    // 0x1d2104: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x1d2104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_1d2108:
    // 0x1d2108: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d210c:
    // 0x1d210c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1d210cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1d2110:
    // 0x1d2110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d2110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1d2114:
    // 0x1d2114: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1d2114u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1d2118:
    // 0x1d2118: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d2118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d211c:
    // 0x1d211c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d2120:
    // 0x1d2120: 0x40f809  jalr        $v0
label_1d2124:
    if (ctx->pc == 0x1D2124u) {
        ctx->pc = 0x1D2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2120u;
        // 0x1d2124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2128u;
        goto label_1d2128;
    }
    ctx->pc = 0x1D2120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2128u);
        ctx->pc = 0x1D2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2120u;
        // 0x1d2124: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2120u, 0x1D2128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2128u;
label_1d2128:
    // 0x1d2128: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d2128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d212c:
    // 0x1d212c: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x1d212cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_1d2130:
    // 0x1d2130: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1d2130u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d2134:
    // 0x1d2134: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d2134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d2138:
    // 0x1d2138: 0x40f809  jalr        $v0
label_1d213c:
    if (ctx->pc == 0x1D213Cu) {
        ctx->pc = 0x1D213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2138u;
        // 0x1d213c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2140u;
        goto label_1d2140;
    }
    ctx->pc = 0x1D2138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2140u);
        ctx->pc = 0x1D213Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2138u;
        // 0x1d213c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2138u, 0x1D2140u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2140u;
label_1d2140:
    // 0x1d2140: 0x87a30014  lh          $v1, 0x14($sp)
    ctx->pc = 0x1d2140u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
label_1d2144:
    // 0x1d2144: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x1d2144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_1d2148:
    // 0x1d2148: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x1d2148u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d214c:
    // 0x1d214c: 0x34423fff  ori         $v0, $v0, 0x3FFF
    ctx->pc = 0x1d214cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16383);
label_1d2150:
    // 0x1d2150: 0x30637fff  andi        $v1, $v1, 0x7FFF
    ctx->pc = 0x1d2150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
label_1d2154:
    // 0x1d2154: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d2158:
    // 0x1d2158: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1d2158u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
label_1d215c:
    // 0x1d215c: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x1d215cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
label_1d2160:
    // 0x1d2160: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1d2160u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_1d2164:
    // 0x1d2164: 0x27a50016  addiu       $a1, $sp, 0x16
    ctx->pc = 0x1d2164u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 22));
label_1d2168:
    // 0x1d2168: 0xae460000  sw          $a2, 0x0($s2)
    ctx->pc = 0x1d2168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
label_1d216c:
    // 0x1d216c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d216cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2170:
    // 0x1d2170: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d2170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d2174:
    // 0x1d2174: 0x40f809  jalr        $v0
label_1d2178:
    if (ctx->pc == 0x1D2178u) {
        ctx->pc = 0x1D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2174u;
        // 0x1d2178: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D217Cu;
        goto label_1d217c;
    }
    ctx->pc = 0x1D2174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D217Cu);
        ctx->pc = 0x1D2178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2174u;
        // 0x1d2178: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2174u, 0x1D217Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D217Cu;
label_1d217c:
    // 0x1d217c: 0x97a30016  lhu         $v1, 0x16($sp)
    ctx->pc = 0x1d217cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
label_1d2180:
    // 0x1d2180: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1d2184:
    if (ctx->pc == 0x1D2184u) {
        ctx->pc = 0x1D2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2180u;
        // 0x1d2184: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2188u;
        goto label_1d2188;
    }
    ctx->pc = 0x1D2180u;
    {
        const bool branch_taken_0x1d2180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2180u;
        // 0x1d2184: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2180) {
            ctx->pc = 0x1D21B0u;
            goto label_1d21b0;
        }
    }
    ctx->pc = 0x1D2188u;
label_1d2188:
    // 0x1d2188: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1d2188u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1d218c:
    // 0x1d218c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1d2190:
    if (ctx->pc == 0x1D2190u) {
        ctx->pc = 0x1D2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D218Cu;
        // 0x1d2190: 0x93a30012  lbu         $v1, 0x12($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2194u;
        goto label_1d2194;
    }
    ctx->pc = 0x1D218Cu;
    {
        const bool branch_taken_0x1d218c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D218Cu;
        // 0x1d2190: 0x93a30012  lbu         $v1, 0x12($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d218c) {
            ctx->pc = 0x1D21B4u;
            goto label_1d21b4;
        }
    }
    ctx->pc = 0x1D2194u;
label_1d2194:
    // 0x1d2194: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1d2194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2198:
    // 0x1d2198: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x1d2198u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1d219c:
    // 0x1d219c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1d219cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1d21a0:
    // 0x1d21a0: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_1d21a4:
    // 0x1d21a4: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x1d21a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_1d21a8:
    // 0x1d21a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d21a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d21ac:
    // 0x1d21ac: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d21acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d21b0:
    // 0x1d21b0: 0x93a30012  lbu         $v1, 0x12($sp)
    ctx->pc = 0x1d21b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
label_1d21b4:
    // 0x1d21b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d21b8:
    // 0x1d21b8: 0x50620009  beql        $v1, $v0, . + 4 + (0x9 << 2)
label_1d21bc:
    if (ctx->pc == 0x1D21BCu) {
        ctx->pc = 0x1D21BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21B8u;
        // 0x1d21bc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21C0u;
        goto label_1d21c0;
    }
    ctx->pc = 0x1D21B8u;
    {
        const bool branch_taken_0x1d21b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d21b8) {
            ctx->pc = 0x1D21BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D21B8u;
            // 0x1d21bc: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D21E0u;
            goto label_1d21e0;
        }
    }
    ctx->pc = 0x1D21C0u;
label_1d21c0:
    // 0x1d21c0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1d21c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_1d21c4:
    // 0x1d21c4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1d21c8:
    if (ctx->pc == 0x1D21C8u) {
        ctx->pc = 0x1D21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21C4u;
        // 0x1d21c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21CCu;
        goto label_1d21cc;
    }
    ctx->pc = 0x1D21C4u;
    {
        const bool branch_taken_0x1d21c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D21C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21C4u;
        // 0x1d21c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21c4) {
            ctx->pc = 0x1D2208u;
            goto label_1d2208;
        }
    }
    ctx->pc = 0x1D21CCu;
label_1d21cc:
    // 0x1d21cc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1d21ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1d21d0:
    // 0x1d21d0: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
label_1d21d4:
    if (ctx->pc == 0x1D21D4u) {
        ctx->pc = 0x1D21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21D0u;
        // 0x1d21d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21D8u;
        goto label_1d21d8;
    }
    ctx->pc = 0x1D21D0u;
    {
        const bool branch_taken_0x1d21d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d21d0) {
            ctx->pc = 0x1D21D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D21D0u;
            // 0x1d21d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D21ECu;
            goto label_1d21ec;
        }
    }
    ctx->pc = 0x1D21D8u;
label_1d21d8:
    // 0x1d21d8: 0x1000000b  b           . + 4 + (0xB << 2)
label_1d21dc:
    if (ctx->pc == 0x1D21DCu) {
        ctx->pc = 0x1D21E0u;
        goto label_1d21e0;
    }
    ctx->pc = 0x1D21D8u;
    {
        const bool branch_taken_0x1d21d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d21d8) {
            ctx->pc = 0x1D2208u;
            goto label_1d2208;
        }
    }
    ctx->pc = 0x1D21E0u;
label_1d21e0:
    // 0x1d21e0: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x1d21e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1d21e4:
    // 0x1d21e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d21e8:
    if (ctx->pc == 0x1D21E8u) {
        ctx->pc = 0x1D21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21E4u;
        // 0x1d21e8: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D21ECu;
        goto label_1d21ec;
    }
    ctx->pc = 0x1D21E4u;
    {
        const bool branch_taken_0x1d21e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D21E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21E4u;
        // 0x1d21e8: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d21e4) {
            ctx->pc = 0x1D21F4u;
            goto label_1d21f4;
        }
    }
    ctx->pc = 0x1D21ECu;
label_1d21ec:
    // 0x1d21ec: 0x31742  srl         $v0, $v1, 29
    ctx->pc = 0x1d21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 29));
label_1d21f0:
    // 0x1d21f0: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x1d21f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_1d21f4:
    // 0x1d21f4: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x1d21f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_1d21f8:
    // 0x1d21f8: 0x21740  sll         $v0, $v0, 29
    ctx->pc = 0x1d21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 29));
label_1d21fc:
    // 0x1d21fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1d21fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1d2200:
    // 0x1d2200: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1d2200u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_1d2204:
    // 0x1d2204: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1d2204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d2208:
    // 0x1d2208: 0xc074956  jal         func_1D2558
label_1d220c:
    if (ctx->pc == 0x1D220Cu) {
        ctx->pc = 0x1D220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2208u;
        // 0x1d220c: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2210u;
        goto label_1d2210;
    }
    ctx->pc = 0x1D2208u;
    SET_GPR_U32(ctx, 31, 0x1D2210u);
    ctx->pc = 0x1D220Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2208u;
    // 0x1d220c: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D2558u, 0x1D2208u, 0x1D2210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2210u;
label_1d2210:
    // 0x1d2210: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1d2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2214:
    // 0x1d2214: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2214u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2218:
    // 0x1d2218: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d2218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1d221c:
    // 0x1d221c: 0xc074f22  jal         func_1D3C88
label_1d2220:
    if (ctx->pc == 0x1D2220u) {
        ctx->pc = 0x1D2220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D221Cu;
        // 0x1d2220: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2224u;
        goto label_1d2224;
    }
    ctx->pc = 0x1D221Cu;
    SET_GPR_U32(ctx, 31, 0x1D2224u);
    ctx->pc = 0x1D2220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D221Cu;
    // 0x1d2220: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C88u, 0x1D221Cu, 0x1D2224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2224u;
label_1d2224:
    // 0x1d2224: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x1d2224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_1d2228:
    // 0x1d2228: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x1d2228u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d222c:
    // 0x1d222c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1d222cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1d2230:
    // 0x1d2230: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x1d2230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_1d2234:
    // 0x1d2234: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x1d2234u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_1d2238:
    // 0x1d2238: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d223c:
    // 0x1d223c: 0xc074f22  jal         func_1D3C88
label_1d2240:
    if (ctx->pc == 0x1D2240u) {
        ctx->pc = 0x1D2240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D223Cu;
        // 0x1d2240: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2244u;
        goto label_1d2244;
    }
    ctx->pc = 0x1D223Cu;
    SET_GPR_U32(ctx, 31, 0x1D2244u);
    ctx->pc = 0x1D2240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D223Cu;
    // 0x1d2240: 0x8e710000  lw          $s1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3C88u, 0x1D223Cu, 0x1D2244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2244u;
label_1d2244:
    // 0x1d2244: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1d2244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1d2248:
    // 0x1d2248: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d2248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d224c:
    // 0x1d224c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d224cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2250:
    // 0x1d2250: 0x60f809  jalr        $v1
label_1d2254:
    if (ctx->pc == 0x1D2254u) {
        ctx->pc = 0x1D2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2250u;
        // 0x1d2254: 0x2446fffe  addiu       $a2, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2258u;
        goto label_1d2258;
    }
    ctx->pc = 0x1D2250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D2258u);
        ctx->pc = 0x1D2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2250u;
        // 0x1d2254: 0x2446fffe  addiu       $a2, $v0, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2250u, 0x1D2258u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2258u;
label_1d2258:
    // 0x1d2258: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1d2258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1d225c:
    // 0x1d225c: 0x97a30016  lhu         $v1, 0x16($sp)
    ctx->pc = 0x1d225cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 22)));
label_1d2260:
    // 0x1d2260: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x1d2260u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_1d2264:
    // 0x1d2264: 0x92a2001b  lbu         $v0, 0x1B($s5)
    ctx->pc = 0x1d2264u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 27)));
label_1d2268:
    // 0x1d2268: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d2268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1d226c:
    // 0x1d226c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1d2270:
    if (ctx->pc == 0x1D2270u) {
        ctx->pc = 0x1D2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D226Cu;
        // 0x1d2270: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2274u;
        goto label_1d2274;
    }
    ctx->pc = 0x1D226Cu;
    {
        const bool branch_taken_0x1d226c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D226Cu;
        // 0x1d2270: 0x240303e8  addiu       $v1, $zero, 0x3E8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d226c) {
            ctx->pc = 0x1D2404u;
            goto label_1d2404;
        }
    }
    ctx->pc = 0x1D2274u;
label_1d2274:
    // 0x1d2274: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d2274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2278:
    // 0x1d2278: 0x30443fff  andi        $a0, $v0, 0x3FFF
    ctx->pc = 0x1d2278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_1d227c:
    // 0x1d227c: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
label_1d2280:
    if (ctx->pc == 0x1D2280u) {
        ctx->pc = 0x1D2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D227Cu;
        // 0x1d2280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2284u;
        goto label_1d2284;
    }
    ctx->pc = 0x1D227Cu;
    {
        const bool branch_taken_0x1d227c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D227Cu;
        // 0x1d2280: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d227c) {
            ctx->pc = 0x1D2290u;
            goto label_1d2290;
        }
    }
    ctx->pc = 0x1D2284u;
label_1d2284:
    // 0x1d2284: 0x24020d74  addiu       $v0, $zero, 0xD74
    ctx->pc = 0x1d2284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
label_1d2288:
    // 0x1d2288: 0x1482005e  bne         $a0, $v0, . + 4 + (0x5E << 2)
label_1d228c:
    if (ctx->pc == 0x1D228Cu) {
        ctx->pc = 0x1D2290u;
        goto label_1d2290;
    }
    ctx->pc = 0x1D2288u;
    {
        const bool branch_taken_0x1d2288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2288) {
            ctx->pc = 0x1D2404u;
            goto label_1d2404;
        }
    }
    ctx->pc = 0x1D2290u;
label_1d2290:
    // 0x1d2290: 0x51742  srl         $v0, $a1, 29
    ctx->pc = 0x1d2290u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 29));
label_1d2294:
    // 0x1d2294: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2298:
    // 0x1d2298: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_1d229c:
    if (ctx->pc == 0x1D229Cu) {
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22A0u;
        goto label_1d22a0;
    }
    ctx->pc = 0x1D2298u;
    {
        const bool branch_taken_0x1d2298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D229Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2298u;
        // 0x1d229c: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2298) {
            ctx->pc = 0x1D2404u;
            goto label_1d2404;
        }
    }
    ctx->pc = 0x1D22A0u;
label_1d22a0:
    // 0x1d22a0: 0x10000050  b           . + 4 + (0x50 << 2)
label_1d22a4:
    if (ctx->pc == 0x1D22A4u) {
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A0u;
        // 0x1d22a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22A8u;
        goto label_1d22a8;
    }
    ctx->pc = 0x1D22A0u;
    {
        const bool branch_taken_0x1d22a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22A0u;
        // 0x1d22a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22a0) {
            ctx->pc = 0x1D23E4u;
            goto label_1d23e4;
        }
    }
    ctx->pc = 0x1D22A8u;
label_1d22a8:
    // 0x1d22a8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d22a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d22ac:
    // 0x1d22ac: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d22acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d22b0:
    // 0x1d22b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_1d22b4:
    if (ctx->pc == 0x1D22B4u) {
        ctx->pc = 0x1D22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22B0u;
        // 0x1d22b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22B8u;
        goto label_1d22b8;
    }
    ctx->pc = 0x1D22B0u;
    {
        const bool branch_taken_0x1d22b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22B0u;
        // 0x1d22b4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22b0) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D22B8u;
label_1d22b8:
    // 0x1d22b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d22b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d22bc:
    // 0x1d22bc: 0xc074f4a  jal         func_1D3D28
label_1d22c0:
    if (ctx->pc == 0x1D22C0u) {
        ctx->pc = 0x1D22C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22BCu;
        // 0x1d22c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22C4u;
        goto label_1d22c4;
    }
    ctx->pc = 0x1D22BCu;
    SET_GPR_U32(ctx, 31, 0x1D22C4u);
    ctx->pc = 0x1D22C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D22BCu;
    // 0x1d22c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3D28u, 0x1D22BCu, 0x1D22C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D22C4u;
label_1d22c4:
    // 0x1d22c4: 0x1a200016  blez        $s1, . + 4 + (0x16 << 2)
label_1d22c8:
    if (ctx->pc == 0x1D22C8u) {
        ctx->pc = 0x1D22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C4u;
        // 0x1d22c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22CCu;
        goto label_1d22cc;
    }
    ctx->pc = 0x1D22C4u;
    {
        const bool branch_taken_0x1d22c4 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x1D22C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22C4u;
        // 0x1d22c8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22c4) {
            ctx->pc = 0x1D2320u;
            goto label_1d2320;
        }
    }
    ctx->pc = 0x1D22CCu;
label_1d22cc:
    // 0x1d22cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d22ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d22d0:
    // 0x1d22d0: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1d22d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1d22d4:
    // 0x1d22d4: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x1d22d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_1d22d8:
    // 0x1d22d8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1d22dc:
    if (ctx->pc == 0x1D22DCu) {
        ctx->pc = 0x1D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22D8u;
        // 0x1d22dc: 0x30440004  andi        $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22E0u;
        goto label_1d22e0;
    }
    ctx->pc = 0x1D22D8u;
    {
        const bool branch_taken_0x1d22d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22D8u;
        // 0x1d22dc: 0x30440004  andi        $a0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22d8) {
            ctx->pc = 0x1D22FCu;
            goto label_1d22fc;
        }
    }
    ctx->pc = 0x1D22E0u;
label_1d22e0:
    // 0x1d22e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d22e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d22e4:
    // 0x1d22e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d22e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d22e8:
    // 0x1d22e8: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1d22ec:
    if (ctx->pc == 0x1D22ECu) {
        ctx->pc = 0x1D22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E8u;
        // 0x1d22ec: 0xa4300a  movz        $a2, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22F0u;
        goto label_1d22f0;
    }
    ctx->pc = 0x1D22E8u;
    {
        const bool branch_taken_0x1d22e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22E8u;
        // 0x1d22ec: 0xa4300a  movz        $a2, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22e8) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D22F0u;
label_1d22f0:
    // 0x1d22f0: 0x24b00008  addiu       $s0, $a1, 0x8
    ctx->pc = 0x1d22f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d22f4:
    // 0x1d22f4: 0x10000010  b           . + 4 + (0x10 << 2)
label_1d22f8:
    if (ctx->pc == 0x1D22F8u) {
        ctx->pc = 0x1D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F4u;
        // 0x1d22f8: 0xa4800b  movn        $s0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D22FCu;
        goto label_1d22fc;
    }
    ctx->pc = 0x1D22F4u;
    {
        const bool branch_taken_0x1d22f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D22F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D22F4u;
        // 0x1d22f8: 0xa4800b  movn        $s0, $a1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d22f4) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D22FCu;
label_1d22fc:
    // 0x1d22fc: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1d22fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d2300:
    // 0x1d2300: 0x30430004  andi        $v1, $v0, 0x4
    ctx->pc = 0x1d2300u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1d2304:
    // 0x1d2304: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1d2304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2308:
    // 0x1d2308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d230c:
    // 0x1d230c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1d2310:
    if (ctx->pc == 0x1D2310u) {
        ctx->pc = 0x1D2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D230Cu;
        // 0x1d2310: 0x3300b  movn        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2314u;
        goto label_1d2314;
    }
    ctx->pc = 0x1D230Cu;
    {
        const bool branch_taken_0x1d230c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D230Cu;
        // 0x1d2310: 0x3300b  movn        $a2, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d230c) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D2314u;
label_1d2314:
    // 0x1d2314: 0x24b0000a  addiu       $s0, $a1, 0xA
    ctx->pc = 0x1d2314u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1d2318:
    // 0x1d2318: 0x10000007  b           . + 4 + (0x7 << 2)
label_1d231c:
    if (ctx->pc == 0x1D231Cu) {
        ctx->pc = 0x1D231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2318u;
        // 0x1d231c: 0x83800b  movn        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2320u;
        goto label_1d2320;
    }
    ctx->pc = 0x1D2318u;
    {
        const bool branch_taken_0x1d2318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2318u;
        // 0x1d231c: 0x83800b  movn        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2318) {
            ctx->pc = 0x1D2338u;
            goto label_1d2338;
        }
    }
    ctx->pc = 0x1D2320u;
label_1d2320:
    // 0x1d2320: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2324:
    // 0x1d2324: 0x24b0000a  addiu       $s0, $a1, 0xA
    ctx->pc = 0x1d2324u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 10));
label_1d2328:
    // 0x1d2328: 0x24a60002  addiu       $a2, $a1, 0x2
    ctx->pc = 0x1d2328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d232c:
    // 0x1d232c: 0x21742  srl         $v0, $v0, 29
    ctx->pc = 0x1d232cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 29));
label_1d2330:
    // 0x1d2330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1d2330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1d2334:
    // 0x1d2334: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x1d2334u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_1d2338:
    // 0x1d2338: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1d233c:
    if (ctx->pc == 0x1D233Cu) {
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2338u;
        // 0x1d233c: 0x24030d74  addiu       $v1, $zero, 0xD74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2340u;
        goto label_1d2340;
    }
    ctx->pc = 0x1D2338u;
    {
        const bool branch_taken_0x1d2338 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2338u;
        // 0x1d233c: 0x24030d74  addiu       $v1, $zero, 0xD74 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2338) {
            ctx->pc = 0x1D2360u;
            goto label_1d2360;
        }
    }
    ctx->pc = 0x1D2340u;
label_1d2340:
    // 0x1d2340: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d2340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2344:
    // 0x1d2344: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1d2344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_1d2348:
    // 0x1d2348: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1d2348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_1d234c:
    // 0x1d234c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x1d234cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_1d2350:
    // 0x1d2350: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d2350u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d2354:
    // 0x1d2354: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1d2354u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1d2358:
    // 0x1d2358: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x1d2358u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d235c:
    // 0x1d235c: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x1d235cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
label_1d2360:
    // 0x1d2360: 0x50c0001f  beql        $a2, $zero, . + 4 + (0x1F << 2)
label_1d2364:
    if (ctx->pc == 0x1D2364u) {
        ctx->pc = 0x1D2364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2360u;
        // 0x1d2364: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2368u;
        goto label_1d2368;
    }
    ctx->pc = 0x1D2360u;
    {
        const bool branch_taken_0x1d2360 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2360) {
            ctx->pc = 0x1D2364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2360u;
            // 0x1d2364: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D23E0u;
            goto label_1d23e0;
        }
    }
    ctx->pc = 0x1D2368u;
label_1d2368:
    // 0x1d2368: 0x68c40007  ldl         $a0, 0x7($a2)
    ctx->pc = 0x1d2368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1d236c:
    // 0x1d236c: 0x6cc40000  ldr         $a0, 0x0($a2)
    ctx->pc = 0x1d236cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1d2370:
    // 0x1d2370: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x1d2370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d2374:
    // 0x1d2374: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x1d2374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1d2378:
    // 0x1d2378: 0x24040d74  addiu       $a0, $zero, 0xD74
    ctx->pc = 0x1d2378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3444));
label_1d237c:
    // 0x1d237c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d237cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d2380:
    // 0x1d2380: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x1d2380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_1d2384:
    // 0x1d2384: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
label_1d2388:
    if (ctx->pc == 0x1D2388u) {
        ctx->pc = 0x1D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2384u;
        // 0x1d2388: 0x97a20024  lhu         $v0, 0x24($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D238Cu;
        goto label_1d238c;
    }
    ctx->pc = 0x1D2384u;
    {
        const bool branch_taken_0x1d2384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D2388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2384u;
        // 0x1d2388: 0x97a20024  lhu         $v0, 0x24($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2384) {
            ctx->pc = 0x1D23B8u;
            goto label_1d23b8;
        }
    }
    ctx->pc = 0x1D238Cu;
label_1d238c:
    // 0x1d238c: 0x97a20022  lhu         $v0, 0x22($sp)
    ctx->pc = 0x1d238cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
label_1d2390:
    // 0x1d2390: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d2390u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d2394:
    // 0x1d2394: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1d2394u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d2398:
    // 0x1d2398: 0x97a30020  lhu         $v1, 0x20($sp)
    ctx->pc = 0x1d2398u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1d239c:
    // 0x1d239c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x1d239cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_1d23a0:
    // 0x1d23a0: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1d23a0u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1d23a4:
    // 0x1d23a4: 0x97a20026  lhu         $v0, 0x26($sp)
    ctx->pc = 0x1d23a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
label_1d23a8:
    // 0x1d23a8: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x1d23a8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
label_1d23ac:
    // 0x1d23ac: 0x97a30024  lhu         $v1, 0x24($sp)
    ctx->pc = 0x1d23acu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 36)));
label_1d23b0:
    // 0x1d23b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_1d23b4:
    if (ctx->pc == 0x1D23B4u) {
        ctx->pc = 0x1D23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B0u;
        // 0x1d23b4: 0xa4c30006  sh          $v1, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23B8u;
        goto label_1d23b8;
    }
    ctx->pc = 0x1D23B0u;
    {
        const bool branch_taken_0x1d23b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D23B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23B0u;
        // 0x1d23b4: 0xa4c30006  sh          $v1, 0x6($a2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23b0) {
            ctx->pc = 0x1D23DCu;
            goto label_1d23dc;
        }
    }
    ctx->pc = 0x1D23B8u;
label_1d23b8:
    // 0x1d23b8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d23b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d23bc:
    // 0x1d23bc: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1d23bcu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_1d23c0:
    // 0x1d23c0: 0x97a30026  lhu         $v1, 0x26($sp)
    ctx->pc = 0x1d23c0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 38)));
label_1d23c4:
    // 0x1d23c4: 0xa4c30002  sh          $v1, 0x2($a2)
    ctx->pc = 0x1d23c4u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 3));
label_1d23c8:
    // 0x1d23c8: 0x97a40020  lhu         $a0, 0x20($sp)
    ctx->pc = 0x1d23c8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_1d23cc:
    // 0x1d23cc: 0xa4c40004  sh          $a0, 0x4($a2)
    ctx->pc = 0x1d23ccu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 4));
label_1d23d0:
    // 0x1d23d0: 0x97a20022  lhu         $v0, 0x22($sp)
    ctx->pc = 0x1d23d0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 34)));
label_1d23d4:
    // 0x1d23d4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x1d23d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d23d8:
    // 0x1d23d8: 0xa4c20006  sh          $v0, 0x6($a2)
    ctx->pc = 0x1d23d8u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 2));
label_1d23dc:
    // 0x1d23dc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1d23dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1d23e0:
    // 0x1d23e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d23e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d23e4:
    // 0x1d23e4: 0x51382  srl         $v0, $a1, 14
    ctx->pc = 0x1d23e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 14));
label_1d23e8:
    // 0x1d23e8: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1d23e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1d23ec:
    // 0x1d23ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1d23ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d23f0:
    // 0x1d23f0: 0x50450001  beql        $v0, $a1, . + 4 + (0x1 << 2)
label_1d23f4:
    if (ctx->pc == 0x1D23F4u) {
        ctx->pc = 0x1D23F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23F0u;
        // 0x1d23f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D23F8u;
        goto label_1d23f8;
    }
    ctx->pc = 0x1D23F0u;
    {
        const bool branch_taken_0x1d23f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1d23f0) {
            ctx->pc = 0x1D23F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D23F0u;
            // 0x1d23f4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D23F8u;
            goto label_1d23f8;
        }
    }
    ctx->pc = 0x1D23F8u;
label_1d23f8:
    // 0x1d23f8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1d23f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d23fc:
    // 0x1d23fc: 0x1440ffaa  bnez        $v0, . + 4 + (-0x56 << 2)
label_1d2400:
    if (ctx->pc == 0x1D2400u) {
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2404u;
        goto label_1d2404;
    }
    ctx->pc = 0x1D23FCu;
    {
        const bool branch_taken_0x1d23fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D23FCu;
        // 0x1d2400: 0x87a20014  lh          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d23fc) {
            ctx->pc = 0x1D22A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d22a8;
        }
    }
    ctx->pc = 0x1D2404u;
label_1d2404:
    // 0x1d2404: 0x12e00009  beqz        $s7, . + 4 + (0x9 << 2)
label_1d2408:
    if (ctx->pc == 0x1D2408u) {
        ctx->pc = 0x1D2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2404u;
        // 0x1d2408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D240Cu;
        goto label_1d240c;
    }
    ctx->pc = 0x1D2404u;
    {
        const bool branch_taken_0x1d2404 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2404u;
        // 0x1d2408: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2404) {
            ctx->pc = 0x1D242Cu;
            goto label_1d242c;
        }
    }
    ctx->pc = 0x1D240Cu;
label_1d240c:
    // 0x1d240c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1d240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d2410:
    // 0x1d2410: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x1d2410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_1d2414:
    // 0x1d2414: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x1d2414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1d2418:
    // 0x1d2418: 0x40f809  jalr        $v0
label_1d241c:
    if (ctx->pc == 0x1D241Cu) {
        ctx->pc = 0x1D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2418u;
        // 0x1d241c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2420u;
        goto label_1d2420;
    }
    ctx->pc = 0x1D2418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2420u);
        ctx->pc = 0x1D241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2418u;
        // 0x1d241c: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2418u, 0x1D2420u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2420u;
label_1d2420:
    // 0x1d2420: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1d2420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d2424:
    // 0x1d2424: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d2428:
    if (ctx->pc == 0x1D2428u) {
        ctx->pc = 0x1D2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2424u;
        // 0x1d2428: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D242Cu;
        goto label_1d242c;
    }
    ctx->pc = 0x1D2424u;
    {
        const bool branch_taken_0x1d2424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2424u;
        // 0x1d2428: 0xe6400008  swc1        $f0, 0x8($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2424) {
            ctx->pc = 0x1D2438u;
            goto label_1d2438;
        }
    }
    ctx->pc = 0x1D242Cu;
label_1d242c:
    // 0x1d242c: 0xc6ac0010  lwc1        $f12, 0x10($s5)
    ctx->pc = 0x1d242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1d2430:
    // 0x1d2430: 0xc074eaa  jal         func_1D3AA8
label_1d2434:
    if (ctx->pc == 0x1D2434u) {
        ctx->pc = 0x1D2434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2430u;
        // 0x1d2434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2438u;
        goto label_1d2438;
    }
    ctx->pc = 0x1D2430u;
    SET_GPR_U32(ctx, 31, 0x1D2438u);
    ctx->pc = 0x1D2434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2430u;
    // 0x1d2434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D3AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D3AA8u, 0x1D2430u, 0x1D2438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D2438u;
label_1d2438:
    // 0x1d2438: 0x86a20008  lh          $v0, 0x8($s5)
    ctx->pc = 0x1d2438u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 8)));
label_1d243c:
    // 0x1d243c: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x1d243cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d2440:
    // 0x1d2440: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1d2440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1d2444:
    // 0x1d2444: 0x5440ff16  bnel        $v0, $zero, . + 4 + (-0xEA << 2)
label_1d2448:
    if (ctx->pc == 0x1D2448u) {
        ctx->pc = 0x1D2448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2444u;
        // 0x1d2448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D244Cu;
        goto label_1d244c;
    }
    ctx->pc = 0x1D2444u;
    {
        const bool branch_taken_0x1d2444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2444) {
            ctx->pc = 0x1D2448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2444u;
            // 0x1d2448: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D20A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d20a0;
        }
    }
    ctx->pc = 0x1D244Cu;
label_1d244c:
    // 0x1d244c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1d244cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2450:
    // 0x1d2450: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1d2450u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1d2454:
    // 0x1d2454: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1d2454u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2458:
    // 0x1d2458: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1d2458u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1d245c:
    // 0x1d245c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1d245cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1d2460:
    // 0x1d2460: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1d2460u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1d2464:
    // 0x1d2464: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1d2464u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2468:
    // 0x1d2468: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1d2468u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1d246c:
    // 0x1d246c: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1d246cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1d2470:
    // 0x1d2470: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x1d2470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1d2474:
    // 0x1d2474: 0x3e00008  jr          $ra
label_1d2478:
    if (ctx->pc == 0x1D2478u) {
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2474u;
        // 0x1d2478: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D247Cu;
        goto label_1d247c;
    }
    ctx->pc = 0x1D2474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2474u;
        // 0x1d2478: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D247Cu;
label_1d247c:
    // 0x1d247c: 0x0  nop
    ctx->pc = 0x1d247cu;
    // NOP
    ctx->pc = 0x1d2480u;
}
