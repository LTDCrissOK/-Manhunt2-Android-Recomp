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

// Function: sub_0026EF98
// Address: 0x26ef98 - 0x26f4f8
void sub_0026EF98_0x26ef98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EF98_0x26ef98");
#endif

    switch (ctx->pc) {
        case 0x26ef98u: goto label_26ef98;
        case 0x26ef9cu: goto label_26ef9c;
        case 0x26efa0u: goto label_26efa0;
        case 0x26efa4u: goto label_26efa4;
        case 0x26efa8u: goto label_26efa8;
        case 0x26efacu: goto label_26efac;
        case 0x26efb0u: goto label_26efb0;
        case 0x26efb4u: goto label_26efb4;
        case 0x26efb8u: goto label_26efb8;
        case 0x26efbcu: goto label_26efbc;
        case 0x26efc0u: goto label_26efc0;
        case 0x26efc4u: goto label_26efc4;
        case 0x26efc8u: goto label_26efc8;
        case 0x26efccu: goto label_26efcc;
        case 0x26efd0u: goto label_26efd0;
        case 0x26efd4u: goto label_26efd4;
        case 0x26efd8u: goto label_26efd8;
        case 0x26efdcu: goto label_26efdc;
        case 0x26efe0u: goto label_26efe0;
        case 0x26efe4u: goto label_26efe4;
        case 0x26efe8u: goto label_26efe8;
        case 0x26efecu: goto label_26efec;
        case 0x26eff0u: goto label_26eff0;
        case 0x26eff4u: goto label_26eff4;
        case 0x26eff8u: goto label_26eff8;
        case 0x26effcu: goto label_26effc;
        case 0x26f000u: goto label_26f000;
        case 0x26f004u: goto label_26f004;
        case 0x26f008u: goto label_26f008;
        case 0x26f00cu: goto label_26f00c;
        case 0x26f010u: goto label_26f010;
        case 0x26f014u: goto label_26f014;
        case 0x26f018u: goto label_26f018;
        case 0x26f01cu: goto label_26f01c;
        case 0x26f020u: goto label_26f020;
        case 0x26f024u: goto label_26f024;
        case 0x26f028u: goto label_26f028;
        case 0x26f02cu: goto label_26f02c;
        case 0x26f030u: goto label_26f030;
        case 0x26f034u: goto label_26f034;
        case 0x26f038u: goto label_26f038;
        case 0x26f03cu: goto label_26f03c;
        case 0x26f040u: goto label_26f040;
        case 0x26f044u: goto label_26f044;
        case 0x26f048u: goto label_26f048;
        case 0x26f04cu: goto label_26f04c;
        case 0x26f050u: goto label_26f050;
        case 0x26f054u: goto label_26f054;
        case 0x26f058u: goto label_26f058;
        case 0x26f05cu: goto label_26f05c;
        case 0x26f060u: goto label_26f060;
        case 0x26f064u: goto label_26f064;
        case 0x26f068u: goto label_26f068;
        case 0x26f06cu: goto label_26f06c;
        case 0x26f070u: goto label_26f070;
        case 0x26f074u: goto label_26f074;
        case 0x26f078u: goto label_26f078;
        case 0x26f07cu: goto label_26f07c;
        case 0x26f080u: goto label_26f080;
        case 0x26f084u: goto label_26f084;
        case 0x26f088u: goto label_26f088;
        case 0x26f08cu: goto label_26f08c;
        case 0x26f090u: goto label_26f090;
        case 0x26f094u: goto label_26f094;
        case 0x26f098u: goto label_26f098;
        case 0x26f09cu: goto label_26f09c;
        case 0x26f0a0u: goto label_26f0a0;
        case 0x26f0a4u: goto label_26f0a4;
        case 0x26f0a8u: goto label_26f0a8;
        case 0x26f0acu: goto label_26f0ac;
        case 0x26f0b0u: goto label_26f0b0;
        case 0x26f0b4u: goto label_26f0b4;
        case 0x26f0b8u: goto label_26f0b8;
        case 0x26f0bcu: goto label_26f0bc;
        case 0x26f0c0u: goto label_26f0c0;
        case 0x26f0c4u: goto label_26f0c4;
        case 0x26f0c8u: goto label_26f0c8;
        case 0x26f0ccu: goto label_26f0cc;
        case 0x26f0d0u: goto label_26f0d0;
        case 0x26f0d4u: goto label_26f0d4;
        case 0x26f0d8u: goto label_26f0d8;
        case 0x26f0dcu: goto label_26f0dc;
        case 0x26f0e0u: goto label_26f0e0;
        case 0x26f0e4u: goto label_26f0e4;
        case 0x26f0e8u: goto label_26f0e8;
        case 0x26f0ecu: goto label_26f0ec;
        case 0x26f0f0u: goto label_26f0f0;
        case 0x26f0f4u: goto label_26f0f4;
        case 0x26f0f8u: goto label_26f0f8;
        case 0x26f0fcu: goto label_26f0fc;
        case 0x26f100u: goto label_26f100;
        case 0x26f104u: goto label_26f104;
        case 0x26f108u: goto label_26f108;
        case 0x26f10cu: goto label_26f10c;
        case 0x26f110u: goto label_26f110;
        case 0x26f114u: goto label_26f114;
        case 0x26f118u: goto label_26f118;
        case 0x26f11cu: goto label_26f11c;
        case 0x26f120u: goto label_26f120;
        case 0x26f124u: goto label_26f124;
        case 0x26f128u: goto label_26f128;
        case 0x26f12cu: goto label_26f12c;
        case 0x26f130u: goto label_26f130;
        case 0x26f134u: goto label_26f134;
        case 0x26f138u: goto label_26f138;
        case 0x26f13cu: goto label_26f13c;
        case 0x26f140u: goto label_26f140;
        case 0x26f144u: goto label_26f144;
        case 0x26f148u: goto label_26f148;
        case 0x26f14cu: goto label_26f14c;
        case 0x26f150u: goto label_26f150;
        case 0x26f154u: goto label_26f154;
        case 0x26f158u: goto label_26f158;
        case 0x26f15cu: goto label_26f15c;
        case 0x26f160u: goto label_26f160;
        case 0x26f164u: goto label_26f164;
        case 0x26f168u: goto label_26f168;
        case 0x26f16cu: goto label_26f16c;
        case 0x26f170u: goto label_26f170;
        case 0x26f174u: goto label_26f174;
        case 0x26f178u: goto label_26f178;
        case 0x26f17cu: goto label_26f17c;
        case 0x26f180u: goto label_26f180;
        case 0x26f184u: goto label_26f184;
        case 0x26f188u: goto label_26f188;
        case 0x26f18cu: goto label_26f18c;
        case 0x26f190u: goto label_26f190;
        case 0x26f194u: goto label_26f194;
        case 0x26f198u: goto label_26f198;
        case 0x26f19cu: goto label_26f19c;
        case 0x26f1a0u: goto label_26f1a0;
        case 0x26f1a4u: goto label_26f1a4;
        case 0x26f1a8u: goto label_26f1a8;
        case 0x26f1acu: goto label_26f1ac;
        case 0x26f1b0u: goto label_26f1b0;
        case 0x26f1b4u: goto label_26f1b4;
        case 0x26f1b8u: goto label_26f1b8;
        case 0x26f1bcu: goto label_26f1bc;
        case 0x26f1c0u: goto label_26f1c0;
        case 0x26f1c4u: goto label_26f1c4;
        case 0x26f1c8u: goto label_26f1c8;
        case 0x26f1ccu: goto label_26f1cc;
        case 0x26f1d0u: goto label_26f1d0;
        case 0x26f1d4u: goto label_26f1d4;
        case 0x26f1d8u: goto label_26f1d8;
        case 0x26f1dcu: goto label_26f1dc;
        case 0x26f1e0u: goto label_26f1e0;
        case 0x26f1e4u: goto label_26f1e4;
        case 0x26f1e8u: goto label_26f1e8;
        case 0x26f1ecu: goto label_26f1ec;
        case 0x26f1f0u: goto label_26f1f0;
        case 0x26f1f4u: goto label_26f1f4;
        case 0x26f1f8u: goto label_26f1f8;
        case 0x26f1fcu: goto label_26f1fc;
        case 0x26f200u: goto label_26f200;
        case 0x26f204u: goto label_26f204;
        case 0x26f208u: goto label_26f208;
        case 0x26f20cu: goto label_26f20c;
        case 0x26f210u: goto label_26f210;
        case 0x26f214u: goto label_26f214;
        case 0x26f218u: goto label_26f218;
        case 0x26f21cu: goto label_26f21c;
        case 0x26f220u: goto label_26f220;
        case 0x26f224u: goto label_26f224;
        case 0x26f228u: goto label_26f228;
        case 0x26f22cu: goto label_26f22c;
        case 0x26f230u: goto label_26f230;
        case 0x26f234u: goto label_26f234;
        case 0x26f238u: goto label_26f238;
        case 0x26f23cu: goto label_26f23c;
        case 0x26f240u: goto label_26f240;
        case 0x26f244u: goto label_26f244;
        case 0x26f248u: goto label_26f248;
        case 0x26f24cu: goto label_26f24c;
        case 0x26f250u: goto label_26f250;
        case 0x26f254u: goto label_26f254;
        case 0x26f258u: goto label_26f258;
        case 0x26f25cu: goto label_26f25c;
        case 0x26f260u: goto label_26f260;
        case 0x26f264u: goto label_26f264;
        case 0x26f268u: goto label_26f268;
        case 0x26f26cu: goto label_26f26c;
        case 0x26f270u: goto label_26f270;
        case 0x26f274u: goto label_26f274;
        case 0x26f278u: goto label_26f278;
        case 0x26f27cu: goto label_26f27c;
        case 0x26f280u: goto label_26f280;
        case 0x26f284u: goto label_26f284;
        case 0x26f288u: goto label_26f288;
        case 0x26f28cu: goto label_26f28c;
        case 0x26f290u: goto label_26f290;
        case 0x26f294u: goto label_26f294;
        case 0x26f298u: goto label_26f298;
        case 0x26f29cu: goto label_26f29c;
        case 0x26f2a0u: goto label_26f2a0;
        case 0x26f2a4u: goto label_26f2a4;
        case 0x26f2a8u: goto label_26f2a8;
        case 0x26f2acu: goto label_26f2ac;
        case 0x26f2b0u: goto label_26f2b0;
        case 0x26f2b4u: goto label_26f2b4;
        case 0x26f2b8u: goto label_26f2b8;
        case 0x26f2bcu: goto label_26f2bc;
        case 0x26f2c0u: goto label_26f2c0;
        case 0x26f2c4u: goto label_26f2c4;
        case 0x26f2c8u: goto label_26f2c8;
        case 0x26f2ccu: goto label_26f2cc;
        case 0x26f2d0u: goto label_26f2d0;
        case 0x26f2d4u: goto label_26f2d4;
        case 0x26f2d8u: goto label_26f2d8;
        case 0x26f2dcu: goto label_26f2dc;
        case 0x26f2e0u: goto label_26f2e0;
        case 0x26f2e4u: goto label_26f2e4;
        case 0x26f2e8u: goto label_26f2e8;
        case 0x26f2ecu: goto label_26f2ec;
        case 0x26f2f0u: goto label_26f2f0;
        case 0x26f2f4u: goto label_26f2f4;
        case 0x26f2f8u: goto label_26f2f8;
        case 0x26f2fcu: goto label_26f2fc;
        case 0x26f300u: goto label_26f300;
        case 0x26f304u: goto label_26f304;
        case 0x26f308u: goto label_26f308;
        case 0x26f30cu: goto label_26f30c;
        case 0x26f310u: goto label_26f310;
        case 0x26f314u: goto label_26f314;
        case 0x26f318u: goto label_26f318;
        case 0x26f31cu: goto label_26f31c;
        case 0x26f320u: goto label_26f320;
        case 0x26f324u: goto label_26f324;
        case 0x26f328u: goto label_26f328;
        case 0x26f32cu: goto label_26f32c;
        case 0x26f330u: goto label_26f330;
        case 0x26f334u: goto label_26f334;
        case 0x26f338u: goto label_26f338;
        case 0x26f33cu: goto label_26f33c;
        case 0x26f340u: goto label_26f340;
        case 0x26f344u: goto label_26f344;
        case 0x26f348u: goto label_26f348;
        case 0x26f34cu: goto label_26f34c;
        case 0x26f350u: goto label_26f350;
        case 0x26f354u: goto label_26f354;
        case 0x26f358u: goto label_26f358;
        case 0x26f35cu: goto label_26f35c;
        case 0x26f360u: goto label_26f360;
        case 0x26f364u: goto label_26f364;
        case 0x26f368u: goto label_26f368;
        case 0x26f36cu: goto label_26f36c;
        case 0x26f370u: goto label_26f370;
        case 0x26f374u: goto label_26f374;
        case 0x26f378u: goto label_26f378;
        case 0x26f37cu: goto label_26f37c;
        case 0x26f380u: goto label_26f380;
        case 0x26f384u: goto label_26f384;
        case 0x26f388u: goto label_26f388;
        case 0x26f38cu: goto label_26f38c;
        case 0x26f390u: goto label_26f390;
        case 0x26f394u: goto label_26f394;
        case 0x26f398u: goto label_26f398;
        case 0x26f39cu: goto label_26f39c;
        case 0x26f3a0u: goto label_26f3a0;
        case 0x26f3a4u: goto label_26f3a4;
        case 0x26f3a8u: goto label_26f3a8;
        case 0x26f3acu: goto label_26f3ac;
        case 0x26f3b0u: goto label_26f3b0;
        case 0x26f3b4u: goto label_26f3b4;
        case 0x26f3b8u: goto label_26f3b8;
        case 0x26f3bcu: goto label_26f3bc;
        case 0x26f3c0u: goto label_26f3c0;
        case 0x26f3c4u: goto label_26f3c4;
        case 0x26f3c8u: goto label_26f3c8;
        case 0x26f3ccu: goto label_26f3cc;
        case 0x26f3d0u: goto label_26f3d0;
        case 0x26f3d4u: goto label_26f3d4;
        case 0x26f3d8u: goto label_26f3d8;
        case 0x26f3dcu: goto label_26f3dc;
        case 0x26f3e0u: goto label_26f3e0;
        case 0x26f3e4u: goto label_26f3e4;
        case 0x26f3e8u: goto label_26f3e8;
        case 0x26f3ecu: goto label_26f3ec;
        case 0x26f3f0u: goto label_26f3f0;
        case 0x26f3f4u: goto label_26f3f4;
        case 0x26f3f8u: goto label_26f3f8;
        case 0x26f3fcu: goto label_26f3fc;
        case 0x26f400u: goto label_26f400;
        case 0x26f404u: goto label_26f404;
        case 0x26f408u: goto label_26f408;
        case 0x26f40cu: goto label_26f40c;
        case 0x26f410u: goto label_26f410;
        case 0x26f414u: goto label_26f414;
        case 0x26f418u: goto label_26f418;
        case 0x26f41cu: goto label_26f41c;
        case 0x26f420u: goto label_26f420;
        case 0x26f424u: goto label_26f424;
        case 0x26f428u: goto label_26f428;
        case 0x26f42cu: goto label_26f42c;
        case 0x26f430u: goto label_26f430;
        case 0x26f434u: goto label_26f434;
        case 0x26f438u: goto label_26f438;
        case 0x26f43cu: goto label_26f43c;
        case 0x26f440u: goto label_26f440;
        case 0x26f444u: goto label_26f444;
        case 0x26f448u: goto label_26f448;
        case 0x26f44cu: goto label_26f44c;
        case 0x26f450u: goto label_26f450;
        case 0x26f454u: goto label_26f454;
        case 0x26f458u: goto label_26f458;
        case 0x26f45cu: goto label_26f45c;
        case 0x26f460u: goto label_26f460;
        case 0x26f464u: goto label_26f464;
        case 0x26f468u: goto label_26f468;
        case 0x26f46cu: goto label_26f46c;
        case 0x26f470u: goto label_26f470;
        case 0x26f474u: goto label_26f474;
        case 0x26f478u: goto label_26f478;
        case 0x26f47cu: goto label_26f47c;
        case 0x26f480u: goto label_26f480;
        case 0x26f484u: goto label_26f484;
        case 0x26f488u: goto label_26f488;
        case 0x26f48cu: goto label_26f48c;
        case 0x26f490u: goto label_26f490;
        case 0x26f494u: goto label_26f494;
        case 0x26f498u: goto label_26f498;
        case 0x26f49cu: goto label_26f49c;
        case 0x26f4a0u: goto label_26f4a0;
        case 0x26f4a4u: goto label_26f4a4;
        case 0x26f4a8u: goto label_26f4a8;
        case 0x26f4acu: goto label_26f4ac;
        case 0x26f4b0u: goto label_26f4b0;
        case 0x26f4b4u: goto label_26f4b4;
        case 0x26f4b8u: goto label_26f4b8;
        case 0x26f4bcu: goto label_26f4bc;
        case 0x26f4c0u: goto label_26f4c0;
        case 0x26f4c4u: goto label_26f4c4;
        case 0x26f4c8u: goto label_26f4c8;
        case 0x26f4ccu: goto label_26f4cc;
        case 0x26f4d0u: goto label_26f4d0;
        case 0x26f4d4u: goto label_26f4d4;
        case 0x26f4d8u: goto label_26f4d8;
        case 0x26f4dcu: goto label_26f4dc;
        case 0x26f4e0u: goto label_26f4e0;
        case 0x26f4e4u: goto label_26f4e4;
        case 0x26f4e8u: goto label_26f4e8;
        case 0x26f4ecu: goto label_26f4ec;
        case 0x26f4f0u: goto label_26f4f0;
        case 0x26f4f4u: goto label_26f4f4;
        default: break;
    }

    ctx->pc = 0x26ef98u;

label_26ef98:
    // 0x26ef98: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x26ef98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_26ef9c:
    // 0x26ef9c: 0xffb400a0  sd          $s4, 0xA0($sp)
    ctx->pc = 0x26ef9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 20));
label_26efa0:
    // 0x26efa0: 0xffb500a8  sd          $s5, 0xA8($sp)
    ctx->pc = 0x26efa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 21));
label_26efa4:
    // 0x26efa4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26efa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26efa8:
    // 0x26efa8: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x26efa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
label_26efac:
    // 0x26efac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x26efacu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26efb0:
    // 0x26efb0: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x26efb0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_26efb4:
    // 0x26efb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26efb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26efb8:
    // 0x26efb8: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x26efb8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_26efbc:
    // 0x26efbc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26efbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26efc0:
    // 0x26efc0: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x26efc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_26efc4:
    // 0x26efc4: 0xffb10088  sd          $s1, 0x88($sp)
    ctx->pc = 0x26efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 17));
label_26efc8:
    // 0x26efc8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x26efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_26efcc:
    // 0x26efcc: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x26efccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_26efd0:
    // 0x26efd0: 0xffb700b8  sd          $s7, 0xB8($sp)
    ctx->pc = 0x26efd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 23));
label_26efd4:
    // 0x26efd4: 0xffbf00c8  sd          $ra, 0xC8($sp)
    ctx->pc = 0x26efd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 31));
label_26efd8:
    // 0x26efd8: 0xffb30098  sd          $s3, 0x98($sp)
    ctx->pc = 0x26efd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 19));
label_26efdc:
    // 0x26efdc: 0x8e9300b8  lw          $s3, 0xB8($s4)
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 184)));
label_26efe0:
    // 0x26efe0: 0xc0f6a96  jal         func_3DAA58
label_26efe4:
    if (ctx->pc == 0x26EFE4u) {
        ctx->pc = 0x26EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFE0u;
        // 0x26efe4: 0xafa60070  sw          $a2, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EFE8u;
        goto label_26efe8;
    }
    ctx->pc = 0x26EFE0u;
    SET_GPR_U32(ctx, 31, 0x26EFE8u);
    ctx->pc = 0x26EFE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26EFE0u;
    // 0x26efe4: 0xafa60070  sw          $a2, 0x70($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26EFE0u, 0x26EFE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EFE8u;
label_26efe8:
    // 0x26efe8: 0x8e820220  lw          $v0, 0x220($s4)
    ctx->pc = 0x26efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 544)));
label_26efec:
    // 0x26efec: 0xc67401a4  lwc1        $f20, 0x1A4($s3)
    ctx->pc = 0x26efecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26eff0:
    // 0x26eff0: 0x14400132  bnez        $v0, . + 4 + (0x132 << 2)
label_26eff4:
    if (ctx->pc == 0x26EFF4u) {
        ctx->pc = 0x26EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFF0u;
        // 0x26eff4: 0xc67501a8  lwc1        $f21, 0x1A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26EFF8u;
        goto label_26eff8;
    }
    ctx->pc = 0x26EFF0u;
    {
        const bool branch_taken_0x26eff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26EFF0u;
        // 0x26eff4: 0xc67501a8  lwc1        $f21, 0x1A8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26eff0) {
            ctx->pc = 0x26F4BCu;
            goto label_26f4bc;
        }
    }
    ctx->pc = 0x26EFF8u;
label_26eff8:
    // 0x26eff8: 0x8ea30218  lw          $v1, 0x218($s5)
    ctx->pc = 0x26eff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 536)));
label_26effc:
    // 0x26effc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x26effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f000:
    // 0x26f000: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26f000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f004:
    // 0x26f004: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x26f004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_26f008:
    // 0x26f008: 0x40f809  jalr        $v0
label_26f00c:
    if (ctx->pc == 0x26F00Cu) {
        ctx->pc = 0x26F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F008u;
        // 0x26f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F010u;
        goto label_26f010;
    }
    ctx->pc = 0x26F008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F010u);
        ctx->pc = 0x26F00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F008u;
        // 0x26f00c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F008u, 0x26F010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F010u;
label_26f010:
    // 0x26f010: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_26f014:
    if (ctx->pc == 0x26F014u) {
        ctx->pc = 0x26F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F010u;
        // 0x26f014: 0x8e620200  lw          $v0, 0x200($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F018u;
        goto label_26f018;
    }
    ctx->pc = 0x26F010u;
    {
        const bool branch_taken_0x26f010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f010) {
            ctx->pc = 0x26F014u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F010u;
            // 0x26f014: 0x8e620200  lw          $v0, 0x200($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F064u;
            goto label_26f064;
        }
    }
    ctx->pc = 0x26F018u;
label_26f018:
    // 0x26f018: 0x266301bc  addiu       $v1, $s3, 0x1BC
    ctx->pc = 0x26f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
label_26f01c:
    // 0x26f01c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x26f01cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_26f020:
    // 0x26f020: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26f024:
    if (ctx->pc == 0x26F024u) {
        ctx->pc = 0x26F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F020u;
        // 0x26f024: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F028u;
        goto label_26f028;
    }
    ctx->pc = 0x26F020u;
    {
        const bool branch_taken_0x26f020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F020u;
        // 0x26f024: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f020) {
            ctx->pc = 0x26F030u;
            goto label_26f030;
        }
    }
    ctx->pc = 0x26F028u;
label_26f028:
    // 0x26f028: 0x10000002  b           . + 4 + (0x2 << 2)
label_26f02c:
    if (ctx->pc == 0x26F02Cu) {
        ctx->pc = 0x26F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F028u;
        // 0x26f02c: 0x8e6201bc  lw          $v0, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F030u;
        goto label_26f030;
    }
    ctx->pc = 0x26F028u;
    {
        const bool branch_taken_0x26f028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F028u;
        // 0x26f02c: 0x8e6201bc  lw          $v0, 0x1BC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f028) {
            ctx->pc = 0x26F034u;
            goto label_26f034;
        }
    }
    ctx->pc = 0x26F030u;
label_26f030:
    // 0x26f030: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f030u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f034:
    // 0x26f034: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_26f038:
    if (ctx->pc == 0x26F038u) {
        ctx->pc = 0x26F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F034u;
        // 0x26f038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F03Cu;
        goto label_26f03c;
    }
    ctx->pc = 0x26F034u;
    {
        const bool branch_taken_0x26f034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F034u;
        // 0x26f038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f034) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F03Cu;
label_26f03c:
    // 0x26f03c: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x26f03cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
label_26f040:
    // 0x26f040: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26f044:
    if (ctx->pc == 0x26F044u) {
        ctx->pc = 0x26F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F040u;
        // 0x26f044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F048u;
        goto label_26f048;
    }
    ctx->pc = 0x26F040u;
    {
        const bool branch_taken_0x26f040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F040u;
        // 0x26f044: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f040) {
            ctx->pc = 0x26F04Cu;
            goto label_26f04c;
        }
    }
    ctx->pc = 0x26F048u;
label_26f048:
    // 0x26f048: 0x8e6401bc  lw          $a0, 0x1BC($s3)
    ctx->pc = 0x26f048u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 444)));
label_26f04c:
    // 0x26f04c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26f04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26f050:
    // 0x26f050: 0xc0efb95  jal         func_3BEE54
label_26f054:
    if (ctx->pc == 0x26F054u) {
        ctx->pc = 0x26F054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F050u;
        // 0x26f054: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F058u;
        goto label_26f058;
    }
    ctx->pc = 0x26F050u;
    SET_GPR_U32(ctx, 31, 0x26F058u);
    ctx->pc = 0x26F054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F050u;
    // 0x26f054: 0x24a57c78  addiu       $a1, $a1, 0x7C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26F050u, 0x26F058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F058u;
label_26f058:
    // 0x26f058: 0x14400119  bnez        $v0, . + 4 + (0x119 << 2)
label_26f05c:
    if (ctx->pc == 0x26F05Cu) {
        ctx->pc = 0x26F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F058u;
        // 0x26f05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F060u;
        goto label_26f060;
    }
    ctx->pc = 0x26F058u;
    {
        const bool branch_taken_0x26f058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F058u;
        // 0x26f05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f058) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F060u;
label_26f060:
    // 0x26f060: 0x8e620200  lw          $v0, 0x200($s3)
    ctx->pc = 0x26f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 512)));
label_26f064:
    // 0x26f064: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_26f068:
    if (ctx->pc == 0x26F068u) {
        ctx->pc = 0x26F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F064u;
        // 0x26f068: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F06Cu;
        goto label_26f06c;
    }
    ctx->pc = 0x26F064u;
    {
        const bool branch_taken_0x26f064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f064) {
            ctx->pc = 0x26F068u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F064u;
            // 0x26f068: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F090u;
            goto label_26f090;
        }
    }
    ctx->pc = 0x26F06Cu;
label_26f06c:
    // 0x26f06c: 0x8e830240  lw          $v1, 0x240($s4)
    ctx->pc = 0x26f06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 576)));
label_26f070:
    // 0x26f070: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
label_26f074:
    if (ctx->pc == 0x26F074u) {
        ctx->pc = 0x26F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F070u;
        // 0x26f074: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F078u;
        goto label_26f078;
    }
    ctx->pc = 0x26F070u;
    {
        const bool branch_taken_0x26f070 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f070) {
            ctx->pc = 0x26F074u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F070u;
            // 0x26f074: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F090u;
            goto label_26f090;
        }
    }
    ctx->pc = 0x26F078u;
label_26f078:
    // 0x26f078: 0x8e6201fc  lw          $v0, 0x1FC($s3)
    ctx->pc = 0x26f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 508)));
label_26f07c:
    // 0x26f07c: 0x1040010f  beqz        $v0, . + 4 + (0x10F << 2)
label_26f080:
    if (ctx->pc == 0x26F080u) {
        ctx->pc = 0x26F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F07Cu;
        // 0x26f080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F084u;
        goto label_26f084;
    }
    ctx->pc = 0x26F07Cu;
    {
        const bool branch_taken_0x26f07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F07Cu;
        // 0x26f080: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f07c) {
            ctx->pc = 0x26F4BCu;
            goto label_26f4bc;
        }
    }
    ctx->pc = 0x26F084u;
label_26f084:
    // 0x26f084: 0x1462010e  bne         $v1, $v0, . + 4 + (0x10E << 2)
label_26f088:
    if (ctx->pc == 0x26F088u) {
        ctx->pc = 0x26F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F084u;
        // 0x26f088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F08Cu;
        goto label_26f08c;
    }
    ctx->pc = 0x26F084u;
    {
        const bool branch_taken_0x26f084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F084u;
        // 0x26f088: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f084) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F08Cu;
label_26f08c:
    // 0x26f08c: 0x8e6201d4  lw          $v0, 0x1D4($s3)
    ctx->pc = 0x26f08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_26f090:
    // 0x26f090: 0x1840002d  blez        $v0, . + 4 + (0x2D << 2)
label_26f094:
    if (ctx->pc == 0x26F094u) {
        ctx->pc = 0x26F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F090u;
        // 0x26f094: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F098u;
        goto label_26f098;
    }
    ctx->pc = 0x26F090u;
    {
        const bool branch_taken_0x26f090 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x26F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F090u;
        // 0x26f094: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f090) {
            ctx->pc = 0x26F148u;
            goto label_26f148;
        }
    }
    ctx->pc = 0x26F098u;
label_26f098:
    // 0x26f098: 0x3c170046  lui         $s7, 0x46
    ctx->pc = 0x26f098u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)70 << 16));
label_26f09c:
    // 0x26f09c: 0x24160013  addiu       $s6, $zero, 0x13
    ctx->pc = 0x26f09cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_26f0a0:
    // 0x26f0a0: 0x267101bc  addiu       $s1, $s3, 0x1BC
    ctx->pc = 0x26f0a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 444));
label_26f0a4:
    // 0x26f0a4: 0x0  nop
    ctx->pc = 0x26f0a4u;
    // NOP
label_26f0a8:
    // 0x26f0a8: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x26f0a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_26f0ac:
    // 0x26f0ac: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26f0b0:
    if (ctx->pc == 0x26F0B0u) {
        ctx->pc = 0x26F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0ACu;
        // 0x26f0b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0B4u;
        goto label_26f0b4;
    }
    ctx->pc = 0x26F0ACu;
    {
        const bool branch_taken_0x26f0ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0ACu;
        // 0x26f0b0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0ac) {
            ctx->pc = 0x26F0B8u;
            goto label_26f0b8;
        }
    }
    ctx->pc = 0x26F0B4u;
label_26f0b4:
    // 0x26f0b4: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x26f0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_26f0b8:
    // 0x26f0b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f0b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f0bc:
    // 0x26f0bc: 0xc0efb95  jal         func_3BEE54
label_26f0c0:
    if (ctx->pc == 0x26F0C0u) {
        ctx->pc = 0x26F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0BCu;
        // 0x26f0c0: 0x26e57c78  addiu       $a1, $s7, 0x7C78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 31864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0C4u;
        goto label_26f0c4;
    }
    ctx->pc = 0x26F0BCu;
    SET_GPR_U32(ctx, 31, 0x26F0C4u);
    ctx->pc = 0x26F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0BCu;
    // 0x26f0c0: 0x26e57c78  addiu       $a1, $s7, 0x7C78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 31864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26F0BCu, 0x26F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F0C4u;
label_26f0c4:
    // 0x26f0c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_26f0c8:
    if (ctx->pc == 0x26F0C8u) {
        ctx->pc = 0x26F0CCu;
        goto label_26f0cc;
    }
    ctx->pc = 0x26F0C4u;
    {
        const bool branch_taken_0x26f0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0c4) {
            ctx->pc = 0x26F0FCu;
            goto label_26f0fc;
        }
    }
    ctx->pc = 0x26F0CCu;
label_26f0cc:
    // 0x26f0cc: 0x8ea200bc  lw          $v0, 0xBC($s5)
    ctx->pc = 0x26f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_26f0d0:
    // 0x26f0d0: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x26f0d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_26f0d4:
    // 0x26f0d4: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
label_26f0d8:
    if (ctx->pc == 0x26F0D8u) {
        ctx->pc = 0x26F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0D4u;
        // 0x26f0d8: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0DCu;
        goto label_26f0dc;
    }
    ctx->pc = 0x26F0D4u;
    {
        const bool branch_taken_0x26f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f0d4) {
            ctx->pc = 0x26F0D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F0D4u;
            // 0x26f0d8: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F138u;
            goto label_26f138;
        }
    }
    ctx->pc = 0x26F0DCu;
label_26f0dc:
    // 0x26f0dc: 0x8ea20418  lw          $v0, 0x418($s5)
    ctx->pc = 0x26f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1048)));
label_26f0e0:
    // 0x26f0e0: 0x14560002  bne         $v0, $s6, . + 4 + (0x2 << 2)
label_26f0e4:
    if (ctx->pc == 0x26F0E4u) {
        ctx->pc = 0x26F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0E0u;
        // 0x26f0e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0E8u;
        goto label_26f0e8;
    }
    ctx->pc = 0x26F0E0u;
    {
        const bool branch_taken_0x26f0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x26F0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0E0u;
        // 0x26f0e4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0e0) {
            ctx->pc = 0x26F0ECu;
            goto label_26f0ec;
        }
    }
    ctx->pc = 0x26F0E8u;
label_26f0e8:
    // 0x26f0e8: 0x8ea311e4  lw          $v1, 0x11E4($s5)
    ctx->pc = 0x26f0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4580)));
label_26f0ec:
    // 0x26f0ec: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
label_26f0f0:
    if (ctx->pc == 0x26F0F0u) {
        ctx->pc = 0x26F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0ECu;
        // 0x26f0f0: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0F4u;
        goto label_26f0f4;
    }
    ctx->pc = 0x26F0ECu;
    {
        const bool branch_taken_0x26f0ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0ECu;
        // 0x26f0f0: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0ec) {
            ctx->pc = 0x26F14Cu;
            goto label_26f14c;
        }
    }
    ctx->pc = 0x26F0F4u;
label_26f0f4:
    // 0x26f0f4: 0x10000011  b           . + 4 + (0x11 << 2)
label_26f0f8:
    if (ctx->pc == 0x26F0F8u) {
        ctx->pc = 0x26F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0F4u;
        // 0x26f0f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F0FCu;
        goto label_26f0fc;
    }
    ctx->pc = 0x26F0F4u;
    {
        const bool branch_taken_0x26f0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0F4u;
        // 0x26f0f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f0f4) {
            ctx->pc = 0x26F13Cu;
            goto label_26f13c;
        }
    }
    ctx->pc = 0x26F0FCu;
label_26f0fc:
    // 0x26f0fc: 0xc0899bc  jal         func_2266F0
label_26f100:
    if (ctx->pc == 0x26F100u) {
        ctx->pc = 0x26F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F0FCu;
        // 0x26f100: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F104u;
        goto label_26f104;
    }
    ctx->pc = 0x26F0FCu;
    SET_GPR_U32(ctx, 31, 0x26F104u);
    ctx->pc = 0x26F100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F0FCu;
    // 0x26f100: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26F0FCu, 0x26F104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F104u;
label_26f104:
    // 0x26f104: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_26f108:
    if (ctx->pc == 0x26F108u) {
        ctx->pc = 0x26F108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F104u;
        // 0x26f108: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F10Cu;
        goto label_26f10c;
    }
    ctx->pc = 0x26F104u;
    {
        const bool branch_taken_0x26f104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f104) {
            ctx->pc = 0x26F108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F104u;
            // 0x26f108: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F138u;
            goto label_26f138;
        }
    }
    ctx->pc = 0x26F10Cu;
label_26f10c:
    // 0x26f10c: 0xc0899bc  jal         func_2266F0
label_26f110:
    if (ctx->pc == 0x26F110u) {
        ctx->pc = 0x26F110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F10Cu;
        // 0x26f110: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F114u;
        goto label_26f114;
    }
    ctx->pc = 0x26F10Cu;
    SET_GPR_U32(ctx, 31, 0x26F114u);
    ctx->pc = 0x26F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F10Cu;
    // 0x26f110: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x26F10Cu, 0x26F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F114u;
label_26f114:
    // 0x26f114: 0x8c4400b8  lw          $a0, 0xB8($v0)
    ctx->pc = 0x26f114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_26f118:
    // 0x26f118: 0x8482000c  lh          $v0, 0xC($a0)
    ctx->pc = 0x26f118u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
label_26f11c:
    // 0x26f11c: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
label_26f120:
    if (ctx->pc == 0x26F120u) {
        ctx->pc = 0x26F120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F11Cu;
        // 0x26f120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F124u;
        goto label_26f124;
    }
    ctx->pc = 0x26F11Cu;
    {
        const bool branch_taken_0x26f11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f11c) {
            ctx->pc = 0x26F120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F11Cu;
            // 0x26f120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F128u;
            goto label_26f128;
        }
    }
    ctx->pc = 0x26F124u;
label_26f124:
    // 0x26f124: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x26f124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_26f128:
    // 0x26f128: 0xc0efb95  jal         func_3BEE54
label_26f12c:
    if (ctx->pc == 0x26F12Cu) {
        ctx->pc = 0x26F12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F128u;
        // 0x26f12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F130u;
        goto label_26f130;
    }
    ctx->pc = 0x26F128u;
    SET_GPR_U32(ctx, 31, 0x26F130u);
    ctx->pc = 0x26F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F128u;
    // 0x26f12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x26F128u, 0x26F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F130u;
label_26f130:
    // 0x26f130: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26f134:
    if (ctx->pc == 0x26F134u) {
        ctx->pc = 0x26F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F130u;
        // 0x26f134: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F138u;
        goto label_26f138;
    }
    ctx->pc = 0x26F130u;
    {
        const bool branch_taken_0x26f130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F130u;
        // 0x26f134: 0x8e6201d4  lw          $v0, 0x1D4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f130) {
            ctx->pc = 0x26F14Cu;
            goto label_26f14c;
        }
    }
    ctx->pc = 0x26F138u;
label_26f138:
    // 0x26f138: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x26f138u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_26f13c:
    // 0x26f13c: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x26f13cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_26f140:
    // 0x26f140: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_26f144:
    if (ctx->pc == 0x26F144u) {
        ctx->pc = 0x26F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F140u;
        // 0x26f144: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F148u;
        goto label_26f148;
    }
    ctx->pc = 0x26F140u;
    {
        const bool branch_taken_0x26f140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F140u;
        // 0x26f144: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f140) {
            ctx->pc = 0x26F0A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26f0a8;
        }
    }
    ctx->pc = 0x26F148u;
label_26f148:
    // 0x26f148: 0x8e6201d4  lw          $v0, 0x1D4($s3)
    ctx->pc = 0x26f148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 468)));
label_26f14c:
    // 0x26f14c: 0x56420004  bnel        $s2, $v0, . + 4 + (0x4 << 2)
label_26f150:
    if (ctx->pc == 0x26F150u) {
        ctx->pc = 0x26F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F14Cu;
        // 0x26f150: 0x8ea200bc  lw          $v0, 0xBC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F154u;
        goto label_26f154;
    }
    ctx->pc = 0x26F14Cu;
    {
        const bool branch_taken_0x26f14c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x26f14c) {
            ctx->pc = 0x26F150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F14Cu;
            // 0x26f150: 0x8ea200bc  lw          $v0, 0xBC($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F160u;
            goto label_26f160;
        }
    }
    ctx->pc = 0x26F154u;
label_26f154:
    // 0x26f154: 0x1e4000da  bgtz        $s2, . + 4 + (0xDA << 2)
label_26f158:
    if (ctx->pc == 0x26F158u) {
        ctx->pc = 0x26F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F154u;
        // 0x26f158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F15Cu;
        goto label_26f15c;
    }
    ctx->pc = 0x26F154u;
    {
        const bool branch_taken_0x26f154 = (GPR_S32(ctx, 18) > 0);
        ctx->pc = 0x26F158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F154u;
        // 0x26f158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f154) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F15Cu;
label_26f15c:
    // 0x26f15c: 0x8ea200bc  lw          $v0, 0xBC($s5)
    ctx->pc = 0x26f15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 188)));
label_26f160:
    // 0x26f160: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x26f160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_26f164:
    // 0x26f164: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_26f168:
    if (ctx->pc == 0x26F168u) {
        ctx->pc = 0x26F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F164u;
        // 0x26f168: 0x8e830218  lw          $v1, 0x218($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F16Cu;
        goto label_26f16c;
    }
    ctx->pc = 0x26F164u;
    {
        const bool branch_taken_0x26f164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f164) {
            ctx->pc = 0x26F168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F164u;
            // 0x26f168: 0x8e830218  lw          $v1, 0x218($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F180u;
            goto label_26f180;
        }
    }
    ctx->pc = 0x26F16Cu;
label_26f16c:
    // 0x26f16c: 0x8e6200b0  lw          $v0, 0xB0($s3)
    ctx->pc = 0x26f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
label_26f170:
    // 0x26f170: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x26f170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_26f174:
    // 0x26f174: 0x144000d2  bnez        $v0, . + 4 + (0xD2 << 2)
label_26f178:
    if (ctx->pc == 0x26F178u) {
        ctx->pc = 0x26F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F174u;
        // 0x26f178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F17Cu;
        goto label_26f17c;
    }
    ctx->pc = 0x26F174u;
    {
        const bool branch_taken_0x26f174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F174u;
        // 0x26f178: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f174) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F17Cu;
label_26f17c:
    // 0x26f17c: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f17cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f180:
    // 0x26f180: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f184:
    // 0x26f184: 0x40f809  jalr        $v0
label_26f188:
    if (ctx->pc == 0x26F188u) {
        ctx->pc = 0x26F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F184u;
        // 0x26f188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F18Cu;
        goto label_26f18c;
    }
    ctx->pc = 0x26F184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F18Cu);
        ctx->pc = 0x26F188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F184u;
        // 0x26f188: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F184u, 0x26F18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F18Cu;
label_26f18c:
    // 0x26f18c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_26f190:
    if (ctx->pc == 0x26F190u) {
        ctx->pc = 0x26F190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F18Cu;
        // 0x26f190: 0x8e830218  lw          $v1, 0x218($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F194u;
        goto label_26f194;
    }
    ctx->pc = 0x26F18Cu;
    {
        const bool branch_taken_0x26f18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f18c) {
            ctx->pc = 0x26F190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F18Cu;
            // 0x26f190: 0x8e830218  lw          $v1, 0x218($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F1ACu;
            goto label_26f1ac;
        }
    }
    ctx->pc = 0x26F194u;
label_26f194:
    // 0x26f194: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26f194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26f198:
    // 0x26f198: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x26f198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_26f19c:
    // 0x26f19c: 0x24a57c80  addiu       $a1, $a1, 0x7C80
    ctx->pc = 0x26f19cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31872));
label_26f1a0:
    // 0x26f1a0: 0xc0efefa  jal         func_3BFBE8
label_26f1a4:
    if (ctx->pc == 0x26F1A4u) {
        ctx->pc = 0x26F1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1A0u;
        // 0x26f1a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1A8u;
        goto label_26f1a8;
    }
    ctx->pc = 0x26F1A0u;
    SET_GPR_U32(ctx, 31, 0x26F1A8u);
    ctx->pc = 0x26F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F1A0u;
    // 0x26f1a4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x26F1A0u, 0x26F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1A8u;
label_26f1a8:
    // 0x26f1a8: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f1ac:
    // 0x26f1ac: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x26f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_26f1b0:
    // 0x26f1b0: 0x40f809  jalr        $v0
label_26f1b4:
    if (ctx->pc == 0x26F1B4u) {
        ctx->pc = 0x26F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1B0u;
        // 0x26f1b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1B8u;
        goto label_26f1b8;
    }
    ctx->pc = 0x26F1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F1B8u);
        ctx->pc = 0x26F1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1B0u;
        // 0x26f1b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1B0u, 0x26F1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F1B8u;
label_26f1b8:
    // 0x26f1b8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_26f1bc:
    if (ctx->pc == 0x26F1BCu) {
        ctx->pc = 0x26F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1B8u;
        // 0x26f1bc: 0x8e6201f0  lw          $v0, 0x1F0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1C0u;
        goto label_26f1c0;
    }
    ctx->pc = 0x26F1B8u;
    {
        const bool branch_taken_0x26f1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f1b8) {
            ctx->pc = 0x26F1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F1B8u;
            // 0x26f1bc: 0x8e6201f0  lw          $v0, 0x1F0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F1D8u;
            goto label_26f1d8;
        }
    }
    ctx->pc = 0x26F1C0u;
label_26f1c0:
    // 0x26f1c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26f1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26f1c4:
    // 0x26f1c4: 0x8e8600f8  lw          $a2, 0xF8($s4)
    ctx->pc = 0x26f1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 248)));
label_26f1c8:
    // 0x26f1c8: 0x24a57ca0  addiu       $a1, $a1, 0x7CA0
    ctx->pc = 0x26f1c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31904));
label_26f1cc:
    // 0x26f1cc: 0xc0efefa  jal         func_3BFBE8
label_26f1d0:
    if (ctx->pc == 0x26F1D0u) {
        ctx->pc = 0x26F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1CCu;
        // 0x26f1d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1D4u;
        goto label_26f1d4;
    }
    ctx->pc = 0x26F1CCu;
    SET_GPR_U32(ctx, 31, 0x26F1D4u);
    ctx->pc = 0x26F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F1CCu;
    // 0x26f1d0: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x26F1CCu, 0x26F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F1D4u;
label_26f1d4:
    // 0x26f1d4: 0x8e6201f0  lw          $v0, 0x1F0($s3)
    ctx->pc = 0x26f1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 496)));
label_26f1d8:
    // 0x26f1d8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_26f1dc:
    if (ctx->pc == 0x26F1DCu) {
        ctx->pc = 0x26F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D8u;
        // 0x26f1dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1E0u;
        goto label_26f1e0;
    }
    ctx->pc = 0x26F1D8u;
    {
        const bool branch_taken_0x26f1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1D8u;
        // 0x26f1dc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f1d8) {
            ctx->pc = 0x26F25Cu;
            goto label_26f25c;
        }
    }
    ctx->pc = 0x26F1E0u;
label_26f1e0:
    // 0x26f1e0: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x26f1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_26f1e4:
    // 0x26f1e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f1e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f1e8:
    // 0x26f1e8: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f1ec:
    // 0x26f1ec: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26f1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f1f0:
    // 0x26f1f0: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f1f4:
    // 0x26f1f4: 0x40f809  jalr        $v0
label_26f1f8:
    if (ctx->pc == 0x26F1F8u) {
        ctx->pc = 0x26F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1F4u;
        // 0x26f1f8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F1FCu;
        goto label_26f1fc;
    }
    ctx->pc = 0x26F1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F1FCu);
        ctx->pc = 0x26F1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F1F4u;
        // 0x26f1f8: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F1F4u, 0x26F1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F1FCu;
label_26f1fc:
    // 0x26f1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f200:
    // 0x26f200: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x26f200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f204:
    // 0x26f204: 0xc09bbca  jal         func_26EF28
label_26f208:
    if (ctx->pc == 0x26F208u) {
        ctx->pc = 0x26F208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F204u;
        // 0x26f208: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F20Cu;
        goto label_26f20c;
    }
    ctx->pc = 0x26F204u;
    SET_GPR_U32(ctx, 31, 0x26F20Cu);
    ctx->pc = 0x26F208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F204u;
    // 0x26f208: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF28u, 0x26F204u, 0x26F20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F20Cu;
label_26f20c:
    // 0x26f20c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_26f210:
    if (ctx->pc == 0x26F210u) {
        ctx->pc = 0x26F210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F20Cu;
        // 0x26f210: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F214u;
        goto label_26f214;
    }
    ctx->pc = 0x26F20Cu;
    {
        const bool branch_taken_0x26f20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f20c) {
            ctx->pc = 0x26F210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F20Cu;
            // 0x26f210: 0x92620210  lbu         $v0, 0x210($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 528)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F21Cu;
            goto label_26f21c;
        }
    }
    ctx->pc = 0x26F214u;
label_26f214:
    // 0x26f214: 0x1000001e  b           . + 4 + (0x1E << 2)
label_26f218:
    if (ctx->pc == 0x26F218u) {
        ctx->pc = 0x26F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F214u;
        // 0x26f218: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F21Cu;
        goto label_26f21c;
    }
    ctx->pc = 0x26F214u;
    {
        const bool branch_taken_0x26f214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F214u;
        // 0x26f218: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f214) {
            ctx->pc = 0x26F290u;
            goto label_26f290;
        }
    }
    ctx->pc = 0x26F21Cu;
label_26f21c:
    // 0x26f21c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_26f220:
    if (ctx->pc == 0x26F220u) {
        ctx->pc = 0x26F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F21Cu;
        // 0x26f220: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F224u;
        goto label_26f224;
    }
    ctx->pc = 0x26F21Cu;
    {
        const bool branch_taken_0x26f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F21Cu;
        // 0x26f220: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f21c) {
            ctx->pc = 0x26F290u;
            goto label_26f290;
        }
    }
    ctx->pc = 0x26F224u;
label_26f224:
    // 0x26f224: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26f224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f228:
    // 0x26f228: 0xc09c36e  jal         func_270DB8
label_26f22c:
    if (ctx->pc == 0x26F22Cu) {
        ctx->pc = 0x26F22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F228u;
        // 0x26f22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F230u;
        goto label_26f230;
    }
    ctx->pc = 0x26F228u;
    SET_GPR_U32(ctx, 31, 0x26F230u);
    ctx->pc = 0x26F22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F228u;
    // 0x26f22c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB8u, 0x26F228u, 0x26F230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F230u;
label_26f230:
    // 0x26f230: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x26f230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_26f234:
    // 0x26f234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f238:
    // 0x26f238: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x26f238u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_26f23c:
    // 0x26f23c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x26f23cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f240:
    // 0x26f240: 0xc09bbca  jal         func_26EF28
label_26f244:
    if (ctx->pc == 0x26F244u) {
        ctx->pc = 0x26F244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F240u;
        // 0x26f244: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F248u;
        goto label_26f248;
    }
    ctx->pc = 0x26F240u;
    SET_GPR_U32(ctx, 31, 0x26F248u);
    ctx->pc = 0x26F244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F240u;
    // 0x26f244: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF28u, 0x26F240u, 0x26F248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F248u;
label_26f248:
    // 0x26f248: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_26f24c:
    if (ctx->pc == 0x26F24Cu) {
        ctx->pc = 0x26F250u;
        goto label_26f250;
    }
    ctx->pc = 0x26F248u;
    {
        const bool branch_taken_0x26f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26f248) {
            ctx->pc = 0x26F290u;
            goto label_26f290;
        }
    }
    ctx->pc = 0x26F250u;
label_26f250:
    // 0x26f250: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26f254:
    // 0x26f254: 0x1000000e  b           . + 4 + (0xE << 2)
label_26f258:
    if (ctx->pc == 0x26F258u) {
        ctx->pc = 0x26F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F254u;
        // 0x26f258: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F25Cu;
        goto label_26f25c;
    }
    ctx->pc = 0x26F254u;
    {
        const bool branch_taken_0x26f254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F254u;
        // 0x26f258: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f254) {
            ctx->pc = 0x26F290u;
            goto label_26f290;
        }
    }
    ctx->pc = 0x26F25Cu;
label_26f25c:
    // 0x26f25c: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_26f260:
    // 0x26f260: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f264:
    // 0x26f264: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f268:
    // 0x26f268: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f26c:
    // 0x26f26c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f270:
    // 0x26f270: 0x40f809  jalr        $v0
label_26f274:
    if (ctx->pc == 0x26F274u) {
        ctx->pc = 0x26F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F270u;
        // 0x26f274: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F278u;
        goto label_26f278;
    }
    ctx->pc = 0x26F270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F278u);
        ctx->pc = 0x26F274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F270u;
        // 0x26f274: 0x26100070  addiu       $s0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F270u, 0x26F278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F278u;
label_26f278:
    // 0x26f278: 0x4614a302  mul.s       $f12, $f20, $f20
    ctx->pc = 0x26f278u;
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_26f27c:
    // 0x26f27c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26f27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26f280:
    // 0x26f280: 0xc09bbca  jal         func_26EF28
label_26f284:
    if (ctx->pc == 0x26F284u) {
        ctx->pc = 0x26F284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F280u;
        // 0x26f284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F288u;
        goto label_26f288;
    }
    ctx->pc = 0x26F280u;
    SET_GPR_U32(ctx, 31, 0x26F288u);
    ctx->pc = 0x26F284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F280u;
    // 0x26f284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EF28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EF28u, 0x26F280u, 0x26F288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F288u;
label_26f288:
    // 0x26f288: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
label_26f28c:
    if (ctx->pc == 0x26F28Cu) {
        ctx->pc = 0x26F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F288u;
        // 0x26f28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F290u;
        goto label_26f290;
    }
    ctx->pc = 0x26F288u;
    {
        const bool branch_taken_0x26f288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F288u;
        // 0x26f28c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f288) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F290u;
label_26f290:
    // 0x26f290: 0x13c0008b  beqz        $fp, . + 4 + (0x8B << 2)
label_26f294:
    if (ctx->pc == 0x26F294u) {
        ctx->pc = 0x26F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F290u;
        // 0x26f294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F298u;
        goto label_26f298;
    }
    ctx->pc = 0x26F290u;
    {
        const bool branch_taken_0x26f290 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F290u;
        // 0x26f294: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f290) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F298u;
label_26f298:
    // 0x26f298: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x26f298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_26f29c:
    // 0x26f29c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x26f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_26f2a0:
    // 0x26f2a0: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x26f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_26f2a4:
    // 0x26f2a4: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x26f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_26f2a8:
    // 0x26f2a8: 0x8ea20104  lw          $v0, 0x104($s5)
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 260)));
label_26f2ac:
    // 0x26f2ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f2b0:
    // 0x26f2b0: 0xc4600060  lwc1        $f0, 0x60($v1)
    ctx->pc = 0x26f2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f2b4:
    // 0x26f2b4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26f2b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26f2b8:
    // 0x26f2b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26f2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26f2bc:
    // 0x26f2bc: 0xc4610068  lwc1        $f1, 0x68($v1)
    ctx->pc = 0x26f2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f2c0:
    // 0x26f2c0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_26f2c4:
    if (ctx->pc == 0x26F2C4u) {
        ctx->pc = 0x26F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2C0u;
        // 0x26f2c4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F2C8u;
        goto label_26f2c8;
    }
    ctx->pc = 0x26F2C0u;
    {
        const bool branch_taken_0x26f2c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2C0u;
        // 0x26f2c4: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f2c0) {
            ctx->pc = 0x26F2D8u;
            goto label_26f2d8;
        }
    }
    ctx->pc = 0x26F2C8u;
label_26f2c8:
    // 0x26f2c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26f2c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26f2cc:
    // 0x26f2cc: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26f2ccu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26f2d0:
    // 0x26f2d0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x26f2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26f2d4:
    // 0x26f2d4: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x26f2d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26f2d8:
    // 0x26f2d8: 0xc0f735c  jal         func_3DCD70
label_26f2dc:
    if (ctx->pc == 0x26F2DCu) {
        ctx->pc = 0x26F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F2D8u;
        // 0x26f2dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F2E0u;
        goto label_26f2e0;
    }
    ctx->pc = 0x26F2D8u;
    SET_GPR_U32(ctx, 31, 0x26F2E0u);
    ctx->pc = 0x26F2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F2D8u;
    // 0x26f2dc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x26F2D8u, 0x26F2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F2E0u;
label_26f2e0:
    // 0x26f2e0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x26f2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f2e4:
    // 0x26f2e4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x26f2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f2e8:
    // 0x26f2e8: 0x0  nop
    ctx->pc = 0x26f2e8u;
    // NOP
label_26f2ec:
    // 0x26f2ec: 0x0  nop
    ctx->pc = 0x26f2ecu;
    // NOP
label_26f2f0:
    // 0x26f2f0: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26f2f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_26f2f4:
    // 0x26f2f4: 0x0  nop
    ctx->pc = 0x26f2f4u;
    // NOP
label_26f2f8:
    // 0x26f2f8: 0x0  nop
    ctx->pc = 0x26f2f8u;
    // NOP
label_26f2fc:
    // 0x26f2fc: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26f2fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_26f300:
    // 0x26f300: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x26f300u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26f304:
    // 0x26f304: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_26f308:
    if (ctx->pc == 0x26F308u) {
        ctx->pc = 0x26F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F304u;
        // 0x26f308: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F30Cu;
        goto label_26f30c;
    }
    ctx->pc = 0x26F304u;
    {
        const bool branch_taken_0x26f304 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F304u;
        // 0x26f308: 0xe7a20014  swc1        $f2, 0x14($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f304) {
            ctx->pc = 0x26F354u;
            goto label_26f354;
        }
    }
    ctx->pc = 0x26F30Cu;
label_26f30c:
    // 0x26f30c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x26f30cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_26f310:
    // 0x26f310: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26f310u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f314:
    // 0x26f314: 0xc09c36e  jal         func_270DB8
label_26f318:
    if (ctx->pc == 0x26F318u) {
        ctx->pc = 0x26F318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F314u;
        // 0x26f318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F31Cu;
        goto label_26f31c;
    }
    ctx->pc = 0x26F314u;
    SET_GPR_U32(ctx, 31, 0x26F31Cu);
    ctx->pc = 0x26F318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F314u;
    // 0x26f318: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270DB8u, 0x26F314u, 0x26F31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F31Cu;
label_26f31c:
    // 0x26f31c: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x26f31cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_26f320:
    // 0x26f320: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x26f320u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f324:
    // 0x26f324: 0xc09c3a2  jal         func_270E88
label_26f328:
    if (ctx->pc == 0x26F328u) {
        ctx->pc = 0x26F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F324u;
        // 0x26f328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F32Cu;
        goto label_26f32c;
    }
    ctx->pc = 0x26F324u;
    SET_GPR_U32(ctx, 31, 0x26F32Cu);
    ctx->pc = 0x26F328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F324u;
    // 0x26f328: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270E88u, 0x26F324u, 0x26F32Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F32Cu;
label_26f32c:
    // 0x26f32c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x26f32cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_26f330:
    // 0x26f330: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26f330u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26f334:
    // 0x26f334: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26f334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f338:
    // 0x26f338: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x26f338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f33c:
    // 0x26f33c: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x26f33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f340:
    // 0x26f340: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26f340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26f344:
    // 0x26f344: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x26f344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f348:
    // 0x26f348: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x26f348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f34c:
    // 0x26f34c: 0x10000013  b           . + 4 + (0x13 << 2)
label_26f350:
    if (ctx->pc == 0x26F350u) {
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0xc7a2006c  lwc1        $f2, 0x6C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F354u;
        goto label_26f354;
    }
    ctx->pc = 0x26F34Cu;
    {
        const bool branch_taken_0x26f34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F34Cu;
        // 0x26f350: 0xc7a2006c  lwc1        $f2, 0x6C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f34c) {
            ctx->pc = 0x26F39Cu;
            goto label_26f39c;
        }
    }
    ctx->pc = 0x26F354u;
label_26f354:
    // 0x26f354: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f358:
    // 0x26f358: 0x8c62008c  lw          $v0, 0x8C($v1)
    ctx->pc = 0x26f358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
label_26f35c:
    // 0x26f35c: 0x40f809  jalr        $v0
label_26f360:
    if (ctx->pc == 0x26F360u) {
        ctx->pc = 0x26F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F35Cu;
        // 0x26f360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F364u;
        goto label_26f364;
    }
    ctx->pc = 0x26F35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F364u);
        ctx->pc = 0x26F360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F35Cu;
        // 0x26f360: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F35Cu, 0x26F364u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F364u;
label_26f364:
    // 0x26f364: 0x8e830218  lw          $v1, 0x218($s4)
    ctx->pc = 0x26f364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 536)));
label_26f368:
    // 0x26f368: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26f368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26f36c:
    // 0x26f36c: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x26f36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_26f370:
    // 0x26f370: 0x40f809  jalr        $v0
label_26f374:
    if (ctx->pc == 0x26F374u) {
        ctx->pc = 0x26F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F370u;
        // 0x26f374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F378u;
        goto label_26f378;
    }
    ctx->pc = 0x26F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26F378u);
        ctx->pc = 0x26F374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F370u;
        // 0x26f374: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F370u, 0x26F378u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26F378u;
label_26f378:
    // 0x26f378: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26f378u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26f37c:
    // 0x26f37c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26f37cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f380:
    // 0x26f380: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26f380u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26f384:
    // 0x26f384: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26f384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f388:
    // 0x26f388: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x26f388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f38c:
    // 0x26f38c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26f38cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26f390:
    // 0x26f390: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x26f390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f394:
    // 0x26f394: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x26f394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f398:
    // 0x26f398: 0xc7a2004c  lwc1        $f2, 0x4C($sp)
    ctx->pc = 0x26f398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f39c:
    // 0x26f39c: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x26f39cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_26f3a0:
    // 0x26f3a0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x26f3a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_26f3a4:
    // 0x26f3a4: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x26f3a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_26f3a8:
    // 0x26f3a8: 0xe7a2003c  swc1        $f2, 0x3C($sp)
    ctx->pc = 0x26f3a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_26f3ac:
    // 0x26f3ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26f3acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26f3b0:
    // 0x26f3b0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26f3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26f3b4:
    // 0x26f3b4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x26f3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f3b8:
    // 0x26f3b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x26f3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26f3bc:
    // 0x26f3bc: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x26f3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f3c0:
    // 0x26f3c0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x26f3c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26f3c4:
    // 0x26f3c4: 0xc0f735c  jal         func_3DCD70
label_26f3c8:
    if (ctx->pc == 0x26F3C8u) {
        ctx->pc = 0x26F3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F3C4u;
        // 0x26f3c8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F3CCu;
        goto label_26f3cc;
    }
    ctx->pc = 0x26F3C4u;
    SET_GPR_U32(ctx, 31, 0x26F3CCu);
    ctx->pc = 0x26F3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F3C4u;
    // 0x26f3c8: 0xe7a00024  swc1        $f0, 0x24($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCD70u, 0x26F3C4u, 0x26F3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F3CCu;
label_26f3cc:
    // 0x26f3cc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x26f3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26f3d0:
    // 0x26f3d0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x26f3d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f3d4:
    // 0x26f3d4: 0x0  nop
    ctx->pc = 0x26f3d4u;
    // NOP
label_26f3d8:
    // 0x26f3d8: 0x0  nop
    ctx->pc = 0x26f3d8u;
    // NOP
label_26f3dc:
    // 0x26f3dc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x26f3dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_26f3e0:
    // 0x26f3e0: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x26f3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f3e4:
    // 0x26f3e4: 0x0  nop
    ctx->pc = 0x26f3e4u;
    // NOP
label_26f3e8:
    // 0x26f3e8: 0x0  nop
    ctx->pc = 0x26f3e8u;
    // NOP
label_26f3ec:
    // 0x26f3ec: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x26f3ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_26f3f0:
    // 0x26f3f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26f3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26f3f4:
    // 0x26f3f4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x26f3f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_26f3f8:
    // 0x26f3f8: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x26f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26f3fc:
    // 0x26f3fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f3fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26f400:
    // 0x26f400: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26f400u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_26f404:
    // 0x26f404: 0x460308c2  mul.s       $f3, $f1, $f3
    ctx->pc = 0x26f404u;
    ctx->f[3] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_26f408:
    // 0x26f408: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x26f408u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_26f40c:
    // 0x26f40c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x26f40cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26f410:
    // 0x26f410: 0x46001b40  add.s       $f13, $f3, $f0
    ctx->pc = 0x26f410u;
    ctx->f[13] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_26f414:
    // 0x26f414: 0x46046834  c.lt.s      $f13, $f4
    ctx->pc = 0x26f414u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f418:
    // 0x26f418: 0x0  nop
    ctx->pc = 0x26f418u;
    // NOP
label_26f41c:
    // 0x26f41c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_26f420:
    if (ctx->pc == 0x26F420u) {
        ctx->pc = 0x26F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F41Cu;
        // 0x26f420: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F424u;
        goto label_26f424;
    }
    ctx->pc = 0x26F41Cu;
    {
        const bool branch_taken_0x26f41c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26F420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F41Cu;
        // 0x26f420: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f41c) {
            ctx->pc = 0x26F42Cu;
            goto label_26f42c;
        }
    }
    ctx->pc = 0x26F424u;
label_26f424:
    // 0x26f424: 0x10000005  b           . + 4 + (0x5 << 2)
label_26f428:
    if (ctx->pc == 0x26F428u) {
        ctx->pc = 0x26F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F424u;
        // 0x26f428: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F42Cu;
        goto label_26f42c;
    }
    ctx->pc = 0x26F424u;
    {
        const bool branch_taken_0x26f424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F424u;
        // 0x26f428: 0x46002346  mov.s       $f13, $f4 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f424) {
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F42Cu;
label_26f42c:
    // 0x26f42c: 0x460d2834  c.lt.s      $f5, $f13
    ctx->pc = 0x26f42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f430:
    // 0x26f430: 0x0  nop
    ctx->pc = 0x26f430u;
    // NOP
label_26f434:
    // 0x26f434: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_26f438:
    if (ctx->pc == 0x26F438u) {
        ctx->pc = 0x26F438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F434u;
        // 0x26f438: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F43Cu;
        goto label_26f43c;
    }
    ctx->pc = 0x26F434u;
    {
        const bool branch_taken_0x26f434 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f434) {
            ctx->pc = 0x26F438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F434u;
            // 0x26f438: 0x46002b46  mov.s       $f13, $f5 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F43Cu;
            goto label_26f43c;
        }
    }
    ctx->pc = 0x26F43Cu;
label_26f43c:
    // 0x26f43c: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x26f43cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_26f440:
    // 0x26f440: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26f440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26f444:
    // 0x26f444: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26f444u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26f448:
    // 0x26f448: 0x0  nop
    ctx->pc = 0x26f448u;
    // NOP
label_26f44c:
    // 0x26f44c: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x26f44cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_26f450:
    // 0x26f450: 0x460c0304  c1          0xC0304
    ctx->pc = 0x26f450u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_26f454:
    // 0x26f454: 0xc0e404c  jal         func_390130
label_26f458:
    if (ctx->pc == 0x26F458u) {
        ctx->pc = 0x26F45Cu;
        goto label_26f45c;
    }
    ctx->pc = 0x26F454u;
    SET_GPR_U32(ctx, 31, 0x26F45Cu);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x26F454u, 0x26F45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F45Cu;
label_26f45c:
    // 0x26f45c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x26f45cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_26f460:
    // 0x26f460: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x26f460u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_26f464:
    // 0x26f464: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26f464u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26f468:
    // 0x26f468: 0x0  nop
    ctx->pc = 0x26f468u;
    // NOP
label_26f46c:
    // 0x26f46c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26f46cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26f470:
    // 0x26f470: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x26f470u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26f474:
    // 0x26f474: 0x0  nop
    ctx->pc = 0x26f474u;
    // NOP
label_26f478:
    // 0x26f478: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
label_26f47c:
    if (ctx->pc == 0x26F47Cu) {
        ctx->pc = 0x26F47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F478u;
        // 0x26f47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F480u;
        goto label_26f480;
    }
    ctx->pc = 0x26F478u;
    {
        const bool branch_taken_0x26f478 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26f478) {
            ctx->pc = 0x26F47Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26F478u;
            // 0x26f47c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F480u;
label_26f480:
    // 0x26f480: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26f484:
    // 0x26f484: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x26f484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26f488:
    // 0x26f488: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x26f488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26f48c:
    // 0x26f48c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26f48cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26f490:
    // 0x26f490: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26f490u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26f494:
    // 0x26f494: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26f494u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26f498:
    // 0x26f498: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x26f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_26f49c:
    // 0x26f49c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x26f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a0:
    // 0x26f4a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x26f4a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a4:
    // 0x26f4a4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x26f4a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26f4a8:
    // 0x26f4a8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x26f4a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_26f4ac:
    // 0x26f4ac: 0xc09bd3e  jal         func_26F4F8
label_26f4b0:
    if (ctx->pc == 0x26F4B0u) {
        ctx->pc = 0x26F4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4ACu;
        // 0x26f4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4B4u;
        goto label_26f4b4;
    }
    ctx->pc = 0x26F4ACu;
    SET_GPR_U32(ctx, 31, 0x26F4B4u);
    ctx->pc = 0x26F4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26F4ACu;
    // 0x26f4b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F4F8u, 0x26F4ACu, 0x26F4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26F4B4u;
label_26f4b4:
    // 0x26f4b4: 0x10000002  b           . + 4 + (0x2 << 2)
label_26f4b8:
    if (ctx->pc == 0x26F4B8u) {
        ctx->pc = 0x26F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4B4u;
        // 0x26f4b8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4BCu;
        goto label_26f4bc;
    }
    ctx->pc = 0x26F4B4u;
    {
        const bool branch_taken_0x26f4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26F4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4B4u;
        // 0x26f4b8: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f4b4) {
            ctx->pc = 0x26F4C0u;
            goto label_26f4c0;
        }
    }
    ctx->pc = 0x26F4BCu;
label_26f4bc:
    // 0x26f4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26f4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26f4c0:
    // 0x26f4c0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x26f4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26f4c4:
    // 0x26f4c4: 0xdfb10088  ld          $s1, 0x88($sp)
    ctx->pc = 0x26f4c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_26f4c8:
    // 0x26f4c8: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x26f4c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26f4cc:
    // 0x26f4cc: 0xdfb30098  ld          $s3, 0x98($sp)
    ctx->pc = 0x26f4ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_26f4d0:
    // 0x26f4d0: 0xdfb400a0  ld          $s4, 0xA0($sp)
    ctx->pc = 0x26f4d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26f4d4:
    // 0x26f4d4: 0xdfb500a8  ld          $s5, 0xA8($sp)
    ctx->pc = 0x26f4d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_26f4d8:
    // 0x26f4d8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x26f4d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26f4dc:
    // 0x26f4dc: 0xdfb700b8  ld          $s7, 0xB8($sp)
    ctx->pc = 0x26f4dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_26f4e0:
    // 0x26f4e0: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x26f4e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26f4e4:
    // 0x26f4e4: 0xdfbf00c8  ld          $ra, 0xC8($sp)
    ctx->pc = 0x26f4e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_26f4e8:
    // 0x26f4e8: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x26f4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26f4ec:
    // 0x26f4ec: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x26f4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26f4f0:
    // 0x26f4f0: 0x3e00008  jr          $ra
label_26f4f4:
    if (ctx->pc == 0x26F4F4u) {
        ctx->pc = 0x26F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F0u;
        // 0x26f4f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26F4F8u;
        goto label_fallthrough_0x26f4f0;
    }
    ctx->pc = 0x26F4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26F4F0u;
        // 0x26f4f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26F4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x26f4f0:
    ctx->pc = 0x26F4F8u;
}
