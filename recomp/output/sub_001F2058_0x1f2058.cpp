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

// Function: sub_001F2058
// Address: 0x1f2058 - 0x1f2928
void sub_001F2058_0x1f2058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2058_0x1f2058");
#endif

    switch (ctx->pc) {
        case 0x1f2058u: goto label_1f2058;
        case 0x1f205cu: goto label_1f205c;
        case 0x1f2060u: goto label_1f2060;
        case 0x1f2064u: goto label_1f2064;
        case 0x1f2068u: goto label_1f2068;
        case 0x1f206cu: goto label_1f206c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f2074u: goto label_1f2074;
        case 0x1f2078u: goto label_1f2078;
        case 0x1f207cu: goto label_1f207c;
        case 0x1f2080u: goto label_1f2080;
        case 0x1f2084u: goto label_1f2084;
        case 0x1f2088u: goto label_1f2088;
        case 0x1f208cu: goto label_1f208c;
        case 0x1f2090u: goto label_1f2090;
        case 0x1f2094u: goto label_1f2094;
        case 0x1f2098u: goto label_1f2098;
        case 0x1f209cu: goto label_1f209c;
        case 0x1f20a0u: goto label_1f20a0;
        case 0x1f20a4u: goto label_1f20a4;
        case 0x1f20a8u: goto label_1f20a8;
        case 0x1f20acu: goto label_1f20ac;
        case 0x1f20b0u: goto label_1f20b0;
        case 0x1f20b4u: goto label_1f20b4;
        case 0x1f20b8u: goto label_1f20b8;
        case 0x1f20bcu: goto label_1f20bc;
        case 0x1f20c0u: goto label_1f20c0;
        case 0x1f20c4u: goto label_1f20c4;
        case 0x1f20c8u: goto label_1f20c8;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f20d0u: goto label_1f20d0;
        case 0x1f20d4u: goto label_1f20d4;
        case 0x1f20d8u: goto label_1f20d8;
        case 0x1f20dcu: goto label_1f20dc;
        case 0x1f20e0u: goto label_1f20e0;
        case 0x1f20e4u: goto label_1f20e4;
        case 0x1f20e8u: goto label_1f20e8;
        case 0x1f20ecu: goto label_1f20ec;
        case 0x1f20f0u: goto label_1f20f0;
        case 0x1f20f4u: goto label_1f20f4;
        case 0x1f20f8u: goto label_1f20f8;
        case 0x1f20fcu: goto label_1f20fc;
        case 0x1f2100u: goto label_1f2100;
        case 0x1f2104u: goto label_1f2104;
        case 0x1f2108u: goto label_1f2108;
        case 0x1f210cu: goto label_1f210c;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2114u: goto label_1f2114;
        case 0x1f2118u: goto label_1f2118;
        case 0x1f211cu: goto label_1f211c;
        case 0x1f2120u: goto label_1f2120;
        case 0x1f2124u: goto label_1f2124;
        case 0x1f2128u: goto label_1f2128;
        case 0x1f212cu: goto label_1f212c;
        case 0x1f2130u: goto label_1f2130;
        case 0x1f2134u: goto label_1f2134;
        case 0x1f2138u: goto label_1f2138;
        case 0x1f213cu: goto label_1f213c;
        case 0x1f2140u: goto label_1f2140;
        case 0x1f2144u: goto label_1f2144;
        case 0x1f2148u: goto label_1f2148;
        case 0x1f214cu: goto label_1f214c;
        case 0x1f2150u: goto label_1f2150;
        case 0x1f2154u: goto label_1f2154;
        case 0x1f2158u: goto label_1f2158;
        case 0x1f215cu: goto label_1f215c;
        case 0x1f2160u: goto label_1f2160;
        case 0x1f2164u: goto label_1f2164;
        case 0x1f2168u: goto label_1f2168;
        case 0x1f216cu: goto label_1f216c;
        case 0x1f2170u: goto label_1f2170;
        case 0x1f2174u: goto label_1f2174;
        case 0x1f2178u: goto label_1f2178;
        case 0x1f217cu: goto label_1f217c;
        case 0x1f2180u: goto label_1f2180;
        case 0x1f2184u: goto label_1f2184;
        case 0x1f2188u: goto label_1f2188;
        case 0x1f218cu: goto label_1f218c;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f2194u: goto label_1f2194;
        case 0x1f2198u: goto label_1f2198;
        case 0x1f219cu: goto label_1f219c;
        case 0x1f21a0u: goto label_1f21a0;
        case 0x1f21a4u: goto label_1f21a4;
        case 0x1f21a8u: goto label_1f21a8;
        case 0x1f21acu: goto label_1f21ac;
        case 0x1f21b0u: goto label_1f21b0;
        case 0x1f21b4u: goto label_1f21b4;
        case 0x1f21b8u: goto label_1f21b8;
        case 0x1f21bcu: goto label_1f21bc;
        case 0x1f21c0u: goto label_1f21c0;
        case 0x1f21c4u: goto label_1f21c4;
        case 0x1f21c8u: goto label_1f21c8;
        case 0x1f21ccu: goto label_1f21cc;
        case 0x1f21d0u: goto label_1f21d0;
        case 0x1f21d4u: goto label_1f21d4;
        case 0x1f21d8u: goto label_1f21d8;
        case 0x1f21dcu: goto label_1f21dc;
        case 0x1f21e0u: goto label_1f21e0;
        case 0x1f21e4u: goto label_1f21e4;
        case 0x1f21e8u: goto label_1f21e8;
        case 0x1f21ecu: goto label_1f21ec;
        case 0x1f21f0u: goto label_1f21f0;
        case 0x1f21f4u: goto label_1f21f4;
        case 0x1f21f8u: goto label_1f21f8;
        case 0x1f21fcu: goto label_1f21fc;
        case 0x1f2200u: goto label_1f2200;
        case 0x1f2204u: goto label_1f2204;
        case 0x1f2208u: goto label_1f2208;
        case 0x1f220cu: goto label_1f220c;
        case 0x1f2210u: goto label_1f2210;
        case 0x1f2214u: goto label_1f2214;
        case 0x1f2218u: goto label_1f2218;
        case 0x1f221cu: goto label_1f221c;
        case 0x1f2220u: goto label_1f2220;
        case 0x1f2224u: goto label_1f2224;
        case 0x1f2228u: goto label_1f2228;
        case 0x1f222cu: goto label_1f222c;
        case 0x1f2230u: goto label_1f2230;
        case 0x1f2234u: goto label_1f2234;
        case 0x1f2238u: goto label_1f2238;
        case 0x1f223cu: goto label_1f223c;
        case 0x1f2240u: goto label_1f2240;
        case 0x1f2244u: goto label_1f2244;
        case 0x1f2248u: goto label_1f2248;
        case 0x1f224cu: goto label_1f224c;
        case 0x1f2250u: goto label_1f2250;
        case 0x1f2254u: goto label_1f2254;
        case 0x1f2258u: goto label_1f2258;
        case 0x1f225cu: goto label_1f225c;
        case 0x1f2260u: goto label_1f2260;
        case 0x1f2264u: goto label_1f2264;
        case 0x1f2268u: goto label_1f2268;
        case 0x1f226cu: goto label_1f226c;
        case 0x1f2270u: goto label_1f2270;
        case 0x1f2274u: goto label_1f2274;
        case 0x1f2278u: goto label_1f2278;
        case 0x1f227cu: goto label_1f227c;
        case 0x1f2280u: goto label_1f2280;
        case 0x1f2284u: goto label_1f2284;
        case 0x1f2288u: goto label_1f2288;
        case 0x1f228cu: goto label_1f228c;
        case 0x1f2290u: goto label_1f2290;
        case 0x1f2294u: goto label_1f2294;
        case 0x1f2298u: goto label_1f2298;
        case 0x1f229cu: goto label_1f229c;
        case 0x1f22a0u: goto label_1f22a0;
        case 0x1f22a4u: goto label_1f22a4;
        case 0x1f22a8u: goto label_1f22a8;
        case 0x1f22acu: goto label_1f22ac;
        case 0x1f22b0u: goto label_1f22b0;
        case 0x1f22b4u: goto label_1f22b4;
        case 0x1f22b8u: goto label_1f22b8;
        case 0x1f22bcu: goto label_1f22bc;
        case 0x1f22c0u: goto label_1f22c0;
        case 0x1f22c4u: goto label_1f22c4;
        case 0x1f22c8u: goto label_1f22c8;
        case 0x1f22ccu: goto label_1f22cc;
        case 0x1f22d0u: goto label_1f22d0;
        case 0x1f22d4u: goto label_1f22d4;
        case 0x1f22d8u: goto label_1f22d8;
        case 0x1f22dcu: goto label_1f22dc;
        case 0x1f22e0u: goto label_1f22e0;
        case 0x1f22e4u: goto label_1f22e4;
        case 0x1f22e8u: goto label_1f22e8;
        case 0x1f22ecu: goto label_1f22ec;
        case 0x1f22f0u: goto label_1f22f0;
        case 0x1f22f4u: goto label_1f22f4;
        case 0x1f22f8u: goto label_1f22f8;
        case 0x1f22fcu: goto label_1f22fc;
        case 0x1f2300u: goto label_1f2300;
        case 0x1f2304u: goto label_1f2304;
        case 0x1f2308u: goto label_1f2308;
        case 0x1f230cu: goto label_1f230c;
        case 0x1f2310u: goto label_1f2310;
        case 0x1f2314u: goto label_1f2314;
        case 0x1f2318u: goto label_1f2318;
        case 0x1f231cu: goto label_1f231c;
        case 0x1f2320u: goto label_1f2320;
        case 0x1f2324u: goto label_1f2324;
        case 0x1f2328u: goto label_1f2328;
        case 0x1f232cu: goto label_1f232c;
        case 0x1f2330u: goto label_1f2330;
        case 0x1f2334u: goto label_1f2334;
        case 0x1f2338u: goto label_1f2338;
        case 0x1f233cu: goto label_1f233c;
        case 0x1f2340u: goto label_1f2340;
        case 0x1f2344u: goto label_1f2344;
        case 0x1f2348u: goto label_1f2348;
        case 0x1f234cu: goto label_1f234c;
        case 0x1f2350u: goto label_1f2350;
        case 0x1f2354u: goto label_1f2354;
        case 0x1f2358u: goto label_1f2358;
        case 0x1f235cu: goto label_1f235c;
        case 0x1f2360u: goto label_1f2360;
        case 0x1f2364u: goto label_1f2364;
        case 0x1f2368u: goto label_1f2368;
        case 0x1f236cu: goto label_1f236c;
        case 0x1f2370u: goto label_1f2370;
        case 0x1f2374u: goto label_1f2374;
        case 0x1f2378u: goto label_1f2378;
        case 0x1f237cu: goto label_1f237c;
        case 0x1f2380u: goto label_1f2380;
        case 0x1f2384u: goto label_1f2384;
        case 0x1f2388u: goto label_1f2388;
        case 0x1f238cu: goto label_1f238c;
        case 0x1f2390u: goto label_1f2390;
        case 0x1f2394u: goto label_1f2394;
        case 0x1f2398u: goto label_1f2398;
        case 0x1f239cu: goto label_1f239c;
        case 0x1f23a0u: goto label_1f23a0;
        case 0x1f23a4u: goto label_1f23a4;
        case 0x1f23a8u: goto label_1f23a8;
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23b0u: goto label_1f23b0;
        case 0x1f23b4u: goto label_1f23b4;
        case 0x1f23b8u: goto label_1f23b8;
        case 0x1f23bcu: goto label_1f23bc;
        case 0x1f23c0u: goto label_1f23c0;
        case 0x1f23c4u: goto label_1f23c4;
        case 0x1f23c8u: goto label_1f23c8;
        case 0x1f23ccu: goto label_1f23cc;
        case 0x1f23d0u: goto label_1f23d0;
        case 0x1f23d4u: goto label_1f23d4;
        case 0x1f23d8u: goto label_1f23d8;
        case 0x1f23dcu: goto label_1f23dc;
        case 0x1f23e0u: goto label_1f23e0;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f23e8u: goto label_1f23e8;
        case 0x1f23ecu: goto label_1f23ec;
        case 0x1f23f0u: goto label_1f23f0;
        case 0x1f23f4u: goto label_1f23f4;
        case 0x1f23f8u: goto label_1f23f8;
        case 0x1f23fcu: goto label_1f23fc;
        case 0x1f2400u: goto label_1f2400;
        case 0x1f2404u: goto label_1f2404;
        case 0x1f2408u: goto label_1f2408;
        case 0x1f240cu: goto label_1f240c;
        case 0x1f2410u: goto label_1f2410;
        case 0x1f2414u: goto label_1f2414;
        case 0x1f2418u: goto label_1f2418;
        case 0x1f241cu: goto label_1f241c;
        case 0x1f2420u: goto label_1f2420;
        case 0x1f2424u: goto label_1f2424;
        case 0x1f2428u: goto label_1f2428;
        case 0x1f242cu: goto label_1f242c;
        case 0x1f2430u: goto label_1f2430;
        case 0x1f2434u: goto label_1f2434;
        case 0x1f2438u: goto label_1f2438;
        case 0x1f243cu: goto label_1f243c;
        case 0x1f2440u: goto label_1f2440;
        case 0x1f2444u: goto label_1f2444;
        case 0x1f2448u: goto label_1f2448;
        case 0x1f244cu: goto label_1f244c;
        case 0x1f2450u: goto label_1f2450;
        case 0x1f2454u: goto label_1f2454;
        case 0x1f2458u: goto label_1f2458;
        case 0x1f245cu: goto label_1f245c;
        case 0x1f2460u: goto label_1f2460;
        case 0x1f2464u: goto label_1f2464;
        case 0x1f2468u: goto label_1f2468;
        case 0x1f246cu: goto label_1f246c;
        case 0x1f2470u: goto label_1f2470;
        case 0x1f2474u: goto label_1f2474;
        case 0x1f2478u: goto label_1f2478;
        case 0x1f247cu: goto label_1f247c;
        case 0x1f2480u: goto label_1f2480;
        case 0x1f2484u: goto label_1f2484;
        case 0x1f2488u: goto label_1f2488;
        case 0x1f248cu: goto label_1f248c;
        case 0x1f2490u: goto label_1f2490;
        case 0x1f2494u: goto label_1f2494;
        case 0x1f2498u: goto label_1f2498;
        case 0x1f249cu: goto label_1f249c;
        case 0x1f24a0u: goto label_1f24a0;
        case 0x1f24a4u: goto label_1f24a4;
        case 0x1f24a8u: goto label_1f24a8;
        case 0x1f24acu: goto label_1f24ac;
        case 0x1f24b0u: goto label_1f24b0;
        case 0x1f24b4u: goto label_1f24b4;
        case 0x1f24b8u: goto label_1f24b8;
        case 0x1f24bcu: goto label_1f24bc;
        case 0x1f24c0u: goto label_1f24c0;
        case 0x1f24c4u: goto label_1f24c4;
        case 0x1f24c8u: goto label_1f24c8;
        case 0x1f24ccu: goto label_1f24cc;
        case 0x1f24d0u: goto label_1f24d0;
        case 0x1f24d4u: goto label_1f24d4;
        case 0x1f24d8u: goto label_1f24d8;
        case 0x1f24dcu: goto label_1f24dc;
        case 0x1f24e0u: goto label_1f24e0;
        case 0x1f24e4u: goto label_1f24e4;
        case 0x1f24e8u: goto label_1f24e8;
        case 0x1f24ecu: goto label_1f24ec;
        case 0x1f24f0u: goto label_1f24f0;
        case 0x1f24f4u: goto label_1f24f4;
        case 0x1f24f8u: goto label_1f24f8;
        case 0x1f24fcu: goto label_1f24fc;
        case 0x1f2500u: goto label_1f2500;
        case 0x1f2504u: goto label_1f2504;
        case 0x1f2508u: goto label_1f2508;
        case 0x1f250cu: goto label_1f250c;
        case 0x1f2510u: goto label_1f2510;
        case 0x1f2514u: goto label_1f2514;
        case 0x1f2518u: goto label_1f2518;
        case 0x1f251cu: goto label_1f251c;
        case 0x1f2520u: goto label_1f2520;
        case 0x1f2524u: goto label_1f2524;
        case 0x1f2528u: goto label_1f2528;
        case 0x1f252cu: goto label_1f252c;
        case 0x1f2530u: goto label_1f2530;
        case 0x1f2534u: goto label_1f2534;
        case 0x1f2538u: goto label_1f2538;
        case 0x1f253cu: goto label_1f253c;
        case 0x1f2540u: goto label_1f2540;
        case 0x1f2544u: goto label_1f2544;
        case 0x1f2548u: goto label_1f2548;
        case 0x1f254cu: goto label_1f254c;
        case 0x1f2550u: goto label_1f2550;
        case 0x1f2554u: goto label_1f2554;
        case 0x1f2558u: goto label_1f2558;
        case 0x1f255cu: goto label_1f255c;
        case 0x1f2560u: goto label_1f2560;
        case 0x1f2564u: goto label_1f2564;
        case 0x1f2568u: goto label_1f2568;
        case 0x1f256cu: goto label_1f256c;
        case 0x1f2570u: goto label_1f2570;
        case 0x1f2574u: goto label_1f2574;
        case 0x1f2578u: goto label_1f2578;
        case 0x1f257cu: goto label_1f257c;
        case 0x1f2580u: goto label_1f2580;
        case 0x1f2584u: goto label_1f2584;
        case 0x1f2588u: goto label_1f2588;
        case 0x1f258cu: goto label_1f258c;
        case 0x1f2590u: goto label_1f2590;
        case 0x1f2594u: goto label_1f2594;
        case 0x1f2598u: goto label_1f2598;
        case 0x1f259cu: goto label_1f259c;
        case 0x1f25a0u: goto label_1f25a0;
        case 0x1f25a4u: goto label_1f25a4;
        case 0x1f25a8u: goto label_1f25a8;
        case 0x1f25acu: goto label_1f25ac;
        case 0x1f25b0u: goto label_1f25b0;
        case 0x1f25b4u: goto label_1f25b4;
        case 0x1f25b8u: goto label_1f25b8;
        case 0x1f25bcu: goto label_1f25bc;
        case 0x1f25c0u: goto label_1f25c0;
        case 0x1f25c4u: goto label_1f25c4;
        case 0x1f25c8u: goto label_1f25c8;
        case 0x1f25ccu: goto label_1f25cc;
        case 0x1f25d0u: goto label_1f25d0;
        case 0x1f25d4u: goto label_1f25d4;
        case 0x1f25d8u: goto label_1f25d8;
        case 0x1f25dcu: goto label_1f25dc;
        case 0x1f25e0u: goto label_1f25e0;
        case 0x1f25e4u: goto label_1f25e4;
        case 0x1f25e8u: goto label_1f25e8;
        case 0x1f25ecu: goto label_1f25ec;
        case 0x1f25f0u: goto label_1f25f0;
        case 0x1f25f4u: goto label_1f25f4;
        case 0x1f25f8u: goto label_1f25f8;
        case 0x1f25fcu: goto label_1f25fc;
        case 0x1f2600u: goto label_1f2600;
        case 0x1f2604u: goto label_1f2604;
        case 0x1f2608u: goto label_1f2608;
        case 0x1f260cu: goto label_1f260c;
        case 0x1f2610u: goto label_1f2610;
        case 0x1f2614u: goto label_1f2614;
        case 0x1f2618u: goto label_1f2618;
        case 0x1f261cu: goto label_1f261c;
        case 0x1f2620u: goto label_1f2620;
        case 0x1f2624u: goto label_1f2624;
        case 0x1f2628u: goto label_1f2628;
        case 0x1f262cu: goto label_1f262c;
        case 0x1f2630u: goto label_1f2630;
        case 0x1f2634u: goto label_1f2634;
        case 0x1f2638u: goto label_1f2638;
        case 0x1f263cu: goto label_1f263c;
        case 0x1f2640u: goto label_1f2640;
        case 0x1f2644u: goto label_1f2644;
        case 0x1f2648u: goto label_1f2648;
        case 0x1f264cu: goto label_1f264c;
        case 0x1f2650u: goto label_1f2650;
        case 0x1f2654u: goto label_1f2654;
        case 0x1f2658u: goto label_1f2658;
        case 0x1f265cu: goto label_1f265c;
        case 0x1f2660u: goto label_1f2660;
        case 0x1f2664u: goto label_1f2664;
        case 0x1f2668u: goto label_1f2668;
        case 0x1f266cu: goto label_1f266c;
        case 0x1f2670u: goto label_1f2670;
        case 0x1f2674u: goto label_1f2674;
        case 0x1f2678u: goto label_1f2678;
        case 0x1f267cu: goto label_1f267c;
        case 0x1f2680u: goto label_1f2680;
        case 0x1f2684u: goto label_1f2684;
        case 0x1f2688u: goto label_1f2688;
        case 0x1f268cu: goto label_1f268c;
        case 0x1f2690u: goto label_1f2690;
        case 0x1f2694u: goto label_1f2694;
        case 0x1f2698u: goto label_1f2698;
        case 0x1f269cu: goto label_1f269c;
        case 0x1f26a0u: goto label_1f26a0;
        case 0x1f26a4u: goto label_1f26a4;
        case 0x1f26a8u: goto label_1f26a8;
        case 0x1f26acu: goto label_1f26ac;
        case 0x1f26b0u: goto label_1f26b0;
        case 0x1f26b4u: goto label_1f26b4;
        case 0x1f26b8u: goto label_1f26b8;
        case 0x1f26bcu: goto label_1f26bc;
        case 0x1f26c0u: goto label_1f26c0;
        case 0x1f26c4u: goto label_1f26c4;
        case 0x1f26c8u: goto label_1f26c8;
        case 0x1f26ccu: goto label_1f26cc;
        case 0x1f26d0u: goto label_1f26d0;
        case 0x1f26d4u: goto label_1f26d4;
        case 0x1f26d8u: goto label_1f26d8;
        case 0x1f26dcu: goto label_1f26dc;
        case 0x1f26e0u: goto label_1f26e0;
        case 0x1f26e4u: goto label_1f26e4;
        case 0x1f26e8u: goto label_1f26e8;
        case 0x1f26ecu: goto label_1f26ec;
        case 0x1f26f0u: goto label_1f26f0;
        case 0x1f26f4u: goto label_1f26f4;
        case 0x1f26f8u: goto label_1f26f8;
        case 0x1f26fcu: goto label_1f26fc;
        case 0x1f2700u: goto label_1f2700;
        case 0x1f2704u: goto label_1f2704;
        case 0x1f2708u: goto label_1f2708;
        case 0x1f270cu: goto label_1f270c;
        case 0x1f2710u: goto label_1f2710;
        case 0x1f2714u: goto label_1f2714;
        case 0x1f2718u: goto label_1f2718;
        case 0x1f271cu: goto label_1f271c;
        case 0x1f2720u: goto label_1f2720;
        case 0x1f2724u: goto label_1f2724;
        case 0x1f2728u: goto label_1f2728;
        case 0x1f272cu: goto label_1f272c;
        case 0x1f2730u: goto label_1f2730;
        case 0x1f2734u: goto label_1f2734;
        case 0x1f2738u: goto label_1f2738;
        case 0x1f273cu: goto label_1f273c;
        case 0x1f2740u: goto label_1f2740;
        case 0x1f2744u: goto label_1f2744;
        case 0x1f2748u: goto label_1f2748;
        case 0x1f274cu: goto label_1f274c;
        case 0x1f2750u: goto label_1f2750;
        case 0x1f2754u: goto label_1f2754;
        case 0x1f2758u: goto label_1f2758;
        case 0x1f275cu: goto label_1f275c;
        case 0x1f2760u: goto label_1f2760;
        case 0x1f2764u: goto label_1f2764;
        case 0x1f2768u: goto label_1f2768;
        case 0x1f276cu: goto label_1f276c;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f2774u: goto label_1f2774;
        case 0x1f2778u: goto label_1f2778;
        case 0x1f277cu: goto label_1f277c;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2784u: goto label_1f2784;
        case 0x1f2788u: goto label_1f2788;
        case 0x1f278cu: goto label_1f278c;
        case 0x1f2790u: goto label_1f2790;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f2798u: goto label_1f2798;
        case 0x1f279cu: goto label_1f279c;
        case 0x1f27a0u: goto label_1f27a0;
        case 0x1f27a4u: goto label_1f27a4;
        case 0x1f27a8u: goto label_1f27a8;
        case 0x1f27acu: goto label_1f27ac;
        case 0x1f27b0u: goto label_1f27b0;
        case 0x1f27b4u: goto label_1f27b4;
        case 0x1f27b8u: goto label_1f27b8;
        case 0x1f27bcu: goto label_1f27bc;
        case 0x1f27c0u: goto label_1f27c0;
        case 0x1f27c4u: goto label_1f27c4;
        case 0x1f27c8u: goto label_1f27c8;
        case 0x1f27ccu: goto label_1f27cc;
        case 0x1f27d0u: goto label_1f27d0;
        case 0x1f27d4u: goto label_1f27d4;
        case 0x1f27d8u: goto label_1f27d8;
        case 0x1f27dcu: goto label_1f27dc;
        case 0x1f27e0u: goto label_1f27e0;
        case 0x1f27e4u: goto label_1f27e4;
        case 0x1f27e8u: goto label_1f27e8;
        case 0x1f27ecu: goto label_1f27ec;
        case 0x1f27f0u: goto label_1f27f0;
        case 0x1f27f4u: goto label_1f27f4;
        case 0x1f27f8u: goto label_1f27f8;
        case 0x1f27fcu: goto label_1f27fc;
        case 0x1f2800u: goto label_1f2800;
        case 0x1f2804u: goto label_1f2804;
        case 0x1f2808u: goto label_1f2808;
        case 0x1f280cu: goto label_1f280c;
        case 0x1f2810u: goto label_1f2810;
        case 0x1f2814u: goto label_1f2814;
        case 0x1f2818u: goto label_1f2818;
        case 0x1f281cu: goto label_1f281c;
        case 0x1f2820u: goto label_1f2820;
        case 0x1f2824u: goto label_1f2824;
        case 0x1f2828u: goto label_1f2828;
        case 0x1f282cu: goto label_1f282c;
        case 0x1f2830u: goto label_1f2830;
        case 0x1f2834u: goto label_1f2834;
        case 0x1f2838u: goto label_1f2838;
        case 0x1f283cu: goto label_1f283c;
        case 0x1f2840u: goto label_1f2840;
        case 0x1f2844u: goto label_1f2844;
        case 0x1f2848u: goto label_1f2848;
        case 0x1f284cu: goto label_1f284c;
        case 0x1f2850u: goto label_1f2850;
        case 0x1f2854u: goto label_1f2854;
        case 0x1f2858u: goto label_1f2858;
        case 0x1f285cu: goto label_1f285c;
        case 0x1f2860u: goto label_1f2860;
        case 0x1f2864u: goto label_1f2864;
        case 0x1f2868u: goto label_1f2868;
        case 0x1f286cu: goto label_1f286c;
        case 0x1f2870u: goto label_1f2870;
        case 0x1f2874u: goto label_1f2874;
        case 0x1f2878u: goto label_1f2878;
        case 0x1f287cu: goto label_1f287c;
        case 0x1f2880u: goto label_1f2880;
        case 0x1f2884u: goto label_1f2884;
        case 0x1f2888u: goto label_1f2888;
        case 0x1f288cu: goto label_1f288c;
        case 0x1f2890u: goto label_1f2890;
        case 0x1f2894u: goto label_1f2894;
        case 0x1f2898u: goto label_1f2898;
        case 0x1f289cu: goto label_1f289c;
        case 0x1f28a0u: goto label_1f28a0;
        case 0x1f28a4u: goto label_1f28a4;
        case 0x1f28a8u: goto label_1f28a8;
        case 0x1f28acu: goto label_1f28ac;
        case 0x1f28b0u: goto label_1f28b0;
        case 0x1f28b4u: goto label_1f28b4;
        case 0x1f28b8u: goto label_1f28b8;
        case 0x1f28bcu: goto label_1f28bc;
        case 0x1f28c0u: goto label_1f28c0;
        case 0x1f28c4u: goto label_1f28c4;
        case 0x1f28c8u: goto label_1f28c8;
        case 0x1f28ccu: goto label_1f28cc;
        case 0x1f28d0u: goto label_1f28d0;
        case 0x1f28d4u: goto label_1f28d4;
        case 0x1f28d8u: goto label_1f28d8;
        case 0x1f28dcu: goto label_1f28dc;
        case 0x1f28e0u: goto label_1f28e0;
        case 0x1f28e4u: goto label_1f28e4;
        case 0x1f28e8u: goto label_1f28e8;
        case 0x1f28ecu: goto label_1f28ec;
        case 0x1f28f0u: goto label_1f28f0;
        case 0x1f28f4u: goto label_1f28f4;
        case 0x1f28f8u: goto label_1f28f8;
        case 0x1f28fcu: goto label_1f28fc;
        case 0x1f2900u: goto label_1f2900;
        case 0x1f2904u: goto label_1f2904;
        case 0x1f2908u: goto label_1f2908;
        case 0x1f290cu: goto label_1f290c;
        case 0x1f2910u: goto label_1f2910;
        case 0x1f2914u: goto label_1f2914;
        case 0x1f2918u: goto label_1f2918;
        case 0x1f291cu: goto label_1f291c;
        case 0x1f2920u: goto label_1f2920;
        case 0x1f2924u: goto label_1f2924;
        default: break;
    }

    ctx->pc = 0x1f2058u;

label_1f2058:
    // 0x1f2058: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_1f205c:
    // 0x1f205c: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x1f205cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_1f2060:
    // 0x1f2060: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x1f2060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_1f2064:
    // 0x1f2064: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f2064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2068:
    // 0x1f2068: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x1f2068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_1f206c:
    // 0x1f206c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f206cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f2070:
    // 0x1f2070: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x1f2070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_1f2074:
    // 0x1f2074: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1f2074u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f2078:
    // 0x1f2078: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x1f2078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_1f207c:
    // 0x1f207c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f207cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1f2080:
    // 0x1f2080: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x1f2080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_1f2084:
    // 0x1f2084: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x1f2084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_1f2088:
    // 0x1f2088: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x1f2088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_1f208c:
    // 0x1f208c: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x1f208cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_1f2090:
    // 0x1f2090: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x1f2090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_1f2094:
    // 0x1f2094: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x1f2094u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1f2098:
    // 0x1f2098: 0xc081d36  jal         func_2074D8
label_1f209c:
    if (ctx->pc == 0x1F209Cu) {
        ctx->pc = 0x1F209Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2098u;
        // 0x1f209c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20A0u;
        goto label_1f20a0;
    }
    ctx->pc = 0x1F2098u;
    SET_GPR_U32(ctx, 31, 0x1F20A0u);
    ctx->pc = 0x1F209Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2098u;
    // 0x1f209c: 0xe7b400d0  swc1        $f20, 0xD0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2074D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2074D8u, 0x1F2098u, 0x1F20A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20A0u;
label_1f20a0:
    // 0x1f20a0: 0x12200213  beqz        $s1, . + 4 + (0x213 << 2)
label_1f20a4:
    if (ctx->pc == 0x1F20A4u) {
        ctx->pc = 0x1F20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20A0u;
        // 0x1f20a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20A8u;
        goto label_1f20a8;
    }
    ctx->pc = 0x1F20A0u;
    {
        const bool branch_taken_0x1f20a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20A0u;
        // 0x1f20a4: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20a0) {
            ctx->pc = 0x1F28F0u;
            goto label_1f28f0;
        }
    }
    ctx->pc = 0x1F20A8u;
label_1f20a8:
    // 0x1f20a8: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f20a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1f20ac:
    // 0x1f20ac: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f20acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f20b0:
    // 0x1f20b0: 0xc07f6e4  jal         func_1FDB90
label_1f20b4:
    if (ctx->pc == 0x1F20B4u) {
        ctx->pc = 0x1F20B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20B0u;
        // 0x1f20b4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20B8u;
        goto label_1f20b8;
    }
    ctx->pc = 0x1F20B0u;
    SET_GPR_U32(ctx, 31, 0x1F20B8u);
    ctx->pc = 0x1F20B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20B0u;
    // 0x1f20b4: 0x24849b10  addiu       $a0, $a0, -0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDB90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDB90u, 0x1F20B0u, 0x1F20B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20B8u;
label_1f20b8:
    // 0x1f20b8: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_1f20bc:
    if (ctx->pc == 0x1F20BCu) {
        ctx->pc = 0x1F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20B8u;
        // 0x1f20bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20C0u;
        goto label_1f20c0;
    }
    ctx->pc = 0x1F20B8u;
    {
        const bool branch_taken_0x1f20b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f20b8) {
            ctx->pc = 0x1F20BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20B8u;
            // 0x1f20bc: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20ECu;
            goto label_1f20ec;
        }
    }
    ctx->pc = 0x1F20C0u;
label_1f20c0:
    // 0x1f20c0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1f20c4:
    // 0x1f20c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f20c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f20c8:
    // 0x1f20c8: 0xc0803ce  jal         func_200F38
label_1f20cc:
    if (ctx->pc == 0x1F20CCu) {
        ctx->pc = 0x1F20CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20C8u;
        // 0x1f20cc: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20D0u;
        goto label_1f20d0;
    }
    ctx->pc = 0x1F20C8u;
    SET_GPR_U32(ctx, 31, 0x1F20D0u);
    ctx->pc = 0x1F20CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20C8u;
    // 0x1f20cc: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200F38u, 0x1F20C8u, 0x1F20D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20D0u;
label_1f20d0:
    // 0x1f20d0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_1f20d4:
    if (ctx->pc == 0x1F20D4u) {
        ctx->pc = 0x1F20D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20D0u;
        // 0x1f20d4: 0x8e2502bc  lw          $a1, 0x2BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20D8u;
        goto label_1f20d8;
    }
    ctx->pc = 0x1F20D0u;
    {
        const bool branch_taken_0x1f20d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f20d0) {
            ctx->pc = 0x1F20D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20D0u;
            // 0x1f20d4: 0x8e2502bc  lw          $a1, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20F0u;
            goto label_1f20f0;
        }
    }
    ctx->pc = 0x1F20D8u;
label_1f20d8:
    // 0x1f20d8: 0x962302b8  lhu         $v1, 0x2B8($s1)
    ctx->pc = 0x1f20d8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
label_1f20dc:
    // 0x1f20dc: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x1f20dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1f20e0:
    // 0x1f20e0: 0x50620003  beql        $v1, $v0, . + 4 + (0x3 << 2)
label_1f20e4:
    if (ctx->pc == 0x1F20E4u) {
        ctx->pc = 0x1F20E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20E0u;
        // 0x1f20e4: 0x8e2502bc  lw          $a1, 0x2BC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20E8u;
        goto label_1f20e8;
    }
    ctx->pc = 0x1F20E0u;
    {
        const bool branch_taken_0x1f20e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f20e0) {
            ctx->pc = 0x1F20E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20E0u;
            // 0x1f20e4: 0x8e2502bc  lw          $a1, 0x2BC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20F0u;
            goto label_1f20f0;
        }
    }
    ctx->pc = 0x1F20E8u;
label_1f20e8:
    // 0x1f20e8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1f20e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f20ec:
    // 0x1f20ec: 0x8e2502bc  lw          $a1, 0x2BC($s1)
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 700)));
label_1f20f0:
    // 0x1f20f0: 0xc07e666  jal         func_1F9998
label_1f20f4:
    if (ctx->pc == 0x1F20F4u) {
        ctx->pc = 0x1F20F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20F0u;
        // 0x1f20f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F20F8u;
        goto label_1f20f8;
    }
    ctx->pc = 0x1F20F0u;
    SET_GPR_U32(ctx, 31, 0x1F20F8u);
    ctx->pc = 0x1F20F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20F0u;
    // 0x1f20f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F20F0u, 0x1F20F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F20F8u;
label_1f20f8:
    // 0x1f20f8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1f20fc:
    if (ctx->pc == 0x1F20FCu) {
        ctx->pc = 0x1F20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20F8u;
        // 0x1f20fc: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2100u;
        goto label_1f2100;
    }
    ctx->pc = 0x1F20F8u;
    {
        const bool branch_taken_0x1f20f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20F8u;
        // 0x1f20fc: 0x24030064  addiu       $v1, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20f8) {
            ctx->pc = 0x1F2150u;
            goto label_1f2150;
        }
    }
    ctx->pc = 0x1F2100u;
label_1f2100:
    // 0x1f2100: 0x962202b8  lhu         $v0, 0x2B8($s1)
    ctx->pc = 0x1f2100u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
label_1f2104:
    // 0x1f2104: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1f2108:
    if (ctx->pc == 0x1F2108u) {
        ctx->pc = 0x1F210Cu;
        goto label_1f210c;
    }
    ctx->pc = 0x1F2104u;
    {
        const bool branch_taken_0x1f2104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1f2104) {
            ctx->pc = 0x1F2150u;
            goto label_1f2150;
        }
    }
    ctx->pc = 0x1F210Cu;
label_1f210c:
    // 0x1f210c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_1f2110:
    if (ctx->pc == 0x1F2110u) {
        ctx->pc = 0x1F2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F210Cu;
        // 0x1f2110: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2114u;
        goto label_1f2114;
    }
    ctx->pc = 0x1F210Cu;
    {
        const bool branch_taken_0x1f210c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F210Cu;
        // 0x1f2110: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f210c) {
            ctx->pc = 0x1F2134u;
            goto label_1f2134;
        }
    }
    ctx->pc = 0x1F2114u;
label_1f2114:
    // 0x1f2114: 0xa62302b8  sh          $v1, 0x2B8($s1)
    ctx->pc = 0x1f2114u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 696), (uint16_t)GPR_U32(ctx, 3));
label_1f2118:
    // 0x1f2118: 0xae2202cc  sw          $v0, 0x2CC($s1)
    ctx->pc = 0x1f2118u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 2));
label_1f211c:
    // 0x1f211c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f211cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2120:
    // 0x1f2120: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f2120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f2124:
    // 0x1f2124: 0xc07e654  jal         func_1F9950
label_1f2128:
    if (ctx->pc == 0x1F2128u) {
        ctx->pc = 0x1F2128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2124u;
        // 0x1f2128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F212Cu;
        goto label_1f212c;
    }
    ctx->pc = 0x1F2124u;
    SET_GPR_U32(ctx, 31, 0x1F212Cu);
    ctx->pc = 0x1F2128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2124u;
    // 0x1f2128: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2124u, 0x1F212Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F212Cu;
label_1f212c:
    // 0x1f212c: 0x10000177  b           . + 4 + (0x177 << 2)
label_1f2130:
    if (ctx->pc == 0x1F2130u) {
        ctx->pc = 0x1F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F212Cu;
        // 0x1f2130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2134u;
        goto label_1f2134;
    }
    ctx->pc = 0x1F212Cu;
    {
        const bool branch_taken_0x1f212c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F212Cu;
        // 0x1f2130: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f212c) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F2134u;
label_1f2134:
    // 0x1f2134: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2138:
    // 0x1f2138: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f2138u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f213c:
    // 0x1f213c: 0xc07e654  jal         func_1F9950
label_1f2140:
    if (ctx->pc == 0x1F2140u) {
        ctx->pc = 0x1F2140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F213Cu;
        // 0x1f2140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2144u;
        goto label_1f2144;
    }
    ctx->pc = 0x1F213Cu;
    SET_GPR_U32(ctx, 31, 0x1F2144u);
    ctx->pc = 0x1F2140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F213Cu;
    // 0x1f2140: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F213Cu, 0x1F2144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2144u;
label_1f2144:
    // 0x1f2144: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2148:
    // 0x1f2148: 0x10000179  b           . + 4 + (0x179 << 2)
label_1f214c:
    if (ctx->pc == 0x1F214Cu) {
        ctx->pc = 0x1F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2148u;
        // 0x1f214c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2150u;
        goto label_1f2150;
    }
    ctx->pc = 0x1F2148u;
    {
        const bool branch_taken_0x1f2148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F214Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2148u;
        // 0x1f214c: 0x262502c0  addiu       $a1, $s1, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2148) {
            ctx->pc = 0x1F2730u;
            goto label_1f2730;
        }
    }
    ctx->pc = 0x1F2150u;
label_1f2150:
    // 0x1f2150: 0xc08fcf0  jal         func_23F3C0
label_1f2154:
    if (ctx->pc == 0x1F2154u) {
        ctx->pc = 0x1F2154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2150u;
        // 0x1f2154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2158u;
        goto label_1f2158;
    }
    ctx->pc = 0x1F2150u;
    SET_GPR_U32(ctx, 31, 0x1F2158u);
    ctx->pc = 0x1F2154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2150u;
    // 0x1f2154: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F2150u, 0x1F2158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2158u;
label_1f2158:
    // 0x1f2158: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f2158u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f215c:
    // 0x1f215c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f215cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2160:
    // 0x1f2160: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1f2164:
    if (ctx->pc == 0x1F2164u) {
        ctx->pc = 0x1F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2160u;
        // 0x1f2164: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2168u;
        goto label_1f2168;
    }
    ctx->pc = 0x1F2160u;
    {
        const bool branch_taken_0x1f2160 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2160u;
        // 0x1f2164: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2160) {
            ctx->pc = 0x1F2170u;
            goto label_1f2170;
        }
    }
    ctx->pc = 0x1F2168u;
label_1f2168:
    // 0x1f2168: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f216c:
    if (ctx->pc == 0x1F216Cu) {
        ctx->pc = 0x1F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2168u;
        // 0x1f216c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2170u;
        goto label_1f2170;
    }
    ctx->pc = 0x1F2168u;
    {
        const bool branch_taken_0x1f2168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F216Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2168u;
        // 0x1f216c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2168) {
            ctx->pc = 0x1F2178u;
            goto label_1f2178;
        }
    }
    ctx->pc = 0x1F2170u;
label_1f2170:
    // 0x1f2170: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f2170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f2174:
    // 0x1f2174: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1f2174u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f2178:
    // 0x1f2178: 0x52400017  beql        $s2, $zero, . + 4 + (0x17 << 2)
label_1f217c:
    if (ctx->pc == 0x1F217Cu) {
        ctx->pc = 0x1F217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2178u;
        // 0x1f217c: 0x8e2502c0  lw          $a1, 0x2C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2180u;
        goto label_1f2180;
    }
    ctx->pc = 0x1F2178u;
    {
        const bool branch_taken_0x1f2178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2178) {
            ctx->pc = 0x1F217Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2178u;
            // 0x1f217c: 0x8e2502c0  lw          $a1, 0x2C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F21D8u;
            goto label_1f21d8;
        }
    }
    ctx->pc = 0x1F2180u;
label_1f2180:
    // 0x1f2180: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f2180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f2184:
    // 0x1f2184: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1f2184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1f2188:
    // 0x1f2188: 0x40f809  jalr        $v0
label_1f218c:
    if (ctx->pc == 0x1F218Cu) {
        ctx->pc = 0x1F218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2188u;
        // 0x1f218c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2190u;
        goto label_1f2190;
    }
    ctx->pc = 0x1F2188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2190u);
        ctx->pc = 0x1F218Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2188u;
        // 0x1f218c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2188u, 0x1F2190u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2190u;
label_1f2190:
    // 0x1f2190: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_1f2194:
    if (ctx->pc == 0x1F2194u) {
        ctx->pc = 0x1F2194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2190u;
        // 0x1f2194: 0x8e2502c0  lw          $a1, 0x2C0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2198u;
        goto label_1f2198;
    }
    ctx->pc = 0x1F2190u;
    {
        const bool branch_taken_0x1f2190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2190) {
            ctx->pc = 0x1F2194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2190u;
            // 0x1f2194: 0x8e2502c0  lw          $a1, 0x2C0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 704)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F21D8u;
            goto label_1f21d8;
        }
    }
    ctx->pc = 0x1F2198u;
label_1f2198:
    // 0x1f2198: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f2198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f219c:
    // 0x1f219c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f219cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1f21a0:
    // 0x1f21a0: 0x40f809  jalr        $v0
label_1f21a4:
    if (ctx->pc == 0x1F21A4u) {
        ctx->pc = 0x1F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A0u;
        // 0x1f21a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21A8u;
        goto label_1f21a8;
    }
    ctx->pc = 0x1F21A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F21A8u);
        ctx->pc = 0x1F21A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A0u;
        // 0x1f21a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F21A0u, 0x1F21A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F21A8u;
label_1f21a8:
    // 0x1f21a8: 0x12200158  beqz        $s1, . + 4 + (0x158 << 2)
label_1f21ac:
    if (ctx->pc == 0x1F21ACu) {
        ctx->pc = 0x1F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A8u;
        // 0x1f21ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21B0u;
        goto label_1f21b0;
    }
    ctx->pc = 0x1F21A8u;
    {
        const bool branch_taken_0x1f21a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21A8u;
        // 0x1f21ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21a8) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F21B0u;
label_1f21b0:
    // 0x1f21b0: 0xc08fcf0  jal         func_23F3C0
label_1f21b4:
    if (ctx->pc == 0x1F21B4u) {
        ctx->pc = 0x1F21B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21B0u;
        // 0x1f21b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21B8u;
        goto label_1f21b8;
    }
    ctx->pc = 0x1F21B0u;
    SET_GPR_U32(ctx, 31, 0x1F21B8u);
    ctx->pc = 0x1F21B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21B0u;
    // 0x1f21b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F21B0u, 0x1F21B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21B8u;
label_1f21b8:
    // 0x1f21b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f21b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f21bc:
    // 0x1f21bc: 0xc081e8e  jal         func_207A38
label_1f21c0:
    if (ctx->pc == 0x1F21C0u) {
        ctx->pc = 0x1F21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21BCu;
        // 0x1f21c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21C4u;
        goto label_1f21c4;
    }
    ctx->pc = 0x1F21BCu;
    SET_GPR_U32(ctx, 31, 0x1F21C4u);
    ctx->pc = 0x1F21C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21BCu;
    // 0x1f21c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F21BCu, 0x1F21C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21C4u;
label_1f21c4:
    // 0x1f21c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f21c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f21c8:
    // 0x1f21c8: 0xc08fcf2  jal         func_23F3C8
label_1f21cc:
    if (ctx->pc == 0x1F21CCu) {
        ctx->pc = 0x1F21CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21C8u;
        // 0x1f21cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21D0u;
        goto label_1f21d0;
    }
    ctx->pc = 0x1F21C8u;
    SET_GPR_U32(ctx, 31, 0x1F21D0u);
    ctx->pc = 0x1F21CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21C8u;
    // 0x1f21cc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F21C8u, 0x1F21D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21D0u;
label_1f21d0:
    // 0x1f21d0: 0x1000014e  b           . + 4 + (0x14E << 2)
label_1f21d4:
    if (ctx->pc == 0x1F21D4u) {
        ctx->pc = 0x1F21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D0u;
        // 0x1f21d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21D8u;
        goto label_1f21d8;
    }
    ctx->pc = 0x1F21D0u;
    {
        const bool branch_taken_0x1f21d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D0u;
        // 0x1f21d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21d0) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F21D8u;
label_1f21d8:
    // 0x1f21d8: 0xc07e666  jal         func_1F9998
label_1f21dc:
    if (ctx->pc == 0x1F21DCu) {
        ctx->pc = 0x1F21DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D8u;
        // 0x1f21dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21E0u;
        goto label_1f21e0;
    }
    ctx->pc = 0x1F21D8u;
    SET_GPR_U32(ctx, 31, 0x1F21E0u);
    ctx->pc = 0x1F21DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21D8u;
    // 0x1f21dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F21D8u, 0x1F21E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21E0u;
label_1f21e0:
    // 0x1f21e0: 0x504001c4  beql        $v0, $zero, . + 4 + (0x1C4 << 2)
label_1f21e4:
    if (ctx->pc == 0x1F21E4u) {
        ctx->pc = 0x1F21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21E0u;
        // 0x1f21e4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21E8u;
        goto label_1f21e8;
    }
    ctx->pc = 0x1F21E0u;
    {
        const bool branch_taken_0x1f21e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f21e0) {
            ctx->pc = 0x1F21E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21E0u;
            // 0x1f21e4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F21E8u;
label_1f21e8:
    // 0x1f21e8: 0x8e2502c4  lw          $a1, 0x2C4($s1)
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 708)));
label_1f21ec:
    // 0x1f21ec: 0xc07e666  jal         func_1F9998
label_1f21f0:
    if (ctx->pc == 0x1F21F0u) {
        ctx->pc = 0x1F21F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21ECu;
        // 0x1f21f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21F4u;
        goto label_1f21f4;
    }
    ctx->pc = 0x1F21ECu;
    SET_GPR_U32(ctx, 31, 0x1F21F4u);
    ctx->pc = 0x1F21F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F21ECu;
    // 0x1f21f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F21ECu, 0x1F21F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F21F4u;
label_1f21f4:
    // 0x1f21f4: 0x504001bf  beql        $v0, $zero, . + 4 + (0x1BF << 2)
label_1f21f8:
    if (ctx->pc == 0x1F21F8u) {
        ctx->pc = 0x1F21F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21F4u;
        // 0x1f21f8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F21FCu;
        goto label_1f21fc;
    }
    ctx->pc = 0x1F21F4u;
    {
        const bool branch_taken_0x1f21f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f21f4) {
            ctx->pc = 0x1F21F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21F4u;
            // 0x1f21f8: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F21FCu;
label_1f21fc:
    // 0x1f21fc: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
label_1f2200:
    if (ctx->pc == 0x1F2200u) {
        ctx->pc = 0x1F2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21FCu;
        // 0x1f2200: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2204u;
        goto label_1f2204;
    }
    ctx->pc = 0x1F21FCu;
    {
        const bool branch_taken_0x1f21fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21FCu;
        // 0x1f2200: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21fc) {
            ctx->pc = 0x1F2298u;
            goto label_1f2298;
        }
    }
    ctx->pc = 0x1F2204u;
label_1f2204:
    // 0x1f2204: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1f2204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f2208:
    // 0x1f2208: 0xae3002cc  sw          $s0, 0x2CC($s1)
    ctx->pc = 0x1f2208u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 16));
label_1f220c:
    // 0x1f220c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f220cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2210:
    // 0x1f2210: 0xa62202b8  sh          $v0, 0x2B8($s1)
    ctx->pc = 0x1f2210u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 696), (uint16_t)GPR_U32(ctx, 2));
label_1f2214:
    // 0x1f2214: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f2214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f2218:
    // 0x1f2218: 0xc07e654  jal         func_1F9950
label_1f221c:
    if (ctx->pc == 0x1F221Cu) {
        ctx->pc = 0x1F221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2218u;
        // 0x1f221c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2220u;
        goto label_1f2220;
    }
    ctx->pc = 0x1F2218u;
    SET_GPR_U32(ctx, 31, 0x1F2220u);
    ctx->pc = 0x1F221Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2218u;
    // 0x1f221c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2218u, 0x1F2220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2220u;
label_1f2220:
    // 0x1f2220: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2224:
    // 0x1f2224: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x1f2224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1f2228:
    // 0x1f2228: 0xc07e654  jal         func_1F9950
label_1f222c:
    if (ctx->pc == 0x1F222Cu) {
        ctx->pc = 0x1F222Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2228u;
        // 0x1f222c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2230u;
        goto label_1f2230;
    }
    ctx->pc = 0x1F2228u;
    SET_GPR_U32(ctx, 31, 0x1F2230u);
    ctx->pc = 0x1F222Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2228u;
    // 0x1f222c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2228u, 0x1F2230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2230u;
label_1f2230:
    // 0x1f2230: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2234:
    // 0x1f2234: 0x262502c4  addiu       $a1, $s1, 0x2C4
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_1f2238:
    // 0x1f2238: 0xc07e654  jal         func_1F9950
label_1f223c:
    if (ctx->pc == 0x1F223Cu) {
        ctx->pc = 0x1F223Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2238u;
        // 0x1f223c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2240u;
        goto label_1f2240;
    }
    ctx->pc = 0x1F2238u;
    SET_GPR_U32(ctx, 31, 0x1F2240u);
    ctx->pc = 0x1F223Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2238u;
    // 0x1f223c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2238u, 0x1F2240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2240u;
label_1f2240:
    // 0x1f2240: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2244:
    // 0x1f2244: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f2244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
label_1f2248:
    // 0x1f2248: 0xc07e654  jal         func_1F9950
label_1f224c:
    if (ctx->pc == 0x1F224Cu) {
        ctx->pc = 0x1F224Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2248u;
        // 0x1f224c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2250u;
        goto label_1f2250;
    }
    ctx->pc = 0x1F2248u;
    SET_GPR_U32(ctx, 31, 0x1F2250u);
    ctx->pc = 0x1F224Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2248u;
    // 0x1f224c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2248u, 0x1F2250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2250u;
label_1f2250:
    // 0x1f2250: 0xc08fcf0  jal         func_23F3C0
label_1f2254:
    if (ctx->pc == 0x1F2254u) {
        ctx->pc = 0x1F2254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2250u;
        // 0x1f2254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2258u;
        goto label_1f2258;
    }
    ctx->pc = 0x1F2250u;
    SET_GPR_U32(ctx, 31, 0x1F2258u);
    ctx->pc = 0x1F2254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2250u;
    // 0x1f2254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F2250u, 0x1F2258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2258u;
label_1f2258:
    // 0x1f2258: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
label_1f225c:
    if (ctx->pc == 0x1F225Cu) {
        ctx->pc = 0x1F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2258u;
        // 0x1f225c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2260u;
        goto label_1f2260;
    }
    ctx->pc = 0x1F2258u;
    {
        const bool branch_taken_0x1f2258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1F225Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2258u;
        // 0x1f225c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2258) {
            ctx->pc = 0x1F2268u;
            goto label_1f2268;
        }
    }
    ctx->pc = 0x1F2260u;
label_1f2260:
    // 0x1f2260: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f2264:
    if (ctx->pc == 0x1F2264u) {
        ctx->pc = 0x1F2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2260u;
        // 0x1f2264: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2268u;
        goto label_1f2268;
    }
    ctx->pc = 0x1F2260u;
    {
        const bool branch_taken_0x1f2260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2260u;
        // 0x1f2264: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2260) {
            ctx->pc = 0x1F2270u;
            goto label_1f2270;
        }
    }
    ctx->pc = 0x1F2268u;
label_1f2268:
    // 0x1f2268: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f2268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f226c:
    // 0x1f226c: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1f226cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f2270:
    // 0x1f2270: 0x124001a0  beqz        $s2, . + 4 + (0x1A0 << 2)
label_1f2274:
    if (ctx->pc == 0x1F2274u) {
        ctx->pc = 0x1F2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2270u;
        // 0x1f2274: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2278u;
        goto label_1f2278;
    }
    ctx->pc = 0x1F2270u;
    {
        const bool branch_taken_0x1f2270 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2270u;
        // 0x1f2274: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2270) {
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F2278u;
label_1f2278:
    // 0x1f2278: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f2278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f227c:
    // 0x1f227c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f227cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1f2280:
    // 0x1f2280: 0x40f809  jalr        $v0
label_1f2284:
    if (ctx->pc == 0x1F2284u) {
        ctx->pc = 0x1F2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2280u;
        // 0x1f2284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2288u;
        goto label_1f2288;
    }
    ctx->pc = 0x1F2280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2288u);
        ctx->pc = 0x1F2284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2280u;
        // 0x1f2284: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2280u, 0x1F2288u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2288u;
label_1f2288:
    // 0x1f2288: 0x1220019a  beqz        $s1, . + 4 + (0x19A << 2)
label_1f228c:
    if (ctx->pc == 0x1F228Cu) {
        ctx->pc = 0x1F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2288u;
        // 0x1f228c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2290u;
        goto label_1f2290;
    }
    ctx->pc = 0x1F2288u;
    {
        const bool branch_taken_0x1f2288 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2288u;
        // 0x1f228c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2288) {
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F2290u;
label_1f2290:
    // 0x1f2290: 0x1000015c  b           . + 4 + (0x15C << 2)
label_1f2294:
    if (ctx->pc == 0x1F2294u) {
        ctx->pc = 0x1F2298u;
        goto label_1f2298;
    }
    ctx->pc = 0x1F2290u;
    {
        const bool branch_taken_0x1f2290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2290) {
            ctx->pc = 0x1F2804u;
            goto label_1f2804;
        }
    }
    ctx->pc = 0x1F2298u;
label_1f2298:
    // 0x1f2298: 0x962302b8  lhu         $v1, 0x2B8($s1)
    ctx->pc = 0x1f2298u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
label_1f229c:
    // 0x1f229c: 0x24020059  addiu       $v0, $zero, 0x59
    ctx->pc = 0x1f229cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
label_1f22a0:
    // 0x1f22a0: 0x5462001d  bnel        $v1, $v0, . + 4 + (0x1D << 2)
label_1f22a4:
    if (ctx->pc == 0x1F22A4u) {
        ctx->pc = 0x1F22A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A0u;
        // 0x1f22a4: 0x962502b8  lhu         $a1, 0x2B8($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22A8u;
        goto label_1f22a8;
    }
    ctx->pc = 0x1F22A0u;
    {
        const bool branch_taken_0x1f22a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f22a0) {
            ctx->pc = 0x1F22A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F22A0u;
            // 0x1f22a4: 0x962502b8  lhu         $a1, 0x2B8($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2318u;
            goto label_1f2318;
        }
    }
    ctx->pc = 0x1F22A8u;
label_1f22a8:
    // 0x1f22a8: 0xc08fcf0  jal         func_23F3C0
label_1f22ac:
    if (ctx->pc == 0x1F22ACu) {
        ctx->pc = 0x1F22ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22A8u;
        // 0x1f22ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22B0u;
        goto label_1f22b0;
    }
    ctx->pc = 0x1F22A8u;
    SET_GPR_U32(ctx, 31, 0x1F22B0u);
    ctx->pc = 0x1F22ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22A8u;
    // 0x1f22ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F22A8u, 0x1F22B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22B0u;
label_1f22b0:
    // 0x1f22b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f22b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f22b4:
    // 0x1f22b4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f22b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f22b8:
    // 0x1f22b8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1f22bc:
    if (ctx->pc == 0x1F22BCu) {
        ctx->pc = 0x1F22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22B8u;
        // 0x1f22bc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22C0u;
        goto label_1f22c0;
    }
    ctx->pc = 0x1F22B8u;
    {
        const bool branch_taken_0x1f22b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F22BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22B8u;
        // 0x1f22bc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22b8) {
            ctx->pc = 0x1F22C8u;
            goto label_1f22c8;
        }
    }
    ctx->pc = 0x1F22C0u;
label_1f22c0:
    // 0x1f22c0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f22c4:
    if (ctx->pc == 0x1F22C4u) {
        ctx->pc = 0x1F22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22C0u;
        // 0x1f22c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22C8u;
        goto label_1f22c8;
    }
    ctx->pc = 0x1F22C0u;
    {
        const bool branch_taken_0x1f22c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F22C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22C0u;
        // 0x1f22c4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22c0) {
            ctx->pc = 0x1F22D0u;
            goto label_1f22d0;
        }
    }
    ctx->pc = 0x1F22C8u;
label_1f22c8:
    // 0x1f22c8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f22c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f22cc:
    // 0x1f22cc: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1f22ccu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f22d0:
    // 0x1f22d0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1f22d4:
    if (ctx->pc == 0x1F22D4u) {
        ctx->pc = 0x1F22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22D0u;
        // 0x1f22d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22D8u;
        goto label_1f22d8;
    }
    ctx->pc = 0x1F22D0u;
    {
        const bool branch_taken_0x1f22d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F22D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22D0u;
        // 0x1f22d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f22d0) {
            ctx->pc = 0x1F2304u;
            goto label_1f2304;
        }
    }
    ctx->pc = 0x1F22D8u;
label_1f22d8:
    // 0x1f22d8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f22d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f22dc:
    // 0x1f22dc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1f22e0:
    // 0x1f22e0: 0x40f809  jalr        $v0
label_1f22e4:
    if (ctx->pc == 0x1F22E4u) {
        ctx->pc = 0x1F22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22E0u;
        // 0x1f22e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22E8u;
        goto label_1f22e8;
    }
    ctx->pc = 0x1F22E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F22E8u);
        ctx->pc = 0x1F22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22E0u;
        // 0x1f22e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F22E0u, 0x1F22E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F22E8u;
label_1f22e8:
    // 0x1f22e8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f22e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f22ec:
    // 0x1f22ec: 0xc081e8e  jal         func_207A38
label_1f22f0:
    if (ctx->pc == 0x1F22F0u) {
        ctx->pc = 0x1F22F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22ECu;
        // 0x1f22f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F22F4u;
        goto label_1f22f4;
    }
    ctx->pc = 0x1F22ECu;
    SET_GPR_U32(ctx, 31, 0x1F22F4u);
    ctx->pc = 0x1F22F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22ECu;
    // 0x1f22f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F22ECu, 0x1F22F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F22F4u;
label_1f22f4:
    // 0x1f22f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f22f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f22f8:
    // 0x1f22f8: 0xc08fcf2  jal         func_23F3C8
label_1f22fc:
    if (ctx->pc == 0x1F22FCu) {
        ctx->pc = 0x1F22FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F22F8u;
        // 0x1f22fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2300u;
        goto label_1f2300;
    }
    ctx->pc = 0x1F22F8u;
    SET_GPR_U32(ctx, 31, 0x1F2300u);
    ctx->pc = 0x1F22FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F22F8u;
    // 0x1f22fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F22F8u, 0x1F2300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2300u;
label_1f2300:
    // 0x1f2300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2304:
    // 0x1f2304: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f2304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f2308:
    // 0x1f2308: 0xc07e654  jal         func_1F9950
label_1f230c:
    if (ctx->pc == 0x1F230Cu) {
        ctx->pc = 0x1F230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2308u;
        // 0x1f230c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2310u;
        goto label_1f2310;
    }
    ctx->pc = 0x1F2308u;
    SET_GPR_U32(ctx, 31, 0x1F2310u);
    ctx->pc = 0x1F230Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2308u;
    // 0x1f230c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2308u, 0x1F2310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2310u;
label_1f2310:
    // 0x1f2310: 0x100000fe  b           . + 4 + (0xFE << 2)
label_1f2314:
    if (ctx->pc == 0x1F2314u) {
        ctx->pc = 0x1F2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2310u;
        // 0x1f2314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2318u;
        goto label_1f2318;
    }
    ctx->pc = 0x1F2310u;
    {
        const bool branch_taken_0x1f2310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2310u;
        // 0x1f2314: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2310) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F2318u;
label_1f2318:
    // 0x1f2318: 0xc07d708  jal         func_1F5C20
label_1f231c:
    if (ctx->pc == 0x1F231Cu) {
        ctx->pc = 0x1F231Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2318u;
        // 0x1f231c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2320u;
        goto label_1f2320;
    }
    ctx->pc = 0x1F2318u;
    SET_GPR_U32(ctx, 31, 0x1F2320u);
    ctx->pc = 0x1F231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2318u;
    // 0x1f231c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C20u, 0x1F2318u, 0x1F2320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2320u;
label_1f2320:
    // 0x1f2320: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1f2320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1f2324:
    // 0x1f2324: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1f2328:
    if (ctx->pc == 0x1F2328u) {
        ctx->pc = 0x1F2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2324u;
        // 0x1f2328: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F232Cu;
        goto label_1f232c;
    }
    ctx->pc = 0x1F2324u;
    {
        const bool branch_taken_0x1f2324 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2324u;
        // 0x1f2328: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2324) {
            ctx->pc = 0x1F237Cu;
            goto label_1f237c;
        }
    }
    ctx->pc = 0x1F232Cu;
label_1f232c:
    // 0x1f232c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f232cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2330:
    // 0x1f2330: 0xc07bc7e  jal         func_1EF1F8
label_1f2334:
    if (ctx->pc == 0x1F2334u) {
        ctx->pc = 0x1F2334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2330u;
        // 0x1f2334: 0x26650130  addiu       $a1, $s3, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2338u;
        goto label_1f2338;
    }
    ctx->pc = 0x1F2330u;
    SET_GPR_U32(ctx, 31, 0x1F2338u);
    ctx->pc = 0x1F2334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2330u;
    // 0x1f2334: 0x26650130  addiu       $a1, $s3, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1F2330u, 0x1F2338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2338u;
label_1f2338:
    // 0x1f2338: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1f2338u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_1f233c:
    // 0x1f233c: 0x4615a802  mul.s       $f0, $f21, $f21
    ctx->pc = 0x1f233cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[21]);
label_1f2340:
    // 0x1f2340: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1f2340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2344:
    // 0x1f2344: 0x0  nop
    ctx->pc = 0x1f2344u;
    // NOP
label_1f2348:
    // 0x1f2348: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1f234c:
    if (ctx->pc == 0x1F234Cu) {
        ctx->pc = 0x1F234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2348u;
        // 0x1f234c: 0xe6ac0000  swc1        $f12, 0x0($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2350u;
        goto label_1f2350;
    }
    ctx->pc = 0x1F2348u;
    {
        const bool branch_taken_0x1f2348 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F234Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2348u;
        // 0x1f234c: 0xe6ac0000  swc1        $f12, 0x0($s5) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2348) {
            ctx->pc = 0x1F2364u;
            goto label_1f2364;
        }
    }
    ctx->pc = 0x1F2350u;
label_1f2350:
    // 0x1f2350: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f2350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f2354:
    // 0x1f2354: 0xc07bc8c  jal         func_1EF230
label_1f2358:
    if (ctx->pc == 0x1F2358u) {
        ctx->pc = 0x1F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2354u;
        // 0x1f2358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F235Cu;
        goto label_1f235c;
    }
    ctx->pc = 0x1F2354u;
    SET_GPR_U32(ctx, 31, 0x1F235Cu);
    ctx->pc = 0x1F2358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2354u;
    // 0x1f2358: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF230u, 0x1F2354u, 0x1F235Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F235Cu;
label_1f235c:
    // 0x1f235c: 0x10000012  b           . + 4 + (0x12 << 2)
label_1f2360:
    if (ctx->pc == 0x1F2360u) {
        ctx->pc = 0x1F2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F235Cu;
        // 0x1f2360: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2364u;
        goto label_1f2364;
    }
    ctx->pc = 0x1F235Cu;
    {
        const bool branch_taken_0x1f235c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F235Cu;
        // 0x1f2360: 0x8e240104  lw          $a0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f235c) {
            ctx->pc = 0x1F23A8u;
            goto label_1f23a8;
        }
    }
    ctx->pc = 0x1F2364u;
label_1f2364:
    // 0x1f2364: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1f2364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1f2368:
    // 0x1f2368: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f236c:
    // 0x1f236c: 0xa62202b8  sh          $v0, 0x2B8($s1)
    ctx->pc = 0x1f236cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 696), (uint16_t)GPR_U32(ctx, 2));
label_1f2370:
    // 0x1f2370: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2374:
    // 0x1f2374: 0x100000e5  b           . + 4 + (0xE5 << 2)
label_1f2378:
    if (ctx->pc == 0x1F2378u) {
        ctx->pc = 0x1F2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2374u;
        // 0x1f2378: 0xae2302cc  sw          $v1, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F237Cu;
        goto label_1f237c;
    }
    ctx->pc = 0x1F2374u;
    {
        const bool branch_taken_0x1f2374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2374u;
        // 0x1f2378: 0xae2302cc  sw          $v1, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2374) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F237Cu;
label_1f237c:
    // 0x1f237c: 0xc6600110  lwc1        $f0, 0x110($s3)
    ctx->pc = 0x1f237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2380:
    // 0x1f2380: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1f2380u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f2384:
    // 0x1f2384: 0x0  nop
    ctx->pc = 0x1f2384u;
    // NOP
label_1f2388:
    // 0x1f2388: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_1f238c:
    if (ctx->pc == 0x1F238Cu) {
        ctx->pc = 0x1F238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2388u;
        // 0x1f238c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2390u;
        goto label_1f2390;
    }
    ctx->pc = 0x1F2388u;
    {
        const bool branch_taken_0x1f2388 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2388u;
        // 0x1f238c: 0x24020064  addiu       $v0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2388) {
            ctx->pc = 0x1F23A4u;
            goto label_1f23a4;
        }
    }
    ctx->pc = 0x1F2390u;
label_1f2390:
    // 0x1f2390: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1f2390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2394:
    // 0x1f2394: 0xa62202b8  sh          $v0, 0x2B8($s1)
    ctx->pc = 0x1f2394u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 696), (uint16_t)GPR_U32(ctx, 2));
label_1f2398:
    // 0x1f2398: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f239c:
    // 0x1f239c: 0x100000db  b           . + 4 + (0xDB << 2)
label_1f23a0:
    if (ctx->pc == 0x1F23A0u) {
        ctx->pc = 0x1F23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F239Cu;
        // 0x1f23a0: 0xae2302cc  sw          $v1, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F23A4u;
        goto label_1f23a4;
    }
    ctx->pc = 0x1F239Cu;
    {
        const bool branch_taken_0x1f239c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F23A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F239Cu;
        // 0x1f23a0: 0xae2302cc  sw          $v1, 0x2CC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 716), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f239c) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F23A4u;
label_1f23a4:
    // 0x1f23a4: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x1f23a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1f23a8:
    // 0x1f23a8: 0x266300d0  addiu       $v1, $s3, 0xD0
    ctx->pc = 0x1f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 208));
label_1f23ac:
    // 0x1f23ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f23acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f23b0:
    // 0x1f23b0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_1f23b4:
    // 0x1f23b4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f23b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1f23b8:
    // 0x1f23b8: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1f23b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1f23bc:
    // 0x1f23bc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1f23bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1f23c0:
    // 0x1f23c0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f23c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f23c4:
    // 0x1f23c4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1f23c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f23c8:
    // 0x1f23c8: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x1f23c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1f23cc:
    // 0x1f23cc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1f23ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f23d0:
    // 0x1f23d0: 0xc7a2001c  lwc1        $f2, 0x1C($sp)
    ctx->pc = 0x1f23d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f23d4:
    // 0x1f23d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1f23d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1f23d8:
    // 0x1f23d8: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x1f23d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1f23dc:
    // 0x1f23dc: 0xe7a2000c  swc1        $f2, 0xC($sp)
    ctx->pc = 0x1f23dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1f23e0:
    // 0x1f23e0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1f23e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1f23e4:
    // 0x1f23e4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f23e4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1f23e8:
    // 0x1f23e8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f23e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f23ec:
    // 0x1f23ec: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f23ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f23f0:
    // 0x1f23f0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f23f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f23f4:
    // 0x1f23f4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f23f4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1f23f8:
    // 0x1f23f8: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f23f8u;
    // VWAITQ (Q already resolved in this runtime)
label_1f23fc:
    // 0x1f23fc: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f23fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1f2400:
    // 0x1f2400: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1f2400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f2404:
    // 0x1f2404: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1f2404u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1f2408:
    // 0x1f2408: 0xc0f70ce  jal         func_3DC338
label_1f240c:
    if (ctx->pc == 0x1F240Cu) {
        ctx->pc = 0x1F240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2408u;
        // 0x1f240c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2410u;
        goto label_1f2410;
    }
    ctx->pc = 0x1F2408u;
    SET_GPR_U32(ctx, 31, 0x1F2410u);
    ctx->pc = 0x1F240Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2408u;
    // 0x1f240c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1F2408u, 0x1F2410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2410u;
label_1f2410:
    // 0x1f2410: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1f2414:
    if (ctx->pc == 0x1F2414u) {
        ctx->pc = 0x1F2414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2410u;
        // 0x1f2414: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2418u;
        goto label_1f2418;
    }
    ctx->pc = 0x1F2410u;
    {
        const bool branch_taken_0x1f2410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2410) {
            ctx->pc = 0x1F2414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2410u;
            // 0x1f2414: 0xc60100a0  lwc1        $f1, 0xA0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2424u;
            goto label_1f2424;
        }
    }
    ctx->pc = 0x1F2418u;
label_1f2418:
    // 0x1f2418: 0xc0c4900  jal         func_312400
label_1f241c:
    if (ctx->pc == 0x1F241Cu) {
        ctx->pc = 0x1F241Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2418u;
        // 0x1f241c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2420u;
        goto label_1f2420;
    }
    ctx->pc = 0x1F2418u;
    SET_GPR_U32(ctx, 31, 0x1F2420u);
    ctx->pc = 0x1F241Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2418u;
    // 0x1f241c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1F2418u, 0x1F2420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2420u;
label_1f2420:
    // 0x1f2420: 0xc60100a0  lwc1        $f1, 0xA0($s0)
    ctx->pc = 0x1f2420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2424:
    // 0x1f2424: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_1f2428:
    // 0x1f2428: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1f2428u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1f242c:
    // 0x1f242c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1f242cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2430:
    // 0x1f2430: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x1f2430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1f2434:
    // 0x1f2434: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1f2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f2438:
    // 0x1f2438: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1f2438u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1f243c:
    // 0x1f243c: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1f243cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2440:
    // 0x1f2440: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1f2440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1f2444:
    // 0x1f2444: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x1f2444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_1f2448:
    // 0x1f2448: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1f2448u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_1f244c:
    // 0x1f244c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1f244cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f2450:
    // 0x1f2450: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1f2450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f2454:
    // 0x1f2454: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1f2454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_1f2458:
    // 0x1f2458: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1f2458u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_1f245c:
    // 0x1f245c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f245cu;
    // VWAITQ (Q already resolved in this runtime)
label_1f2460:
    // 0x1f2460: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1f2460u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1f2464:
    // 0x1f2464: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1f2464u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1f2468:
    // 0x1f2468: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1f2468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f246c:
    // 0x1f246c: 0xc6430000  lwc1        $f3, 0x0($s2)
    ctx->pc = 0x1f246cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2470:
    // 0x1f2470: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1f2470u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1f2474:
    // 0x1f2474: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1f2474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2478:
    // 0x1f2478: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x1f2478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f247c:
    // 0x1f247c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1f247cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_1f2480:
    // 0x1f2480: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1f2480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1f2484:
    // 0x1f2484: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x1f2484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1f2488:
    // 0x1f2488: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x1f2488u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_1f248c:
    // 0x1f248c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x1f248cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_1f2490:
    // 0x1f2490: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f2490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1f2494:
    // 0x1f2494: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f2494u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2498:
    // 0x1f2498: 0x26700130  addiu       $s0, $s3, 0x130
    ctx->pc = 0x1f2498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 304));
label_1f249c:
    // 0x1f249c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1f249cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_1f24a0:
    // 0x1f24a0: 0x0  nop
    ctx->pc = 0x1f24a0u;
    // NOP
label_1f24a4:
    // 0x1f24a4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1f24a4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_1f24a8:
    // 0x1f24a8: 0xc0e404c  jal         func_390130
label_1f24ac:
    if (ctx->pc == 0x1F24ACu) {
        ctx->pc = 0x1F24ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24A8u;
        // 0x1f24ac: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24B0u;
        goto label_1f24b0;
    }
    ctx->pc = 0x1F24A8u;
    SET_GPR_U32(ctx, 31, 0x1F24B0u);
    ctx->pc = 0x1F24ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24A8u;
    // 0x1f24ac: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1F24A8u, 0x1F24B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24B0u;
label_1f24b0:
    // 0x1f24b0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1f24b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1f24b4:
    // 0x1f24b4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1f24b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1f24b8:
    // 0x1f24b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f24b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f24bc:
    // 0x1f24bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f24bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f24c0:
    // 0x1f24c0: 0x962502b8  lhu         $a1, 0x2B8($s1)
    ctx->pc = 0x1f24c0u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
label_1f24c4:
    // 0x1f24c4: 0xc07d716  jal         func_1F5C58
label_1f24c8:
    if (ctx->pc == 0x1F24C8u) {
        ctx->pc = 0x1F24C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24C4u;
        // 0x1f24c8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24CCu;
        goto label_1f24cc;
    }
    ctx->pc = 0x1F24C4u;
    SET_GPR_U32(ctx, 31, 0x1F24CCu);
    ctx->pc = 0x1F24C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24C4u;
    // 0x1f24c8: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5C58u, 0x1F24C4u, 0x1F24CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24CCu;
label_1f24cc:
    // 0x1f24cc: 0xc66d0110  lwc1        $f13, 0x110($s3)
    ctx->pc = 0x1f24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1f24d0:
    // 0x1f24d0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f24d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f24d4:
    // 0x1f24d4: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1f24d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1f24d8:
    // 0x1f24d8: 0xc07dc70  jal         func_1F71C0
label_1f24dc:
    if (ctx->pc == 0x1F24DCu) {
        ctx->pc = 0x1F24DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24D8u;
        // 0x1f24dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24E0u;
        goto label_1f24e0;
    }
    ctx->pc = 0x1F24D8u;
    SET_GPR_U32(ctx, 31, 0x1F24E0u);
    ctx->pc = 0x1F24DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24D8u;
    // 0x1f24dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x1F24D8u, 0x1F24E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24E0u;
label_1f24e0:
    // 0x1f24e0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1f24e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f24e4:
    // 0x1f24e4: 0xc077f36  jal         func_1DFCD8
label_1f24e8:
    if (ctx->pc == 0x1F24E8u) {
        ctx->pc = 0x1F24E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F24E4u;
        // 0x1f24e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F24ECu;
        goto label_1f24ec;
    }
    ctx->pc = 0x1F24E4u;
    SET_GPR_U32(ctx, 31, 0x1F24ECu);
    ctx->pc = 0x1F24E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F24E4u;
    // 0x1f24e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x1F24E4u, 0x1F24ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F24ECu;
label_1f24ec:
    // 0x1f24ec: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x1f24ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_1f24f0:
    // 0x1f24f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f24f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f24f4:
    // 0x1f24f4: 0x0  nop
    ctx->pc = 0x1f24f4u;
    // NOP
label_1f24f8:
    // 0x1f24f8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1f24f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1f24fc:
    // 0x1f24fc: 0x0  nop
    ctx->pc = 0x1f24fcu;
    // NOP
label_1f2500:
    // 0x1f2500: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_1f2504:
    if (ctx->pc == 0x1F2504u) {
        ctx->pc = 0x1F2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2500u;
        // 0x1f2504: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2508u;
        goto label_1f2508;
    }
    ctx->pc = 0x1F2500u;
    {
        const bool branch_taken_0x1f2500 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F2504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2500u;
        // 0x1f2504: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2500) {
            ctx->pc = 0x1F2518u;
            goto label_1f2518;
        }
    }
    ctx->pc = 0x1F2508u;
label_1f2508:
    // 0x1f2508: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f2508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1f250c:
    // 0x1f250c: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1f2510:
    // 0x1f2510: 0xc4401624  lwc1        $f0, 0x1624($v0)
    ctx->pc = 0x1f2510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f2514:
    // 0x1f2514: 0x4600ad42  mul.s       $f21, $f21, $f0
    ctx->pc = 0x1f2514u;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_1f2518:
    // 0x1f2518: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f251c:
    // 0x1f251c: 0xc08fcf4  jal         func_23F3D0
label_1f2520:
    if (ctx->pc == 0x1F2520u) {
        ctx->pc = 0x1F2520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F251Cu;
        // 0x1f2520: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2524u;
        goto label_1f2524;
    }
    ctx->pc = 0x1F251Cu;
    SET_GPR_U32(ctx, 31, 0x1F2524u);
    ctx->pc = 0x1F2520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F251Cu;
    // 0x1f2520: 0x3c100049  lui         $s0, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3D0u, 0x1F251Cu, 0x1F2524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2524u;
label_1f2524:
    // 0x1f2524: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1f2524u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1f2528:
    // 0x1f2528: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1f2528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_1f252c:
    // 0x1f252c: 0x26040480  addiu       $a0, $s0, 0x480
    ctx->pc = 0x1f252cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1152));
label_1f2530:
    // 0x1f2530: 0xc07e6e4  jal         func_1F9B90
label_1f2534:
    if (ctx->pc == 0x1F2534u) {
        ctx->pc = 0x1F2534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2530u;
        // 0x1f2534: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2538u;
        goto label_1f2538;
    }
    ctx->pc = 0x1F2530u;
    SET_GPR_U32(ctx, 31, 0x1F2538u);
    ctx->pc = 0x1F2534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2530u;
    // 0x1f2534: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B90u, 0x1F2530u, 0x1F2538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2538u;
label_1f2538:
    // 0x1f2538: 0xc7ac0060  lwc1        $f12, 0x60($sp)
    ctx->pc = 0x1f2538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1f253c:
    // 0x1f253c: 0xc08fcf6  jal         func_23F3D8
label_1f2540:
    if (ctx->pc == 0x1F2540u) {
        ctx->pc = 0x1F2540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F253Cu;
        // 0x1f2540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2544u;
        goto label_1f2544;
    }
    ctx->pc = 0x1F253Cu;
    SET_GPR_U32(ctx, 31, 0x1F2544u);
    ctx->pc = 0x1F2540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F253Cu;
    // 0x1f2540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3D8u, 0x1F253Cu, 0x1F2544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2544u;
label_1f2544:
    // 0x1f2544: 0x962302b8  lhu         $v1, 0x2B8($s1)
    ctx->pc = 0x1f2544u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 696)));
label_1f2548:
    // 0x1f2548: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1f2548u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f254c:
    // 0x1f254c: 0x0  nop
    ctx->pc = 0x1f254cu;
    // NOP
label_1f2550:
    // 0x1f2550: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2550u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f2554:
    // 0x1f2554: 0x24040021  addiu       $a0, $zero, 0x21
    ctx->pc = 0x1f2554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1f2558:
    // 0x1f2558: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x1f2558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f255c:
    // 0x1f255c: 0x2474ffd9  addiu       $s4, $v1, -0x27
    ctx->pc = 0x1f255cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967257));
label_1f2560:
    // 0x1f2560: 0x3a820022  xori        $v0, $s4, 0x22
    ctx->pc = 0x1f2560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) ^ (uint64_t)(uint16_t)34);
label_1f2564:
    // 0x1f2564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f2564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1f2568:
    // 0x1f2568: 0x82a00a  movz        $s4, $a0, $v0
    ctx->pc = 0x1f2568u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 4));
label_1f256c:
    // 0x1f256c: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x1f256cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
label_1f2570:
    // 0x1f2570: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1f2570u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1f2574:
    // 0x1f2574: 0x90753308  lbu         $s5, 0x3308($v1)
    ctx->pc = 0x1f2574u;
    SET_GPR_ZE32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 13064)));
label_1f2578:
    // 0x1f2578: 0x90423343  lbu         $v0, 0x3343($v0)
    ctx->pc = 0x1f2578u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 13123)));
label_1f257c:
    // 0x1f257c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f257cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f2580:
    // 0x1f2580: 0x441e0800  mfc1        $fp, $f1
    ctx->pc = 0x1f2580u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 30, bits); }
label_1f2584:
    // 0x1f2584: 0x16a00020  bnez        $s5, . + 4 + (0x20 << 2)
label_1f2588:
    if (ctx->pc == 0x1F2588u) {
        ctx->pc = 0x1F2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2584u;
        // 0x1f2588: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F258Cu;
        goto label_1f258c;
    }
    ctx->pc = 0x1F2584u;
    {
        const bool branch_taken_0x1f2584 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2584u;
        // 0x1f2588: 0xafa20068  sw          $v0, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2584) {
            ctx->pc = 0x1F2608u;
            goto label_1f2608;
        }
    }
    ctx->pc = 0x1F258Cu;
label_1f258c:
    // 0x1f258c: 0x92220fb1  lbu         $v0, 0xFB1($s1)
    ctx->pc = 0x1f258cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4017)));
label_1f2590:
    // 0x1f2590: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_1f2594:
    if (ctx->pc == 0x1F2594u) {
        ctx->pc = 0x1F2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2590u;
        // 0x1f2594: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2598u;
        goto label_1f2598;
    }
    ctx->pc = 0x1F2590u;
    {
        const bool branch_taken_0x1f2590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2590u;
        // 0x1f2594: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2590) {
            ctx->pc = 0x1F260Cu;
            goto label_1f260c;
        }
    }
    ctx->pc = 0x1F2598u;
label_1f2598:
    // 0x1f2598: 0xc08fcf0  jal         func_23F3C0
label_1f259c:
    if (ctx->pc == 0x1F259Cu) {
        ctx->pc = 0x1F259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2598u;
        // 0x1f259c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25A0u;
        goto label_1f25a0;
    }
    ctx->pc = 0x1F2598u;
    SET_GPR_U32(ctx, 31, 0x1F25A0u);
    ctx->pc = 0x1F259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2598u;
    // 0x1f259c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F2598u, 0x1F25A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25A0u;
label_1f25a0:
    // 0x1f25a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f25a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f25a4:
    // 0x1f25a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f25a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f25a8:
    // 0x1f25a8: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
label_1f25ac:
    if (ctx->pc == 0x1F25ACu) {
        ctx->pc = 0x1F25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A8u;
        // 0x1f25ac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25B0u;
        goto label_1f25b0;
    }
    ctx->pc = 0x1F25A8u;
    {
        const bool branch_taken_0x1f25a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25A8u;
        // 0x1f25ac: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25a8) {
            ctx->pc = 0x1F25B8u;
            goto label_1f25b8;
        }
    }
    ctx->pc = 0x1F25B0u;
label_1f25b0:
    // 0x1f25b0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f25b4:
    if (ctx->pc == 0x1F25B4u) {
        ctx->pc = 0x1F25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B0u;
        // 0x1f25b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25B8u;
        goto label_1f25b8;
    }
    ctx->pc = 0x1F25B0u;
    {
        const bool branch_taken_0x1f25b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25B0u;
        // 0x1f25b4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25b0) {
            ctx->pc = 0x1F25C0u;
            goto label_1f25c0;
        }
    }
    ctx->pc = 0x1F25B8u;
label_1f25b8:
    // 0x1f25b8: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x1f25b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_1f25bc:
    // 0x1f25bc: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1f25bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1f25c0:
    // 0x1f25c0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1f25c4:
    if (ctx->pc == 0x1F25C4u) {
        ctx->pc = 0x1F25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25C0u;
        // 0x1f25c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25C8u;
        goto label_1f25c8;
    }
    ctx->pc = 0x1F25C0u;
    {
        const bool branch_taken_0x1f25c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F25C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25C0u;
        // 0x1f25c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f25c0) {
            ctx->pc = 0x1F25F4u;
            goto label_1f25f4;
        }
    }
    ctx->pc = 0x1F25C8u;
label_1f25c8:
    // 0x1f25c8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f25cc:
    // 0x1f25cc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1f25ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1f25d0:
    // 0x1f25d0: 0x40f809  jalr        $v0
label_1f25d4:
    if (ctx->pc == 0x1F25D4u) {
        ctx->pc = 0x1F25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D0u;
        // 0x1f25d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25D8u;
        goto label_1f25d8;
    }
    ctx->pc = 0x1F25D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F25D8u);
        ctx->pc = 0x1F25D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25D0u;
        // 0x1f25d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F25D0u, 0x1F25D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F25D8u;
label_1f25d8:
    // 0x1f25d8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f25d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f25dc:
    // 0x1f25dc: 0xc081e8e  jal         func_207A38
label_1f25e0:
    if (ctx->pc == 0x1F25E0u) {
        ctx->pc = 0x1F25E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25DCu;
        // 0x1f25e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25E4u;
        goto label_1f25e4;
    }
    ctx->pc = 0x1F25DCu;
    SET_GPR_U32(ctx, 31, 0x1F25E4u);
    ctx->pc = 0x1F25E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25DCu;
    // 0x1f25e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F25DCu, 0x1F25E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25E4u;
label_1f25e4:
    // 0x1f25e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f25e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f25e8:
    // 0x1f25e8: 0xc08fcf2  jal         func_23F3C8
label_1f25ec:
    if (ctx->pc == 0x1F25ECu) {
        ctx->pc = 0x1F25ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25E8u;
        // 0x1f25ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F25F0u;
        goto label_1f25f0;
    }
    ctx->pc = 0x1F25E8u;
    SET_GPR_U32(ctx, 31, 0x1F25F0u);
    ctx->pc = 0x1F25ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25E8u;
    // 0x1f25ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F25E8u, 0x1F25F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F25F0u;
label_1f25f0:
    // 0x1f25f0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f25f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f25f4:
    // 0x1f25f4: 0x262502bc  addiu       $a1, $s1, 0x2BC
    ctx->pc = 0x1f25f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_1f25f8:
    // 0x1f25f8: 0xc07e654  jal         func_1F9950
label_1f25fc:
    if (ctx->pc == 0x1F25FCu) {
        ctx->pc = 0x1F25FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F25F8u;
        // 0x1f25fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2600u;
        goto label_1f2600;
    }
    ctx->pc = 0x1F25F8u;
    SET_GPR_U32(ctx, 31, 0x1F2600u);
    ctx->pc = 0x1F25FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F25F8u;
    // 0x1f25fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F25F8u, 0x1F2600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2600u;
label_1f2600:
    // 0x1f2600: 0x10000042  b           . + 4 + (0x42 << 2)
label_1f2604:
    if (ctx->pc == 0x1F2604u) {
        ctx->pc = 0x1F2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2600u;
        // 0x1f2604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2608u;
        goto label_1f2608;
    }
    ctx->pc = 0x1F2600u;
    {
        const bool branch_taken_0x1f2600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2600u;
        // 0x1f2604: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2600) {
            ctx->pc = 0x1F270Cu;
            goto label_1f270c;
        }
    }
    ctx->pc = 0x1F2608u;
label_1f2608:
    // 0x1f2608: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1f2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1f260c:
    // 0x1f260c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1f260cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2610:
    // 0x1f2610: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x1f2610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_1f2614:
    // 0x1f2614: 0xc07dcdc  jal         func_1F7370
label_1f2618:
    if (ctx->pc == 0x1F2618u) {
        ctx->pc = 0x1F2618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2614u;
        // 0x1f2618: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F261Cu;
        goto label_1f261c;
    }
    ctx->pc = 0x1F2614u;
    SET_GPR_U32(ctx, 31, 0x1F261Cu);
    ctx->pc = 0x1F2618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2614u;
    // 0x1f2618: 0x2417ffff  addiu       $s7, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7370u, 0x1F2614u, 0x1F261Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F261Cu;
label_1f261c:
    // 0x1f261c: 0xc081710  jal         func_205C40
label_1f2620:
    if (ctx->pc == 0x1F2620u) {
        ctx->pc = 0x1F2620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F261Cu;
        // 0x1f2620: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2624u;
        goto label_1f2624;
    }
    ctx->pc = 0x1F261Cu;
    SET_GPR_U32(ctx, 31, 0x1F2624u);
    ctx->pc = 0x1F2620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F261Cu;
    // 0x1f2620: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1F261Cu, 0x1F2624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2624u;
label_1f2624:
    // 0x1f2624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2628:
    // 0x1f2628: 0xc0817fa  jal         func_205FE8
label_1f262c:
    if (ctx->pc == 0x1F262Cu) {
        ctx->pc = 0x1F262Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2628u;
        // 0x1f262c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2630u;
        goto label_1f2630;
    }
    ctx->pc = 0x1F2628u;
    SET_GPR_U32(ctx, 31, 0x1F2630u);
    ctx->pc = 0x1F262Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2628u;
    // 0x1f262c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205FE8u, 0x1F2628u, 0x1F2630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2630u;
label_1f2630:
    // 0x1f2630: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f2630u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_1f2634:
    // 0x1f2634: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x1f2634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_1f2638:
    // 0x1f2638: 0xc080616  jal         func_201858
label_1f263c:
    if (ctx->pc == 0x1F263Cu) {
        ctx->pc = 0x1F263Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2638u;
        // 0x1f263c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2640u;
        goto label_1f2640;
    }
    ctx->pc = 0x1F2638u;
    SET_GPR_U32(ctx, 31, 0x1F2640u);
    ctx->pc = 0x1F263Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2638u;
    // 0x1f263c: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x201858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x201858u, 0x1F2638u, 0x1F2640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2640u;
label_1f2640:
    // 0x1f2640: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1f2640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1f2644:
    // 0x1f2644: 0x0  nop
    ctx->pc = 0x1f2644u;
    // NOP
label_1f2648:
    // 0x1f2648: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1f2648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1f264c:
    // 0x1f264c: 0x3c013c01  lui         $at, 0x3C01
    ctx->pc = 0x1f264cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15361 << 16));
label_1f2650:
    // 0x1f2650: 0x34210204  ori         $at, $at, 0x204
    ctx->pc = 0x1f2650u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)516);
label_1f2654:
    // 0x1f2654: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f2654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1f2658:
    // 0x1f2658: 0x449e0000  mtc1        $fp, $f0
    ctx->pc = 0x1f2658u;
    { uint32_t bits = GPR_U32(ctx, 30); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1f265c:
    // 0x1f265c: 0x0  nop
    ctx->pc = 0x1f265cu;
    // NOP
label_1f2660:
    // 0x1f2660: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2660u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1f2664:
    // 0x1f2664: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1f2664u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1f2668:
    // 0x1f2668: 0xc0e3f5e  jal         func_38FD78
label_1f266c:
    if (ctx->pc == 0x1F266Cu) {
        ctx->pc = 0x1F266Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2668u;
        // 0x1f266c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2670u;
        goto label_1f2670;
    }
    ctx->pc = 0x1F2668u;
    SET_GPR_U32(ctx, 31, 0x1F2670u);
    ctx->pc = 0x1F266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2668u;
    // 0x1f266c: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD78u, 0x1F2668u, 0x1F2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2670u;
label_1f2670:
    // 0x1f2670: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1f2670u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1f2674:
    // 0x1f2674: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x1f2674u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
label_1f2678:
    // 0x1f2678: 0xc081710  jal         func_205C40
label_1f267c:
    if (ctx->pc == 0x1F267Cu) {
        ctx->pc = 0x1F2680u;
        goto label_1f2680;
    }
    ctx->pc = 0x1F2678u;
    SET_GPR_U32(ctx, 31, 0x1F2680u);
    ctx->pc = 0x205C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205C40u, 0x1F2678u, 0x1F2680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2680u;
label_1f2680:
    // 0x1f2680: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2684:
    // 0x1f2684: 0xc0817d4  jal         func_205F50
label_1f2688:
    if (ctx->pc == 0x1F2688u) {
        ctx->pc = 0x1F2688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2684u;
        // 0x1f2688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F268Cu;
        goto label_1f268c;
    }
    ctx->pc = 0x1F2684u;
    SET_GPR_U32(ctx, 31, 0x1F268Cu);
    ctx->pc = 0x1F2688u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2684u;
    // 0x1f2688: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205F50u, 0x1F2684u, 0x1F268Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F268Cu;
label_1f268c:
    // 0x1f268c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x1f268cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
label_1f2690:
    // 0x1f2690: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2690u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2694:
    // 0x1f2694: 0xc07e666  jal         func_1F9998
label_1f2698:
    if (ctx->pc == 0x1F2698u) {
        ctx->pc = 0x1F2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2694u;
        // 0x1f2698: 0x8e2502c8  lw          $a1, 0x2C8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F269Cu;
        goto label_1f269c;
    }
    ctx->pc = 0x1F2694u;
    SET_GPR_U32(ctx, 31, 0x1F269Cu);
    ctx->pc = 0x1F2698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2694u;
    // 0x1f2698: 0x8e2502c8  lw          $a1, 0x2C8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 712)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9998u, 0x1F2694u, 0x1F269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F269Cu;
label_1f269c:
    // 0x1f269c: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x1f269cu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1f26a0:
    // 0x1f26a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f26a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f26a4:
    // 0x1f26a4: 0xc07c7de  jal         func_1F1F78
label_1f26a8:
    if (ctx->pc == 0x1F26A8u) {
        ctx->pc = 0x1F26A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26A4u;
        // 0x1f26a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26ACu;
        goto label_1f26ac;
    }
    ctx->pc = 0x1F26A4u;
    SET_GPR_U32(ctx, 31, 0x1F26ACu);
    ctx->pc = 0x1F26A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26A4u;
    // 0x1f26a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1F78u, 0x1F26A4u, 0x1F26ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26ACu;
label_1f26ac:
    // 0x1f26ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f26acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f26b0:
    // 0x1f26b0: 0x52400090  beql        $s2, $zero, . + 4 + (0x90 << 2)
label_1f26b4:
    if (ctx->pc == 0x1F26B4u) {
        ctx->pc = 0x1F26B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26B0u;
        // 0x1f26b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26B8u;
        goto label_1f26b8;
    }
    ctx->pc = 0x1F26B0u;
    {
        const bool branch_taken_0x1f26b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f26b0) {
            ctx->pc = 0x1F26B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F26B0u;
            // 0x1f26b4: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F26B8u;
label_1f26b8:
    // 0x1f26b8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f26b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f26bc:
    // 0x1f26bc: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x1f26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1f26c0:
    // 0x1f26c0: 0x40f809  jalr        $v0
label_1f26c4:
    if (ctx->pc == 0x1F26C4u) {
        ctx->pc = 0x1F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C0u;
        // 0x1f26c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26C8u;
        goto label_1f26c8;
    }
    ctx->pc = 0x1F26C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F26C8u);
        ctx->pc = 0x1F26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C0u;
        // 0x1f26c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F26C0u, 0x1F26C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F26C8u;
label_1f26c8:
    // 0x1f26c8: 0x1440007c  bnez        $v0, . + 4 + (0x7C << 2)
label_1f26cc:
    if (ctx->pc == 0x1F26CCu) {
        ctx->pc = 0x1F26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C8u;
        // 0x1f26cc: 0x2bc20006  slti        $v0, $fp, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26D0u;
        goto label_1f26d0;
    }
    ctx->pc = 0x1F26C8u;
    {
        const bool branch_taken_0x1f26c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F26CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26C8u;
        // 0x1f26cc: 0x2bc20006  slti        $v0, $fp, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26c8) {
            ctx->pc = 0x1F28BCu;
            goto label_1f28bc;
        }
    }
    ctx->pc = 0x1F26D0u;
label_1f26d0:
    // 0x1f26d0: 0x1600007a  bnez        $s0, . + 4 + (0x7A << 2)
label_1f26d4:
    if (ctx->pc == 0x1F26D4u) {
        ctx->pc = 0x1F26D8u;
        goto label_1f26d8;
    }
    ctx->pc = 0x1F26D0u;
    {
        const bool branch_taken_0x1f26d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f26d0) {
            ctx->pc = 0x1F28BCu;
            goto label_1f28bc;
        }
    }
    ctx->pc = 0x1F26D8u;
label_1f26d8:
    // 0x1f26d8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1f26d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1f26dc:
    // 0x1f26dc: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_1f26e0:
    if (ctx->pc == 0x1F26E0u) {
        ctx->pc = 0x1F26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26DCu;
        // 0x1f26e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26E4u;
        goto label_1f26e4;
    }
    ctx->pc = 0x1F26DCu;
    {
        const bool branch_taken_0x1f26dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F26E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26DCu;
        // 0x1f26e0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26dc) {
            ctx->pc = 0x1F2854u;
            goto label_1f2854;
        }
    }
    ctx->pc = 0x1F26E4u;
label_1f26e4:
    // 0x1f26e4: 0x12a00016  beqz        $s5, . + 4 + (0x16 << 2)
label_1f26e8:
    if (ctx->pc == 0x1F26E8u) {
        ctx->pc = 0x1F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26E4u;
        // 0x1f26e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26ECu;
        goto label_1f26ec;
    }
    ctx->pc = 0x1F26E4u;
    {
        const bool branch_taken_0x1f26e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26E4u;
        // 0x1f26e8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f26e4) {
            ctx->pc = 0x1F2740u;
            goto label_1f2740;
        }
    }
    ctx->pc = 0x1F26ECu;
label_1f26ec:
    // 0x1f26ec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f26ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f26f0:
    // 0x1f26f0: 0xc08217a  jal         func_2085E8
label_1f26f4:
    if (ctx->pc == 0x1F26F4u) {
        ctx->pc = 0x1F26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F26F0u;
        // 0x1f26f4: 0x24a5ee28  addiu       $a1, $a1, -0x11D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F26F8u;
        goto label_1f26f8;
    }
    ctx->pc = 0x1F26F0u;
    SET_GPR_U32(ctx, 31, 0x1F26F8u);
    ctx->pc = 0x1F26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F26F0u;
    // 0x1f26f4: 0x24a5ee28  addiu       $a1, $a1, -0x11D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F26F0u, 0x1F26F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F26F8u;
label_1f26f8:
    // 0x1f26f8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f26f8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f26fc:
    // 0x1f26fc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f2700:
    // 0x1f2700: 0x16e2002c  bne         $s7, $v0, . + 4 + (0x2C << 2)
label_1f2704:
    if (ctx->pc == 0x1F2704u) {
        ctx->pc = 0x1F2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2700u;
        // 0x1f2704: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2708u;
        goto label_1f2708;
    }
    ctx->pc = 0x1F2700u;
    {
        const bool branch_taken_0x1f2700 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2700u;
        // 0x1f2704: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2700) {
            ctx->pc = 0x1F27B4u;
            goto label_1f27b4;
        }
    }
    ctx->pc = 0x1F2708u;
label_1f2708:
    // 0x1f2708: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f270c:
    // 0x1f270c: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x1f270cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1f2710:
    // 0x1f2710: 0xc07e654  jal         func_1F9950
label_1f2714:
    if (ctx->pc == 0x1F2714u) {
        ctx->pc = 0x1F2714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2710u;
        // 0x1f2714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2718u;
        goto label_1f2718;
    }
    ctx->pc = 0x1F2710u;
    SET_GPR_U32(ctx, 31, 0x1F2718u);
    ctx->pc = 0x1F2714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2710u;
    // 0x1f2714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2710u, 0x1F2718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2718u;
label_1f2718:
    // 0x1f2718: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f271c:
    // 0x1f271c: 0x262502c4  addiu       $a1, $s1, 0x2C4
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_1f2720:
    // 0x1f2720: 0xc07e654  jal         func_1F9950
label_1f2724:
    if (ctx->pc == 0x1F2724u) {
        ctx->pc = 0x1F2724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2720u;
        // 0x1f2724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2728u;
        goto label_1f2728;
    }
    ctx->pc = 0x1F2720u;
    SET_GPR_U32(ctx, 31, 0x1F2728u);
    ctx->pc = 0x1F2724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2720u;
    // 0x1f2724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2720u, 0x1F2728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2728u;
label_1f2728:
    // 0x1f2728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f272c:
    // 0x1f272c: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f272cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
label_1f2730:
    // 0x1f2730: 0xc07e654  jal         func_1F9950
label_1f2734:
    if (ctx->pc == 0x1F2734u) {
        ctx->pc = 0x1F2734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2730u;
        // 0x1f2734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2738u;
        goto label_1f2738;
    }
    ctx->pc = 0x1F2730u;
    SET_GPR_U32(ctx, 31, 0x1F2738u);
    ctx->pc = 0x1F2734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2730u;
    // 0x1f2734: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2730u, 0x1F2738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2738u;
label_1f2738:
    // 0x1f2738: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1f273c:
    if (ctx->pc == 0x1F273Cu) {
        ctx->pc = 0x1F273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2738u;
        // 0x1f273c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2740u;
        goto label_1f2740;
    }
    ctx->pc = 0x1F2738u;
    {
        const bool branch_taken_0x1f2738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2738u;
        // 0x1f273c: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2738) {
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F2740u;
label_1f2740:
    // 0x1f2740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f2744:
    // 0x1f2744: 0xc07c79a  jal         func_1F1E68
label_1f2748:
    if (ctx->pc == 0x1F2748u) {
        ctx->pc = 0x1F2748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2744u;
        // 0x1f2748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F274Cu;
        goto label_1f274c;
    }
    ctx->pc = 0x1F2744u;
    SET_GPR_U32(ctx, 31, 0x1F274Cu);
    ctx->pc = 0x1F2748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2744u;
    // 0x1f2748: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1E68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F1E68u, 0x1F2744u, 0x1F274Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F274Cu;
label_1f274c:
    // 0x1f274c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f274cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2750:
    // 0x1f2750: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f2750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f2754:
    // 0x1f2754: 0xc08219a  jal         func_208668
label_1f2758:
    if (ctx->pc == 0x1F2758u) {
        ctx->pc = 0x1F2758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2754u;
        // 0x1f2758: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F275Cu;
        goto label_1f275c;
    }
    ctx->pc = 0x1F2754u;
    SET_GPR_U32(ctx, 31, 0x1F275Cu);
    ctx->pc = 0x1F2758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2754u;
    // 0x1f2758: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208668u, 0x1F2754u, 0x1F275Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F275Cu;
label_1f275c:
    // 0x1f275c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f275cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f2760:
    // 0x1f2760: 0x18600011  blez        $v1, . + 4 + (0x11 << 2)
label_1f2764:
    if (ctx->pc == 0x1F2764u) {
        ctx->pc = 0x1F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2760u;
        // 0x1f2764: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2768u;
        goto label_1f2768;
    }
    ctx->pc = 0x1F2760u;
    {
        const bool branch_taken_0x1f2760 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1F2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2760u;
        // 0x1f2764: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2760) {
            ctx->pc = 0x1F27A8u;
            goto label_1f27a8;
        }
    }
    ctx->pc = 0x1F2768u;
label_1f2768:
    // 0x1f2768: 0x8e220478  lw          $v0, 0x478($s1)
    ctx->pc = 0x1f2768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1144)));
label_1f276c:
    // 0x1f276c: 0x3c060046  lui         $a2, 0x46
    ctx->pc = 0x1f276cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)70 << 16));
label_1f2770:
    // 0x1f2770: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1f2774:
    if (ctx->pc == 0x1F2774u) {
        ctx->pc = 0x1F2774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2770u;
        // 0x1f2774: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2778u;
        goto label_1f2778;
    }
    ctx->pc = 0x1F2770u;
    {
        const bool branch_taken_0x1f2770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2770) {
            ctx->pc = 0x1F2774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2770u;
            // 0x1f2774: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2778u;
            goto label_1f2778;
        }
    }
    ctx->pc = 0x1F2778u;
label_1f2778:
    // 0x1f2778: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1f2778u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1f277c:
    // 0x1f277c: 0x24c6ee30  addiu       $a2, $a2, -0x11D0
    ctx->pc = 0x1f277cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962736));
label_1f2780:
    // 0x1f2780: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1f2780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f2784:
    // 0x1f2784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2788:
    // 0x1f2788: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x1f2788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1f278c:
    // 0x1f278c: 0x4010  mfhi        $t0
    ctx->pc = 0x1f278cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
label_1f2790:
    // 0x1f2790: 0xc0efed0  jal         func_3BFB40
label_1f2794:
    if (ctx->pc == 0x1F2794u) {
        ctx->pc = 0x1F2794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2790u;
        // 0x1f2794: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2798u;
        goto label_1f2798;
    }
    ctx->pc = 0x1F2790u;
    SET_GPR_U32(ctx, 31, 0x1F2798u);
    ctx->pc = 0x1F2794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2790u;
    // 0x1f2794: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x1F2790u, 0x1F2798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2798u;
label_1f2798:
    // 0x1f2798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f2798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f279c:
    // 0x1f279c: 0xc08217a  jal         func_2085E8
label_1f27a0:
    if (ctx->pc == 0x1F27A0u) {
        ctx->pc = 0x1F27A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F279Cu;
        // 0x1f27a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27A4u;
        goto label_1f27a4;
    }
    ctx->pc = 0x1F279Cu;
    SET_GPR_U32(ctx, 31, 0x1F27A4u);
    ctx->pc = 0x1F27A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F279Cu;
    // 0x1f27a0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2085E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2085E8u, 0x1F279Cu, 0x1F27A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27A4u;
label_1f27a4:
    // 0x1f27a4: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1f27a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f27a8:
    // 0x1f27a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f27a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f27ac:
    // 0x1f27ac: 0x12e20009  beq         $s7, $v0, . + 4 + (0x9 << 2)
label_1f27b0:
    if (ctx->pc == 0x1F27B0u) {
        ctx->pc = 0x1F27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27ACu;
        // 0x1f27b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27B4u;
        goto label_1f27b4;
    }
    ctx->pc = 0x1F27ACu;
    {
        const bool branch_taken_0x1f27ac = (GPR_U64(ctx, 23) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F27B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27ACu;
        // 0x1f27b0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f27ac) {
            ctx->pc = 0x1F27D4u;
            goto label_1f27d4;
        }
    }
    ctx->pc = 0x1F27B4u;
label_1f27b4:
    // 0x1f27b4: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1f27b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1f27b8:
    // 0x1f27b8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f27b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f27bc:
    // 0x1f27bc: 0xc0820dc  jal         func_208370
label_1f27c0:
    if (ctx->pc == 0x1F27C0u) {
        ctx->pc = 0x1F27C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27BCu;
        // 0x1f27c0: 0x26f40001  addiu       $s4, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27C4u;
        goto label_1f27c4;
    }
    ctx->pc = 0x1F27BCu;
    SET_GPR_U32(ctx, 31, 0x1F27C4u);
    ctx->pc = 0x1F27C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27BCu;
    // 0x1f27c0: 0x26f40001  addiu       $s4, $s7, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x208370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x208370u, 0x1F27BCu, 0x1F27C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27C4u;
label_1f27c4:
    // 0x1f27c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f27c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f27c8:
    // 0x1f27c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f27cc:
    // 0x1f27cc: 0x56020017  bnel        $s0, $v0, . + 4 + (0x17 << 2)
label_1f27d0:
    if (ctx->pc == 0x1F27D0u) {
        ctx->pc = 0x1F27D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27CCu;
        // 0x1f27d0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27D4u;
        goto label_1f27d4;
    }
    ctx->pc = 0x1F27CCu;
    {
        const bool branch_taken_0x1f27cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f27cc) {
            ctx->pc = 0x1F27D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F27CCu;
            // 0x1f27d0: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F282Cu;
            goto label_1f282c;
        }
    }
    ctx->pc = 0x1F27D4u;
label_1f27d4:
    // 0x1f27d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f27d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f27d8:
    // 0x1f27d8: 0x262502c0  addiu       $a1, $s1, 0x2C0
    ctx->pc = 0x1f27d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
label_1f27dc:
    // 0x1f27dc: 0xc07e654  jal         func_1F9950
label_1f27e0:
    if (ctx->pc == 0x1F27E0u) {
        ctx->pc = 0x1F27E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27DCu;
        // 0x1f27e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27E4u;
        goto label_1f27e4;
    }
    ctx->pc = 0x1F27DCu;
    SET_GPR_U32(ctx, 31, 0x1F27E4u);
    ctx->pc = 0x1F27E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27DCu;
    // 0x1f27e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F27DCu, 0x1F27E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27E4u;
label_1f27e4:
    // 0x1f27e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f27e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f27e8:
    // 0x1f27e8: 0x262502c4  addiu       $a1, $s1, 0x2C4
    ctx->pc = 0x1f27e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 708));
label_1f27ec:
    // 0x1f27ec: 0xc07e654  jal         func_1F9950
label_1f27f0:
    if (ctx->pc == 0x1F27F0u) {
        ctx->pc = 0x1F27F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27ECu;
        // 0x1f27f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F27F4u;
        goto label_1f27f4;
    }
    ctx->pc = 0x1F27ECu;
    SET_GPR_U32(ctx, 31, 0x1F27F4u);
    ctx->pc = 0x1F27F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27ECu;
    // 0x1f27f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F27ECu, 0x1F27F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F27F4u;
label_1f27f4:
    // 0x1f27f4: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
label_1f27f8:
    // 0x1f27f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f27f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f27fc:
    // 0x1f27fc: 0xc07e654  jal         func_1F9950
label_1f2800:
    if (ctx->pc == 0x1F2800u) {
        ctx->pc = 0x1F2800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F27FCu;
        // 0x1f2800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2804u;
        goto label_1f2804;
    }
    ctx->pc = 0x1F27FCu;
    SET_GPR_U32(ctx, 31, 0x1F2804u);
    ctx->pc = 0x1F2800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F27FCu;
    // 0x1f2800: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F27FCu, 0x1F2804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2804u;
label_1f2804:
    // 0x1f2804: 0xc08fcf0  jal         func_23F3C0
label_1f2808:
    if (ctx->pc == 0x1F2808u) {
        ctx->pc = 0x1F2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2804u;
        // 0x1f2808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F280Cu;
        goto label_1f280c;
    }
    ctx->pc = 0x1F2804u;
    SET_GPR_U32(ctx, 31, 0x1F280Cu);
    ctx->pc = 0x1F2808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2804u;
    // 0x1f2808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C0u, 0x1F2804u, 0x1F280Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F280Cu;
label_1f280c:
    // 0x1f280c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f2810:
    // 0x1f2810: 0xc081e8e  jal         func_207A38
label_1f2814:
    if (ctx->pc == 0x1F2814u) {
        ctx->pc = 0x1F2814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2810u;
        // 0x1f2814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2818u;
        goto label_1f2818;
    }
    ctx->pc = 0x1F2810u;
    SET_GPR_U32(ctx, 31, 0x1F2818u);
    ctx->pc = 0x1F2814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2810u;
    // 0x1f2814: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x207A38u, 0x1F2810u, 0x1F2818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2818u;
label_1f2818:
    // 0x1f2818: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f281c:
    // 0x1f281c: 0xc08fcf2  jal         func_23F3C8
label_1f2820:
    if (ctx->pc == 0x1F2820u) {
        ctx->pc = 0x1F2820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F281Cu;
        // 0x1f2820: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2824u;
        goto label_1f2824;
    }
    ctx->pc = 0x1F281Cu;
    SET_GPR_U32(ctx, 31, 0x1F2824u);
    ctx->pc = 0x1F2820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F281Cu;
    // 0x1f2820: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F3C8u, 0x1F281Cu, 0x1F2824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2824u;
label_1f2824:
    // 0x1f2824: 0x10000033  b           . + 4 + (0x33 << 2)
label_1f2828:
    if (ctx->pc == 0x1F2828u) {
        ctx->pc = 0x1F2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2824u;
        // 0x1f2828: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F282Cu;
        goto label_1f282c;
    }
    ctx->pc = 0x1F2824u;
    {
        const bool branch_taken_0x1f2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2824u;
        // 0x1f2828: 0xdfb00080  ld          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2824) {
            ctx->pc = 0x1F28F4u;
            goto label_1f28f4;
        }
    }
    ctx->pc = 0x1F282Cu;
label_1f282c:
    // 0x1f282c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f2830:
    // 0x1f2830: 0x40f809  jalr        $v0
label_1f2834:
    if (ctx->pc == 0x1F2834u) {
        ctx->pc = 0x1F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2830u;
        // 0x1f2834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2838u;
        goto label_1f2838;
    }
    ctx->pc = 0x1F2830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2838u);
        ctx->pc = 0x1F2834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2830u;
        // 0x1f2834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2830u, 0x1F2838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2838u;
label_1f2838:
    // 0x1f2838: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1f2838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1f283c:
    // 0x1f283c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1f283cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2840:
    // 0x1f2840: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f2840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f2844:
    // 0x1f2844: 0xc081436  jal         func_2050D8
label_1f2848:
    if (ctx->pc == 0x1F2848u) {
        ctx->pc = 0x1F2848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2844u;
        // 0x1f2848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F284Cu;
        goto label_1f284c;
    }
    ctx->pc = 0x1F2844u;
    SET_GPR_U32(ctx, 31, 0x1F284Cu);
    ctx->pc = 0x1F2848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2844u;
    // 0x1f2848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2050D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2050D8u, 0x1F2844u, 0x1F284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F284Cu;
label_1f284c:
    // 0x1f284c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1f2850:
    if (ctx->pc == 0x1F2850u) {
        ctx->pc = 0x1F2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F284Cu;
        // 0x1f2850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2854u;
        goto label_1f2854;
    }
    ctx->pc = 0x1F284Cu;
    {
        const bool branch_taken_0x1f284c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F284Cu;
        // 0x1f2850: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f284c) {
            ctx->pc = 0x1F288Cu;
            goto label_1f288c;
        }
    }
    ctx->pc = 0x1F2854u;
label_1f2854:
    // 0x1f2854: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_1f2858:
    // 0x1f2858: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1f2858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f285c:
    // 0x1f285c: 0xc0820b4  jal         func_2082D0
label_1f2860:
    if (ctx->pc == 0x1F2860u) {
        ctx->pc = 0x1F2860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F285Cu;
        // 0x1f2860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2864u;
        goto label_1f2864;
    }
    ctx->pc = 0x1F285Cu;
    SET_GPR_U32(ctx, 31, 0x1F2864u);
    ctx->pc = 0x1F2860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F285Cu;
    // 0x1f2860: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2082D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2082D0u, 0x1F285Cu, 0x1F2864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2864u;
label_1f2864:
    // 0x1f2864: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f2868:
    // 0x1f2868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f286c:
    // 0x1f286c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1f286cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1f2870:
    // 0x1f2870: 0x40f809  jalr        $v0
label_1f2874:
    if (ctx->pc == 0x1F2874u) {
        ctx->pc = 0x1F2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2870u;
        // 0x1f2874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2878u;
        goto label_1f2878;
    }
    ctx->pc = 0x1F2870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F2878u);
        ctx->pc = 0x1F2874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2870u;
        // 0x1f2874: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2870u, 0x1F2878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F2878u;
label_1f2878:
    // 0x1f2878: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_1f287c:
    // 0x1f287c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f287cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f2880:
    // 0x1f2880: 0xc081466  jal         func_205198
label_1f2884:
    if (ctx->pc == 0x1F2884u) {
        ctx->pc = 0x1F2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2880u;
        // 0x1f2884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2888u;
        goto label_1f2888;
    }
    ctx->pc = 0x1F2880u;
    SET_GPR_U32(ctx, 31, 0x1F2888u);
    ctx->pc = 0x1F2884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2880u;
    // 0x1f2884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205198u, 0x1F2880u, 0x1F2888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2888u;
label_1f2888:
    // 0x1f2888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f2888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f288c:
    // 0x1f288c: 0x262502c8  addiu       $a1, $s1, 0x2C8
    ctx->pc = 0x1f288cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 712));
label_1f2890:
    // 0x1f2890: 0xc07e654  jal         func_1F9950
label_1f2894:
    if (ctx->pc == 0x1F2894u) {
        ctx->pc = 0x1F2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2890u;
        // 0x1f2894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2898u;
        goto label_1f2898;
    }
    ctx->pc = 0x1F2890u;
    SET_GPR_U32(ctx, 31, 0x1F2898u);
    ctx->pc = 0x1F2894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2890u;
    // 0x1f2894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F2890u, 0x1F2898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F2898u;
label_1f2898:
    // 0x1f2898: 0x922502e0  lbu         $a1, 0x2E0($s1)
    ctx->pc = 0x1f2898u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 736)));
label_1f289c:
    // 0x1f289c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f28a0:
    // 0x1f28a0: 0xc07d684  jal         func_1F5A10
label_1f28a4:
    if (ctx->pc == 0x1F28A4u) {
        ctx->pc = 0x1F28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28A0u;
        // 0x1f28a4: 0x8e2602cc  lw          $a2, 0x2CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28A8u;
        goto label_1f28a8;
    }
    ctx->pc = 0x1F28A0u;
    SET_GPR_U32(ctx, 31, 0x1F28A8u);
    ctx->pc = 0x1F28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28A0u;
    // 0x1f28a4: 0x8e2602cc  lw          $a2, 0x2CC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5A10u, 0x1F28A0u, 0x1F28A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28A8u;
label_1f28a8:
    // 0x1f28a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f28ac:
    // 0x1f28ac: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f28acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f28b0:
    // 0x1f28b0: 0xc07e654  jal         func_1F9950
label_1f28b4:
    if (ctx->pc == 0x1F28B4u) {
        ctx->pc = 0x1F28B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28B0u;
        // 0x1f28b4: 0x262502dc  addiu       $a1, $s1, 0x2DC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 732));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28B8u;
        goto label_1f28b8;
    }
    ctx->pc = 0x1F28B0u;
    SET_GPR_U32(ctx, 31, 0x1F28B8u);
    ctx->pc = 0x1F28B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28B0u;
    // 0x1f28b4: 0x262502dc  addiu       $a1, $s1, 0x2DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 732));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F28B0u, 0x1F28B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28B8u;
label_1f28b8:
    // 0x1f28b8: 0x2bc20006  slti        $v0, $fp, 0x6
    ctx->pc = 0x1f28b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)6) ? 1 : 0);
label_1f28bc:
    // 0x1f28bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1f28c0:
    if (ctx->pc == 0x1F28C0u) {
        ctx->pc = 0x1F28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28BCu;
        // 0x1f28c0: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28C4u;
        goto label_1f28c4;
    }
    ctx->pc = 0x1F28BCu;
    {
        const bool branch_taken_0x1f28bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F28C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28BCu;
        // 0x1f28c0: 0x8fa50070  lw          $a1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f28bc) {
            ctx->pc = 0x1F28DCu;
            goto label_1f28dc;
        }
    }
    ctx->pc = 0x1F28C4u;
label_1f28c4:
    // 0x1f28c4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1f28c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_1f28c8:
    // 0x1f28c8: 0x262502d8  addiu       $a1, $s1, 0x2D8
    ctx->pc = 0x1f28c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 728));
label_1f28cc:
    // 0x1f28cc: 0x24440480  addiu       $a0, $v0, 0x480
    ctx->pc = 0x1f28ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1152));
label_1f28d0:
    // 0x1f28d0: 0xc07e654  jal         func_1F9950
label_1f28d4:
    if (ctx->pc == 0x1F28D4u) {
        ctx->pc = 0x1F28D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28D0u;
        // 0x1f28d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28D8u;
        goto label_1f28d8;
    }
    ctx->pc = 0x1F28D0u;
    SET_GPR_U32(ctx, 31, 0x1F28D8u);
    ctx->pc = 0x1F28D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28D0u;
    // 0x1f28d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9950u, 0x1F28D0u, 0x1F28D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28D8u;
label_1f28d8:
    // 0x1f28d8: 0x8fa50070  lw          $a1, 0x70($sp)
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_1f28dc:
    // 0x1f28dc: 0xc081560  jal         func_205580
label_1f28e0:
    if (ctx->pc == 0x1F28E0u) {
        ctx->pc = 0x1F28E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28DCu;
        // 0x1f28e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28E4u;
        goto label_1f28e4;
    }
    ctx->pc = 0x1F28DCu;
    SET_GPR_U32(ctx, 31, 0x1F28E4u);
    ctx->pc = 0x1F28E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28DCu;
    // 0x1f28e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x205580u, 0x1F28DCu, 0x1F28E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28E4u;
label_1f28e4:
    // 0x1f28e4: 0x8fa5006c  lw          $a1, 0x6C($sp)
    ctx->pc = 0x1f28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_1f28e8:
    // 0x1f28e8: 0xc08156c  jal         func_2055B0
label_1f28ec:
    if (ctx->pc == 0x1F28ECu) {
        ctx->pc = 0x1F28ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F28E8u;
        // 0x1f28ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F28F0u;
        goto label_1f28f0;
    }
    ctx->pc = 0x1F28E8u;
    SET_GPR_U32(ctx, 31, 0x1F28F0u);
    ctx->pc = 0x1F28ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F28E8u;
    // 0x1f28ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2055B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2055B0u, 0x1F28E8u, 0x1F28F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F28F0u;
label_1f28f0:
    // 0x1f28f0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x1f28f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1f28f4:
    // 0x1f28f4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x1f28f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1f28f8:
    // 0x1f28f8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x1f28f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1f28fc:
    // 0x1f28fc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x1f28fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1f2900:
    // 0x1f2900: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x1f2900u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1f2904:
    // 0x1f2904: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x1f2904u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1f2908:
    // 0x1f2908: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x1f2908u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1f290c:
    // 0x1f290c: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x1f290cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_1f2910:
    // 0x1f2910: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x1f2910u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_1f2914:
    // 0x1f2914: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x1f2914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_1f2918:
    // 0x1f2918: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1f2918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1f291c:
    // 0x1f291c: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1f291cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f2920:
    // 0x1f2920: 0x3e00008  jr          $ra
label_1f2924:
    if (ctx->pc == 0x1F2924u) {
        ctx->pc = 0x1F2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2920u;
        // 0x1f2924: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F2928u;
        goto label_fallthrough_0x1f2920;
    }
    ctx->pc = 0x1F2920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2920u;
        // 0x1f2924: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2920u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f2920:
    ctx->pc = 0x1F2928u;
}
