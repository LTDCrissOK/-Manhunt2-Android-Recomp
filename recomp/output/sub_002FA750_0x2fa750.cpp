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

// Function: sub_002FA750
// Address: 0x2fa750 - 0x2fad30
void sub_002FA750_0x2fa750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA750_0x2fa750");
#endif

    switch (ctx->pc) {
        case 0x2fa750u: goto label_2fa750;
        case 0x2fa754u: goto label_2fa754;
        case 0x2fa758u: goto label_2fa758;
        case 0x2fa75cu: goto label_2fa75c;
        case 0x2fa760u: goto label_2fa760;
        case 0x2fa764u: goto label_2fa764;
        case 0x2fa768u: goto label_2fa768;
        case 0x2fa76cu: goto label_2fa76c;
        case 0x2fa770u: goto label_2fa770;
        case 0x2fa774u: goto label_2fa774;
        case 0x2fa778u: goto label_2fa778;
        case 0x2fa77cu: goto label_2fa77c;
        case 0x2fa780u: goto label_2fa780;
        case 0x2fa784u: goto label_2fa784;
        case 0x2fa788u: goto label_2fa788;
        case 0x2fa78cu: goto label_2fa78c;
        case 0x2fa790u: goto label_2fa790;
        case 0x2fa794u: goto label_2fa794;
        case 0x2fa798u: goto label_2fa798;
        case 0x2fa79cu: goto label_2fa79c;
        case 0x2fa7a0u: goto label_2fa7a0;
        case 0x2fa7a4u: goto label_2fa7a4;
        case 0x2fa7a8u: goto label_2fa7a8;
        case 0x2fa7acu: goto label_2fa7ac;
        case 0x2fa7b0u: goto label_2fa7b0;
        case 0x2fa7b4u: goto label_2fa7b4;
        case 0x2fa7b8u: goto label_2fa7b8;
        case 0x2fa7bcu: goto label_2fa7bc;
        case 0x2fa7c0u: goto label_2fa7c0;
        case 0x2fa7c4u: goto label_2fa7c4;
        case 0x2fa7c8u: goto label_2fa7c8;
        case 0x2fa7ccu: goto label_2fa7cc;
        case 0x2fa7d0u: goto label_2fa7d0;
        case 0x2fa7d4u: goto label_2fa7d4;
        case 0x2fa7d8u: goto label_2fa7d8;
        case 0x2fa7dcu: goto label_2fa7dc;
        case 0x2fa7e0u: goto label_2fa7e0;
        case 0x2fa7e4u: goto label_2fa7e4;
        case 0x2fa7e8u: goto label_2fa7e8;
        case 0x2fa7ecu: goto label_2fa7ec;
        case 0x2fa7f0u: goto label_2fa7f0;
        case 0x2fa7f4u: goto label_2fa7f4;
        case 0x2fa7f8u: goto label_2fa7f8;
        case 0x2fa7fcu: goto label_2fa7fc;
        case 0x2fa800u: goto label_2fa800;
        case 0x2fa804u: goto label_2fa804;
        case 0x2fa808u: goto label_2fa808;
        case 0x2fa80cu: goto label_2fa80c;
        case 0x2fa810u: goto label_2fa810;
        case 0x2fa814u: goto label_2fa814;
        case 0x2fa818u: goto label_2fa818;
        case 0x2fa81cu: goto label_2fa81c;
        case 0x2fa820u: goto label_2fa820;
        case 0x2fa824u: goto label_2fa824;
        case 0x2fa828u: goto label_2fa828;
        case 0x2fa82cu: goto label_2fa82c;
        case 0x2fa830u: goto label_2fa830;
        case 0x2fa834u: goto label_2fa834;
        case 0x2fa838u: goto label_2fa838;
        case 0x2fa83cu: goto label_2fa83c;
        case 0x2fa840u: goto label_2fa840;
        case 0x2fa844u: goto label_2fa844;
        case 0x2fa848u: goto label_2fa848;
        case 0x2fa84cu: goto label_2fa84c;
        case 0x2fa850u: goto label_2fa850;
        case 0x2fa854u: goto label_2fa854;
        case 0x2fa858u: goto label_2fa858;
        case 0x2fa85cu: goto label_2fa85c;
        case 0x2fa860u: goto label_2fa860;
        case 0x2fa864u: goto label_2fa864;
        case 0x2fa868u: goto label_2fa868;
        case 0x2fa86cu: goto label_2fa86c;
        case 0x2fa870u: goto label_2fa870;
        case 0x2fa874u: goto label_2fa874;
        case 0x2fa878u: goto label_2fa878;
        case 0x2fa87cu: goto label_2fa87c;
        case 0x2fa880u: goto label_2fa880;
        case 0x2fa884u: goto label_2fa884;
        case 0x2fa888u: goto label_2fa888;
        case 0x2fa88cu: goto label_2fa88c;
        case 0x2fa890u: goto label_2fa890;
        case 0x2fa894u: goto label_2fa894;
        case 0x2fa898u: goto label_2fa898;
        case 0x2fa89cu: goto label_2fa89c;
        case 0x2fa8a0u: goto label_2fa8a0;
        case 0x2fa8a4u: goto label_2fa8a4;
        case 0x2fa8a8u: goto label_2fa8a8;
        case 0x2fa8acu: goto label_2fa8ac;
        case 0x2fa8b0u: goto label_2fa8b0;
        case 0x2fa8b4u: goto label_2fa8b4;
        case 0x2fa8b8u: goto label_2fa8b8;
        case 0x2fa8bcu: goto label_2fa8bc;
        case 0x2fa8c0u: goto label_2fa8c0;
        case 0x2fa8c4u: goto label_2fa8c4;
        case 0x2fa8c8u: goto label_2fa8c8;
        case 0x2fa8ccu: goto label_2fa8cc;
        case 0x2fa8d0u: goto label_2fa8d0;
        case 0x2fa8d4u: goto label_2fa8d4;
        case 0x2fa8d8u: goto label_2fa8d8;
        case 0x2fa8dcu: goto label_2fa8dc;
        case 0x2fa8e0u: goto label_2fa8e0;
        case 0x2fa8e4u: goto label_2fa8e4;
        case 0x2fa8e8u: goto label_2fa8e8;
        case 0x2fa8ecu: goto label_2fa8ec;
        case 0x2fa8f0u: goto label_2fa8f0;
        case 0x2fa8f4u: goto label_2fa8f4;
        case 0x2fa8f8u: goto label_2fa8f8;
        case 0x2fa8fcu: goto label_2fa8fc;
        case 0x2fa900u: goto label_2fa900;
        case 0x2fa904u: goto label_2fa904;
        case 0x2fa908u: goto label_2fa908;
        case 0x2fa90cu: goto label_2fa90c;
        case 0x2fa910u: goto label_2fa910;
        case 0x2fa914u: goto label_2fa914;
        case 0x2fa918u: goto label_2fa918;
        case 0x2fa91cu: goto label_2fa91c;
        case 0x2fa920u: goto label_2fa920;
        case 0x2fa924u: goto label_2fa924;
        case 0x2fa928u: goto label_2fa928;
        case 0x2fa92cu: goto label_2fa92c;
        case 0x2fa930u: goto label_2fa930;
        case 0x2fa934u: goto label_2fa934;
        case 0x2fa938u: goto label_2fa938;
        case 0x2fa93cu: goto label_2fa93c;
        case 0x2fa940u: goto label_2fa940;
        case 0x2fa944u: goto label_2fa944;
        case 0x2fa948u: goto label_2fa948;
        case 0x2fa94cu: goto label_2fa94c;
        case 0x2fa950u: goto label_2fa950;
        case 0x2fa954u: goto label_2fa954;
        case 0x2fa958u: goto label_2fa958;
        case 0x2fa95cu: goto label_2fa95c;
        case 0x2fa960u: goto label_2fa960;
        case 0x2fa964u: goto label_2fa964;
        case 0x2fa968u: goto label_2fa968;
        case 0x2fa96cu: goto label_2fa96c;
        case 0x2fa970u: goto label_2fa970;
        case 0x2fa974u: goto label_2fa974;
        case 0x2fa978u: goto label_2fa978;
        case 0x2fa97cu: goto label_2fa97c;
        case 0x2fa980u: goto label_2fa980;
        case 0x2fa984u: goto label_2fa984;
        case 0x2fa988u: goto label_2fa988;
        case 0x2fa98cu: goto label_2fa98c;
        case 0x2fa990u: goto label_2fa990;
        case 0x2fa994u: goto label_2fa994;
        case 0x2fa998u: goto label_2fa998;
        case 0x2fa99cu: goto label_2fa99c;
        case 0x2fa9a0u: goto label_2fa9a0;
        case 0x2fa9a4u: goto label_2fa9a4;
        case 0x2fa9a8u: goto label_2fa9a8;
        case 0x2fa9acu: goto label_2fa9ac;
        case 0x2fa9b0u: goto label_2fa9b0;
        case 0x2fa9b4u: goto label_2fa9b4;
        case 0x2fa9b8u: goto label_2fa9b8;
        case 0x2fa9bcu: goto label_2fa9bc;
        case 0x2fa9c0u: goto label_2fa9c0;
        case 0x2fa9c4u: goto label_2fa9c4;
        case 0x2fa9c8u: goto label_2fa9c8;
        case 0x2fa9ccu: goto label_2fa9cc;
        case 0x2fa9d0u: goto label_2fa9d0;
        case 0x2fa9d4u: goto label_2fa9d4;
        case 0x2fa9d8u: goto label_2fa9d8;
        case 0x2fa9dcu: goto label_2fa9dc;
        case 0x2fa9e0u: goto label_2fa9e0;
        case 0x2fa9e4u: goto label_2fa9e4;
        case 0x2fa9e8u: goto label_2fa9e8;
        case 0x2fa9ecu: goto label_2fa9ec;
        case 0x2fa9f0u: goto label_2fa9f0;
        case 0x2fa9f4u: goto label_2fa9f4;
        case 0x2fa9f8u: goto label_2fa9f8;
        case 0x2fa9fcu: goto label_2fa9fc;
        case 0x2faa00u: goto label_2faa00;
        case 0x2faa04u: goto label_2faa04;
        case 0x2faa08u: goto label_2faa08;
        case 0x2faa0cu: goto label_2faa0c;
        case 0x2faa10u: goto label_2faa10;
        case 0x2faa14u: goto label_2faa14;
        case 0x2faa18u: goto label_2faa18;
        case 0x2faa1cu: goto label_2faa1c;
        case 0x2faa20u: goto label_2faa20;
        case 0x2faa24u: goto label_2faa24;
        case 0x2faa28u: goto label_2faa28;
        case 0x2faa2cu: goto label_2faa2c;
        case 0x2faa30u: goto label_2faa30;
        case 0x2faa34u: goto label_2faa34;
        case 0x2faa38u: goto label_2faa38;
        case 0x2faa3cu: goto label_2faa3c;
        case 0x2faa40u: goto label_2faa40;
        case 0x2faa44u: goto label_2faa44;
        case 0x2faa48u: goto label_2faa48;
        case 0x2faa4cu: goto label_2faa4c;
        case 0x2faa50u: goto label_2faa50;
        case 0x2faa54u: goto label_2faa54;
        case 0x2faa58u: goto label_2faa58;
        case 0x2faa5cu: goto label_2faa5c;
        case 0x2faa60u: goto label_2faa60;
        case 0x2faa64u: goto label_2faa64;
        case 0x2faa68u: goto label_2faa68;
        case 0x2faa6cu: goto label_2faa6c;
        case 0x2faa70u: goto label_2faa70;
        case 0x2faa74u: goto label_2faa74;
        case 0x2faa78u: goto label_2faa78;
        case 0x2faa7cu: goto label_2faa7c;
        case 0x2faa80u: goto label_2faa80;
        case 0x2faa84u: goto label_2faa84;
        case 0x2faa88u: goto label_2faa88;
        case 0x2faa8cu: goto label_2faa8c;
        case 0x2faa90u: goto label_2faa90;
        case 0x2faa94u: goto label_2faa94;
        case 0x2faa98u: goto label_2faa98;
        case 0x2faa9cu: goto label_2faa9c;
        case 0x2faaa0u: goto label_2faaa0;
        case 0x2faaa4u: goto label_2faaa4;
        case 0x2faaa8u: goto label_2faaa8;
        case 0x2faaacu: goto label_2faaac;
        case 0x2faab0u: goto label_2faab0;
        case 0x2faab4u: goto label_2faab4;
        case 0x2faab8u: goto label_2faab8;
        case 0x2faabcu: goto label_2faabc;
        case 0x2faac0u: goto label_2faac0;
        case 0x2faac4u: goto label_2faac4;
        case 0x2faac8u: goto label_2faac8;
        case 0x2faaccu: goto label_2faacc;
        case 0x2faad0u: goto label_2faad0;
        case 0x2faad4u: goto label_2faad4;
        case 0x2faad8u: goto label_2faad8;
        case 0x2faadcu: goto label_2faadc;
        case 0x2faae0u: goto label_2faae0;
        case 0x2faae4u: goto label_2faae4;
        case 0x2faae8u: goto label_2faae8;
        case 0x2faaecu: goto label_2faaec;
        case 0x2faaf0u: goto label_2faaf0;
        case 0x2faaf4u: goto label_2faaf4;
        case 0x2faaf8u: goto label_2faaf8;
        case 0x2faafcu: goto label_2faafc;
        case 0x2fab00u: goto label_2fab00;
        case 0x2fab04u: goto label_2fab04;
        case 0x2fab08u: goto label_2fab08;
        case 0x2fab0cu: goto label_2fab0c;
        case 0x2fab10u: goto label_2fab10;
        case 0x2fab14u: goto label_2fab14;
        case 0x2fab18u: goto label_2fab18;
        case 0x2fab1cu: goto label_2fab1c;
        case 0x2fab20u: goto label_2fab20;
        case 0x2fab24u: goto label_2fab24;
        case 0x2fab28u: goto label_2fab28;
        case 0x2fab2cu: goto label_2fab2c;
        case 0x2fab30u: goto label_2fab30;
        case 0x2fab34u: goto label_2fab34;
        case 0x2fab38u: goto label_2fab38;
        case 0x2fab3cu: goto label_2fab3c;
        case 0x2fab40u: goto label_2fab40;
        case 0x2fab44u: goto label_2fab44;
        case 0x2fab48u: goto label_2fab48;
        case 0x2fab4cu: goto label_2fab4c;
        case 0x2fab50u: goto label_2fab50;
        case 0x2fab54u: goto label_2fab54;
        case 0x2fab58u: goto label_2fab58;
        case 0x2fab5cu: goto label_2fab5c;
        case 0x2fab60u: goto label_2fab60;
        case 0x2fab64u: goto label_2fab64;
        case 0x2fab68u: goto label_2fab68;
        case 0x2fab6cu: goto label_2fab6c;
        case 0x2fab70u: goto label_2fab70;
        case 0x2fab74u: goto label_2fab74;
        case 0x2fab78u: goto label_2fab78;
        case 0x2fab7cu: goto label_2fab7c;
        case 0x2fab80u: goto label_2fab80;
        case 0x2fab84u: goto label_2fab84;
        case 0x2fab88u: goto label_2fab88;
        case 0x2fab8cu: goto label_2fab8c;
        case 0x2fab90u: goto label_2fab90;
        case 0x2fab94u: goto label_2fab94;
        case 0x2fab98u: goto label_2fab98;
        case 0x2fab9cu: goto label_2fab9c;
        case 0x2faba0u: goto label_2faba0;
        case 0x2faba4u: goto label_2faba4;
        case 0x2faba8u: goto label_2faba8;
        case 0x2fabacu: goto label_2fabac;
        case 0x2fabb0u: goto label_2fabb0;
        case 0x2fabb4u: goto label_2fabb4;
        case 0x2fabb8u: goto label_2fabb8;
        case 0x2fabbcu: goto label_2fabbc;
        case 0x2fabc0u: goto label_2fabc0;
        case 0x2fabc4u: goto label_2fabc4;
        case 0x2fabc8u: goto label_2fabc8;
        case 0x2fabccu: goto label_2fabcc;
        case 0x2fabd0u: goto label_2fabd0;
        case 0x2fabd4u: goto label_2fabd4;
        case 0x2fabd8u: goto label_2fabd8;
        case 0x2fabdcu: goto label_2fabdc;
        case 0x2fabe0u: goto label_2fabe0;
        case 0x2fabe4u: goto label_2fabe4;
        case 0x2fabe8u: goto label_2fabe8;
        case 0x2fabecu: goto label_2fabec;
        case 0x2fabf0u: goto label_2fabf0;
        case 0x2fabf4u: goto label_2fabf4;
        case 0x2fabf8u: goto label_2fabf8;
        case 0x2fabfcu: goto label_2fabfc;
        case 0x2fac00u: goto label_2fac00;
        case 0x2fac04u: goto label_2fac04;
        case 0x2fac08u: goto label_2fac08;
        case 0x2fac0cu: goto label_2fac0c;
        case 0x2fac10u: goto label_2fac10;
        case 0x2fac14u: goto label_2fac14;
        case 0x2fac18u: goto label_2fac18;
        case 0x2fac1cu: goto label_2fac1c;
        case 0x2fac20u: goto label_2fac20;
        case 0x2fac24u: goto label_2fac24;
        case 0x2fac28u: goto label_2fac28;
        case 0x2fac2cu: goto label_2fac2c;
        case 0x2fac30u: goto label_2fac30;
        case 0x2fac34u: goto label_2fac34;
        case 0x2fac38u: goto label_2fac38;
        case 0x2fac3cu: goto label_2fac3c;
        case 0x2fac40u: goto label_2fac40;
        case 0x2fac44u: goto label_2fac44;
        case 0x2fac48u: goto label_2fac48;
        case 0x2fac4cu: goto label_2fac4c;
        case 0x2fac50u: goto label_2fac50;
        case 0x2fac54u: goto label_2fac54;
        case 0x2fac58u: goto label_2fac58;
        case 0x2fac5cu: goto label_2fac5c;
        case 0x2fac60u: goto label_2fac60;
        case 0x2fac64u: goto label_2fac64;
        case 0x2fac68u: goto label_2fac68;
        case 0x2fac6cu: goto label_2fac6c;
        case 0x2fac70u: goto label_2fac70;
        case 0x2fac74u: goto label_2fac74;
        case 0x2fac78u: goto label_2fac78;
        case 0x2fac7cu: goto label_2fac7c;
        case 0x2fac80u: goto label_2fac80;
        case 0x2fac84u: goto label_2fac84;
        case 0x2fac88u: goto label_2fac88;
        case 0x2fac8cu: goto label_2fac8c;
        case 0x2fac90u: goto label_2fac90;
        case 0x2fac94u: goto label_2fac94;
        case 0x2fac98u: goto label_2fac98;
        case 0x2fac9cu: goto label_2fac9c;
        case 0x2faca0u: goto label_2faca0;
        case 0x2faca4u: goto label_2faca4;
        case 0x2faca8u: goto label_2faca8;
        case 0x2facacu: goto label_2facac;
        case 0x2facb0u: goto label_2facb0;
        case 0x2facb4u: goto label_2facb4;
        case 0x2facb8u: goto label_2facb8;
        case 0x2facbcu: goto label_2facbc;
        case 0x2facc0u: goto label_2facc0;
        case 0x2facc4u: goto label_2facc4;
        case 0x2facc8u: goto label_2facc8;
        case 0x2facccu: goto label_2faccc;
        case 0x2facd0u: goto label_2facd0;
        case 0x2facd4u: goto label_2facd4;
        case 0x2facd8u: goto label_2facd8;
        case 0x2facdcu: goto label_2facdc;
        case 0x2face0u: goto label_2face0;
        case 0x2face4u: goto label_2face4;
        case 0x2face8u: goto label_2face8;
        case 0x2facecu: goto label_2facec;
        case 0x2facf0u: goto label_2facf0;
        case 0x2facf4u: goto label_2facf4;
        case 0x2facf8u: goto label_2facf8;
        case 0x2facfcu: goto label_2facfc;
        case 0x2fad00u: goto label_2fad00;
        case 0x2fad04u: goto label_2fad04;
        case 0x2fad08u: goto label_2fad08;
        case 0x2fad0cu: goto label_2fad0c;
        case 0x2fad10u: goto label_2fad10;
        case 0x2fad14u: goto label_2fad14;
        case 0x2fad18u: goto label_2fad18;
        case 0x2fad1cu: goto label_2fad1c;
        case 0x2fad20u: goto label_2fad20;
        case 0x2fad24u: goto label_2fad24;
        case 0x2fad28u: goto label_2fad28;
        case 0x2fad2cu: goto label_2fad2c;
        default: break;
    }

    ctx->pc = 0x2fa750u;

label_2fa750:
    // 0x2fa750: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fa750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fa754:
    // 0x2fa754: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x2fa754u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
label_2fa758:
    // 0x2fa758: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2fa758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2fa75c:
    // 0x2fa75c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x2fa75cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fa760:
    // 0x2fa760: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x2fa760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
label_2fa764:
    // 0x2fa764: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2fa764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2fa768:
    // 0x2fa768: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x2fa768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
label_2fa76c:
    // 0x2fa76c: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x2fa76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
label_2fa770:
    // 0x2fa770: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2fa770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2fa774:
    // 0x2fa774: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x2fa774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_2fa778:
    // 0x2fa778: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2fa778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2fa77c:
    // 0x2fa77c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2fa77cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2fa780:
    // 0x2fa780: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x2fa780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
label_2fa784:
    // 0x2fa784: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2fa784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2fa788:
    // 0x2fa788: 0xffbf0098  sd          $ra, 0x98($sp)
    ctx->pc = 0x2fa788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 31));
label_2fa78c:
    // 0x2fa78c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fa78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_2fa790:
    // 0x2fa790: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2fa790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa794:
    // 0x2fa794: 0x8e651364  lw          $a1, 0x1364($s3)
    ctx->pc = 0x2fa794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4964)));
label_2fa798:
    // 0x2fa798: 0x92621371  lbu         $v0, 0x1371($s3)
    ctx->pc = 0x2fa798u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4977)));
label_2fa79c:
    // 0x2fa79c: 0x8e63136c  lw          $v1, 0x136C($s3)
    ctx->pc = 0x2fa79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4972)));
label_2fa7a0:
    // 0x2fa7a0: 0xae6511e8  sw          $a1, 0x11E8($s3)
    ctx->pc = 0x2fa7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4584), GPR_U32(ctx, 5));
label_2fa7a4:
    // 0x2fa7a4: 0xae6211fc  sw          $v0, 0x11FC($s3)
    ctx->pc = 0x2fa7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4604), GPR_U32(ctx, 2));
label_2fa7a8:
    // 0x2fa7a8: 0xaca31100  sw          $v1, 0x1100($a1)
    ctx->pc = 0x2fa7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4352), GPR_U32(ctx, 3));
label_2fa7ac:
    // 0x2fa7ac: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2fa7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa7b0:
    // 0x2fa7b0: 0x8ce5cd60  lw          $a1, -0x32A0($a3)
    ctx->pc = 0x2fa7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954336)));
label_2fa7b4:
    // 0x2fa7b4: 0x8c741100  lw          $s4, 0x1100($v1)
    ctx->pc = 0x2fa7b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4352)));
label_2fa7b8:
    // 0x2fa7b8: 0x8e820224  lw          $v0, 0x224($s4)
    ctx->pc = 0x2fa7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
label_2fa7bc:
    // 0x2fa7bc: 0xc0d9cc2  jal         func_367308
label_2fa7c0:
    if (ctx->pc == 0x2FA7C0u) {
        ctx->pc = 0x2FA7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7BCu;
        // 0x2fa7c0: 0x2456002e  addiu       $s6, $v0, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA7C4u;
        goto label_2fa7c4;
    }
    ctx->pc = 0x2FA7BCu;
    SET_GPR_U32(ctx, 31, 0x2FA7C4u);
    ctx->pc = 0x2FA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7BCu;
    // 0x2fa7c0: 0x2456002e  addiu       $s6, $v0, 0x2E (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 46));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x2FA7BCu, 0x2FA7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7C4u;
label_2fa7c4:
    // 0x2fa7c4: 0x8e6411e8  lw          $a0, 0x11E8($s3)
    ctx->pc = 0x2fa7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa7c8:
    // 0x2fa7c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fa7cc:
    // 0x2fa7cc: 0x8c51bd30  lw          $s1, -0x42D0($v0)
    ctx->pc = 0x2fa7ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_2fa7d0:
    // 0x2fa7d0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2fa7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa7d4:
    // 0x2fa7d4: 0x8c820334  lw          $v0, 0x334($a0)
    ctx->pc = 0x2fa7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_2fa7d8:
    // 0x2fa7d8: 0x8e630334  lw          $v1, 0x334($s3)
    ctx->pc = 0x2fa7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fa7dc:
    // 0x2fa7dc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa7dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa7e0:
    // 0x2fa7e0: 0x8e651380  lw          $a1, 0x1380($s3)
    ctx->pc = 0x2fa7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4992)));
label_2fa7e4:
    // 0x2fa7e4: 0x8c700150  lw          $s0, 0x150($v1)
    ctx->pc = 0x2fa7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_2fa7e8:
    // 0x2fa7e8: 0xc0b5bc0  jal         func_2D6F00
label_2fa7ec:
    if (ctx->pc == 0x2FA7ECu) {
        ctx->pc = 0x2FA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7E8u;
        // 0x2fa7ec: 0x8c520150  lw          $s2, 0x150($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA7F0u;
        goto label_2fa7f0;
    }
    ctx->pc = 0x2FA7E8u;
    SET_GPR_U32(ctx, 31, 0x2FA7F0u);
    ctx->pc = 0x2FA7ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7E8u;
    // 0x2fa7ec: 0x8c520150  lw          $s2, 0x150($v0) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2FA7E8u, 0x2FA7F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA7F0u;
label_2fa7f0:
    // 0x2fa7f0: 0x8e651380  lw          $a1, 0x1380($s3)
    ctx->pc = 0x2fa7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4992)));
label_2fa7f4:
    // 0x2fa7f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa7f8:
    // 0x2fa7f8: 0xc0b5bc0  jal         func_2D6F00
label_2fa7fc:
    if (ctx->pc == 0x2FA7FCu) {
        ctx->pc = 0x2FA7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA7F8u;
        // 0x2fa7fc: 0x8e6611e8  lw          $a2, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA800u;
        goto label_2fa800;
    }
    ctx->pc = 0x2FA7F8u;
    SET_GPR_U32(ctx, 31, 0x2FA800u);
    ctx->pc = 0x2FA7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA7F8u;
    // 0x2fa7fc: 0x8e6611e8  lw          $a2, 0x11E8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2FA7F8u, 0x2FA800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA800u;
label_2fa800:
    // 0x2fa800: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x2fa800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fa804:
    // 0x2fa804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa808:
    // 0x2fa808: 0xc069bc8  jal         func_1A6F20
label_2fa80c:
    if (ctx->pc == 0x2FA80Cu) {
        ctx->pc = 0x2FA80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA808u;
        // 0x2fa80c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA810u;
        goto label_2fa810;
    }
    ctx->pc = 0x2FA808u;
    SET_GPR_U32(ctx, 31, 0x2FA810u);
    ctx->pc = 0x2FA80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA808u;
    // 0x2fa80c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6F20u, 0x2FA808u, 0x2FA810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA810u;
label_2fa810:
    // 0x2fa810: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x2fa810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fa814:
    // 0x2fa814: 0xc06a05e  jal         func_1A8178
label_2fa818:
    if (ctx->pc == 0x2FA818u) {
        ctx->pc = 0x2FA818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA814u;
        // 0x2fa818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA81Cu;
        goto label_2fa81c;
    }
    ctx->pc = 0x2FA814u;
    SET_GPR_U32(ctx, 31, 0x2FA81Cu);
    ctx->pc = 0x2FA818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA814u;
    // 0x2fa818: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FA814u, 0x2FA81Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA81Cu;
label_2fa81c:
    // 0x2fa81c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2fa81cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2fa820:
    // 0x2fa820: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa824:
    // 0x2fa824: 0x24849b28  addiu       $a0, $a0, -0x64D8
    ctx->pc = 0x2fa824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
label_2fa828:
    // 0x2fa828: 0xc07f8de  jal         func_1FE378
label_2fa82c:
    if (ctx->pc == 0x2FA82Cu) {
        ctx->pc = 0x2FA82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA828u;
        // 0x2fa82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA830u;
        goto label_2fa830;
    }
    ctx->pc = 0x2FA828u;
    SET_GPR_U32(ctx, 31, 0x2FA830u);
    ctx->pc = 0x2FA82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA828u;
    // 0x2fa82c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE378u, 0x2FA828u, 0x2FA830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA830u;
label_2fa830:
    // 0x2fa830: 0x3ac20044  xori        $v0, $s6, 0x44
    ctx->pc = 0x2fa830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)68);
label_2fa834:
    // 0x2fa834: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x2fa834u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2fa838:
    // 0x2fa838: 0x12a00002  beqz        $s5, . + 4 + (0x2 << 2)
label_2fa83c:
    if (ctx->pc == 0x2FA83Cu) {
        ctx->pc = 0x2FA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA838u;
        // 0x2fa83c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA840u;
        goto label_2fa840;
    }
    ctx->pc = 0x2FA838u;
    {
        const bool branch_taken_0x2fa838 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA838u;
        // 0x2fa83c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa838) {
            ctx->pc = 0x2FA844u;
            goto label_2fa844;
        }
    }
    ctx->pc = 0x2FA840u;
label_2fa840:
    // 0x2fa840: 0xa26211bd  sb          $v0, 0x11BD($s3)
    ctx->pc = 0x2fa840u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4541), (uint8_t)GPR_U32(ctx, 2));
label_2fa844:
    // 0x2fa844: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x2fa844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fa848:
    // 0x2fa848: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2fa848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2fa84c:
    // 0x2fa84c: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x2fa84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
label_2fa850:
    // 0x2fa850: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2fa854:
    if (ctx->pc == 0x2FA854u) {
        ctx->pc = 0x2FA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA850u;
        // 0x2fa854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA858u;
        goto label_2fa858;
    }
    ctx->pc = 0x2FA850u;
    {
        const bool branch_taken_0x2fa850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2FA854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA850u;
        // 0x2fa854: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa850) {
            ctx->pc = 0x2FA868u;
            goto label_2fa868;
        }
    }
    ctx->pc = 0x2FA858u;
label_2fa858:
    // 0x2fa858: 0xc069712  jal         func_1A5C48
label_2fa85c:
    if (ctx->pc == 0x2FA85Cu) {
        ctx->pc = 0x2FA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA858u;
        // 0x2fa85c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA860u;
        goto label_2fa860;
    }
    ctx->pc = 0x2FA858u;
    SET_GPR_U32(ctx, 31, 0x2FA860u);
    ctx->pc = 0x2FA85Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA858u;
    // 0x2fa85c: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FA858u, 0x2FA860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA860u;
label_2fa860:
    // 0x2fa860: 0x10000127  b           . + 4 + (0x127 << 2)
label_2fa864:
    if (ctx->pc == 0x2FA864u) {
        ctx->pc = 0x2FA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA860u;
        // 0x2fa864: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA868u;
        goto label_2fa868;
    }
    ctx->pc = 0x2FA860u;
    {
        const bool branch_taken_0x2fa860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA860u;
        // 0x2fa864: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa860) {
            ctx->pc = 0x2FAD00u;
            goto label_2fad00;
        }
    }
    ctx->pc = 0x2FA868u;
label_2fa868:
    // 0x2fa868: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2fa868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa86c:
    // 0x2fa86c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fa86cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fa870:
    // 0x2fa870: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fa870u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fa874:
    // 0x2fa874: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa874u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa878:
    // 0x2fa878: 0x8c440334  lw          $a0, 0x334($v0)
    ctx->pc = 0x2fa878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_2fa87c:
    // 0x2fa87c: 0xc069900  jal         func_1A6400
label_2fa880:
    if (ctx->pc == 0x2FA880u) {
        ctx->pc = 0x2FA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA87Cu;
        // 0x2fa880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA884u;
        goto label_2fa884;
    }
    ctx->pc = 0x2FA87Cu;
    SET_GPR_U32(ctx, 31, 0x2FA884u);
    ctx->pc = 0x2FA880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA87Cu;
    // 0x2fa880: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6400u, 0x2FA87Cu, 0x2FA884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA884u;
label_2fa884:
    // 0x2fa884: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2fa884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa888:
    // 0x2fa888: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fa888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa88c:
    // 0x2fa88c: 0xc06a05e  jal         func_1A8178
label_2fa890:
    if (ctx->pc == 0x2FA890u) {
        ctx->pc = 0x2FA890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA88Cu;
        // 0x2fa890: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA894u;
        goto label_2fa894;
    }
    ctx->pc = 0x2FA88Cu;
    SET_GPR_U32(ctx, 31, 0x2FA894u);
    ctx->pc = 0x2FA890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA88Cu;
    // 0x2fa890: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8178u, 0x2FA88Cu, 0x2FA894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA894u;
label_2fa894:
    // 0x2fa894: 0x8e6511e8  lw          $a1, 0x11E8($s3)
    ctx->pc = 0x2fa894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa898:
    // 0x2fa898: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2fa898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2fa89c:
    // 0x2fa89c: 0x8ca20334  lw          $v0, 0x334($a1)
    ctx->pc = 0x2fa89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
label_2fa8a0:
    // 0x2fa8a0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2fa8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2fa8a4:
    // 0x2fa8a4: 0x1064000c  beq         $v1, $a0, . + 4 + (0xC << 2)
label_2fa8a8:
    if (ctx->pc == 0x2FA8A8u) {
        ctx->pc = 0x2FA8ACu;
        goto label_2fa8ac;
    }
    ctx->pc = 0x2FA8A4u;
    {
        const bool branch_taken_0x2fa8a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x2fa8a4) {
            ctx->pc = 0x2FA8D8u;
            goto label_2fa8d8;
        }
    }
    ctx->pc = 0x2FA8ACu;
label_2fa8ac:
    // 0x2fa8ac: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x2fa8acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2fa8b0:
    // 0x2fa8b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fa8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa8b4:
    // 0x2fa8b4: 0xc069712  jal         func_1A5C48
label_2fa8b8:
    if (ctx->pc == 0x2FA8B8u) {
        ctx->pc = 0x2FA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8B4u;
        // 0x2fa8b8: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA8BCu;
        goto label_2fa8bc;
    }
    ctx->pc = 0x2FA8B4u;
    SET_GPR_U32(ctx, 31, 0x2FA8BCu);
    ctx->pc = 0x2FA8B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8B4u;
    // 0x2fa8b8: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FA8B4u, 0x2FA8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8BCu;
label_2fa8bc:
    // 0x2fa8bc: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2fa8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa8c0:
    // 0x2fa8c0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fa8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa8c4:
    // 0x2fa8c4: 0x2406080d  addiu       $a2, $zero, 0x80D
    ctx->pc = 0x2fa8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
label_2fa8c8:
    // 0x2fa8c8: 0xc069712  jal         func_1A5C48
label_2fa8cc:
    if (ctx->pc == 0x2FA8CCu) {
        ctx->pc = 0x2FA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8C8u;
        // 0x2fa8cc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA8D0u;
        goto label_2fa8d0;
    }
    ctx->pc = 0x2FA8C8u;
    SET_GPR_U32(ctx, 31, 0x2FA8D0u);
    ctx->pc = 0x2FA8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA8C8u;
    // 0x2fa8cc: 0x8c440334  lw          $a0, 0x334($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x2FA8C8u, 0x2FA8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA8D0u;
label_2fa8d0:
    // 0x2fa8d0: 0x1000010b  b           . + 4 + (0x10B << 2)
label_2fa8d4:
    if (ctx->pc == 0x2FA8D4u) {
        ctx->pc = 0x2FA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8D0u;
        // 0x2fa8d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA8D8u;
        goto label_2fa8d8;
    }
    ctx->pc = 0x2FA8D0u;
    {
        const bool branch_taken_0x2fa8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8D0u;
        // 0x2fa8d4: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa8d0) {
            ctx->pc = 0x2FAD00u;
            goto label_2fad00;
        }
    }
    ctx->pc = 0x2FA8D8u;
label_2fa8d8:
    // 0x2fa8d8: 0x56a00047  bnel        $s5, $zero, . + 4 + (0x47 << 2)
label_2fa8dc:
    if (ctx->pc == 0x2FA8DCu) {
        ctx->pc = 0x2FA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8D8u;
        // 0x2fa8dc: 0xacb30394  sw          $s3, 0x394($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA8E0u;
        goto label_2fa8e0;
    }
    ctx->pc = 0x2FA8D8u;
    {
        const bool branch_taken_0x2fa8d8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8d8) {
            ctx->pc = 0x2FA8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA8D8u;
            // 0x2fa8dc: 0xacb30394  sw          $s3, 0x394($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 916), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA9F8u;
            goto label_2fa9f8;
        }
    }
    ctx->pc = 0x2FA8E0u;
label_2fa8e0:
    // 0x2fa8e0: 0x868202c4  lh          $v0, 0x2C4($s4)
    ctx->pc = 0x2fa8e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 708)));
label_2fa8e4:
    // 0x2fa8e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2fa8e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2fa8e8:
    // 0x2fa8e8: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_2fa8ec:
    if (ctx->pc == 0x2FA8ECu) {
        ctx->pc = 0x2FA8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA8E8u;
        // 0x2fa8ec: 0x8e6211e8  lw          $v0, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA8F0u;
        goto label_2fa8f0;
    }
    ctx->pc = 0x2FA8E8u;
    {
        const bool branch_taken_0x2fa8e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa8e8) {
            ctx->pc = 0x2FA8ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA8E8u;
            // 0x2fa8ec: 0x8e6211e8  lw          $v0, 0x11E8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA92Cu;
            goto label_2fa92c;
        }
    }
    ctx->pc = 0x2FA8F0u;
label_2fa8f0:
    // 0x2fa8f0: 0x8e9002c8  lw          $s0, 0x2C8($s4)
    ctx->pc = 0x2fa8f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 712)));
label_2fa8f4:
    // 0x2fa8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fa8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa8f8:
    // 0x2fa8f8: 0x8e651380  lw          $a1, 0x1380($s3)
    ctx->pc = 0x2fa8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4992)));
label_2fa8fc:
    // 0x2fa8fc: 0x8e9102c0  lw          $s1, 0x2C0($s4)
    ctx->pc = 0x2fa8fcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_2fa900:
    // 0x2fa900: 0xc0b5bc0  jal         func_2D6F00
label_2fa904:
    if (ctx->pc == 0x2FA904u) {
        ctx->pc = 0x2FA904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA900u;
        // 0x2fa904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA908u;
        goto label_2fa908;
    }
    ctx->pc = 0x2FA900u;
    SET_GPR_U32(ctx, 31, 0x2FA908u);
    ctx->pc = 0x2FA904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA900u;
    // 0x2fa904: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6F00u, 0x2FA900u, 0x2FA908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA908u;
label_2fa908:
    // 0x2fa908: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2fa908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2fa90c:
    // 0x2fa90c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa90cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa910:
    // 0x2fa910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2fa910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa914:
    // 0x2fa914: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa914u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa918:
    // 0x2fa918: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x2fa918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_2fa91c:
    // 0x2fa91c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2fa91cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa920:
    // 0x2fa920: 0x40f809  jalr        $v0
label_2fa924:
    if (ctx->pc == 0x2FA924u) {
        ctx->pc = 0x2FA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA920u;
        // 0x2fa924: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA928u;
        goto label_2fa928;
    }
    ctx->pc = 0x2FA920u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FA928u);
        ctx->pc = 0x2FA924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA920u;
        // 0x2fa924: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA920u, 0x2FA928u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA928u;
label_2fa928:
    // 0x2fa928: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2fa928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa92c:
    // 0x2fa92c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fa92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa930:
    // 0x2fa930: 0xc0bd62c  jal         func_2F58B0
label_2fa934:
    if (ctx->pc == 0x2FA934u) {
        ctx->pc = 0x2FA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA930u;
        // 0x2fa934: 0xac530394  sw          $s3, 0x394($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 916), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA938u;
        goto label_2fa938;
    }
    ctx->pc = 0x2FA930u;
    SET_GPR_U32(ctx, 31, 0x2FA938u);
    ctx->pc = 0x2FA934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA930u;
    // 0x2fa934: 0xac530394  sw          $s3, 0x394($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 916), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2FA930u, 0x2FA938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA938u;
label_2fa938:
    // 0x2fa938: 0xc0b1488  jal         func_2C5220
label_2fa93c:
    if (ctx->pc == 0x2FA93Cu) {
        ctx->pc = 0x2FA93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA938u;
        // 0x2fa93c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA940u;
        goto label_2fa940;
    }
    ctx->pc = 0x2FA938u;
    SET_GPR_U32(ctx, 31, 0x2FA940u);
    ctx->pc = 0x2FA93Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA938u;
    // 0x2fa93c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2FA938u, 0x2FA940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA940u;
label_2fa940:
    // 0x2fa940: 0xc0f6a96  jal         func_3DAA58
label_2fa944:
    if (ctx->pc == 0x2FA944u) {
        ctx->pc = 0x2FA944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA940u;
        // 0x2fa944: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA948u;
        goto label_2fa948;
    }
    ctx->pc = 0x2FA940u;
    SET_GPR_U32(ctx, 31, 0x2FA948u);
    ctx->pc = 0x2FA944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA940u;
    // 0x2fa944: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2FA940u, 0x2FA948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA948u;
label_2fa948:
    // 0x2fa948: 0x8e6411e8  lw          $a0, 0x11E8($s3)
    ctx->pc = 0x2fa948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fa94c:
    // 0x2fa94c: 0xc096452  jal         func_259148
label_2fa950:
    if (ctx->pc == 0x2FA950u) {
        ctx->pc = 0x2FA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA94Cu;
        // 0x2fa950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA954u;
        goto label_2fa954;
    }
    ctx->pc = 0x2FA94Cu;
    SET_GPR_U32(ctx, 31, 0x2FA954u);
    ctx->pc = 0x2FA950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA94Cu;
    // 0x2fa950: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259148u, 0x2FA94Cu, 0x2FA954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA954u;
label_2fa954:
    // 0x2fa954: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2fa954u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2fa958:
    // 0x2fa958: 0x26820290  addiu       $v0, $s4, 0x290
    ctx->pc = 0x2fa958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 656));
label_2fa95c:
    // 0x2fa95c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa95cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa960:
    // 0x2fa960: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2fa960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa964:
    // 0x2fa964: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2fa964u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2fa968:
    // 0x2fa968: 0x268302a0  addiu       $v1, $s4, 0x2A0
    ctx->pc = 0x2fa968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 672));
label_2fa96c:
    // 0x2fa96c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2fa96cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2fa970:
    // 0x2fa970: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2fa970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa974:
    // 0x2fa974: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2fa974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_2fa978:
    // 0x2fa978: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x2fa978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2fa97c:
    // 0x2fa97c: 0x24425b40  addiu       $v0, $v0, 0x5B40
    ctx->pc = 0x2fa97cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_2fa980:
    // 0x2fa980: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2fa980u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa984:
    // 0x2fa984: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2fa984u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa988:
    // 0x2fa988: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fa988u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fa98c:
    // 0x2fa98c: 0xda220000  lqc2        $vf2, 0x0($s1)
    ctx->pc = 0x2fa98cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fa990:
    // 0x2fa990: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2fa990u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2fa994:
    // 0x2fa994: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2fa994u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2fa998:
    // 0x2fa998: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fa998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa99c:
    // 0x2fa99c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fa99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa9a0:
    // 0x2fa9a0: 0xc08fd62  jal         func_23F588
label_2fa9a4:
    if (ctx->pc == 0x2FA9A4u) {
        ctx->pc = 0x2FA9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9A0u;
        // 0x2fa9a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA9A8u;
        goto label_2fa9a8;
    }
    ctx->pc = 0x2FA9A0u;
    SET_GPR_U32(ctx, 31, 0x2FA9A8u);
    ctx->pc = 0x2FA9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9A0u;
    // 0x2fa9a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23F588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23F588u, 0x2FA9A0u, 0x2FA9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9A8u;
label_2fa9a8:
    // 0x2fa9a8: 0x8e630104  lw          $v1, 0x104($s3)
    ctx->pc = 0x2fa9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_2fa9ac:
    // 0x2fa9ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fa9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fa9b0:
    // 0x2fa9b0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x2fa9b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa9b4:
    // 0x2fa9b4: 0xf8410040  sqc2        $vf1, 0x40($v0)
    ctx->pc = 0x2fa9b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa9b8:
    // 0x2fa9b8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2fa9b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2fa9bc:
    // 0x2fa9bc: 0xf8410050  sqc2        $vf1, 0x50($v0)
    ctx->pc = 0x2fa9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa9c0:
    // 0x2fa9c0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2fa9c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_2fa9c4:
    // 0x2fa9c4: 0xf8410060  sqc2        $vf1, 0x60($v0)
    ctx->pc = 0x2fa9c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa9c8:
    // 0x2fa9c8: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x2fa9c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_2fa9cc:
    // 0x2fa9cc: 0xf8410070  sqc2        $vf1, 0x70($v0)
    ctx->pc = 0x2fa9ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_2fa9d0:
    // 0x2fa9d0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fa9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2fa9d4:
    // 0x2fa9d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fa9d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fa9d8:
    // 0x2fa9d8: 0xc46c96ac  lwc1        $f12, -0x6954($v1)
    ctx->pc = 0x2fa9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2fa9dc:
    // 0x2fa9dc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2fa9dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2fa9e0:
    // 0x2fa9e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fa9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa9e4:
    // 0x2fa9e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa9e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa9e8:
    // 0x2fa9e8: 0xc08e23a  jal         func_2388E8
label_2fa9ec:
    if (ctx->pc == 0x2FA9ECu) {
        ctx->pc = 0x2FA9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9E8u;
        // 0x2fa9ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA9F0u;
        goto label_2fa9f0;
    }
    ctx->pc = 0x2FA9E8u;
    SET_GPR_U32(ctx, 31, 0x2FA9F0u);
    ctx->pc = 0x2FA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9E8u;
    // 0x2fa9ec: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x2FA9E8u, 0x2FA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA9F0u;
label_2fa9f0:
    // 0x2fa9f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fa9f4:
    if (ctx->pc == 0x2FA9F4u) {
        ctx->pc = 0x2FA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9F0u;
        // 0x2fa9f4: 0x8e6211e8  lw          $v0, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA9F8u;
        goto label_2fa9f8;
    }
    ctx->pc = 0x2FA9F0u;
    {
        const bool branch_taken_0x2fa9f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9F0u;
        // 0x2fa9f4: 0x8e6211e8  lw          $v0, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa9f0) {
            ctx->pc = 0x2FAA08u;
            goto label_2faa08;
        }
    }
    ctx->pc = 0x2FA9F8u;
label_2fa9f8:
    // 0x2fa9f8: 0xc0bd62c  jal         func_2F58B0
label_2fa9fc:
    if (ctx->pc == 0x2FA9FCu) {
        ctx->pc = 0x2FA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA9F8u;
        // 0x2fa9fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAA00u;
        goto label_2faa00;
    }
    ctx->pc = 0x2FA9F8u;
    SET_GPR_U32(ctx, 31, 0x2FAA00u);
    ctx->pc = 0x2FA9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA9F8u;
    // 0x2fa9fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x2FA9F8u, 0x2FAA00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA00u;
label_2faa00:
    // 0x2faa00: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x2faa00u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2faa04:
    // 0x2faa04: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2faa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa08:
    // 0x2faa08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2faa08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2faa0c:
    // 0x2faa0c: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x2faa0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2faa10:
    // 0x2faa10: 0x31cb8  dsll        $v1, $v1, 18
    ctx->pc = 0x2faa10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 18);
label_2faa14:
    // 0x2faa14: 0xac450430  sw          $a1, 0x430($v0)
    ctx->pc = 0x2faa14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1072), GPR_U32(ctx, 5));
label_2faa18:
    // 0x2faa18: 0x8e6411e8  lw          $a0, 0x11E8($s3)
    ctx->pc = 0x2faa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa1c:
    // 0x2faa1c: 0xdc821020  ld          $v0, 0x1020($a0)
    ctx->pc = 0x2faa1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4128)));
label_2faa20:
    // 0x2faa20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2faa20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2faa24:
    // 0x2faa24: 0xfc821020  sd          $v0, 0x1020($a0)
    ctx->pc = 0x2faa24u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4128), GPR_U64(ctx, 2));
label_2faa28:
    // 0x2faa28: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faa28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa2c:
    // 0x2faa2c: 0x8c6200c4  lw          $v0, 0xC4($v1)
    ctx->pc = 0x2faa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 196)));
label_2faa30:
    // 0x2faa30: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x2faa30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_2faa34:
    // 0x2faa34: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa38:
    // 0x2faa38: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2faa38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2faa3c:
    // 0x2faa3c: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2faa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2faa40:
    // 0x2faa40: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x2faa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
label_2faa44:
    // 0x2faa44: 0x40f809  jalr        $v0
label_2faa48:
    if (ctx->pc == 0x2FAA48u) {
        ctx->pc = 0x2FAA4Cu;
        goto label_2faa4c;
    }
    ctx->pc = 0x2FAA44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FAA4Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAA44u, 0x2FAA4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FAA4Cu;
label_2faa4c:
    // 0x2faa4c: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faa4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa50:
    // 0x2faa50: 0x8c64010c  lw          $a0, 0x10C($v1)
    ctx->pc = 0x2faa50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_2faa54:
    // 0x2faa54: 0x8c850070  lw          $a1, 0x70($a0)
    ctx->pc = 0x2faa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2faa58:
    // 0x2faa58: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x2faa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
label_2faa5c:
    // 0x2faa5c: 0x40f809  jalr        $v0
label_2faa60:
    if (ctx->pc == 0x2FAA60u) {
        ctx->pc = 0x2FAA64u;
        goto label_2faa64;
    }
    ctx->pc = 0x2FAA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FAA64u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAA5Cu, 0x2FAA64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FAA64u;
label_2faa64:
    // 0x2faa64: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faa64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa68:
    // 0x2faa68: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x2faa68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2faa6c:
    // 0x2faa6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2faa6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2faa70:
    // 0x2faa70: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2faa70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2faa74:
    // 0x2faa74: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2faa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2faa78:
    // 0x2faa78: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2faa78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_2faa7c:
    // 0x2faa7c: 0xc08fed2  jal         func_23FB48
label_2faa80:
    if (ctx->pc == 0x2FAA80u) {
        ctx->pc = 0x2FAA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA7Cu;
        // 0x2faa80: 0x8e6411e8  lw          $a0, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAA84u;
        goto label_2faa84;
    }
    ctx->pc = 0x2FAA7Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA84u);
    ctx->pc = 0x2FAA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA7Cu;
    // 0x2faa80: 0x8e6411e8  lw          $a0, 0x11E8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FAA7Cu, 0x2FAA84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA84u;
label_2faa84:
    // 0x2faa84: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
label_2faa88:
    if (ctx->pc == 0x2FAA88u) {
        ctx->pc = 0x2FAA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA84u;
        // 0x2faa88: 0x8e6311e8  lw          $v1, 0x11E8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAA8Cu;
        goto label_2faa8c;
    }
    ctx->pc = 0x2FAA84u;
    {
        const bool branch_taken_0x2faa84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faa84) {
            ctx->pc = 0x2FAA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAA84u;
            // 0x2faa88: 0x8e6311e8  lw          $v1, 0x11E8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAA98u;
            goto label_2faa98;
        }
    }
    ctx->pc = 0x2FAA8Cu;
label_2faa8c:
    // 0x2faa8c: 0xc0be882  jal         func_2FA208
label_2faa90:
    if (ctx->pc == 0x2FAA90u) {
        ctx->pc = 0x2FAA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAA8Cu;
        // 0x2faa90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAA94u;
        goto label_2faa94;
    }
    ctx->pc = 0x2FAA8Cu;
    SET_GPR_U32(ctx, 31, 0x2FAA94u);
    ctx->pc = 0x2FAA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAA8Cu;
    // 0x2faa90: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA208u, 0x2FAA8Cu, 0x2FAA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAA94u;
label_2faa94:
    // 0x2faa94: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faa98:
    // 0x2faa98: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x2faa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_2faa9c:
    // 0x2faa9c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2faa9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2faaa0:
    // 0x2faaa0: 0xac6200c0  sw          $v0, 0xC0($v1)
    ctx->pc = 0x2faaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 2));
label_2faaa4:
    // 0x2faaa4: 0x8e6311e8  lw          $v1, 0x11E8($s3)
    ctx->pc = 0x2faaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2faaa8:
    // 0x2faaa8: 0x8c640388  lw          $a0, 0x388($v1)
    ctx->pc = 0x2faaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 904)));
label_2faaac:
    // 0x2faaac: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2faab0:
    if (ctx->pc == 0x2FAAB0u) {
        ctx->pc = 0x2FAAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAACu;
        // 0x2faab0: 0x8e660334  lw          $a2, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAAB4u;
        goto label_2faab4;
    }
    ctx->pc = 0x2FAAACu;
    {
        const bool branch_taken_0x2faaac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2faaac) {
            ctx->pc = 0x2FAAB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAAACu;
            // 0x2faab0: 0x8e660334  lw          $a2, 0x334($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAACCu;
            goto label_2faacc;
        }
    }
    ctx->pc = 0x2FAAB4u;
label_2faab4:
    // 0x2faab4: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x2faab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_2faab8:
    // 0x2faab8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_2faabc:
    if (ctx->pc == 0x2FAABCu) {
        ctx->pc = 0x2FAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAB8u;
        // 0x2faabc: 0x8e660334  lw          $a2, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAAC0u;
        goto label_2faac0;
    }
    ctx->pc = 0x2FAAB8u;
    {
        const bool branch_taken_0x2faab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2faab8) {
            ctx->pc = 0x2FAABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FAAB8u;
            // 0x2faabc: 0x8e660334  lw          $a2, 0x334($s3) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FAACCu;
            goto label_2faacc;
        }
    }
    ctx->pc = 0x2FAAC0u;
label_2faac0:
    // 0x2faac0: 0xc09c07c  jal         func_2701F0
label_2faac4:
    if (ctx->pc == 0x2FAAC4u) {
        ctx->pc = 0x2FAAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAC0u;
        // 0x2faac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAAC8u;
        goto label_2faac8;
    }
    ctx->pc = 0x2FAAC0u;
    SET_GPR_U32(ctx, 31, 0x2FAAC8u);
    ctx->pc = 0x2FAAC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAAC0u;
    // 0x2faac4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701F0u, 0x2FAAC0u, 0x2FAAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAAC8u;
label_2faac8:
    // 0x2faac8: 0x8e660334  lw          $a2, 0x334($s3)
    ctx->pc = 0x2faac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_2faacc:
    // 0x2faacc: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2faaccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2faad0:
    // 0x2faad0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2faad4:
    if (ctx->pc == 0x2FAAD4u) {
        ctx->pc = 0x2FAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAD0u;
        // 0x2faad4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAAD8u;
        goto label_2faad8;
    }
    ctx->pc = 0x2FAAD0u;
    {
        const bool branch_taken_0x2faad0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAD0u;
        // 0x2faad4: 0x3c100047  lui         $s0, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faad0) {
            ctx->pc = 0x2FAAE8u;
            goto label_2faae8;
        }
    }
    ctx->pc = 0x2FAAD8u;
label_2faad8:
    // 0x2faad8: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x2faad8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
label_2faadc:
    // 0x2faadc: 0x3c1e0047  lui         $fp, 0x47
    ctx->pc = 0x2faadcu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
label_2faae0:
    // 0x2faae0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2faae4:
    if (ctx->pc == 0x2FAAE4u) {
        ctx->pc = 0x2FAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAE0u;
        // 0x2faae4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAAE8u;
        goto label_2faae8;
    }
    ctx->pc = 0x2FAAE0u;
    {
        const bool branch_taken_0x2faae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAAE0u;
        // 0x2faae4: 0x3c110040  lui         $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faae0) {
            ctx->pc = 0x2FAB1Cu;
            goto label_2fab1c;
        }
    }
    ctx->pc = 0x2FAAE8u;
label_2faae8:
    // 0x2faae8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2faae8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2faaec:
    // 0x2faaec: 0x3c170047  lui         $s7, 0x47
    ctx->pc = 0x2faaecu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)71 << 16));
label_2faaf0:
    // 0x2faaf0: 0x3c1e0047  lui         $fp, 0x47
    ctx->pc = 0x2faaf0u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
label_2faaf4:
    // 0x2faaf4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2faaf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2faaf8:
    // 0x2faaf8: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2faaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2faafc:
    // 0x2faafc: 0x0  nop
    ctx->pc = 0x2faafcu;
    // NOP
label_2fab00:
    // 0x2fab00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fab00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fab04:
    // 0x2fab04: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2fab08:
    if (ctx->pc == 0x2FAB08u) {
        ctx->pc = 0x2FAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB04u;
        // 0x2fab08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB0Cu;
        goto label_2fab0c;
    }
    ctx->pc = 0x2FAB04u;
    {
        const bool branch_taken_0x2fab04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB04u;
        // 0x2fab08: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab04) {
            ctx->pc = 0x2FAB1Cu;
            goto label_2fab1c;
        }
    }
    ctx->pc = 0x2FAB0Cu;
label_2fab0c:
    // 0x2fab0c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fab0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fab10:
    // 0x2fab10: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2fab14:
    if (ctx->pc == 0x2FAB14u) {
        ctx->pc = 0x2FAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB10u;
        // 0x2fab14: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB18u;
        goto label_2fab18;
    }
    ctx->pc = 0x2FAB10u;
    {
        const bool branch_taken_0x2fab10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB10u;
        // 0x2fab14: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab10) {
            ctx->pc = 0x2FAB00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fab00;
        }
    }
    ctx->pc = 0x2FAB18u;
label_2fab18:
    // 0x2fab18: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fab18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fab1c:
    // 0x2fab1c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fab1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fab20:
    // 0x2fab20: 0xc073e86  jal         func_1CFA18
label_2fab24:
    if (ctx->pc == 0x2FAB24u) {
        ctx->pc = 0x2FAB28u;
        goto label_2fab28;
    }
    ctx->pc = 0x2FAB20u;
    SET_GPR_U32(ctx, 31, 0x2FAB28u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FAB20u, 0x2FAB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB28u;
label_2fab28:
    // 0x2fab28: 0x8e6211e8  lw          $v0, 0x11E8($s3)
    ctx->pc = 0x2fab28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2fab2c:
    // 0x2fab2c: 0x8c460334  lw          $a2, 0x334($v0)
    ctx->pc = 0x2fab2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 820)));
label_2fab30:
    // 0x2fab30: 0x8cc401e4  lw          $a0, 0x1E4($a2)
    ctx->pc = 0x2fab30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 484)));
label_2fab34:
    // 0x2fab34: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
label_2fab38:
    if (ctx->pc == 0x2FAB38u) {
        ctx->pc = 0x2FAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB34u;
        // 0x2fab38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB3Cu;
        goto label_2fab3c;
    }
    ctx->pc = 0x2FAB34u;
    {
        const bool branch_taken_0x2fab34 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB34u;
        // 0x2fab38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab34) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FAB3Cu;
label_2fab3c:
    // 0x2fab3c: 0x24c301ec  addiu       $v1, $a2, 0x1EC
    ctx->pc = 0x2fab3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 492));
label_2fab40:
    // 0x2fab40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2fab40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fab44:
    // 0x2fab44: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2fab48:
    if (ctx->pc == 0x2FAB48u) {
        ctx->pc = 0x2FAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB44u;
        // 0x2fab48: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB4Cu;
        goto label_2fab4c;
    }
    ctx->pc = 0x2FAB44u;
    {
        const bool branch_taken_0x2fab44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB44u;
        // 0x2fab48: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab44) {
            ctx->pc = 0x2FAB5Cu;
            goto label_2fab5c;
        }
    }
    ctx->pc = 0x2FAB4Cu;
label_2fab4c:
    // 0x2fab4c: 0x28a20004  slti        $v0, $a1, 0x4
    ctx->pc = 0x2fab4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4) ? 1 : 0);
label_2fab50:
    // 0x2fab50: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_2fab54:
    if (ctx->pc == 0x2FAB54u) {
        ctx->pc = 0x2FAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB50u;
        // 0x2fab54: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB58u;
        goto label_2fab58;
    }
    ctx->pc = 0x2FAB50u;
    {
        const bool branch_taken_0x2fab50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB50u;
        // 0x2fab54: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fab50) {
            ctx->pc = 0x2FAB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fab40;
        }
    }
    ctx->pc = 0x2FAB58u;
label_2fab58:
    // 0x2fab58: 0x8cc401e8  lw          $a0, 0x1E8($a2)
    ctx->pc = 0x2fab58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 488)));
label_2fab5c:
    // 0x2fab5c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fab5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fab60:
    // 0x2fab60: 0xc073e86  jal         func_1CFA18
label_2fab64:
    if (ctx->pc == 0x2FAB64u) {
        ctx->pc = 0x2FAB68u;
        goto label_2fab68;
    }
    ctx->pc = 0x2FAB60u;
    SET_GPR_U32(ctx, 31, 0x2FAB68u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x2FAB60u, 0x2FAB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB68u;
label_2fab68:
    // 0x2fab68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fab6c:
    // 0x2fab6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fab6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fab70:
    // 0x2fab70: 0xc08db1e  jal         func_236C78
label_2fab74:
    if (ctx->pc == 0x2FAB74u) {
        ctx->pc = 0x2FAB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB70u;
        // 0x2fab74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB78u;
        goto label_2fab78;
    }
    ctx->pc = 0x2FAB70u;
    SET_GPR_U32(ctx, 31, 0x2FAB78u);
    ctx->pc = 0x2FAB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB70u;
    // 0x2fab74: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x2FAB70u, 0x2FAB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB78u;
label_2fab78:
    // 0x2fab78: 0xc0c092e  jal         func_3024B8
label_2fab7c:
    if (ctx->pc == 0x2FAB7Cu) {
        ctx->pc = 0x2FAB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAB78u;
        // 0x2fab7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAB80u;
        goto label_2fab80;
    }
    ctx->pc = 0x2FAB78u;
    SET_GPR_U32(ctx, 31, 0x2FAB80u);
    ctx->pc = 0x2FAB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAB78u;
    // 0x2fab7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3024B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3024B8u, 0x2FAB78u, 0x2FAB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAB80u;
label_2fab80:
    // 0x2fab80: 0x26061bb8  addiu       $a2, $s0, 0x1BB8
    ctx->pc = 0x2fab80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 7096));
label_2fab84:
    // 0x2fab84: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2fab84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2fab88:
    // 0x2fab88: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2fab88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2fab8c:
    // 0x2fab8c: 0x68c3000f  ldl         $v1, 0xF($a2)
    ctx->pc = 0x2fab8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2fab90:
    // 0x2fab90: 0x6cc30008  ldr         $v1, 0x8($a2)
    ctx->pc = 0x2fab90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2fab94:
    // 0x2fab94: 0x68c50017  ldl         $a1, 0x17($a2)
    ctx->pc = 0x2fab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2fab98:
    // 0x2fab98: 0x6cc50010  ldr         $a1, 0x10($a2)
    ctx->pc = 0x2fab98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2fab9c:
    // 0x2fab9c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x2fab9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2faba0:
    // 0x2faba0: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x2faba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2faba4:
    // 0x2faba4: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x2faba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2faba8:
    // 0x2faba8: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x2faba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fabac:
    // 0x2fabac: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x2fabacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fabb0:
    // 0x2fabb0: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x2fabb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fabb4:
    // 0x2fabb4: 0x68c2001f  ldl         $v0, 0x1F($a2)
    ctx->pc = 0x2fabb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2fabb8:
    // 0x2fabb8: 0x6cc20018  ldr         $v0, 0x18($a2)
    ctx->pc = 0x2fabb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2fabbc:
    // 0x2fabbc: 0x80c30020  lb          $v1, 0x20($a2)
    ctx->pc = 0x2fabbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 32)));
label_2fabc0:
    // 0x2fabc0: 0x80c50021  lb          $a1, 0x21($a2)
    ctx->pc = 0x2fabc0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 33)));
label_2fabc4:
    // 0x2fabc4: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x2fabc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fabc8:
    // 0x2fabc8: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x2fabc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2fabcc:
    // 0x2fabcc: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x2fabccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
label_2fabd0:
    // 0x2fabd0: 0xa3a50021  sb          $a1, 0x21($sp)
    ctx->pc = 0x2fabd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 5));
label_2fabd4:
    // 0x2fabd4: 0xc0efc2e  jal         func_3BF0B8
label_2fabd8:
    if (ctx->pc == 0x2FABD8u) {
        ctx->pc = 0x2FABD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABD4u;
        // 0x2fabd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABDCu;
        goto label_2fabdc;
    }
    ctx->pc = 0x2FABD4u;
    SET_GPR_U32(ctx, 31, 0x2FABDCu);
    ctx->pc = 0x2FABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABD4u;
    // 0x2fabd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x2FABD4u, 0x2FABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABDCu;
label_2fabdc:
    // 0x2fabdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fabdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fabe0:
    // 0x2fabe0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fabe0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fabe4:
    // 0x2fabe4: 0xc069664  jal         func_1A5990
label_2fabe8:
    if (ctx->pc == 0x2FABE8u) {
        ctx->pc = 0x2FABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABE4u;
        // 0x2fabe8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABECu;
        goto label_2fabec;
    }
    ctx->pc = 0x2FABE4u;
    SET_GPR_U32(ctx, 31, 0x2FABECu);
    ctx->pc = 0x2FABE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABE4u;
    // 0x2fabe8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5990u, 0x2FABE4u, 0x2FABECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABECu;
label_2fabec:
    // 0x2fabec: 0xc069e04  jal         func_1A7810
label_2fabf0:
    if (ctx->pc == 0x2FABF0u) {
        ctx->pc = 0x2FABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABECu;
        // 0x2fabf0: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FABF4u;
        goto label_2fabf4;
    }
    ctx->pc = 0x2FABECu;
    SET_GPR_U32(ctx, 31, 0x2FABF4u);
    ctx->pc = 0x2FABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABECu;
    // 0x2fabf0: 0x24440292  addiu       $a0, $v0, 0x292 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 658));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A7810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A7810u, 0x2FABECu, 0x2FABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FABF4u;
label_2fabf4:
    // 0x2fabf4: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x2fabf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2fabf8:
    // 0x2fabf8: 0x26e51be0  addiu       $a1, $s7, 0x1BE0
    ctx->pc = 0x2fabf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 7136));
label_2fabfc:
    // 0x2fabfc: 0xc0efb95  jal         func_3BEE54
label_2fac00:
    if (ctx->pc == 0x2FAC00u) {
        ctx->pc = 0x2FAC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FABFCu;
        // 0x2fac00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC04u;
        goto label_2fac04;
    }
    ctx->pc = 0x2FABFCu;
    SET_GPR_U32(ctx, 31, 0x2FAC04u);
    ctx->pc = 0x2FAC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FABFCu;
    // 0x2fac00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2FABFCu, 0x2FAC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC04u;
label_2fac04:
    // 0x2fac04: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fac08:
    if (ctx->pc == 0x2FAC08u) {
        ctx->pc = 0x2FAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC04u;
        // 0x2fac08: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC0Cu;
        goto label_2fac0c;
    }
    ctx->pc = 0x2FAC04u;
    {
        const bool branch_taken_0x2fac04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC04u;
        // 0x2fac08: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac04) {
            ctx->pc = 0x2FAC18u;
            goto label_2fac18;
        }
    }
    ctx->pc = 0x2FAC0Cu;
label_2fac0c:
    // 0x2fac0c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2fac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2fac10:
    // 0x2fac10: 0x10000008  b           . + 4 + (0x8 << 2)
label_2fac14:
    if (ctx->pc == 0x2FAC14u) {
        ctx->pc = 0x2FAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC10u;
        // 0x2fac14: 0x24501be8  addiu       $s0, $v0, 0x1BE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC18u;
        goto label_2fac18;
    }
    ctx->pc = 0x2FAC10u;
    {
        const bool branch_taken_0x2fac10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC10u;
        // 0x2fac14: 0x24501be8  addiu       $s0, $v0, 0x1BE8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac10) {
            ctx->pc = 0x2FAC34u;
            goto label_2fac34;
        }
    }
    ctx->pc = 0x2FAC18u;
label_2fac18:
    // 0x2fac18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fac18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fac1c:
    // 0x2fac1c: 0xc0efb95  jal         func_3BEE54
label_2fac20:
    if (ctx->pc == 0x2FAC20u) {
        ctx->pc = 0x2FAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC1Cu;
        // 0x2fac20: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC24u;
        goto label_2fac24;
    }
    ctx->pc = 0x2FAC1Cu;
    SET_GPR_U32(ctx, 31, 0x2FAC24u);
    ctx->pc = 0x2FAC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC1Cu;
    // 0x2fac20: 0x24a51bf8  addiu       $a1, $a1, 0x1BF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x2FAC1Cu, 0x2FAC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC24u;
label_2fac24:
    // 0x2fac24: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2fac28:
    if (ctx->pc == 0x2FAC28u) {
        ctx->pc = 0x2FAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC24u;
        // 0x2fac28: 0x27c61c10  addiu       $a2, $fp, 0x1C10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC2Cu;
        goto label_2fac2c;
    }
    ctx->pc = 0x2FAC24u;
    {
        const bool branch_taken_0x2fac24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC24u;
        // 0x2fac28: 0x27c61c10  addiu       $a2, $fp, 0x1C10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac24) {
            ctx->pc = 0x2FAC38u;
            goto label_2fac38;
        }
    }
    ctx->pc = 0x2FAC2Cu;
label_2fac2c:
    // 0x2fac2c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2fac2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
label_2fac30:
    // 0x2fac30: 0x24501c00  addiu       $s0, $v0, 0x1C00
    ctx->pc = 0x2fac30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 7168));
label_2fac34:
    // 0x2fac34: 0x27c61c10  addiu       $a2, $fp, 0x1C10
    ctx->pc = 0x2fac34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 7184));
label_2fac38:
    // 0x2fac38: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2fac38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fac3c:
    // 0x2fac3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fac3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fac40:
    // 0x2fac40: 0xc0efed0  jal         func_3BFB40
label_2fac44:
    if (ctx->pc == 0x2FAC44u) {
        ctx->pc = 0x2FAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC40u;
        // 0x2fac44: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC48u;
        goto label_2fac48;
    }
    ctx->pc = 0x2FAC40u;
    SET_GPR_U32(ctx, 31, 0x2FAC48u);
    ctx->pc = 0x2FAC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC40u;
    // 0x2fac44: 0x2405001e  addiu       $a1, $zero, 0x1E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFB40u, 0x2FAC40u, 0x2FAC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC48u;
label_2fac48:
    // 0x2fac48: 0x8e23bdcc  lw          $v1, -0x4234($s1)
    ctx->pc = 0x2fac48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950348)));
label_2fac4c:
    // 0x2fac4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2fac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2fac50:
    // 0x2fac50: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
label_2fac54:
    if (ctx->pc == 0x2FAC54u) {
        ctx->pc = 0x2FAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC50u;
        // 0x2fac54: 0xac43b754  sw          $v1, -0x48AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC58u;
        goto label_2fac58;
    }
    ctx->pc = 0x2FAC50u;
    {
        const bool branch_taken_0x2fac50 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC50u;
        // 0x2fac54: 0xac43b754  sw          $v1, -0x48AC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294948692), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fac50) {
            ctx->pc = 0x2FAC60u;
            goto label_2fac60;
        }
    }
    ctx->pc = 0x2FAC58u;
label_2fac58:
    // 0x2fac58: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fac5c:
    // 0x2fac5c: 0xae22bdcc  sw          $v0, -0x4234($s1)
    ctx->pc = 0x2fac5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294950348), GPR_U32(ctx, 2));
label_2fac60:
    // 0x2fac60: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fac60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2fac64:
    // 0x2fac64: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2fac64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fac68:
    // 0x2fac68: 0x8c64bd48  lw          $a0, -0x42B8($v1)
    ctx->pc = 0x2fac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
label_2fac6c:
    // 0x2fac6c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2fac6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fac70:
    // 0x2fac70: 0xc0c7f22  jal         func_31FC88
label_2fac74:
    if (ctx->pc == 0x2FAC74u) {
        ctx->pc = 0x2FAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC70u;
        // 0x2fac74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC78u;
        goto label_2fac78;
    }
    ctx->pc = 0x2FAC70u;
    SET_GPR_U32(ctx, 31, 0x2FAC78u);
    ctx->pc = 0x2FAC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC70u;
    // 0x2fac74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31FC88u, 0x2FAC70u, 0x2FAC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC78u;
label_2fac78:
    // 0x2fac78: 0xc0c0922  jal         func_302488
label_2fac7c:
    if (ctx->pc == 0x2FAC7Cu) {
        ctx->pc = 0x2FAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC78u;
        // 0x2fac7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC80u;
        goto label_2fac80;
    }
    ctx->pc = 0x2FAC78u;
    SET_GPR_U32(ctx, 31, 0x2FAC80u);
    ctx->pc = 0x2FAC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC78u;
    // 0x2fac7c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302488u, 0x2FAC78u, 0x2FAC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC80u;
label_2fac80:
    // 0x2fac80: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x2fac80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
label_2fac84:
    // 0x2fac84: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fac84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fac88:
    // 0x2fac88: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x2fac88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2fac8c:
    // 0x2fac8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fac8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fac90:
    // 0x2fac90: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x2fac90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_2fac94:
    // 0x2fac94: 0xc08fed2  jal         func_23FB48
label_2fac98:
    if (ctx->pc == 0x2FAC98u) {
        ctx->pc = 0x2FAC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAC94u;
        // 0x2fac98: 0xae6200c0  sw          $v0, 0xC0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAC9Cu;
        goto label_2fac9c;
    }
    ctx->pc = 0x2FAC94u;
    SET_GPR_U32(ctx, 31, 0x2FAC9Cu);
    ctx->pc = 0x2FAC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FAC94u;
    // 0x2fac98: 0xae6200c0  sw          $v0, 0xC0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 192), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FAC94u, 0x2FAC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FAC9Cu;
label_2fac9c:
    // 0x2fac9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2fac9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2faca0:
    // 0x2faca0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2faca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2faca4:
    // 0x2faca4: 0xc08fed2  jal         func_23FB48
label_2faca8:
    if (ctx->pc == 0x2FACA8u) {
        ctx->pc = 0x2FACA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACA4u;
        // 0x2faca8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACACu;
        goto label_2facac;
    }
    ctx->pc = 0x2FACA4u;
    SET_GPR_U32(ctx, 31, 0x2FACACu);
    ctx->pc = 0x2FACA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACA4u;
    // 0x2faca8: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x2FACA4u, 0x2FACACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACACu;
label_2facac:
    // 0x2facac: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x2facacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
label_2facb0:
    // 0x2facb0: 0x8e6511e8  lw          $a1, 0x11E8($s3)
    ctx->pc = 0x2facb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4584)));
label_2facb4:
    // 0x2facb4: 0x24c4a080  addiu       $a0, $a2, -0x5F80
    ctx->pc = 0x2facb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942848));
label_2facb8:
    // 0x2facb8: 0xc0494fa  jal         func_1253E8
label_2facbc:
    if (ctx->pc == 0x2FACBCu) {
        ctx->pc = 0x2FACBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACB8u;
        // 0x2facbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACC0u;
        goto label_2facc0;
    }
    ctx->pc = 0x2FACB8u;
    SET_GPR_U32(ctx, 31, 0x2FACC0u);
    ctx->pc = 0x2FACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACB8u;
    // 0x2facbc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1253E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1253E8u, 0x2FACB8u, 0x2FACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACC0u;
label_2facc0:
    // 0x2facc0: 0x24050054  addiu       $a1, $zero, 0x54
    ctx->pc = 0x2facc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_2facc4:
    // 0x2facc4: 0xc0cda26  jal         func_336898
label_2facc8:
    if (ctx->pc == 0x2FACC8u) {
        ctx->pc = 0x2FACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACC4u;
        // 0x2facc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACCCu;
        goto label_2faccc;
    }
    ctx->pc = 0x2FACC4u;
    SET_GPR_U32(ctx, 31, 0x2FACCCu);
    ctx->pc = 0x2FACC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACC4u;
    // 0x2facc8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2FACC4u, 0x2FACCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACCCu;
label_2faccc:
    // 0x2faccc: 0xc0be5e2  jal         func_2F9788
label_2facd0:
    if (ctx->pc == 0x2FACD0u) {
        ctx->pc = 0x2FACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACCCu;
        // 0x2facd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACD4u;
        goto label_2facd4;
    }
    ctx->pc = 0x2FACCCu;
    SET_GPR_U32(ctx, 31, 0x2FACD4u);
    ctx->pc = 0x2FACD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACCCu;
    // 0x2facd0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9788u, 0x2FACCCu, 0x2FACD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACD4u;
label_2facd4:
    // 0x2facd4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2facd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2facd8:
    // 0x2facd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2facd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2facdc:
    // 0x2facdc: 0xc0be60a  jal         func_2F9828
label_2face0:
    if (ctx->pc == 0x2FACE0u) {
        ctx->pc = 0x2FACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FACDCu;
        // 0x2face0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FACE4u;
        goto label_2face4;
    }
    ctx->pc = 0x2FACDCu;
    SET_GPR_U32(ctx, 31, 0x2FACE4u);
    ctx->pc = 0x2FACE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FACDCu;
    // 0x2face0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9828u, 0x2FACDCu, 0x2FACE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FACE4u;
label_2face4:
    // 0x2face4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2face4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2face8:
    // 0x2face8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2face8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2facec:
    // 0x2facec: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2facecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_2facf0:
    // 0x2facf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2facf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2facf4:
    // 0x2facf4: 0xe4602c48  swc1        $f0, 0x2C48($v1)
    ctx->pc = 0x2facf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 11336), bits); }
label_2facf8:
    // 0x2facf8: 0xae6211f4  sw          $v0, 0x11F4($s3)
    ctx->pc = 0x2facf8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4596), GPR_U32(ctx, 2));
label_2facfc:
    // 0x2facfc: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2facfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fad00:
    // 0x2fad00: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x2fad00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2fad04:
    // 0x2fad04: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x2fad04u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fad08:
    // 0x2fad08: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x2fad08u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_2fad0c:
    // 0x2fad0c: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2fad0cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fad10:
    // 0x2fad10: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x2fad10u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_2fad14:
    // 0x2fad14: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2fad14u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fad18:
    // 0x2fad18: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x2fad18u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_2fad1c:
    // 0x2fad1c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fad1cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fad20:
    // 0x2fad20: 0xdfbf0098  ld          $ra, 0x98($sp)
    ctx->pc = 0x2fad20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_2fad24:
    // 0x2fad24: 0x3e00008  jr          $ra
label_2fad28:
    if (ctx->pc == 0x2FAD28u) {
        ctx->pc = 0x2FAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD24u;
        // 0x2fad28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FAD2Cu;
        goto label_2fad2c;
    }
    ctx->pc = 0x2FAD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAD24u;
        // 0x2fad28: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAD2Cu;
label_2fad2c:
    // 0x2fad2c: 0x0  nop
    ctx->pc = 0x2fad2cu;
    // NOP
    ctx->pc = 0x2fad30u;
}
