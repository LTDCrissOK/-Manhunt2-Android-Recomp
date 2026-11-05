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

// Function: sub_0019DF40
// Address: 0x19df40 - 0x19e4f8
void sub_0019DF40_0x19df40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019DF40_0x19df40");
#endif

    switch (ctx->pc) {
        case 0x19df40u: goto label_19df40;
        case 0x19df44u: goto label_19df44;
        case 0x19df48u: goto label_19df48;
        case 0x19df4cu: goto label_19df4c;
        case 0x19df50u: goto label_19df50;
        case 0x19df54u: goto label_19df54;
        case 0x19df58u: goto label_19df58;
        case 0x19df5cu: goto label_19df5c;
        case 0x19df60u: goto label_19df60;
        case 0x19df64u: goto label_19df64;
        case 0x19df68u: goto label_19df68;
        case 0x19df6cu: goto label_19df6c;
        case 0x19df70u: goto label_19df70;
        case 0x19df74u: goto label_19df74;
        case 0x19df78u: goto label_19df78;
        case 0x19df7cu: goto label_19df7c;
        case 0x19df80u: goto label_19df80;
        case 0x19df84u: goto label_19df84;
        case 0x19df88u: goto label_19df88;
        case 0x19df8cu: goto label_19df8c;
        case 0x19df90u: goto label_19df90;
        case 0x19df94u: goto label_19df94;
        case 0x19df98u: goto label_19df98;
        case 0x19df9cu: goto label_19df9c;
        case 0x19dfa0u: goto label_19dfa0;
        case 0x19dfa4u: goto label_19dfa4;
        case 0x19dfa8u: goto label_19dfa8;
        case 0x19dfacu: goto label_19dfac;
        case 0x19dfb0u: goto label_19dfb0;
        case 0x19dfb4u: goto label_19dfb4;
        case 0x19dfb8u: goto label_19dfb8;
        case 0x19dfbcu: goto label_19dfbc;
        case 0x19dfc0u: goto label_19dfc0;
        case 0x19dfc4u: goto label_19dfc4;
        case 0x19dfc8u: goto label_19dfc8;
        case 0x19dfccu: goto label_19dfcc;
        case 0x19dfd0u: goto label_19dfd0;
        case 0x19dfd4u: goto label_19dfd4;
        case 0x19dfd8u: goto label_19dfd8;
        case 0x19dfdcu: goto label_19dfdc;
        case 0x19dfe0u: goto label_19dfe0;
        case 0x19dfe4u: goto label_19dfe4;
        case 0x19dfe8u: goto label_19dfe8;
        case 0x19dfecu: goto label_19dfec;
        case 0x19dff0u: goto label_19dff0;
        case 0x19dff4u: goto label_19dff4;
        case 0x19dff8u: goto label_19dff8;
        case 0x19dffcu: goto label_19dffc;
        case 0x19e000u: goto label_19e000;
        case 0x19e004u: goto label_19e004;
        case 0x19e008u: goto label_19e008;
        case 0x19e00cu: goto label_19e00c;
        case 0x19e010u: goto label_19e010;
        case 0x19e014u: goto label_19e014;
        case 0x19e018u: goto label_19e018;
        case 0x19e01cu: goto label_19e01c;
        case 0x19e020u: goto label_19e020;
        case 0x19e024u: goto label_19e024;
        case 0x19e028u: goto label_19e028;
        case 0x19e02cu: goto label_19e02c;
        case 0x19e030u: goto label_19e030;
        case 0x19e034u: goto label_19e034;
        case 0x19e038u: goto label_19e038;
        case 0x19e03cu: goto label_19e03c;
        case 0x19e040u: goto label_19e040;
        case 0x19e044u: goto label_19e044;
        case 0x19e048u: goto label_19e048;
        case 0x19e04cu: goto label_19e04c;
        case 0x19e050u: goto label_19e050;
        case 0x19e054u: goto label_19e054;
        case 0x19e058u: goto label_19e058;
        case 0x19e05cu: goto label_19e05c;
        case 0x19e060u: goto label_19e060;
        case 0x19e064u: goto label_19e064;
        case 0x19e068u: goto label_19e068;
        case 0x19e06cu: goto label_19e06c;
        case 0x19e070u: goto label_19e070;
        case 0x19e074u: goto label_19e074;
        case 0x19e078u: goto label_19e078;
        case 0x19e07cu: goto label_19e07c;
        case 0x19e080u: goto label_19e080;
        case 0x19e084u: goto label_19e084;
        case 0x19e088u: goto label_19e088;
        case 0x19e08cu: goto label_19e08c;
        case 0x19e090u: goto label_19e090;
        case 0x19e094u: goto label_19e094;
        case 0x19e098u: goto label_19e098;
        case 0x19e09cu: goto label_19e09c;
        case 0x19e0a0u: goto label_19e0a0;
        case 0x19e0a4u: goto label_19e0a4;
        case 0x19e0a8u: goto label_19e0a8;
        case 0x19e0acu: goto label_19e0ac;
        case 0x19e0b0u: goto label_19e0b0;
        case 0x19e0b4u: goto label_19e0b4;
        case 0x19e0b8u: goto label_19e0b8;
        case 0x19e0bcu: goto label_19e0bc;
        case 0x19e0c0u: goto label_19e0c0;
        case 0x19e0c4u: goto label_19e0c4;
        case 0x19e0c8u: goto label_19e0c8;
        case 0x19e0ccu: goto label_19e0cc;
        case 0x19e0d0u: goto label_19e0d0;
        case 0x19e0d4u: goto label_19e0d4;
        case 0x19e0d8u: goto label_19e0d8;
        case 0x19e0dcu: goto label_19e0dc;
        case 0x19e0e0u: goto label_19e0e0;
        case 0x19e0e4u: goto label_19e0e4;
        case 0x19e0e8u: goto label_19e0e8;
        case 0x19e0ecu: goto label_19e0ec;
        case 0x19e0f0u: goto label_19e0f0;
        case 0x19e0f4u: goto label_19e0f4;
        case 0x19e0f8u: goto label_19e0f8;
        case 0x19e0fcu: goto label_19e0fc;
        case 0x19e100u: goto label_19e100;
        case 0x19e104u: goto label_19e104;
        case 0x19e108u: goto label_19e108;
        case 0x19e10cu: goto label_19e10c;
        case 0x19e110u: goto label_19e110;
        case 0x19e114u: goto label_19e114;
        case 0x19e118u: goto label_19e118;
        case 0x19e11cu: goto label_19e11c;
        case 0x19e120u: goto label_19e120;
        case 0x19e124u: goto label_19e124;
        case 0x19e128u: goto label_19e128;
        case 0x19e12cu: goto label_19e12c;
        case 0x19e130u: goto label_19e130;
        case 0x19e134u: goto label_19e134;
        case 0x19e138u: goto label_19e138;
        case 0x19e13cu: goto label_19e13c;
        case 0x19e140u: goto label_19e140;
        case 0x19e144u: goto label_19e144;
        case 0x19e148u: goto label_19e148;
        case 0x19e14cu: goto label_19e14c;
        case 0x19e150u: goto label_19e150;
        case 0x19e154u: goto label_19e154;
        case 0x19e158u: goto label_19e158;
        case 0x19e15cu: goto label_19e15c;
        case 0x19e160u: goto label_19e160;
        case 0x19e164u: goto label_19e164;
        case 0x19e168u: goto label_19e168;
        case 0x19e16cu: goto label_19e16c;
        case 0x19e170u: goto label_19e170;
        case 0x19e174u: goto label_19e174;
        case 0x19e178u: goto label_19e178;
        case 0x19e17cu: goto label_19e17c;
        case 0x19e180u: goto label_19e180;
        case 0x19e184u: goto label_19e184;
        case 0x19e188u: goto label_19e188;
        case 0x19e18cu: goto label_19e18c;
        case 0x19e190u: goto label_19e190;
        case 0x19e194u: goto label_19e194;
        case 0x19e198u: goto label_19e198;
        case 0x19e19cu: goto label_19e19c;
        case 0x19e1a0u: goto label_19e1a0;
        case 0x19e1a4u: goto label_19e1a4;
        case 0x19e1a8u: goto label_19e1a8;
        case 0x19e1acu: goto label_19e1ac;
        case 0x19e1b0u: goto label_19e1b0;
        case 0x19e1b4u: goto label_19e1b4;
        case 0x19e1b8u: goto label_19e1b8;
        case 0x19e1bcu: goto label_19e1bc;
        case 0x19e1c0u: goto label_19e1c0;
        case 0x19e1c4u: goto label_19e1c4;
        case 0x19e1c8u: goto label_19e1c8;
        case 0x19e1ccu: goto label_19e1cc;
        case 0x19e1d0u: goto label_19e1d0;
        case 0x19e1d4u: goto label_19e1d4;
        case 0x19e1d8u: goto label_19e1d8;
        case 0x19e1dcu: goto label_19e1dc;
        case 0x19e1e0u: goto label_19e1e0;
        case 0x19e1e4u: goto label_19e1e4;
        case 0x19e1e8u: goto label_19e1e8;
        case 0x19e1ecu: goto label_19e1ec;
        case 0x19e1f0u: goto label_19e1f0;
        case 0x19e1f4u: goto label_19e1f4;
        case 0x19e1f8u: goto label_19e1f8;
        case 0x19e1fcu: goto label_19e1fc;
        case 0x19e200u: goto label_19e200;
        case 0x19e204u: goto label_19e204;
        case 0x19e208u: goto label_19e208;
        case 0x19e20cu: goto label_19e20c;
        case 0x19e210u: goto label_19e210;
        case 0x19e214u: goto label_19e214;
        case 0x19e218u: goto label_19e218;
        case 0x19e21cu: goto label_19e21c;
        case 0x19e220u: goto label_19e220;
        case 0x19e224u: goto label_19e224;
        case 0x19e228u: goto label_19e228;
        case 0x19e22cu: goto label_19e22c;
        case 0x19e230u: goto label_19e230;
        case 0x19e234u: goto label_19e234;
        case 0x19e238u: goto label_19e238;
        case 0x19e23cu: goto label_19e23c;
        case 0x19e240u: goto label_19e240;
        case 0x19e244u: goto label_19e244;
        case 0x19e248u: goto label_19e248;
        case 0x19e24cu: goto label_19e24c;
        case 0x19e250u: goto label_19e250;
        case 0x19e254u: goto label_19e254;
        case 0x19e258u: goto label_19e258;
        case 0x19e25cu: goto label_19e25c;
        case 0x19e260u: goto label_19e260;
        case 0x19e264u: goto label_19e264;
        case 0x19e268u: goto label_19e268;
        case 0x19e26cu: goto label_19e26c;
        case 0x19e270u: goto label_19e270;
        case 0x19e274u: goto label_19e274;
        case 0x19e278u: goto label_19e278;
        case 0x19e27cu: goto label_19e27c;
        case 0x19e280u: goto label_19e280;
        case 0x19e284u: goto label_19e284;
        case 0x19e288u: goto label_19e288;
        case 0x19e28cu: goto label_19e28c;
        case 0x19e290u: goto label_19e290;
        case 0x19e294u: goto label_19e294;
        case 0x19e298u: goto label_19e298;
        case 0x19e29cu: goto label_19e29c;
        case 0x19e2a0u: goto label_19e2a0;
        case 0x19e2a4u: goto label_19e2a4;
        case 0x19e2a8u: goto label_19e2a8;
        case 0x19e2acu: goto label_19e2ac;
        case 0x19e2b0u: goto label_19e2b0;
        case 0x19e2b4u: goto label_19e2b4;
        case 0x19e2b8u: goto label_19e2b8;
        case 0x19e2bcu: goto label_19e2bc;
        case 0x19e2c0u: goto label_19e2c0;
        case 0x19e2c4u: goto label_19e2c4;
        case 0x19e2c8u: goto label_19e2c8;
        case 0x19e2ccu: goto label_19e2cc;
        case 0x19e2d0u: goto label_19e2d0;
        case 0x19e2d4u: goto label_19e2d4;
        case 0x19e2d8u: goto label_19e2d8;
        case 0x19e2dcu: goto label_19e2dc;
        case 0x19e2e0u: goto label_19e2e0;
        case 0x19e2e4u: goto label_19e2e4;
        case 0x19e2e8u: goto label_19e2e8;
        case 0x19e2ecu: goto label_19e2ec;
        case 0x19e2f0u: goto label_19e2f0;
        case 0x19e2f4u: goto label_19e2f4;
        case 0x19e2f8u: goto label_19e2f8;
        case 0x19e2fcu: goto label_19e2fc;
        case 0x19e300u: goto label_19e300;
        case 0x19e304u: goto label_19e304;
        case 0x19e308u: goto label_19e308;
        case 0x19e30cu: goto label_19e30c;
        case 0x19e310u: goto label_19e310;
        case 0x19e314u: goto label_19e314;
        case 0x19e318u: goto label_19e318;
        case 0x19e31cu: goto label_19e31c;
        case 0x19e320u: goto label_19e320;
        case 0x19e324u: goto label_19e324;
        case 0x19e328u: goto label_19e328;
        case 0x19e32cu: goto label_19e32c;
        case 0x19e330u: goto label_19e330;
        case 0x19e334u: goto label_19e334;
        case 0x19e338u: goto label_19e338;
        case 0x19e33cu: goto label_19e33c;
        case 0x19e340u: goto label_19e340;
        case 0x19e344u: goto label_19e344;
        case 0x19e348u: goto label_19e348;
        case 0x19e34cu: goto label_19e34c;
        case 0x19e350u: goto label_19e350;
        case 0x19e354u: goto label_19e354;
        case 0x19e358u: goto label_19e358;
        case 0x19e35cu: goto label_19e35c;
        case 0x19e360u: goto label_19e360;
        case 0x19e364u: goto label_19e364;
        case 0x19e368u: goto label_19e368;
        case 0x19e36cu: goto label_19e36c;
        case 0x19e370u: goto label_19e370;
        case 0x19e374u: goto label_19e374;
        case 0x19e378u: goto label_19e378;
        case 0x19e37cu: goto label_19e37c;
        case 0x19e380u: goto label_19e380;
        case 0x19e384u: goto label_19e384;
        case 0x19e388u: goto label_19e388;
        case 0x19e38cu: goto label_19e38c;
        case 0x19e390u: goto label_19e390;
        case 0x19e394u: goto label_19e394;
        case 0x19e398u: goto label_19e398;
        case 0x19e39cu: goto label_19e39c;
        case 0x19e3a0u: goto label_19e3a0;
        case 0x19e3a4u: goto label_19e3a4;
        case 0x19e3a8u: goto label_19e3a8;
        case 0x19e3acu: goto label_19e3ac;
        case 0x19e3b0u: goto label_19e3b0;
        case 0x19e3b4u: goto label_19e3b4;
        case 0x19e3b8u: goto label_19e3b8;
        case 0x19e3bcu: goto label_19e3bc;
        case 0x19e3c0u: goto label_19e3c0;
        case 0x19e3c4u: goto label_19e3c4;
        case 0x19e3c8u: goto label_19e3c8;
        case 0x19e3ccu: goto label_19e3cc;
        case 0x19e3d0u: goto label_19e3d0;
        case 0x19e3d4u: goto label_19e3d4;
        case 0x19e3d8u: goto label_19e3d8;
        case 0x19e3dcu: goto label_19e3dc;
        case 0x19e3e0u: goto label_19e3e0;
        case 0x19e3e4u: goto label_19e3e4;
        case 0x19e3e8u: goto label_19e3e8;
        case 0x19e3ecu: goto label_19e3ec;
        case 0x19e3f0u: goto label_19e3f0;
        case 0x19e3f4u: goto label_19e3f4;
        case 0x19e3f8u: goto label_19e3f8;
        case 0x19e3fcu: goto label_19e3fc;
        case 0x19e400u: goto label_19e400;
        case 0x19e404u: goto label_19e404;
        case 0x19e408u: goto label_19e408;
        case 0x19e40cu: goto label_19e40c;
        case 0x19e410u: goto label_19e410;
        case 0x19e414u: goto label_19e414;
        case 0x19e418u: goto label_19e418;
        case 0x19e41cu: goto label_19e41c;
        case 0x19e420u: goto label_19e420;
        case 0x19e424u: goto label_19e424;
        case 0x19e428u: goto label_19e428;
        case 0x19e42cu: goto label_19e42c;
        case 0x19e430u: goto label_19e430;
        case 0x19e434u: goto label_19e434;
        case 0x19e438u: goto label_19e438;
        case 0x19e43cu: goto label_19e43c;
        case 0x19e440u: goto label_19e440;
        case 0x19e444u: goto label_19e444;
        case 0x19e448u: goto label_19e448;
        case 0x19e44cu: goto label_19e44c;
        case 0x19e450u: goto label_19e450;
        case 0x19e454u: goto label_19e454;
        case 0x19e458u: goto label_19e458;
        case 0x19e45cu: goto label_19e45c;
        case 0x19e460u: goto label_19e460;
        case 0x19e464u: goto label_19e464;
        case 0x19e468u: goto label_19e468;
        case 0x19e46cu: goto label_19e46c;
        case 0x19e470u: goto label_19e470;
        case 0x19e474u: goto label_19e474;
        case 0x19e478u: goto label_19e478;
        case 0x19e47cu: goto label_19e47c;
        case 0x19e480u: goto label_19e480;
        case 0x19e484u: goto label_19e484;
        case 0x19e488u: goto label_19e488;
        case 0x19e48cu: goto label_19e48c;
        case 0x19e490u: goto label_19e490;
        case 0x19e494u: goto label_19e494;
        case 0x19e498u: goto label_19e498;
        case 0x19e49cu: goto label_19e49c;
        case 0x19e4a0u: goto label_19e4a0;
        case 0x19e4a4u: goto label_19e4a4;
        case 0x19e4a8u: goto label_19e4a8;
        case 0x19e4acu: goto label_19e4ac;
        case 0x19e4b0u: goto label_19e4b0;
        case 0x19e4b4u: goto label_19e4b4;
        case 0x19e4b8u: goto label_19e4b8;
        case 0x19e4bcu: goto label_19e4bc;
        case 0x19e4c0u: goto label_19e4c0;
        case 0x19e4c4u: goto label_19e4c4;
        case 0x19e4c8u: goto label_19e4c8;
        case 0x19e4ccu: goto label_19e4cc;
        case 0x19e4d0u: goto label_19e4d0;
        case 0x19e4d4u: goto label_19e4d4;
        case 0x19e4d8u: goto label_19e4d8;
        case 0x19e4dcu: goto label_19e4dc;
        case 0x19e4e0u: goto label_19e4e0;
        case 0x19e4e4u: goto label_19e4e4;
        case 0x19e4e8u: goto label_19e4e8;
        case 0x19e4ecu: goto label_19e4ec;
        case 0x19e4f0u: goto label_19e4f0;
        case 0x19e4f4u: goto label_19e4f4;
        default: break;
    }

    ctx->pc = 0x19df40u;

label_19df40:
    // 0x19df40: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x19df40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_19df44:
    // 0x19df44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x19df44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19df48:
    // 0x19df48: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x19df48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_19df4c:
    // 0x19df4c: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x19df4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_19df50:
    // 0x19df50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19df50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19df54:
    // 0x19df54: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x19df54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_19df58:
    // 0x19df58: 0x26240050  addiu       $a0, $s1, 0x50
    ctx->pc = 0x19df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
label_19df5c:
    // 0x19df5c: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x19df5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_19df60:
    // 0x19df60: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x19df60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_19df64:
    // 0x19df64: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x19df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
label_19df68:
    // 0x19df68: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x19df68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_19df6c:
    // 0x19df6c: 0xffbf00d8  sd          $ra, 0xD8($sp)
    ctx->pc = 0x19df6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 31));
label_19df70:
    // 0x19df70: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x19df70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_19df74:
    // 0x19df74: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x19df74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_19df78:
    // 0x19df78: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_19df7c:
    if (ctx->pc == 0x19DF7Cu) {
        ctx->pc = 0x19DF80u;
        goto label_19df80;
    }
    ctx->pc = 0x19DF78u;
    {
        const bool branch_taken_0x19df78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x19df78) {
            ctx->pc = 0x19DF94u;
            goto label_19df94;
        }
    }
    ctx->pc = 0x19DF80u;
label_19df80:
    // 0x19df80: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x19df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_19df84:
    // 0x19df84: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x19df84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_19df88:
    // 0x19df88: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x19df88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_19df8c:
    // 0x19df8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_19df90:
    if (ctx->pc == 0x19DF90u) {
        ctx->pc = 0x19DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF8Cu;
        // 0x19df90: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF94u;
        goto label_19df94;
    }
    ctx->pc = 0x19DF8Cu;
    {
        const bool branch_taken_0x19df8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF8Cu;
        // 0x19df90: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df8c) {
            ctx->pc = 0x19DFB8u;
            goto label_19dfb8;
        }
    }
    ctx->pc = 0x19DF94u;
label_19df94:
    // 0x19df94: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_19df98:
    if (ctx->pc == 0x19DF98u) {
        ctx->pc = 0x19DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF94u;
        // 0x19df98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DF9Cu;
        goto label_19df9c;
    }
    ctx->pc = 0x19DF94u;
    {
        const bool branch_taken_0x19df94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DF94u;
        // 0x19df98: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19df94) {
            ctx->pc = 0x19DFB0u;
            goto label_19dfb0;
        }
    }
    ctx->pc = 0x19DF9Cu;
label_19df9c:
    // 0x19df9c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x19df9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19dfa0:
    // 0x19dfa0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_19dfa4:
    if (ctx->pc == 0x19DFA4u) {
        ctx->pc = 0x19DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA0u;
        // 0x19dfa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFA8u;
        goto label_19dfa8;
    }
    ctx->pc = 0x19DFA0u;
    {
        const bool branch_taken_0x19dfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x19DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA0u;
        // 0x19dfa4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa0) {
            ctx->pc = 0x19DFB0u;
            goto label_19dfb0;
        }
    }
    ctx->pc = 0x19DFA8u;
label_19dfa8:
    // 0x19dfa8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_19dfac:
    if (ctx->pc == 0x19DFACu) {
        ctx->pc = 0x19DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA8u;
        // 0x19dfac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFB0u;
        goto label_19dfb0;
    }
    ctx->pc = 0x19DFA8u;
    {
        const bool branch_taken_0x19dfa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x19DFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFA8u;
        // 0x19dfac: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfa8) {
            ctx->pc = 0x19DFB8u;
            goto label_19dfb8;
        }
    }
    ctx->pc = 0x19DFB0u;
label_19dfb0:
    // 0x19dfb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19dfb4:
    // 0x19dfb4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x19dfb4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19dfb8:
    // 0x19dfb8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_19dfbc:
    if (ctx->pc == 0x19DFBCu) {
        ctx->pc = 0x19DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFB8u;
        // 0x19dfbc: 0x26330050  addiu       $s3, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFC0u;
        goto label_19dfc0;
    }
    ctx->pc = 0x19DFB8u;
    {
        const bool branch_taken_0x19dfb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19DFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFB8u;
        // 0x19dfbc: 0x26330050  addiu       $s3, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfb8) {
            ctx->pc = 0x19DFF4u;
            goto label_19dff4;
        }
    }
    ctx->pc = 0x19DFC0u;
label_19dfc0:
    // 0x19dfc0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x19dfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_19dfc4:
    // 0x19dfc4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_19dfc8:
    if (ctx->pc == 0x19DFC8u) {
        ctx->pc = 0x19DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFC4u;
        // 0x19dfc8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFCCu;
        goto label_19dfcc;
    }
    ctx->pc = 0x19DFC4u;
    {
        const bool branch_taken_0x19dfc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19DFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFC4u;
        // 0x19dfc8: 0x38420005  xori        $v0, $v0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19dfc4) {
            ctx->pc = 0x19DFE0u;
            goto label_19dfe0;
        }
    }
    ctx->pc = 0x19DFCCu;
label_19dfcc:
    // 0x19dfcc: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x19dfccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_19dfd0:
    // 0x19dfd0: 0xc06fb64  jal         func_1BED90
label_19dfd4:
    if (ctx->pc == 0x19DFD4u) {
        ctx->pc = 0x19DFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFD0u;
        // 0x19dfd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFD8u;
        goto label_19dfd8;
    }
    ctx->pc = 0x19DFD0u;
    SET_GPR_U32(ctx, 31, 0x19DFD8u);
    ctx->pc = 0x19DFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFD0u;
    // 0x19dfd4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED90u, 0x19DFD0u, 0x19DFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFD8u;
label_19dfd8:
    // 0x19dfd8: 0x10000006  b           . + 4 + (0x6 << 2)
label_19dfdc:
    if (ctx->pc == 0x19DFDCu) {
        ctx->pc = 0x19DFE0u;
        goto label_19dfe0;
    }
    ctx->pc = 0x19DFD8u;
    {
        const bool branch_taken_0x19dfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19dfd8) {
            ctx->pc = 0x19DFF4u;
            goto label_19dff4;
        }
    }
    ctx->pc = 0x19DFE0u;
label_19dfe0:
    // 0x19dfe0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_19dfe4:
    if (ctx->pc == 0x19DFE4u) {
        ctx->pc = 0x19DFE8u;
        goto label_19dfe8;
    }
    ctx->pc = 0x19DFE0u;
    {
        const bool branch_taken_0x19dfe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19dfe0) {
            ctx->pc = 0x19DFF4u;
            goto label_19dff4;
        }
    }
    ctx->pc = 0x19DFE8u;
label_19dfe8:
    // 0x19dfe8: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x19dfe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_19dfec:
    // 0x19dfec: 0xc06fb1e  jal         func_1BEC78
label_19dff0:
    if (ctx->pc == 0x19DFF0u) {
        ctx->pc = 0x19DFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFECu;
        // 0x19dff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFF4u;
        goto label_19dff4;
    }
    ctx->pc = 0x19DFECu;
    SET_GPR_U32(ctx, 31, 0x19DFF4u);
    ctx->pc = 0x19DFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFECu;
    // 0x19dff0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEC78u, 0x19DFECu, 0x19DFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFF4u;
label_19dff4:
    // 0x19dff4: 0xc061a1e  jal         func_186878
label_19dff8:
    if (ctx->pc == 0x19DFF8u) {
        ctx->pc = 0x19DFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19DFF4u;
        // 0x19dff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19DFFCu;
        goto label_19dffc;
    }
    ctx->pc = 0x19DFF4u;
    SET_GPR_U32(ctx, 31, 0x19DFFCu);
    ctx->pc = 0x19DFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19DFF4u;
    // 0x19dff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19DFF4u, 0x19DFFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19DFFCu;
label_19dffc:
    // 0x19dffc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x19dffcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_19e000:
    // 0x19e000: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19e000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e004:
    // 0x19e004: 0xc0f6a96  jal         func_3DAA58
label_19e008:
    if (ctx->pc == 0x19E008u) {
        ctx->pc = 0x19E008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E004u;
        // 0x19e008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E00Cu;
        goto label_19e00c;
    }
    ctx->pc = 0x19E004u;
    SET_GPR_U32(ctx, 31, 0x19E00Cu);
    ctx->pc = 0x19E008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E004u;
    // 0x19e008: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19E004u, 0x19E00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E00Cu;
label_19e00c:
    // 0x19e00c: 0xc0f6a96  jal         func_3DAA58
label_19e010:
    if (ctx->pc == 0x19E010u) {
        ctx->pc = 0x19E010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E00Cu;
        // 0x19e010: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E014u;
        goto label_19e014;
    }
    ctx->pc = 0x19E00Cu;
    SET_GPR_U32(ctx, 31, 0x19E014u);
    ctx->pc = 0x19E010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E00Cu;
    // 0x19e010: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19E00Cu, 0x19E014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E014u;
label_19e014:
    // 0x19e014: 0x7a030090  lq          $v1, 0x90($s0)
    ctx->pc = 0x19e014u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 144)));
label_19e018:
    // 0x19e018: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x19e018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_19e01c:
    // 0x19e01c: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x19e01cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
label_19e020:
    // 0x19e020: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x19e020u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_19e024:
    // 0x19e024: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x19e024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_19e028:
    // 0x19e028: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19e028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_19e02c:
    // 0x19e02c: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19e02cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19e030:
    // 0x19e030: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x19e030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_19e034:
    // 0x19e034: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19e034u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19e038:
    // 0x19e038: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x19e038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_19e03c:
    // 0x19e03c: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x19e03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e040:
    // 0x19e040: 0xc6430004  lwc1        $f3, 0x4($s2)
    ctx->pc = 0x19e040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e044:
    // 0x19e044: 0xc6440008  lwc1        $f4, 0x8($s2)
    ctx->pc = 0x19e044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_19e048:
    // 0x19e048: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x19e048u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_19e04c:
    // 0x19e04c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x19e04cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_19e050:
    // 0x19e050: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x19e050u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_19e054:
    // 0x19e054: 0x0  nop
    ctx->pc = 0x19e054u;
    // NOP
label_19e058:
    // 0x19e058: 0x0  nop
    ctx->pc = 0x19e058u;
    // NOP
label_19e05c:
    // 0x19e05c: 0x46000044  c1          0x44
    ctx->pc = 0x19e05cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_19e060:
    // 0x19e060: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x19e060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_19e064:
    // 0x19e064: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x19e064u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_19e068:
    // 0x19e068: 0x0  nop
    ctx->pc = 0x19e068u;
    // NOP
label_19e06c:
    // 0x19e06c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x19e06cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e070:
    // 0x19e070: 0x0  nop
    ctx->pc = 0x19e070u;
    // NOP
label_19e074:
    // 0x19e074: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_19e078:
    if (ctx->pc == 0x19E078u) {
        ctx->pc = 0x19E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E074u;
        // 0x19e078: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E07Cu;
        goto label_19e07c;
    }
    ctx->pc = 0x19E074u;
    {
        const bool branch_taken_0x19e074 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E074u;
        // 0x19e078: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e074) {
            ctx->pc = 0x19E0A0u;
            goto label_19e0a0;
        }
    }
    ctx->pc = 0x19E07Cu;
label_19e07c:
    // 0x19e07c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19e07cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_19e080:
    // 0x19e080: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e080u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e084:
    // 0x19e084: 0x0  nop
    ctx->pc = 0x19e084u;
    // NOP
label_19e088:
    // 0x19e088: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x19e088u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_19e08c:
    // 0x19e08c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x19e08cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_19e090:
    // 0x19e090: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x19e090u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
label_19e094:
    // 0x19e094: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x19e094u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_19e098:
    // 0x19e098: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x19e098u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19e09c:
    // 0x19e09c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x19e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_19e0a0:
    // 0x19e0a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19e0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_19e0a4:
    // 0x19e0a4: 0xc0779a4  jal         func_1DE690
label_19e0a8:
    if (ctx->pc == 0x19E0A8u) {
        ctx->pc = 0x19E0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0A4u;
        // 0x19e0a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0ACu;
        goto label_19e0ac;
    }
    ctx->pc = 0x19E0A4u;
    SET_GPR_U32(ctx, 31, 0x19E0ACu);
    ctx->pc = 0x19E0A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0A4u;
    // 0x19e0a8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE690u, 0x19E0A4u, 0x19E0ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0ACu;
label_19e0ac:
    // 0x19e0ac: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x19e0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_19e0b0:
    // 0x19e0b0: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x19e0b0u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19e0b4:
    // 0x19e0b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19e0b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_19e0b8:
    // 0x19e0b8: 0xc0f6a96  jal         func_3DAA58
label_19e0bc:
    if (ctx->pc == 0x19E0BCu) {
        ctx->pc = 0x19E0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0B8u;
        // 0x19e0bc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0C0u;
        goto label_19e0c0;
    }
    ctx->pc = 0x19E0B8u;
    SET_GPR_U32(ctx, 31, 0x19E0C0u);
    ctx->pc = 0x19E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0B8u;
    // 0x19e0bc: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x19E0B8u, 0x19E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0C0u;
label_19e0c0:
    // 0x19e0c0: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x19e0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19e0c4:
    // 0x19e0c4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x19e0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_19e0c8:
    // 0x19e0c8: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x19e0c8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e0cc:
    // 0x19e0cc: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x19e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_19e0d0:
    // 0x19e0d0: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x19e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_19e0d4:
    // 0x19e0d4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x19e0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
label_19e0d8:
    // 0x19e0d8: 0xe7b40068  swc1        $f20, 0x68($sp)
    ctx->pc = 0x19e0d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_19e0dc:
    // 0x19e0dc: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x19e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_19e0e0:
    // 0x19e0e0: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x19e0e0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_19e0e4:
    // 0x19e0e4: 0x12a00032  beqz        $s5, . + 4 + (0x32 << 2)
label_19e0e8:
    if (ctx->pc == 0x19E0E8u) {
        ctx->pc = 0x19E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E4u;
        // 0x19e0e8: 0xe7b40064  swc1        $f20, 0x64($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0ECu;
        goto label_19e0ec;
    }
    ctx->pc = 0x19E0E4u;
    {
        const bool branch_taken_0x19e0e4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0E4u;
        // 0x19e0e8: 0xe7b40064  swc1        $f20, 0x64($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e0e4) {
            ctx->pc = 0x19E1B0u;
            goto label_19e1b0;
        }
    }
    ctx->pc = 0x19E0ECu;
label_19e0ec:
    // 0x19e0ec: 0xc061a1e  jal         func_186878
label_19e0f0:
    if (ctx->pc == 0x19E0F0u) {
        ctx->pc = 0x19E0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0ECu;
        // 0x19e0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E0F4u;
        goto label_19e0f4;
    }
    ctx->pc = 0x19E0ECu;
    SET_GPR_U32(ctx, 31, 0x19E0F4u);
    ctx->pc = 0x19E0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0ECu;
    // 0x19e0f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E0ECu, 0x19E0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E0F4u;
label_19e0f4:
    // 0x19e0f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e0f8:
    // 0x19e0f8: 0xc061a1e  jal         func_186878
label_19e0fc:
    if (ctx->pc == 0x19E0FCu) {
        ctx->pc = 0x19E0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E0F8u;
        // 0x19e0fc: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E100u;
        goto label_19e100;
    }
    ctx->pc = 0x19E0F8u;
    SET_GPR_U32(ctx, 31, 0x19E100u);
    ctx->pc = 0x19E0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E0F8u;
    // 0x19e0fc: 0xac400158  sw          $zero, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E0F8u, 0x19E100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E100u;
label_19e100:
    // 0x19e100: 0xac40015c  sw          $zero, 0x15C($v0)
    ctx->pc = 0x19e100u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 0));
label_19e104:
    // 0x19e104: 0xc061a12  jal         func_186848
label_19e108:
    if (ctx->pc == 0x19E108u) {
        ctx->pc = 0x19E108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E104u;
        // 0x19e108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E10Cu;
        goto label_19e10c;
    }
    ctx->pc = 0x19E104u;
    SET_GPR_U32(ctx, 31, 0x19E10Cu);
    ctx->pc = 0x19E108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E104u;
    // 0x19e108: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E104u, 0x19E10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E10Cu;
label_19e10c:
    // 0x19e10c: 0xc4410240  lwc1        $f1, 0x240($v0)
    ctx->pc = 0x19e10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e110:
    // 0x19e110: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x19e110u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_19e114:
    // 0x19e114: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e114u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e118:
    // 0x19e118: 0x0  nop
    ctx->pc = 0x19e118u;
    // NOP
label_19e11c:
    // 0x19e11c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19e11cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e120:
    // 0x19e120: 0x0  nop
    ctx->pc = 0x19e120u;
    // NOP
label_19e124:
    // 0x19e124: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_19e128:
    if (ctx->pc == 0x19E128u) {
        ctx->pc = 0x19E12Cu;
        goto label_19e12c;
    }
    ctx->pc = 0x19E124u;
    {
        const bool branch_taken_0x19e124 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e124) {
            ctx->pc = 0x19E144u;
            goto label_19e144;
        }
    }
    ctx->pc = 0x19E12Cu;
label_19e12c:
    // 0x19e12c: 0xc061a12  jal         func_186848
label_19e130:
    if (ctx->pc == 0x19E130u) {
        ctx->pc = 0x19E130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E12Cu;
        // 0x19e130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E134u;
        goto label_19e134;
    }
    ctx->pc = 0x19E12Cu;
    SET_GPR_U32(ctx, 31, 0x19E134u);
    ctx->pc = 0x19E130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E12Cu;
    // 0x19e130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E12Cu, 0x19E134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E134u;
label_19e134:
    // 0x19e134: 0xc06fab4  jal         func_1BEAD0
label_19e138:
    if (ctx->pc == 0x19E138u) {
        ctx->pc = 0x19E138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E134u;
        // 0x19e138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E13Cu;
        goto label_19e13c;
    }
    ctx->pc = 0x19E134u;
    SET_GPR_U32(ctx, 31, 0x19E13Cu);
    ctx->pc = 0x19E138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E134u;
    // 0x19e138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x19E134u, 0x19E13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E13Cu;
label_19e13c:
    // 0x19e13c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_19e140:
    if (ctx->pc == 0x19E140u) {
        ctx->pc = 0x19E144u;
        goto label_19e144;
    }
    ctx->pc = 0x19E13Cu;
    {
        const bool branch_taken_0x19e13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e13c) {
            ctx->pc = 0x19E18Cu;
            goto label_19e18c;
        }
    }
    ctx->pc = 0x19E144u;
label_19e144:
    // 0x19e144: 0xc061a12  jal         func_186848
label_19e148:
    if (ctx->pc == 0x19E148u) {
        ctx->pc = 0x19E148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E144u;
        // 0x19e148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E14Cu;
        goto label_19e14c;
    }
    ctx->pc = 0x19E144u;
    SET_GPR_U32(ctx, 31, 0x19E14Cu);
    ctx->pc = 0x19E148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E144u;
    // 0x19e148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E144u, 0x19E14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E14Cu;
label_19e14c:
    // 0x19e14c: 0xc06faba  jal         func_1BEAE8
label_19e150:
    if (ctx->pc == 0x19E150u) {
        ctx->pc = 0x19E150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E14Cu;
        // 0x19e150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E154u;
        goto label_19e154;
    }
    ctx->pc = 0x19E14Cu;
    SET_GPR_U32(ctx, 31, 0x19E154u);
    ctx->pc = 0x19E150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E14Cu;
    // 0x19e150: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x19E14Cu, 0x19E154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E154u;
label_19e154:
    // 0x19e154: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_19e158:
    if (ctx->pc == 0x19E158u) {
        ctx->pc = 0x19E15Cu;
        goto label_19e15c;
    }
    ctx->pc = 0x19E154u;
    {
        const bool branch_taken_0x19e154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e154) {
            ctx->pc = 0x19E174u;
            goto label_19e174;
        }
    }
    ctx->pc = 0x19E15Cu;
label_19e15c:
    // 0x19e15c: 0xc061a12  jal         func_186848
label_19e160:
    if (ctx->pc == 0x19E160u) {
        ctx->pc = 0x19E160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E15Cu;
        // 0x19e160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E164u;
        goto label_19e164;
    }
    ctx->pc = 0x19E15Cu;
    SET_GPR_U32(ctx, 31, 0x19E164u);
    ctx->pc = 0x19E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E15Cu;
    // 0x19e160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E15Cu, 0x19E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E164u;
label_19e164:
    // 0x19e164: 0xc06faba  jal         func_1BEAE8
label_19e168:
    if (ctx->pc == 0x19E168u) {
        ctx->pc = 0x19E168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E164u;
        // 0x19e168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E16Cu;
        goto label_19e16c;
    }
    ctx->pc = 0x19E164u;
    SET_GPR_U32(ctx, 31, 0x19E16Cu);
    ctx->pc = 0x19E168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E164u;
    // 0x19e168: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAE8u, 0x19E164u, 0x19E16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E16Cu;
label_19e16c:
    // 0x19e16c: 0x1000000c  b           . + 4 + (0xC << 2)
label_19e170:
    if (ctx->pc == 0x19E170u) {
        ctx->pc = 0x19E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E16Cu;
        // 0x19e170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E174u;
        goto label_19e174;
    }
    ctx->pc = 0x19E16Cu;
    {
        const bool branch_taken_0x19e16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E16Cu;
        // 0x19e170: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e16c) {
            ctx->pc = 0x19E1A0u;
            goto label_19e1a0;
        }
    }
    ctx->pc = 0x19E174u;
label_19e174:
    // 0x19e174: 0xc061a12  jal         func_186848
label_19e178:
    if (ctx->pc == 0x19E178u) {
        ctx->pc = 0x19E178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E174u;
        // 0x19e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E17Cu;
        goto label_19e17c;
    }
    ctx->pc = 0x19E174u;
    SET_GPR_U32(ctx, 31, 0x19E17Cu);
    ctx->pc = 0x19E178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E174u;
    // 0x19e178: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E174u, 0x19E17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E17Cu;
label_19e17c:
    // 0x19e17c: 0xc06fab4  jal         func_1BEAD0
label_19e180:
    if (ctx->pc == 0x19E180u) {
        ctx->pc = 0x19E180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E17Cu;
        // 0x19e180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E184u;
        goto label_19e184;
    }
    ctx->pc = 0x19E17Cu;
    SET_GPR_U32(ctx, 31, 0x19E184u);
    ctx->pc = 0x19E180u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E17Cu;
    // 0x19e180: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x19E17Cu, 0x19E184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E184u;
label_19e184:
    // 0x19e184: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_19e188:
    if (ctx->pc == 0x19E188u) {
        ctx->pc = 0x19E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E184u;
        // 0x19e188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E18Cu;
        goto label_19e18c;
    }
    ctx->pc = 0x19E184u;
    {
        const bool branch_taken_0x19e184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E184u;
        // 0x19e188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e184) {
            ctx->pc = 0x19E1B4u;
            goto label_19e1b4;
        }
    }
    ctx->pc = 0x19E18Cu;
label_19e18c:
    // 0x19e18c: 0xc061a12  jal         func_186848
label_19e190:
    if (ctx->pc == 0x19E190u) {
        ctx->pc = 0x19E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E18Cu;
        // 0x19e190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E194u;
        goto label_19e194;
    }
    ctx->pc = 0x19E18Cu;
    SET_GPR_U32(ctx, 31, 0x19E194u);
    ctx->pc = 0x19E190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E18Cu;
    // 0x19e190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E18Cu, 0x19E194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E194u;
label_19e194:
    // 0x19e194: 0xc06fab4  jal         func_1BEAD0
label_19e198:
    if (ctx->pc == 0x19E198u) {
        ctx->pc = 0x19E198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E194u;
        // 0x19e198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E19Cu;
        goto label_19e19c;
    }
    ctx->pc = 0x19E194u;
    SET_GPR_U32(ctx, 31, 0x19E19Cu);
    ctx->pc = 0x19E198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E194u;
    // 0x19e198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEAD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEAD0u, 0x19E194u, 0x19E19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E19Cu;
label_19e19c:
    // 0x19e19c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x19e19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e1a0:
    // 0x19e1a0: 0xc06fb38  jal         func_1BECE0
label_19e1a4:
    if (ctx->pc == 0x19E1A4u) {
        ctx->pc = 0x19E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1A0u;
        // 0x19e1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1A8u;
        goto label_19e1a8;
    }
    ctx->pc = 0x19E1A0u;
    SET_GPR_U32(ctx, 31, 0x19E1A8u);
    ctx->pc = 0x19E1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1A0u;
    // 0x19e1a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BECE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BECE0u, 0x19E1A0u, 0x19E1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1A8u;
label_19e1a8:
    // 0x19e1a8: 0x10000005  b           . + 4 + (0x5 << 2)
label_19e1ac:
    if (ctx->pc == 0x19E1ACu) {
        ctx->pc = 0x19E1B0u;
        goto label_19e1b0;
    }
    ctx->pc = 0x19E1A8u;
    {
        const bool branch_taken_0x19e1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1a8) {
            ctx->pc = 0x19E1C0u;
            goto label_19e1c0;
        }
    }
    ctx->pc = 0x19E1B0u;
label_19e1b0:
    // 0x19e1b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e1b4:
    // 0x19e1b4: 0xc06fb58  jal         func_1BED60
label_19e1b8:
    if (ctx->pc == 0x19E1B8u) {
        ctx->pc = 0x19E1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1B4u;
        // 0x19e1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1BCu;
        goto label_19e1bc;
    }
    ctx->pc = 0x19E1B4u;
    SET_GPR_U32(ctx, 31, 0x19E1BCu);
    ctx->pc = 0x19E1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1B4u;
    // 0x19e1b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x19E1B4u, 0x19E1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1BCu;
label_19e1bc:
    // 0x19e1bc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19e1bcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e1c0:
    // 0x19e1c0: 0xc061a1e  jal         func_186878
label_19e1c4:
    if (ctx->pc == 0x19E1C4u) {
        ctx->pc = 0x19E1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1C0u;
        // 0x19e1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1C8u;
        goto label_19e1c8;
    }
    ctx->pc = 0x19E1C0u;
    SET_GPR_U32(ctx, 31, 0x19E1C8u);
    ctx->pc = 0x19E1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1C0u;
    // 0x19e1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E1C0u, 0x19E1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1C8u;
label_19e1c8:
    // 0x19e1c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e1cc:
    // 0x19e1cc: 0xc06cdea  jal         func_1B37A8
label_19e1d0:
    if (ctx->pc == 0x19E1D0u) {
        ctx->pc = 0x19E1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1CCu;
        // 0x19e1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1D4u;
        goto label_19e1d4;
    }
    ctx->pc = 0x19E1CCu;
    SET_GPR_U32(ctx, 31, 0x19E1D4u);
    ctx->pc = 0x19E1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1CCu;
    // 0x19e1d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B37A8u, 0x19E1CCu, 0x19E1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1D4u;
label_19e1d4:
    // 0x19e1d4: 0x5280003b  beql        $s4, $zero, . + 4 + (0x3B << 2)
label_19e1d8:
    if (ctx->pc == 0x19E1D8u) {
        ctx->pc = 0x19E1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1D4u;
        // 0x19e1d8: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1DCu;
        goto label_19e1dc;
    }
    ctx->pc = 0x19E1D4u;
    {
        const bool branch_taken_0x19e1d4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e1d4) {
            ctx->pc = 0x19E1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E1D4u;
            // 0x19e1d8: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E2C4u;
            goto label_19e2c4;
        }
    }
    ctx->pc = 0x19E1DCu;
label_19e1dc:
    // 0x19e1dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19e1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_19e1e0:
    // 0x19e1e0: 0xc06fb58  jal         func_1BED60
label_19e1e4:
    if (ctx->pc == 0x19E1E4u) {
        ctx->pc = 0x19E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1E0u;
        // 0x19e1e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1E8u;
        goto label_19e1e8;
    }
    ctx->pc = 0x19E1E0u;
    SET_GPR_U32(ctx, 31, 0x19E1E8u);
    ctx->pc = 0x19E1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E0u;
    // 0x19e1e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BED60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BED60u, 0x19E1E0u, 0x19E1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1E8u;
label_19e1e8:
    // 0x19e1e8: 0xc061a12  jal         func_186848
label_19e1ec:
    if (ctx->pc == 0x19E1ECu) {
        ctx->pc = 0x19E1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E1E8u;
        // 0x19e1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E1F0u;
        goto label_19e1f0;
    }
    ctx->pc = 0x19E1E8u;
    SET_GPR_U32(ctx, 31, 0x19E1F0u);
    ctx->pc = 0x19E1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E1E8u;
    // 0x19e1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E1E8u, 0x19E1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E1F0u;
label_19e1f0:
    // 0x19e1f0: 0x244201e0  addiu       $v0, $v0, 0x1E0
    ctx->pc = 0x19e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 480));
label_19e1f4:
    // 0x19e1f4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x19e1f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_19e1f8:
    // 0x19e1f8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x19e1f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_19e1fc:
    // 0x19e1fc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x19e1fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19e200:
    // 0x19e200: 0xfba10090  sqc2        $vf1, 0x90($sp)
    ctx->pc = 0x19e200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[1]));
label_19e204:
    // 0x19e204: 0xc7a20090  lwc1        $f2, 0x90($sp)
    ctx->pc = 0x19e204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e208:
    // 0x19e208: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x19e208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_19e20c:
    // 0x19e20c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x19e20cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e210:
    // 0x19e210: 0xc7a1009c  lwc1        $f1, 0x9C($sp)
    ctx->pc = 0x19e210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_19e214:
    // 0x19e214: 0xe7a20080  swc1        $f2, 0x80($sp)
    ctx->pc = 0x19e214u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_19e218:
    // 0x19e218: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x19e218u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_19e21c:
    // 0x19e21c: 0xe7a1008c  swc1        $f1, 0x8C($sp)
    ctx->pc = 0x19e21cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_19e220:
    // 0x19e220: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x19e220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_19e224:
    // 0x19e224: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x19e224u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_19e228:
    // 0x19e228: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x19e228u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19e22c:
    // 0x19e22c: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x19e22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19e230:
    // 0x19e230: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x19e230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_19e234:
    // 0x19e234: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x19e234u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_19e238:
    // 0x19e238: 0x4a0003bf  vwaitq
    ctx->pc = 0x19e238u;
    // VWAITQ (Q already resolved in this runtime)
label_19e23c:
    // 0x19e23c: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x19e23cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_19e240:
    // 0x19e240: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x19e240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_19e244:
    // 0x19e244: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x19e244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_19e248:
    // 0x19e248: 0x8c640104  lw          $a0, 0x104($v1)
    ctx->pc = 0x19e248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_19e24c:
    // 0x19e24c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_19e250:
    // 0x19e250: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x19e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_19e254:
    // 0x19e254: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x19e254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e258:
    // 0x19e258: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x19e258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e25c:
    // 0x19e25c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19e25cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_19e260:
    // 0x19e260: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x19e260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e264:
    // 0x19e264: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x19e264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e268:
    // 0x19e268: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x19e268u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_19e26c:
    // 0x19e26c: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x19e26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_19e270:
    // 0x19e270: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x19e270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_19e274:
    // 0x19e274: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x19e274u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_19e278:
    // 0x19e278: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x19e278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
label_19e27c:
    // 0x19e27c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x19e27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_19e280:
    // 0x19e280: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e284:
    // 0x19e284: 0x0  nop
    ctx->pc = 0x19e284u;
    // NOP
label_19e288:
    // 0x19e288: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x19e288u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e28c:
    // 0x19e28c: 0x0  nop
    ctx->pc = 0x19e28cu;
    // NOP
label_19e290:
    // 0x19e290: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
label_19e294:
    if (ctx->pc == 0x19E294u) {
        ctx->pc = 0x19E294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E290u;
        // 0x19e294: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E298u;
        goto label_19e298;
    }
    ctx->pc = 0x19E290u;
    {
        const bool branch_taken_0x19e290 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19e290) {
            ctx->pc = 0x19E294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E290u;
            // 0x19e294: 0xc6200080  lwc1        $f0, 0x80($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E2C4u;
            goto label_19e2c4;
        }
    }
    ctx->pc = 0x19E298u;
label_19e298:
    // 0x19e298: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e29c:
    // 0x19e29c: 0xc061a1e  jal         func_186878
label_19e2a0:
    if (ctx->pc == 0x19E2A0u) {
        ctx->pc = 0x19E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E29Cu;
        // 0x19e2a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2A4u;
        goto label_19e2a4;
    }
    ctx->pc = 0x19E29Cu;
    SET_GPR_U32(ctx, 31, 0x19E2A4u);
    ctx->pc = 0x19E2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E29Cu;
    // 0x19e2a0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E29Cu, 0x19E2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2A4u;
label_19e2a4:
    // 0x19e2a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e2a8:
    // 0x19e2a8: 0xc061a1e  jal         func_186878
label_19e2ac:
    if (ctx->pc == 0x19E2ACu) {
        ctx->pc = 0x19E2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2A8u;
        // 0x19e2ac: 0xac500158  sw          $s0, 0x158($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2B0u;
        goto label_19e2b0;
    }
    ctx->pc = 0x19E2A8u;
    SET_GPR_U32(ctx, 31, 0x19E2B0u);
    ctx->pc = 0x19E2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2A8u;
    // 0x19e2ac: 0xac500158  sw          $s0, 0x158($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E2A8u, 0x19E2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2B0u;
label_19e2b0:
    // 0x19e2b0: 0xac50015c  sw          $s0, 0x15C($v0)
    ctx->pc = 0x19e2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 16));
label_19e2b4:
    // 0x19e2b4: 0xc061a1e  jal         func_186878
label_19e2b8:
    if (ctx->pc == 0x19E2B8u) {
        ctx->pc = 0x19E2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2B4u;
        // 0x19e2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2BCu;
        goto label_19e2bc;
    }
    ctx->pc = 0x19E2B4u;
    SET_GPR_U32(ctx, 31, 0x19E2BCu);
    ctx->pc = 0x19E2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E2B4u;
    // 0x19e2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x19E2B4u, 0x19E2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E2BCu;
label_19e2bc:
    // 0x19e2bc: 0xac500220  sw          $s0, 0x220($v0)
    ctx->pc = 0x19e2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 16));
label_19e2c0:
    // 0x19e2c0: 0xc6200080  lwc1        $f0, 0x80($s1)
    ctx->pc = 0x19e2c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_19e2c4:
    // 0x19e2c4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x19e2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_19e2c8:
    // 0x19e2c8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x19e2c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_19e2cc:
    // 0x19e2cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19e2ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e2d0:
    // 0x19e2d0: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x19e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_19e2d4:
    // 0x19e2d4: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_19e2d8:
    if (ctx->pc == 0x19E2D8u) {
        ctx->pc = 0x19E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D4u;
        // 0x19e2d8: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E2DCu;
        goto label_19e2dc;
    }
    ctx->pc = 0x19E2D4u;
    {
        const bool branch_taken_0x19e2d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x19E2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E2D4u;
        // 0x19e2d8: 0x46010080  add.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e2d4) {
            ctx->pc = 0x19E2F0u;
            goto label_19e2f0;
        }
    }
    ctx->pc = 0x19E2DCu;
label_19e2dc:
    // 0x19e2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e2e0:
    // 0x19e2e0: 0x0  nop
    ctx->pc = 0x19e2e0u;
    // NOP
label_19e2e4:
    // 0x19e2e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19e2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19e2e8:
    // 0x19e2e8: 0x10000008  b           . + 4 + (0x8 << 2)
label_19e2ec:
    if (ctx->pc == 0x19E2ECu) {
        ctx->pc = 0x19E2F0u;
        goto label_19e2f0;
    }
    ctx->pc = 0x19E2E8u;
    {
        const bool branch_taken_0x19e2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e2e8) {
            ctx->pc = 0x19E30Cu;
            goto label_19e30c;
        }
    }
    ctx->pc = 0x19E2F0u;
label_19e2f0:
    // 0x19e2f0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x19e2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_19e2f4:
    // 0x19e2f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19e2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_19e2f8:
    // 0x19e2f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x19e2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_19e2fc:
    // 0x19e2fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x19e2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_19e300:
    // 0x19e300: 0x0  nop
    ctx->pc = 0x19e300u;
    // NOP
label_19e304:
    // 0x19e304: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x19e304u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_19e308:
    // 0x19e308: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x19e308u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_19e30c:
    // 0x19e30c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x19e30cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_19e310:
    // 0x19e310: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x19e310u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_19e314:
    // 0x19e314: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e318:
    // 0x19e318: 0x0  nop
    ctx->pc = 0x19e318u;
    // NOP
label_19e31c:
    // 0x19e31c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x19e31cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_19e320:
    // 0x19e320: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x19e320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_19e324:
    // 0x19e324: 0x0  nop
    ctx->pc = 0x19e324u;
    // NOP
label_19e328:
    // 0x19e328: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_19e32c:
    if (ctx->pc == 0x19E32Cu) {
        ctx->pc = 0x19E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E328u;
        // 0x19e32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E330u;
        goto label_19e330;
    }
    ctx->pc = 0x19E328u;
    {
        const bool branch_taken_0x19e328 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19E32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E328u;
        // 0x19e32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e328) {
            ctx->pc = 0x19E334u;
            goto label_19e334;
        }
    }
    ctx->pc = 0x19E330u;
label_19e330:
    // 0x19e330: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x19e330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
label_19e334:
    // 0x19e334: 0x8e300084  lw          $s0, 0x84($s1)
    ctx->pc = 0x19e334u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_19e338:
    // 0x19e338: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x19e338u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19e33c:
    // 0x19e33c: 0x12120054  beq         $s0, $s2, . + 4 + (0x54 << 2)
label_19e340:
    if (ctx->pc == 0x19E340u) {
        ctx->pc = 0x19E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E33Cu;
        // 0x19e340: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E344u;
        goto label_19e344;
    }
    ctx->pc = 0x19E33Cu;
    {
        const bool branch_taken_0x19e33c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x19E340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E33Cu;
        // 0x19e340: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e33c) {
            ctx->pc = 0x19E490u;
            goto label_19e490;
        }
    }
    ctx->pc = 0x19E344u;
label_19e344:
    // 0x19e344: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_19e348:
    if (ctx->pc == 0x19E348u) {
        ctx->pc = 0x19E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E344u;
        // 0x19e348: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E34Cu;
        goto label_19e34c;
    }
    ctx->pc = 0x19E344u;
    {
        const bool branch_taken_0x19e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E344u;
        // 0x19e348: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e344) {
            ctx->pc = 0x19E35Cu;
            goto label_19e35c;
        }
    }
    ctx->pc = 0x19E34Cu;
label_19e34c:
    // 0x19e34c: 0x12000042  beqz        $s0, . + 4 + (0x42 << 2)
label_19e350:
    if (ctx->pc == 0x19E350u) {
        ctx->pc = 0x19E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E34Cu;
        // 0x19e350: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E354u;
        goto label_19e354;
    }
    ctx->pc = 0x19E34Cu;
    {
        const bool branch_taken_0x19e34c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E34Cu;
        // 0x19e350: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e34c) {
            ctx->pc = 0x19E458u;
            goto label_19e458;
        }
    }
    ctx->pc = 0x19E354u;
label_19e354:
    // 0x19e354: 0x1000005d  b           . + 4 + (0x5D << 2)
label_19e358:
    if (ctx->pc == 0x19E358u) {
        ctx->pc = 0x19E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E354u;
        // 0x19e358: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E35Cu;
        goto label_19e35c;
    }
    ctx->pc = 0x19E354u;
    {
        const bool branch_taken_0x19e354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E354u;
        // 0x19e358: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e354) {
            ctx->pc = 0x19E4CCu;
            goto label_19e4cc;
        }
    }
    ctx->pc = 0x19E35Cu;
label_19e35c:
    // 0x19e35c: 0x12140005  beq         $s0, $s4, . + 4 + (0x5 << 2)
label_19e360:
    if (ctx->pc == 0x19E360u) {
        ctx->pc = 0x19E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E35Cu;
        // 0x19e360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E364u;
        goto label_19e364;
    }
    ctx->pc = 0x19E35Cu;
    {
        const bool branch_taken_0x19e35c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x19E360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E35Cu;
        // 0x19e360: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e35c) {
            ctx->pc = 0x19E374u;
            goto label_19e374;
        }
    }
    ctx->pc = 0x19E364u;
label_19e364:
    // 0x19e364: 0x12020033  beq         $s0, $v0, . + 4 + (0x33 << 2)
label_19e368:
    if (ctx->pc == 0x19E368u) {
        ctx->pc = 0x19E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E364u;
        // 0x19e368: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E36Cu;
        goto label_19e36c;
    }
    ctx->pc = 0x19E364u;
    {
        const bool branch_taken_0x19e364 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x19E368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E364u;
        // 0x19e368: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e364) {
            ctx->pc = 0x19E434u;
            goto label_19e434;
        }
    }
    ctx->pc = 0x19E36Cu;
label_19e36c:
    // 0x19e36c: 0x10000057  b           . + 4 + (0x57 << 2)
label_19e370:
    if (ctx->pc == 0x19E370u) {
        ctx->pc = 0x19E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E36Cu;
        // 0x19e370: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E374u;
        goto label_19e374;
    }
    ctx->pc = 0x19E36Cu;
    {
        const bool branch_taken_0x19e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E36Cu;
        // 0x19e370: 0xdfb000a0  ld          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e36c) {
            ctx->pc = 0x19E4CCu;
            goto label_19e4cc;
        }
    }
    ctx->pc = 0x19E374u;
label_19e374:
    // 0x19e374: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x19e374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_19e378:
    // 0x19e378: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_19e37c:
    if (ctx->pc == 0x19E37Cu) {
        ctx->pc = 0x19E380u;
        goto label_19e380;
    }
    ctx->pc = 0x19E378u;
    {
        const bool branch_taken_0x19e378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e378) {
            ctx->pc = 0x19E3D4u;
            goto label_19e3d4;
        }
    }
    ctx->pc = 0x19E380u;
label_19e380:
    // 0x19e380: 0xc061a12  jal         func_186848
label_19e384:
    if (ctx->pc == 0x19E384u) {
        ctx->pc = 0x19E384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E380u;
        // 0x19e384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E388u;
        goto label_19e388;
    }
    ctx->pc = 0x19E380u;
    SET_GPR_U32(ctx, 31, 0x19E388u);
    ctx->pc = 0x19E384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E380u;
    // 0x19e384: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E380u, 0x19E388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E388u;
label_19e388:
    // 0x19e388: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x19e388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_19e38c:
    // 0x19e38c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x19e38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e390:
    // 0x19e390: 0xc07026c  jal         func_1C09B0
label_19e394:
    if (ctx->pc == 0x19E394u) {
        ctx->pc = 0x19E394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E390u;
        // 0x19e394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E398u;
        goto label_19e398;
    }
    ctx->pc = 0x19E390u;
    SET_GPR_U32(ctx, 31, 0x19E398u);
    ctx->pc = 0x19E394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E390u;
    // 0x19e394: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09B0u, 0x19E390u, 0x19E398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E398u;
label_19e398:
    // 0x19e398: 0xc061a16  jal         func_186858
label_19e39c:
    if (ctx->pc == 0x19E39Cu) {
        ctx->pc = 0x19E39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E398u;
        // 0x19e39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3A0u;
        goto label_19e3a0;
    }
    ctx->pc = 0x19E398u;
    SET_GPR_U32(ctx, 31, 0x19E3A0u);
    ctx->pc = 0x19E39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E398u;
    // 0x19e39c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E398u, 0x19E3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3A0u;
label_19e3a0:
    // 0x19e3a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e3a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e3a4:
    // 0x19e3a4: 0xc06ee30  jal         func_1BB8C0
label_19e3a8:
    if (ctx->pc == 0x19E3A8u) {
        ctx->pc = 0x19E3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3A4u;
        // 0x19e3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3ACu;
        goto label_19e3ac;
    }
    ctx->pc = 0x19E3A4u;
    SET_GPR_U32(ctx, 31, 0x19E3ACu);
    ctx->pc = 0x19E3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3A4u;
    // 0x19e3a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB8C0u, 0x19E3A4u, 0x19E3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3ACu;
label_19e3ac:
    // 0x19e3ac: 0xc061a16  jal         func_186858
label_19e3b0:
    if (ctx->pc == 0x19E3B0u) {
        ctx->pc = 0x19E3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3ACu;
        // 0x19e3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3B4u;
        goto label_19e3b4;
    }
    ctx->pc = 0x19E3ACu;
    SET_GPR_U32(ctx, 31, 0x19E3B4u);
    ctx->pc = 0x19E3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3ACu;
    // 0x19e3b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E3ACu, 0x19E3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3B4u;
label_19e3b4:
    // 0x19e3b4: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19e3b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19e3b8:
    // 0x19e3b8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e3b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e3bc:
    // 0x19e3bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e3bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e3c0:
    // 0x19e3c0: 0xc061a16  jal         func_186858
label_19e3c4:
    if (ctx->pc == 0x19E3C4u) {
        ctx->pc = 0x19E3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3C0u;
        // 0x19e3c4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3C8u;
        goto label_19e3c8;
    }
    ctx->pc = 0x19E3C0u;
    SET_GPR_U32(ctx, 31, 0x19E3C8u);
    ctx->pc = 0x19E3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3C0u;
    // 0x19e3c4: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E3C0u, 0x19E3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3C8u;
label_19e3c8:
    // 0x19e3c8: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19e3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19e3cc:
    // 0x19e3cc: 0x1000003c  b           . + 4 + (0x3C << 2)
label_19e3d0:
    if (ctx->pc == 0x19E3D0u) {
        ctx->pc = 0x19E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3CCu;
        // 0x19e3d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3D4u;
        goto label_19e3d4;
    }
    ctx->pc = 0x19E3CCu;
    {
        const bool branch_taken_0x19e3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3CCu;
        // 0x19e3d0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e3cc) {
            ctx->pc = 0x19E4C0u;
            goto label_19e4c0;
        }
    }
    ctx->pc = 0x19E3D4u;
label_19e3d4:
    // 0x19e3d4: 0xc061a12  jal         func_186848
label_19e3d8:
    if (ctx->pc == 0x19E3D8u) {
        ctx->pc = 0x19E3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3D4u;
        // 0x19e3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3DCu;
        goto label_19e3dc;
    }
    ctx->pc = 0x19E3D4u;
    SET_GPR_U32(ctx, 31, 0x19E3DCu);
    ctx->pc = 0x19E3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3D4u;
    // 0x19e3d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E3D4u, 0x19E3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E3DCu;
label_19e3dc:
    // 0x19e3dc: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19e3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19e3e0:
    // 0x19e3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e3e4:
    // 0x19e3e4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x19e3e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19e3e8:
    // 0x19e3e8: 0x26260010  addiu       $a2, $s1, 0x10
    ctx->pc = 0x19e3e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_19e3ec:
    // 0x19e3ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x19e3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_19e3f0:
    // 0x19e3f0: 0x40f809  jalr        $v0
label_19e3f4:
    if (ctx->pc == 0x19E3F4u) {
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E3F8u;
        goto label_19e3f8;
    }
    ctx->pc = 0x19E3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E3F8u);
        ctx->pc = 0x19E3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F0u;
        // 0x19e3f4: 0x26250030  addiu       $a1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E3F0u, 0x19E3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E3F8u;
label_19e3f8:
    // 0x19e3f8: 0xc061a16  jal         func_186858
label_19e3fc:
    if (ctx->pc == 0x19E3FCu) {
        ctx->pc = 0x19E3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E3F8u;
        // 0x19e3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E400u;
        goto label_19e400;
    }
    ctx->pc = 0x19E3F8u;
    SET_GPR_U32(ctx, 31, 0x19E400u);
    ctx->pc = 0x19E3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E3F8u;
    // 0x19e3fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E3F8u, 0x19E400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E400u;
label_19e400:
    // 0x19e400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e404:
    // 0x19e404: 0xc06ee5c  jal         func_1BB970
label_19e408:
    if (ctx->pc == 0x19E408u) {
        ctx->pc = 0x19E408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E404u;
        // 0x19e408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E40Cu;
        goto label_19e40c;
    }
    ctx->pc = 0x19E404u;
    SET_GPR_U32(ctx, 31, 0x19E40Cu);
    ctx->pc = 0x19E408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E404u;
    // 0x19e408: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB970u, 0x19E404u, 0x19E40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E40Cu;
label_19e40c:
    // 0x19e40c: 0xc061a16  jal         func_186858
label_19e410:
    if (ctx->pc == 0x19E410u) {
        ctx->pc = 0x19E410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E40Cu;
        // 0x19e410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E414u;
        goto label_19e414;
    }
    ctx->pc = 0x19E40Cu;
    SET_GPR_U32(ctx, 31, 0x19E414u);
    ctx->pc = 0x19E410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E40Cu;
    // 0x19e410: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E40Cu, 0x19E414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E414u;
label_19e414:
    // 0x19e414: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x19e414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_19e418:
    // 0x19e418: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19e418u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_19e41c:
    // 0x19e41c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e420:
    // 0x19e420: 0xc061a16  jal         func_186858
label_19e424:
    if (ctx->pc == 0x19E424u) {
        ctx->pc = 0x19E424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E420u;
        // 0x19e424: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E428u;
        goto label_19e428;
    }
    ctx->pc = 0x19E420u;
    SET_GPR_U32(ctx, 31, 0x19E428u);
    ctx->pc = 0x19E424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E420u;
    // 0x19e424: 0xe4400024  swc1        $f0, 0x24($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E420u, 0x19E428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E428u;
label_19e428:
    // 0x19e428: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x19e428u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_19e42c:
    // 0x19e42c: 0x10000024  b           . + 4 + (0x24 << 2)
label_19e430:
    if (ctx->pc == 0x19E430u) {
        ctx->pc = 0x19E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E42Cu;
        // 0x19e430: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E434u;
        goto label_19e434;
    }
    ctx->pc = 0x19E42Cu;
    {
        const bool branch_taken_0x19e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E42Cu;
        // 0x19e430: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e42c) {
            ctx->pc = 0x19E4C0u;
            goto label_19e4c0;
        }
    }
    ctx->pc = 0x19E434u;
label_19e434:
    // 0x19e434: 0x52a00023  beql        $s5, $zero, . + 4 + (0x23 << 2)
label_19e438:
    if (ctx->pc == 0x19E438u) {
        ctx->pc = 0x19E438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E434u;
        // 0x19e438: 0xae320084  sw          $s2, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E43Cu;
        goto label_19e43c;
    }
    ctx->pc = 0x19E434u;
    {
        const bool branch_taken_0x19e434 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x19e434) {
            ctx->pc = 0x19E438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E434u;
            // 0x19e438: 0xae320084  sw          $s2, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E4C4u;
            goto label_19e4c4;
        }
    }
    ctx->pc = 0x19E43Cu;
label_19e43c:
    // 0x19e43c: 0xc061a12  jal         func_186848
label_19e440:
    if (ctx->pc == 0x19E440u) {
        ctx->pc = 0x19E440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E43Cu;
        // 0x19e440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E444u;
        goto label_19e444;
    }
    ctx->pc = 0x19E43Cu;
    SET_GPR_U32(ctx, 31, 0x19E444u);
    ctx->pc = 0x19E440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E43Cu;
    // 0x19e440: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E43Cu, 0x19E444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E444u;
label_19e444:
    // 0x19e444: 0x8c430338  lw          $v1, 0x338($v0)
    ctx->pc = 0x19e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 824)));
label_19e448:
    // 0x19e448: 0x5460001e  bnel        $v1, $zero, . + 4 + (0x1E << 2)
label_19e44c:
    if (ctx->pc == 0x19E44Cu) {
        ctx->pc = 0x19E44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E448u;
        // 0x19e44c: 0xae340084  sw          $s4, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E450u;
        goto label_19e450;
    }
    ctx->pc = 0x19E448u;
    {
        const bool branch_taken_0x19e448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19e448) {
            ctx->pc = 0x19E44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19E448u;
            // 0x19e44c: 0xae340084  sw          $s4, 0x84($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19E4C4u;
            goto label_19e4c4;
        }
    }
    ctx->pc = 0x19E450u;
label_19e450:
    // 0x19e450: 0x1000001d  b           . + 4 + (0x1D << 2)
label_19e454:
    if (ctx->pc == 0x19E454u) {
        ctx->pc = 0x19E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E450u;
        // 0x19e454: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E458u;
        goto label_19e458;
    }
    ctx->pc = 0x19E450u;
    {
        const bool branch_taken_0x19e450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E450u;
        // 0x19e454: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e450) {
            ctx->pc = 0x19E4C8u;
            goto label_19e4c8;
        }
    }
    ctx->pc = 0x19E458u;
label_19e458:
    // 0x19e458: 0xc061a16  jal         func_186858
label_19e45c:
    if (ctx->pc == 0x19E45Cu) {
        ctx->pc = 0x19E45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E458u;
        // 0x19e45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E460u;
        goto label_19e460;
    }
    ctx->pc = 0x19E458u;
    SET_GPR_U32(ctx, 31, 0x19E460u);
    ctx->pc = 0x19E45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E458u;
    // 0x19e45c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E458u, 0x19E460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E460u;
label_19e460:
    // 0x19e460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19e460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19e464:
    // 0x19e464: 0xc061a12  jal         func_186848
label_19e468:
    if (ctx->pc == 0x19E468u) {
        ctx->pc = 0x19E468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E464u;
        // 0x19e468: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E46Cu;
        goto label_19e46c;
    }
    ctx->pc = 0x19E464u;
    SET_GPR_U32(ctx, 31, 0x19E46Cu);
    ctx->pc = 0x19E468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E464u;
    // 0x19e468: 0xac400040  sw          $zero, 0x40($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E464u, 0x19E46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E46Cu;
label_19e46c:
    // 0x19e46c: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19e46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19e470:
    // 0x19e470: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e474:
    // 0x19e474: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19e474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_19e478:
    // 0x19e478: 0x40f809  jalr        $v0
label_19e47c:
    if (ctx->pc == 0x19E47Cu) {
        ctx->pc = 0x19E480u;
        goto label_19e480;
    }
    ctx->pc = 0x19E478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E480u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E478u, 0x19E480u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E480u;
label_19e480:
    // 0x19e480: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_19e484:
    if (ctx->pc == 0x19E484u) {
        ctx->pc = 0x19E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E480u;
        // 0x19e484: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E488u;
        goto label_19e488;
    }
    ctx->pc = 0x19E480u;
    {
        const bool branch_taken_0x19e480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E480u;
        // 0x19e484: 0x26c20f90  addiu       $v0, $s6, 0xF90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e480) {
            ctx->pc = 0x19E4C8u;
            goto label_19e4c8;
        }
    }
    ctx->pc = 0x19E488u;
label_19e488:
    // 0x19e488: 0x1000000f  b           . + 4 + (0xF << 2)
label_19e48c:
    if (ctx->pc == 0x19E48Cu) {
        ctx->pc = 0x19E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E488u;
        // 0x19e48c: 0xae320084  sw          $s2, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E490u;
        goto label_19e490;
    }
    ctx->pc = 0x19E488u;
    {
        const bool branch_taken_0x19e488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E488u;
        // 0x19e48c: 0xae320084  sw          $s2, 0x84($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e488) {
            ctx->pc = 0x19E4C8u;
            goto label_19e4c8;
        }
    }
    ctx->pc = 0x19E490u;
label_19e490:
    // 0x19e490: 0xc061a12  jal         func_186848
label_19e494:
    if (ctx->pc == 0x19E494u) {
        ctx->pc = 0x19E494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E490u;
        // 0x19e494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E498u;
        goto label_19e498;
    }
    ctx->pc = 0x19E490u;
    SET_GPR_U32(ctx, 31, 0x19E498u);
    ctx->pc = 0x19E494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E490u;
    // 0x19e494: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x19E490u, 0x19E498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E498u;
label_19e498:
    // 0x19e498: 0x8c430394  lw          $v1, 0x394($v0)
    ctx->pc = 0x19e498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 916)));
label_19e49c:
    // 0x19e49c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19e49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19e4a0:
    // 0x19e4a0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x19e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_19e4a4:
    // 0x19e4a4: 0x40f809  jalr        $v0
label_19e4a8:
    if (ctx->pc == 0x19E4A8u) {
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4ACu;
        goto label_19e4ac;
    }
    ctx->pc = 0x19E4A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19E4ACu);
        ctx->pc = 0x19E4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4A4u;
        // 0x19e4a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4A4u, 0x19E4ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19E4ACu;
label_19e4ac:
    // 0x19e4ac: 0xc061a16  jal         func_186858
label_19e4b0:
    if (ctx->pc == 0x19E4B0u) {
        ctx->pc = 0x19E4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4ACu;
        // 0x19e4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4B4u;
        goto label_19e4b4;
    }
    ctx->pc = 0x19E4ACu;
    SET_GPR_U32(ctx, 31, 0x19E4B4u);
    ctx->pc = 0x19E4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19E4ACu;
    // 0x19e4b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186858u, 0x19E4ACu, 0x19E4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19E4B4u;
label_19e4b4:
    // 0x19e4b4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_19e4b8:
    if (ctx->pc == 0x19E4B8u) {
        ctx->pc = 0x19E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B4u;
        // 0x19e4b8: 0xac500040  sw          $s0, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4BCu;
        goto label_19e4bc;
    }
    ctx->pc = 0x19E4B4u;
    {
        const bool branch_taken_0x19e4b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x19E4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4B4u;
        // 0x19e4b8: 0xac500040  sw          $s0, 0x40($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19e4b4) {
            ctx->pc = 0x19E4C4u;
            goto label_19e4c4;
        }
    }
    ctx->pc = 0x19E4BCu;
label_19e4bc:
    // 0x19e4bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x19e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_19e4c0:
    // 0x19e4c0: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x19e4c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_19e4c4:
    // 0x19e4c4: 0x26c20f90  addiu       $v0, $s6, 0xF90
    ctx->pc = 0x19e4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 3984));
label_19e4c8:
    // 0x19e4c8: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x19e4c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_19e4cc:
    // 0x19e4cc: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x19e4ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_19e4d0:
    // 0x19e4d0: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x19e4d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_19e4d4:
    // 0x19e4d4: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x19e4d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_19e4d8:
    // 0x19e4d8: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x19e4d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_19e4dc:
    // 0x19e4dc: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x19e4dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_19e4e0:
    // 0x19e4e0: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x19e4e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_19e4e4:
    // 0x19e4e4: 0xdfbf00d8  ld          $ra, 0xD8($sp)
    ctx->pc = 0x19e4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_19e4e8:
    // 0x19e4e8: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x19e4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19e4ec:
    // 0x19e4ec: 0xafa20078  sw          $v0, 0x78($sp)
    ctx->pc = 0x19e4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
label_19e4f0:
    // 0x19e4f0: 0x3e00008  jr          $ra
label_19e4f4:
    if (ctx->pc == 0x19E4F4u) {
        ctx->pc = 0x19E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4F0u;
        // 0x19e4f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19E4F8u;
        goto label_fallthrough_0x19e4f0;
    }
    ctx->pc = 0x19E4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19E4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19E4F0u;
        // 0x19e4f4: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19E4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x19e4f0:
    ctx->pc = 0x19E4F8u;
}
