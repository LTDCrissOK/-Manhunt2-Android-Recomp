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

// Function: sub_00216EC0
// Address: 0x216ec0 - 0x217420
void sub_00216EC0_0x216ec0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216EC0_0x216ec0");
#endif

    switch (ctx->pc) {
        case 0x216ec0u: goto label_216ec0;
        case 0x216ec4u: goto label_216ec4;
        case 0x216ec8u: goto label_216ec8;
        case 0x216eccu: goto label_216ecc;
        case 0x216ed0u: goto label_216ed0;
        case 0x216ed4u: goto label_216ed4;
        case 0x216ed8u: goto label_216ed8;
        case 0x216edcu: goto label_216edc;
        case 0x216ee0u: goto label_216ee0;
        case 0x216ee4u: goto label_216ee4;
        case 0x216ee8u: goto label_216ee8;
        case 0x216eecu: goto label_216eec;
        case 0x216ef0u: goto label_216ef0;
        case 0x216ef4u: goto label_216ef4;
        case 0x216ef8u: goto label_216ef8;
        case 0x216efcu: goto label_216efc;
        case 0x216f00u: goto label_216f00;
        case 0x216f04u: goto label_216f04;
        case 0x216f08u: goto label_216f08;
        case 0x216f0cu: goto label_216f0c;
        case 0x216f10u: goto label_216f10;
        case 0x216f14u: goto label_216f14;
        case 0x216f18u: goto label_216f18;
        case 0x216f1cu: goto label_216f1c;
        case 0x216f20u: goto label_216f20;
        case 0x216f24u: goto label_216f24;
        case 0x216f28u: goto label_216f28;
        case 0x216f2cu: goto label_216f2c;
        case 0x216f30u: goto label_216f30;
        case 0x216f34u: goto label_216f34;
        case 0x216f38u: goto label_216f38;
        case 0x216f3cu: goto label_216f3c;
        case 0x216f40u: goto label_216f40;
        case 0x216f44u: goto label_216f44;
        case 0x216f48u: goto label_216f48;
        case 0x216f4cu: goto label_216f4c;
        case 0x216f50u: goto label_216f50;
        case 0x216f54u: goto label_216f54;
        case 0x216f58u: goto label_216f58;
        case 0x216f5cu: goto label_216f5c;
        case 0x216f60u: goto label_216f60;
        case 0x216f64u: goto label_216f64;
        case 0x216f68u: goto label_216f68;
        case 0x216f6cu: goto label_216f6c;
        case 0x216f70u: goto label_216f70;
        case 0x216f74u: goto label_216f74;
        case 0x216f78u: goto label_216f78;
        case 0x216f7cu: goto label_216f7c;
        case 0x216f80u: goto label_216f80;
        case 0x216f84u: goto label_216f84;
        case 0x216f88u: goto label_216f88;
        case 0x216f8cu: goto label_216f8c;
        case 0x216f90u: goto label_216f90;
        case 0x216f94u: goto label_216f94;
        case 0x216f98u: goto label_216f98;
        case 0x216f9cu: goto label_216f9c;
        case 0x216fa0u: goto label_216fa0;
        case 0x216fa4u: goto label_216fa4;
        case 0x216fa8u: goto label_216fa8;
        case 0x216facu: goto label_216fac;
        case 0x216fb0u: goto label_216fb0;
        case 0x216fb4u: goto label_216fb4;
        case 0x216fb8u: goto label_216fb8;
        case 0x216fbcu: goto label_216fbc;
        case 0x216fc0u: goto label_216fc0;
        case 0x216fc4u: goto label_216fc4;
        case 0x216fc8u: goto label_216fc8;
        case 0x216fccu: goto label_216fcc;
        case 0x216fd0u: goto label_216fd0;
        case 0x216fd4u: goto label_216fd4;
        case 0x216fd8u: goto label_216fd8;
        case 0x216fdcu: goto label_216fdc;
        case 0x216fe0u: goto label_216fe0;
        case 0x216fe4u: goto label_216fe4;
        case 0x216fe8u: goto label_216fe8;
        case 0x216fecu: goto label_216fec;
        case 0x216ff0u: goto label_216ff0;
        case 0x216ff4u: goto label_216ff4;
        case 0x216ff8u: goto label_216ff8;
        case 0x216ffcu: goto label_216ffc;
        case 0x217000u: goto label_217000;
        case 0x217004u: goto label_217004;
        case 0x217008u: goto label_217008;
        case 0x21700cu: goto label_21700c;
        case 0x217010u: goto label_217010;
        case 0x217014u: goto label_217014;
        case 0x217018u: goto label_217018;
        case 0x21701cu: goto label_21701c;
        case 0x217020u: goto label_217020;
        case 0x217024u: goto label_217024;
        case 0x217028u: goto label_217028;
        case 0x21702cu: goto label_21702c;
        case 0x217030u: goto label_217030;
        case 0x217034u: goto label_217034;
        case 0x217038u: goto label_217038;
        case 0x21703cu: goto label_21703c;
        case 0x217040u: goto label_217040;
        case 0x217044u: goto label_217044;
        case 0x217048u: goto label_217048;
        case 0x21704cu: goto label_21704c;
        case 0x217050u: goto label_217050;
        case 0x217054u: goto label_217054;
        case 0x217058u: goto label_217058;
        case 0x21705cu: goto label_21705c;
        case 0x217060u: goto label_217060;
        case 0x217064u: goto label_217064;
        case 0x217068u: goto label_217068;
        case 0x21706cu: goto label_21706c;
        case 0x217070u: goto label_217070;
        case 0x217074u: goto label_217074;
        case 0x217078u: goto label_217078;
        case 0x21707cu: goto label_21707c;
        case 0x217080u: goto label_217080;
        case 0x217084u: goto label_217084;
        case 0x217088u: goto label_217088;
        case 0x21708cu: goto label_21708c;
        case 0x217090u: goto label_217090;
        case 0x217094u: goto label_217094;
        case 0x217098u: goto label_217098;
        case 0x21709cu: goto label_21709c;
        case 0x2170a0u: goto label_2170a0;
        case 0x2170a4u: goto label_2170a4;
        case 0x2170a8u: goto label_2170a8;
        case 0x2170acu: goto label_2170ac;
        case 0x2170b0u: goto label_2170b0;
        case 0x2170b4u: goto label_2170b4;
        case 0x2170b8u: goto label_2170b8;
        case 0x2170bcu: goto label_2170bc;
        case 0x2170c0u: goto label_2170c0;
        case 0x2170c4u: goto label_2170c4;
        case 0x2170c8u: goto label_2170c8;
        case 0x2170ccu: goto label_2170cc;
        case 0x2170d0u: goto label_2170d0;
        case 0x2170d4u: goto label_2170d4;
        case 0x2170d8u: goto label_2170d8;
        case 0x2170dcu: goto label_2170dc;
        case 0x2170e0u: goto label_2170e0;
        case 0x2170e4u: goto label_2170e4;
        case 0x2170e8u: goto label_2170e8;
        case 0x2170ecu: goto label_2170ec;
        case 0x2170f0u: goto label_2170f0;
        case 0x2170f4u: goto label_2170f4;
        case 0x2170f8u: goto label_2170f8;
        case 0x2170fcu: goto label_2170fc;
        case 0x217100u: goto label_217100;
        case 0x217104u: goto label_217104;
        case 0x217108u: goto label_217108;
        case 0x21710cu: goto label_21710c;
        case 0x217110u: goto label_217110;
        case 0x217114u: goto label_217114;
        case 0x217118u: goto label_217118;
        case 0x21711cu: goto label_21711c;
        case 0x217120u: goto label_217120;
        case 0x217124u: goto label_217124;
        case 0x217128u: goto label_217128;
        case 0x21712cu: goto label_21712c;
        case 0x217130u: goto label_217130;
        case 0x217134u: goto label_217134;
        case 0x217138u: goto label_217138;
        case 0x21713cu: goto label_21713c;
        case 0x217140u: goto label_217140;
        case 0x217144u: goto label_217144;
        case 0x217148u: goto label_217148;
        case 0x21714cu: goto label_21714c;
        case 0x217150u: goto label_217150;
        case 0x217154u: goto label_217154;
        case 0x217158u: goto label_217158;
        case 0x21715cu: goto label_21715c;
        case 0x217160u: goto label_217160;
        case 0x217164u: goto label_217164;
        case 0x217168u: goto label_217168;
        case 0x21716cu: goto label_21716c;
        case 0x217170u: goto label_217170;
        case 0x217174u: goto label_217174;
        case 0x217178u: goto label_217178;
        case 0x21717cu: goto label_21717c;
        case 0x217180u: goto label_217180;
        case 0x217184u: goto label_217184;
        case 0x217188u: goto label_217188;
        case 0x21718cu: goto label_21718c;
        case 0x217190u: goto label_217190;
        case 0x217194u: goto label_217194;
        case 0x217198u: goto label_217198;
        case 0x21719cu: goto label_21719c;
        case 0x2171a0u: goto label_2171a0;
        case 0x2171a4u: goto label_2171a4;
        case 0x2171a8u: goto label_2171a8;
        case 0x2171acu: goto label_2171ac;
        case 0x2171b0u: goto label_2171b0;
        case 0x2171b4u: goto label_2171b4;
        case 0x2171b8u: goto label_2171b8;
        case 0x2171bcu: goto label_2171bc;
        case 0x2171c0u: goto label_2171c0;
        case 0x2171c4u: goto label_2171c4;
        case 0x2171c8u: goto label_2171c8;
        case 0x2171ccu: goto label_2171cc;
        case 0x2171d0u: goto label_2171d0;
        case 0x2171d4u: goto label_2171d4;
        case 0x2171d8u: goto label_2171d8;
        case 0x2171dcu: goto label_2171dc;
        case 0x2171e0u: goto label_2171e0;
        case 0x2171e4u: goto label_2171e4;
        case 0x2171e8u: goto label_2171e8;
        case 0x2171ecu: goto label_2171ec;
        case 0x2171f0u: goto label_2171f0;
        case 0x2171f4u: goto label_2171f4;
        case 0x2171f8u: goto label_2171f8;
        case 0x2171fcu: goto label_2171fc;
        case 0x217200u: goto label_217200;
        case 0x217204u: goto label_217204;
        case 0x217208u: goto label_217208;
        case 0x21720cu: goto label_21720c;
        case 0x217210u: goto label_217210;
        case 0x217214u: goto label_217214;
        case 0x217218u: goto label_217218;
        case 0x21721cu: goto label_21721c;
        case 0x217220u: goto label_217220;
        case 0x217224u: goto label_217224;
        case 0x217228u: goto label_217228;
        case 0x21722cu: goto label_21722c;
        case 0x217230u: goto label_217230;
        case 0x217234u: goto label_217234;
        case 0x217238u: goto label_217238;
        case 0x21723cu: goto label_21723c;
        case 0x217240u: goto label_217240;
        case 0x217244u: goto label_217244;
        case 0x217248u: goto label_217248;
        case 0x21724cu: goto label_21724c;
        case 0x217250u: goto label_217250;
        case 0x217254u: goto label_217254;
        case 0x217258u: goto label_217258;
        case 0x21725cu: goto label_21725c;
        case 0x217260u: goto label_217260;
        case 0x217264u: goto label_217264;
        case 0x217268u: goto label_217268;
        case 0x21726cu: goto label_21726c;
        case 0x217270u: goto label_217270;
        case 0x217274u: goto label_217274;
        case 0x217278u: goto label_217278;
        case 0x21727cu: goto label_21727c;
        case 0x217280u: goto label_217280;
        case 0x217284u: goto label_217284;
        case 0x217288u: goto label_217288;
        case 0x21728cu: goto label_21728c;
        case 0x217290u: goto label_217290;
        case 0x217294u: goto label_217294;
        case 0x217298u: goto label_217298;
        case 0x21729cu: goto label_21729c;
        case 0x2172a0u: goto label_2172a0;
        case 0x2172a4u: goto label_2172a4;
        case 0x2172a8u: goto label_2172a8;
        case 0x2172acu: goto label_2172ac;
        case 0x2172b0u: goto label_2172b0;
        case 0x2172b4u: goto label_2172b4;
        case 0x2172b8u: goto label_2172b8;
        case 0x2172bcu: goto label_2172bc;
        case 0x2172c0u: goto label_2172c0;
        case 0x2172c4u: goto label_2172c4;
        case 0x2172c8u: goto label_2172c8;
        case 0x2172ccu: goto label_2172cc;
        case 0x2172d0u: goto label_2172d0;
        case 0x2172d4u: goto label_2172d4;
        case 0x2172d8u: goto label_2172d8;
        case 0x2172dcu: goto label_2172dc;
        case 0x2172e0u: goto label_2172e0;
        case 0x2172e4u: goto label_2172e4;
        case 0x2172e8u: goto label_2172e8;
        case 0x2172ecu: goto label_2172ec;
        case 0x2172f0u: goto label_2172f0;
        case 0x2172f4u: goto label_2172f4;
        case 0x2172f8u: goto label_2172f8;
        case 0x2172fcu: goto label_2172fc;
        case 0x217300u: goto label_217300;
        case 0x217304u: goto label_217304;
        case 0x217308u: goto label_217308;
        case 0x21730cu: goto label_21730c;
        case 0x217310u: goto label_217310;
        case 0x217314u: goto label_217314;
        case 0x217318u: goto label_217318;
        case 0x21731cu: goto label_21731c;
        case 0x217320u: goto label_217320;
        case 0x217324u: goto label_217324;
        case 0x217328u: goto label_217328;
        case 0x21732cu: goto label_21732c;
        case 0x217330u: goto label_217330;
        case 0x217334u: goto label_217334;
        case 0x217338u: goto label_217338;
        case 0x21733cu: goto label_21733c;
        case 0x217340u: goto label_217340;
        case 0x217344u: goto label_217344;
        case 0x217348u: goto label_217348;
        case 0x21734cu: goto label_21734c;
        case 0x217350u: goto label_217350;
        case 0x217354u: goto label_217354;
        case 0x217358u: goto label_217358;
        case 0x21735cu: goto label_21735c;
        case 0x217360u: goto label_217360;
        case 0x217364u: goto label_217364;
        case 0x217368u: goto label_217368;
        case 0x21736cu: goto label_21736c;
        case 0x217370u: goto label_217370;
        case 0x217374u: goto label_217374;
        case 0x217378u: goto label_217378;
        case 0x21737cu: goto label_21737c;
        case 0x217380u: goto label_217380;
        case 0x217384u: goto label_217384;
        case 0x217388u: goto label_217388;
        case 0x21738cu: goto label_21738c;
        case 0x217390u: goto label_217390;
        case 0x217394u: goto label_217394;
        case 0x217398u: goto label_217398;
        case 0x21739cu: goto label_21739c;
        case 0x2173a0u: goto label_2173a0;
        case 0x2173a4u: goto label_2173a4;
        case 0x2173a8u: goto label_2173a8;
        case 0x2173acu: goto label_2173ac;
        case 0x2173b0u: goto label_2173b0;
        case 0x2173b4u: goto label_2173b4;
        case 0x2173b8u: goto label_2173b8;
        case 0x2173bcu: goto label_2173bc;
        case 0x2173c0u: goto label_2173c0;
        case 0x2173c4u: goto label_2173c4;
        case 0x2173c8u: goto label_2173c8;
        case 0x2173ccu: goto label_2173cc;
        case 0x2173d0u: goto label_2173d0;
        case 0x2173d4u: goto label_2173d4;
        case 0x2173d8u: goto label_2173d8;
        case 0x2173dcu: goto label_2173dc;
        case 0x2173e0u: goto label_2173e0;
        case 0x2173e4u: goto label_2173e4;
        case 0x2173e8u: goto label_2173e8;
        case 0x2173ecu: goto label_2173ec;
        case 0x2173f0u: goto label_2173f0;
        case 0x2173f4u: goto label_2173f4;
        case 0x2173f8u: goto label_2173f8;
        case 0x2173fcu: goto label_2173fc;
        case 0x217400u: goto label_217400;
        case 0x217404u: goto label_217404;
        case 0x217408u: goto label_217408;
        case 0x21740cu: goto label_21740c;
        case 0x217410u: goto label_217410;
        case 0x217414u: goto label_217414;
        case 0x217418u: goto label_217418;
        case 0x21741cu: goto label_21741c;
        default: break;
    }

    ctx->pc = 0x216ec0u;

label_216ec0:
    // 0x216ec0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_216ec4:
    // 0x216ec4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x216ec4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_216ec8:
    // 0x216ec8: 0x8c4495cc  lw          $a0, -0x6A34($v0)
    ctx->pc = 0x216ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940108)));
label_216ecc:
    // 0x216ecc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x216eccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_216ed0:
    // 0x216ed0: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x216ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_216ed4:
    // 0x216ed4: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x216ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_216ed8:
    // 0x216ed8: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x216ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_216edc:
    // 0x216edc: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x216edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_216ee0:
    // 0x216ee0: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x216ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_216ee4:
    // 0x216ee4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x216ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_216ee8:
    // 0x216ee8: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x216ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_216eec:
    // 0x216eec: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x216eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_216ef0:
    // 0x216ef0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_216ef4:
    if (ctx->pc == 0x216EF4u) {
        ctx->pc = 0x216EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF0u;
        // 0x216ef4: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216EF8u;
        goto label_216ef8;
    }
    ctx->pc = 0x216EF0u;
    {
        const bool branch_taken_0x216ef0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x216EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216EF0u;
        // 0x216ef4: 0xffbf0078  sd          $ra, 0x78($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ef0) {
            ctx->pc = 0x216F10u;
            goto label_216f10;
        }
    }
    ctx->pc = 0x216EF8u;
label_216ef8:
    // 0x216ef8: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x216ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_216efc:
    // 0x216efc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216f00:
    // 0x216f00: 0x40f809  jalr        $v0
label_216f04:
    if (ctx->pc == 0x216F04u) {
        ctx->pc = 0x216F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F00u;
        // 0x216f04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F08u;
        goto label_216f08;
    }
    ctx->pc = 0x216F00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216F08u);
        ctx->pc = 0x216F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F00u;
        // 0x216f04: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216F00u, 0x216F08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216F08u;
label_216f08:
    // 0x216f08: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x216f08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_216f0c:
    // 0x216f0c: 0xac4095cc  sw          $zero, -0x6A34($v0)
    ctx->pc = 0x216f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940108), GPR_U32(ctx, 0));
label_216f10:
    // 0x216f10: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x216f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_216f14:
    // 0x216f14: 0x24443500  addiu       $a0, $v0, 0x3500
    ctx->pc = 0x216f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13568));
label_216f18:
    // 0x216f18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x216f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_216f1c:
    // 0x216f1c: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x216f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
label_216f20:
    // 0x216f20: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x216f20u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_216f24:
    // 0x216f24: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x216f24u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
label_216f28:
    // 0x216f28: 0x3c15004a  lui         $s5, 0x4A
    ctx->pc = 0x216f28u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)74 << 16));
label_216f2c:
    // 0x216f2c: 0x3c1e004a  lui         $fp, 0x4A
    ctx->pc = 0x216f2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)74 << 16));
label_216f30:
    // 0x216f30: 0x27b70008  addiu       $s7, $sp, 0x8
    ctx->pc = 0x216f30u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_216f34:
    // 0x216f34: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x216f34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_216f38:
    // 0x216f38: 0x1000000d  b           . + 4 + (0xD << 2)
label_216f3c:
    if (ctx->pc == 0x216F3Cu) {
        ctx->pc = 0x216F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F38u;
        // 0x216f3c: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F40u;
        goto label_216f40;
    }
    ctx->pc = 0x216F38u;
    {
        const bool branch_taken_0x216f38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F38u;
        // 0x216f3c: 0x3c160040  lui         $s6, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f38) {
            ctx->pc = 0x216F70u;
            goto label_216f70;
        }
    }
    ctx->pc = 0x216F40u;
label_216f40:
    // 0x216f40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x216f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_216f44:
    // 0x216f44: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x216f44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
label_216f48:
    // 0x216f48: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_216f4c:
    if (ctx->pc == 0x216F4Cu) {
        ctx->pc = 0x216F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F48u;
        // 0x216f4c: 0x26433500  addiu       $v1, $s2, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F50u;
        goto label_216f50;
    }
    ctx->pc = 0x216F48u;
    {
        const bool branch_taken_0x216f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F48u;
        // 0x216f4c: 0x26433500  addiu       $v1, $s2, 0x3500 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f48) {
            ctx->pc = 0x216F74u;
            goto label_216f74;
        }
    }
    ctx->pc = 0x216F50u;
label_216f50:
    // 0x216f50: 0x8ca40388  lw          $a0, 0x388($a1)
    ctx->pc = 0x216f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 904)));
label_216f54:
    // 0x216f54: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_216f58:
    if (ctx->pc == 0x216F58u) {
        ctx->pc = 0x216F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F54u;
        // 0x216f58: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F5Cu;
        goto label_216f5c;
    }
    ctx->pc = 0x216F54u;
    {
        const bool branch_taken_0x216f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f54) {
            ctx->pc = 0x216F58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F54u;
            // 0x216f58: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F5Cu;
label_216f5c:
    // 0x216f5c: 0x8c820220  lw          $v0, 0x220($a0)
    ctx->pc = 0x216f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 544)));
label_216f60:
    // 0x216f60: 0x54450005  bnel        $v0, $a1, . + 4 + (0x5 << 2)
label_216f64:
    if (ctx->pc == 0x216F64u) {
        ctx->pc = 0x216F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F60u;
        // 0x216f64: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F68u;
        goto label_216f68;
    }
    ctx->pc = 0x216F60u;
    {
        const bool branch_taken_0x216f60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x216f60) {
            ctx->pc = 0x216F64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F60u;
            // 0x216f64: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F78u;
            goto label_216f78;
        }
    }
    ctx->pc = 0x216F68u;
label_216f68:
    // 0x216f68: 0xc09bf28  jal         func_26FCA0
label_216f6c:
    if (ctx->pc == 0x216F6Cu) {
        ctx->pc = 0x216F70u;
        goto label_216f70;
    }
    ctx->pc = 0x216F68u;
    SET_GPR_U32(ctx, 31, 0x216F70u);
    ctx->pc = 0x26FCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCA0u, 0x216F68u, 0x216F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216F70u;
label_216f70:
    // 0x216f70: 0x26433500  addiu       $v1, $s2, 0x3500
    ctx->pc = 0x216f70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
label_216f74:
    // 0x216f74: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x216f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_216f78:
    // 0x216f78: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216f7c:
    if (ctx->pc == 0x216F7Cu) {
        ctx->pc = 0x216F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F78u;
        // 0x216f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F80u;
        goto label_216f80;
    }
    ctx->pc = 0x216F78u;
    {
        const bool branch_taken_0x216f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F78u;
        // 0x216f7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216f78) {
            ctx->pc = 0x216F84u;
            goto label_216f84;
        }
    }
    ctx->pc = 0x216F80u;
label_216f80:
    // 0x216f80: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x216f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_216f84:
    // 0x216f84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_216f88:
    if (ctx->pc == 0x216F88u) {
        ctx->pc = 0x216F8Cu;
        goto label_216f8c;
    }
    ctx->pc = 0x216F84u;
    {
        const bool branch_taken_0x216f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216f84) {
            ctx->pc = 0x216F94u;
            goto label_216f94;
        }
    }
    ctx->pc = 0x216F8Cu;
label_216f8c:
    // 0x216f8c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x216f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_216f90:
    // 0x216f90: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x216f90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_216f94:
    // 0x216f94: 0x54a0ffea  bnel        $a1, $zero, . + 4 + (-0x16 << 2)
label_216f98:
    if (ctx->pc == 0x216F98u) {
        ctx->pc = 0x216F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216F94u;
        // 0x216f98: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216F9Cu;
        goto label_216f9c;
    }
    ctx->pc = 0x216F94u;
    {
        const bool branch_taken_0x216f94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x216f94) {
            ctx->pc = 0x216F98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216F94u;
            // 0x216f98: 0x8ca200bc  lw          $v0, 0xBC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216f40;
        }
    }
    ctx->pc = 0x216F9Cu;
label_216f9c:
    // 0x216f9c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x216f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_216fa0:
    // 0x216fa0: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x216fa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_216fa4:
    // 0x216fa4: 0x10000012  b           . + 4 + (0x12 << 2)
label_216fa8:
    if (ctx->pc == 0x216FA8u) {
        ctx->pc = 0x216FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FA4u;
        // 0x216fa8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FACu;
        goto label_216fac;
    }
    ctx->pc = 0x216FA4u;
    {
        const bool branch_taken_0x216fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FA4u;
        // 0x216fa8: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fa4) {
            ctx->pc = 0x216FF0u;
            goto label_216ff0;
        }
    }
    ctx->pc = 0x216FACu;
label_216fac:
    // 0x216fac: 0x0  nop
    ctx->pc = 0x216facu;
    // NOP
label_216fb0:
    // 0x216fb0: 0xc085aa8  jal         func_216AA0
label_216fb4:
    if (ctx->pc == 0x216FB4u) {
        ctx->pc = 0x216FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FB0u;
        // 0x216fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FB8u;
        goto label_216fb8;
    }
    ctx->pc = 0x216FB0u;
    SET_GPR_U32(ctx, 31, 0x216FB8u);
    ctx->pc = 0x216FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x216FB0u;
    // 0x216fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AA0u, 0x216FB0u, 0x216FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216FB8u;
label_216fb8:
    // 0x216fb8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_216fbc:
    if (ctx->pc == 0x216FBCu) {
        ctx->pc = 0x216FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FB8u;
        // 0x216fbc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FC0u;
        goto label_216fc0;
    }
    ctx->pc = 0x216FB8u;
    {
        const bool branch_taken_0x216fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216fb8) {
            ctx->pc = 0x216FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FB8u;
            // 0x216fbc: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FE0u;
            goto label_216fe0;
        }
    }
    ctx->pc = 0x216FC0u;
label_216fc0:
    // 0x216fc0: 0x26433500  addiu       $v1, $s2, 0x3500
    ctx->pc = 0x216fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 13568));
label_216fc4:
    // 0x216fc4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x216fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_216fc8:
    // 0x216fc8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_216fcc:
    if (ctx->pc == 0x216FCCu) {
        ctx->pc = 0x216FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FC8u;
        // 0x216fcc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FD0u;
        goto label_216fd0;
    }
    ctx->pc = 0x216FC8u;
    {
        const bool branch_taken_0x216fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x216fc8) {
            ctx->pc = 0x216FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x216FC8u;
            // 0x216fcc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x216FF0u;
            goto label_216ff0;
        }
    }
    ctx->pc = 0x216FD0u;
label_216fd0:
    // 0x216fd0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x216fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_216fd4:
    // 0x216fd4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x216fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_216fd8:
    // 0x216fd8: 0x10000005  b           . + 4 + (0x5 << 2)
label_216fdc:
    if (ctx->pc == 0x216FDCu) {
        ctx->pc = 0x216FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FD8u;
        // 0x216fdc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FE0u;
        goto label_216fe0;
    }
    ctx->pc = 0x216FD8u;
    {
        const bool branch_taken_0x216fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FD8u;
        // 0x216fdc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216fd8) {
            ctx->pc = 0x216FF0u;
            goto label_216ff0;
        }
    }
    ctx->pc = 0x216FE0u;
label_216fe0:
    // 0x216fe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x216fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_216fe4:
    // 0x216fe4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x216fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_216fe8:
    // 0x216fe8: 0x40f809  jalr        $v0
label_216fec:
    if (ctx->pc == 0x216FECu) {
        ctx->pc = 0x216FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE8u;
        // 0x216fec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FF0u;
        goto label_216ff0;
    }
    ctx->pc = 0x216FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x216FF0u);
        ctx->pc = 0x216FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FE8u;
        // 0x216fec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216FE8u, 0x216FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x216FF0u;
label_216ff0:
    // 0x216ff0: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x216ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_216ff4:
    // 0x216ff4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_216ff8:
    if (ctx->pc == 0x216FF8u) {
        ctx->pc = 0x216FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FF4u;
        // 0x216ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x216FFCu;
        goto label_216ffc;
    }
    ctx->pc = 0x216FF4u;
    {
        const bool branch_taken_0x216ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x216FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216FF4u;
        // 0x216ff8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ff4) {
            ctx->pc = 0x217000u;
            goto label_217000;
        }
    }
    ctx->pc = 0x216FFCu;
label_216ffc:
    // 0x216ffc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x216ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217000:
    // 0x217000: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_217004:
    if (ctx->pc == 0x217004u) {
        ctx->pc = 0x217004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217000u;
        // 0x217004: 0x26623510  addiu       $v0, $s3, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217008u;
        goto label_217008;
    }
    ctx->pc = 0x217000u;
    {
        const bool branch_taken_0x217000 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217000u;
        // 0x217004: 0x26623510  addiu       $v0, $s3, 0x3510 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217000) {
            ctx->pc = 0x216FB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216fb0;
        }
    }
    ctx->pc = 0x217008u;
label_217008:
    // 0x217008: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21700c:
    // 0x21700c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x21700cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217010:
    // 0x217010: 0x10000010  b           . + 4 + (0x10 << 2)
label_217014:
    if (ctx->pc == 0x217014u) {
        ctx->pc = 0x217014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217010u;
        // 0x217014: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217018u;
        goto label_217018;
    }
    ctx->pc = 0x217010u;
    {
        const bool branch_taken_0x217010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217010u;
        // 0x217014: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217010) {
            ctx->pc = 0x217054u;
            goto label_217054;
        }
    }
    ctx->pc = 0x217018u;
label_217018:
    // 0x217018: 0xc085aa8  jal         func_216AA0
label_21701c:
    if (ctx->pc == 0x21701Cu) {
        ctx->pc = 0x21701Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217018u;
        // 0x21701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217020u;
        goto label_217020;
    }
    ctx->pc = 0x217018u;
    SET_GPR_U32(ctx, 31, 0x217020u);
    ctx->pc = 0x21701Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217018u;
    // 0x21701c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x216AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x216AA0u, 0x217018u, 0x217020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217020u;
label_217020:
    // 0x217020: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_217024:
    if (ctx->pc == 0x217024u) {
        ctx->pc = 0x217024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217020u;
        // 0x217024: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217028u;
        goto label_217028;
    }
    ctx->pc = 0x217020u;
    {
        const bool branch_taken_0x217020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x217020) {
            ctx->pc = 0x217024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217020u;
            // 0x217024: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217044u;
            goto label_217044;
        }
    }
    ctx->pc = 0x217028u;
label_217028:
    // 0x217028: 0x26633510  addiu       $v1, $s3, 0x3510
    ctx->pc = 0x217028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 13584));
label_21702c:
    // 0x21702c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21702cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_217030:
    // 0x217030: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_217034:
    if (ctx->pc == 0x217034u) {
        ctx->pc = 0x217034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217030u;
        // 0x217034: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217038u;
        goto label_217038;
    }
    ctx->pc = 0x217030u;
    {
        const bool branch_taken_0x217030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x217030) {
            ctx->pc = 0x217034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217030u;
            // 0x217034: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217058u;
            goto label_217058;
        }
    }
    ctx->pc = 0x217038u;
label_217038:
    // 0x217038: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x217038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21703c:
    // 0x21703c: 0x10000005  b           . + 4 + (0x5 << 2)
label_217040:
    if (ctx->pc == 0x217040u) {
        ctx->pc = 0x217040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21703Cu;
        // 0x217040: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217044u;
        goto label_217044;
    }
    ctx->pc = 0x21703Cu;
    {
        const bool branch_taken_0x21703c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21703Cu;
        // 0x217040: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21703c) {
            ctx->pc = 0x217054u;
            goto label_217054;
        }
    }
    ctx->pc = 0x217044u;
label_217044:
    // 0x217044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217048:
    // 0x217048: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x217048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_21704c:
    // 0x21704c: 0x40f809  jalr        $v0
label_217050:
    if (ctx->pc == 0x217050u) {
        ctx->pc = 0x217050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21704Cu;
        // 0x217050: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217054u;
        goto label_217054;
    }
    ctx->pc = 0x21704Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217054u);
        ctx->pc = 0x217050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21704Cu;
        // 0x217050: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21704Cu, 0x217054u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217054u;
label_217054:
    // 0x217054: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x217054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217058:
    // 0x217058: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_21705c:
    if (ctx->pc == 0x21705Cu) {
        ctx->pc = 0x21705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217058u;
        // 0x21705c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217060u;
        goto label_217060;
    }
    ctx->pc = 0x217058u;
    {
        const bool branch_taken_0x217058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217058u;
        // 0x21705c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217058) {
            ctx->pc = 0x217064u;
            goto label_217064;
        }
    }
    ctx->pc = 0x217060u;
label_217060:
    // 0x217060: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x217060u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217064:
    // 0x217064: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x217064u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_217068:
    // 0x217068: 0x1600ffeb  bnez        $s0, . + 4 + (-0x15 << 2)
label_21706c:
    if (ctx->pc == 0x21706Cu) {
        ctx->pc = 0x21706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217068u;
        // 0x21706c: 0x26a23520  addiu       $v0, $s5, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217070u;
        goto label_217070;
    }
    ctx->pc = 0x217068u;
    {
        const bool branch_taken_0x217068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x21706Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217068u;
        // 0x21706c: 0x26a23520  addiu       $v0, $s5, 0x3520 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 13600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217068) {
            ctx->pc = 0x217018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217018;
        }
    }
    ctx->pc = 0x217070u;
label_217070:
    // 0x217070: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_217074:
    // 0x217074: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217078:
    // 0x217078: 0x10000005  b           . + 4 + (0x5 << 2)
label_21707c:
    if (ctx->pc == 0x21707Cu) {
        ctx->pc = 0x21707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217078u;
        // 0x21707c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217080u;
        goto label_217080;
    }
    ctx->pc = 0x217078u;
    {
        const bool branch_taken_0x217078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217078u;
        // 0x21707c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217078) {
            ctx->pc = 0x217090u;
            goto label_217090;
        }
    }
    ctx->pc = 0x217080u;
label_217080:
    // 0x217080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x217080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217084:
    // 0x217084: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x217084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_217088:
    // 0x217088: 0x40f809  jalr        $v0
label_21708c:
    if (ctx->pc == 0x21708Cu) {
        ctx->pc = 0x21708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217088u;
        // 0x21708c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217090u;
        goto label_217090;
    }
    ctx->pc = 0x217088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x217090u);
        ctx->pc = 0x21708Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217088u;
        // 0x21708c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217088u, 0x217090u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x217090u;
label_217090:
    // 0x217090: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x217090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217094:
    // 0x217094: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217098:
    if (ctx->pc == 0x217098u) {
        ctx->pc = 0x217098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217094u;
        // 0x217098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21709Cu;
        goto label_21709c;
    }
    ctx->pc = 0x217094u;
    {
        const bool branch_taken_0x217094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217094u;
        // 0x217098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217094) {
            ctx->pc = 0x2170A0u;
            goto label_2170a0;
        }
    }
    ctx->pc = 0x21709Cu;
label_21709c:
    // 0x21709c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21709cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2170a0:
    // 0x2170a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2170a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2170a4:
    // 0x2170a4: 0x5600fff6  bnel        $s0, $zero, . + 4 + (-0xA << 2)
label_2170a8:
    if (ctx->pc == 0x2170A8u) {
        ctx->pc = 0x2170A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170A4u;
        // 0x2170a8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170ACu;
        goto label_2170ac;
    }
    ctx->pc = 0x2170A4u;
    {
        const bool branch_taken_0x2170a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2170a4) {
            ctx->pc = 0x2170A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2170A4u;
            // 0x2170a8: 0x8e030218  lw          $v1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x217080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217080;
        }
    }
    ctx->pc = 0x2170ACu;
label_2170ac:
    // 0x2170ac: 0xc0c33da  jal         func_30CF68
label_2170b0:
    if (ctx->pc == 0x2170B0u) {
        ctx->pc = 0x2170B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170ACu;
        // 0x2170b0: 0x27c43578  addiu       $a0, $fp, 0x3578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 13688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170B4u;
        goto label_2170b4;
    }
    ctx->pc = 0x2170ACu;
    SET_GPR_U32(ctx, 31, 0x2170B4u);
    ctx->pc = 0x2170B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170ACu;
    // 0x2170b0: 0x27c43578  addiu       $a0, $fp, 0x3578 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 13688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CF68u, 0x2170ACu, 0x2170B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170B4u;
label_2170b4:
    // 0x2170b4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2170b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_2170b8:
    // 0x2170b8: 0xc0c33da  jal         func_30CF68
label_2170bc:
    if (ctx->pc == 0x2170BCu) {
        ctx->pc = 0x2170BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170B8u;
        // 0x2170bc: 0x24643588  addiu       $a0, $v1, 0x3588 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170C0u;
        goto label_2170c0;
    }
    ctx->pc = 0x2170B8u;
    SET_GPR_U32(ctx, 31, 0x2170C0u);
    ctx->pc = 0x2170BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170B8u;
    // 0x2170bc: 0x24643588  addiu       $a0, $v1, 0x3588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 13704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30CF68u, 0x2170B8u, 0x2170C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170C0u;
label_2170c0:
    // 0x2170c0: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x2170c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
label_2170c4:
    // 0x2170c4: 0xc0c341a  jal         func_30D068
label_2170c8:
    if (ctx->pc == 0x2170C8u) {
        ctx->pc = 0x2170C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170C4u;
        // 0x2170c8: 0x24a4ff68  addiu       $a0, $a1, -0x98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170CCu;
        goto label_2170cc;
    }
    ctx->pc = 0x2170C4u;
    SET_GPR_U32(ctx, 31, 0x2170CCu);
    ctx->pc = 0x2170C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170C4u;
    // 0x2170c8: 0x24a4ff68  addiu       $a0, $a1, -0x98 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D068u, 0x2170C4u, 0x2170CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2170CCu;
label_2170cc:
    // 0x2170cc: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x2170ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_2170d0:
    // 0x2170d0: 0x24c234c0  addiu       $v0, $a2, 0x34C0
    ctx->pc = 0x2170d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 13504));
label_2170d4:
    // 0x2170d4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2170d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2170d8:
    // 0x2170d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2170d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2170dc:
    // 0x2170dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2170e0:
    if (ctx->pc == 0x2170E0u) {
        ctx->pc = 0x2170E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170DCu;
        // 0x2170e0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170E4u;
        goto label_2170e4;
    }
    ctx->pc = 0x2170DCu;
    {
        const bool branch_taken_0x2170dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2170E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170DCu;
        // 0x2170e0: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2170dc) {
            ctx->pc = 0x217100u;
            goto label_217100;
        }
    }
    ctx->pc = 0x2170E4u;
label_2170e4:
    // 0x2170e4: 0x0  nop
    ctx->pc = 0x2170e4u;
    // NOP
label_2170e8:
    // 0x2170e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2170e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2170ec:
    // 0x2170ec: 0x40f809  jalr        $v0
label_2170f0:
    if (ctx->pc == 0x2170F0u) {
        ctx->pc = 0x2170F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170ECu;
        // 0x2170f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2170F4u;
        goto label_2170f4;
    }
    ctx->pc = 0x2170ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2170F4u);
        ctx->pc = 0x2170F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170ECu;
        // 0x2170f0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2170ECu, 0x2170F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2170F4u;
label_2170f4:
    // 0x2170f4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2170f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2170f8:
    // 0x2170f8: 0xc0f774a  jal         func_3DDD28
label_2170fc:
    if (ctx->pc == 0x2170FCu) {
        ctx->pc = 0x2170FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2170F8u;
        // 0x2170fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217100u;
        goto label_217100;
    }
    ctx->pc = 0x2170F8u;
    SET_GPR_U32(ctx, 31, 0x217100u);
    ctx->pc = 0x2170FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2170F8u;
    // 0x2170fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDD28u, 0x2170F8u, 0x217100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217100u;
label_217100:
    // 0x217100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x217100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_217104:
    // 0x217104: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217108:
    if (ctx->pc == 0x217108u) {
        ctx->pc = 0x217108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217104u;
        // 0x217108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21710Cu;
        goto label_21710c;
    }
    ctx->pc = 0x217104u;
    {
        const bool branch_taken_0x217104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217104u;
        // 0x217108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217104) {
            ctx->pc = 0x217110u;
            goto label_217110;
        }
    }
    ctx->pc = 0x21710Cu;
label_21710c:
    // 0x21710c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x21710cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_217110:
    // 0x217110: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
label_217114:
    if (ctx->pc == 0x217114u) {
        ctx->pc = 0x217114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217110u;
        // 0x217114: 0x8c830190  lw          $v1, 0x190($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217118u;
        goto label_217118;
    }
    ctx->pc = 0x217110u;
    {
        const bool branch_taken_0x217110 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x217110) {
            ctx->pc = 0x217114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217110u;
            // 0x217114: 0x8c830190  lw          $v1, 0x190($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 400)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2170E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2170e8;
        }
    }
    ctx->pc = 0x217118u;
label_217118:
    // 0x217118: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x217118u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_21711c:
    // 0x21711c: 0x246234d0  addiu       $v0, $v1, 0x34D0
    ctx->pc = 0x21711cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 13520));
label_217120:
    // 0x217120: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_217124:
    // 0x217124: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217124u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217128:
    // 0x217128: 0x10000008  b           . + 4 + (0x8 << 2)
label_21712c:
    if (ctx->pc == 0x21712Cu) {
        ctx->pc = 0x21712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217128u;
        // 0x21712c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217130u;
        goto label_217130;
    }
    ctx->pc = 0x217128u;
    {
        const bool branch_taken_0x217128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217128u;
        // 0x21712c: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217128) {
            ctx->pc = 0x21714Cu;
            goto label_21714c;
        }
    }
    ctx->pc = 0x217130u;
label_217130:
    // 0x217130: 0xc0d7412  jal         func_35D048
label_217134:
    if (ctx->pc == 0x217134u) {
        ctx->pc = 0x217134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217130u;
        // 0x217134: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217138u;
        goto label_217138;
    }
    ctx->pc = 0x217130u;
    SET_GPR_U32(ctx, 31, 0x217138u);
    ctx->pc = 0x217134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217130u;
    // 0x217134: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217130u, 0x217138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217138u;
label_217138:
    // 0x217138: 0xc0f5222  jal         func_3D4888
label_21713c:
    if (ctx->pc == 0x21713Cu) {
        ctx->pc = 0x21713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217138u;
        // 0x21713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217140u;
        goto label_217140;
    }
    ctx->pc = 0x217138u;
    SET_GPR_U32(ctx, 31, 0x217140u);
    ctx->pc = 0x21713Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217138u;
    // 0x21713c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x217138u, 0x217140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217140u;
label_217140:
    // 0x217140: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x217140u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217144:
    // 0x217144: 0xc0f776e  jal         func_3DDDB8
label_217148:
    if (ctx->pc == 0x217148u) {
        ctx->pc = 0x217148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217144u;
        // 0x217148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21714Cu;
        goto label_21714c;
    }
    ctx->pc = 0x217144u;
    SET_GPR_U32(ctx, 31, 0x21714Cu);
    ctx->pc = 0x217148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217144u;
    // 0x217148: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDDB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDDB8u, 0x217144u, 0x21714Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21714Cu;
label_21714c:
    // 0x21714c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21714cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217150:
    // 0x217150: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217154:
    if (ctx->pc == 0x217154u) {
        ctx->pc = 0x217154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217150u;
        // 0x217154: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217158u;
        goto label_217158;
    }
    ctx->pc = 0x217150u;
    {
        const bool branch_taken_0x217150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217150u;
        // 0x217154: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217150) {
            ctx->pc = 0x21715Cu;
            goto label_21715c;
        }
    }
    ctx->pc = 0x217158u;
label_217158:
    // 0x217158: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x217158u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21715c:
    // 0x21715c: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
label_217160:
    if (ctx->pc == 0x217160u) {
        ctx->pc = 0x217160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21715Cu;
        // 0x217160: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217164u;
        goto label_217164;
    }
    ctx->pc = 0x21715Cu;
    {
        const bool branch_taken_0x21715c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x217160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21715Cu;
        // 0x217160: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21715c) {
            ctx->pc = 0x217130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217130;
        }
    }
    ctx->pc = 0x217164u;
label_217164:
    // 0x217164: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x217164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_217168:
    // 0x217168: 0x248234e0  addiu       $v0, $a0, 0x34E0
    ctx->pc = 0x217168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 13536));
label_21716c:
    // 0x21716c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21716cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_217170:
    // 0x217170: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x217170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217174:
    // 0x217174: 0x10000009  b           . + 4 + (0x9 << 2)
label_217178:
    if (ctx->pc == 0x217178u) {
        ctx->pc = 0x217178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217174u;
        // 0x217178: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21717Cu;
        goto label_21717c;
    }
    ctx->pc = 0x217174u;
    {
        const bool branch_taken_0x217174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217174u;
        // 0x217178: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217174) {
            ctx->pc = 0x21719Cu;
            goto label_21719c;
        }
    }
    ctx->pc = 0x21717Cu;
label_21717c:
    // 0x21717c: 0x0  nop
    ctx->pc = 0x21717cu;
    // NOP
label_217180:
    // 0x217180: 0xc0d7412  jal         func_35D048
label_217184:
    if (ctx->pc == 0x217184u) {
        ctx->pc = 0x217184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217180u;
        // 0x217184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217188u;
        goto label_217188;
    }
    ctx->pc = 0x217180u;
    SET_GPR_U32(ctx, 31, 0x217188u);
    ctx->pc = 0x217184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217180u;
    // 0x217184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x217180u, 0x217188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217188u;
label_217188:
    // 0x217188: 0xc0f5222  jal         func_3D4888
label_21718c:
    if (ctx->pc == 0x21718Cu) {
        ctx->pc = 0x21718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217188u;
        // 0x21718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217190u;
        goto label_217190;
    }
    ctx->pc = 0x217188u;
    SET_GPR_U32(ctx, 31, 0x217190u);
    ctx->pc = 0x21718Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217188u;
    // 0x21718c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x217188u, 0x217190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217190u;
label_217190:
    // 0x217190: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x217190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_217194:
    // 0x217194: 0xc0f7792  jal         func_3DDE48
label_217198:
    if (ctx->pc == 0x217198u) {
        ctx->pc = 0x217198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217194u;
        // 0x217198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21719Cu;
        goto label_21719c;
    }
    ctx->pc = 0x217194u;
    SET_GPR_U32(ctx, 31, 0x21719Cu);
    ctx->pc = 0x217198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217194u;
    // 0x217198: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDE48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDE48u, 0x217194u, 0x21719Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21719Cu;
label_21719c:
    // 0x21719c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x21719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2171a0:
    // 0x2171a0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2171a4:
    if (ctx->pc == 0x2171A4u) {
        ctx->pc = 0x2171A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171A0u;
        // 0x2171a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171A8u;
        goto label_2171a8;
    }
    ctx->pc = 0x2171A0u;
    {
        const bool branch_taken_0x2171a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171A0u;
        // 0x2171a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171a0) {
            ctx->pc = 0x2171ACu;
            goto label_2171ac;
        }
    }
    ctx->pc = 0x2171A8u;
label_2171a8:
    // 0x2171a8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x2171a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2171ac:
    // 0x2171ac: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
label_2171b0:
    if (ctx->pc == 0x2171B0u) {
        ctx->pc = 0x2171B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171ACu;
        // 0x2171b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171B4u;
        goto label_2171b4;
    }
    ctx->pc = 0x2171ACu;
    {
        const bool branch_taken_0x2171ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2171B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171ACu;
        // 0x2171b0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171ac) {
            ctx->pc = 0x217180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217180;
        }
    }
    ctx->pc = 0x2171B4u;
label_2171b4:
    // 0x2171b4: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2171b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
label_2171b8:
    // 0x2171b8: 0x24a23540  addiu       $v0, $a1, 0x3540
    ctx->pc = 0x2171b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 13632));
label_2171bc:
    // 0x2171bc: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2171bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2171c0:
    // 0x2171c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2171c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2171c4:
    // 0x2171c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2171c8:
    if (ctx->pc == 0x2171C8u) {
        ctx->pc = 0x2171C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171C4u;
        // 0x2171c8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171CCu;
        goto label_2171cc;
    }
    ctx->pc = 0x2171C4u;
    {
        const bool branch_taken_0x2171c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171C4u;
        // 0x2171c8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171c4) {
            ctx->pc = 0x2171E8u;
            goto label_2171e8;
        }
    }
    ctx->pc = 0x2171CCu;
label_2171cc:
    // 0x2171cc: 0x0  nop
    ctx->pc = 0x2171ccu;
    // NOP
label_2171d0:
    // 0x2171d0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2171d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2171d4:
    // 0x2171d4: 0x40f809  jalr        $v0
label_2171d8:
    if (ctx->pc == 0x2171D8u) {
        ctx->pc = 0x2171D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171D4u;
        // 0x2171d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171DCu;
        goto label_2171dc;
    }
    ctx->pc = 0x2171D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2171DCu);
        ctx->pc = 0x2171D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171D4u;
        // 0x2171d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2171D4u, 0x2171DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2171DCu;
label_2171dc:
    // 0x2171dc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2171dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2171e0:
    // 0x2171e0: 0xc0f77b6  jal         func_3DDED8
label_2171e4:
    if (ctx->pc == 0x2171E4u) {
        ctx->pc = 0x2171E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171E0u;
        // 0x2171e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171E8u;
        goto label_2171e8;
    }
    ctx->pc = 0x2171E0u;
    SET_GPR_U32(ctx, 31, 0x2171E8u);
    ctx->pc = 0x2171E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2171E0u;
    // 0x2171e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDED8u, 0x2171E0u, 0x2171E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2171E8u;
label_2171e8:
    // 0x2171e8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2171e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2171ec:
    // 0x2171ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2171f0:
    if (ctx->pc == 0x2171F0u) {
        ctx->pc = 0x2171F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171ECu;
        // 0x2171f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2171F4u;
        goto label_2171f4;
    }
    ctx->pc = 0x2171ECu;
    {
        const bool branch_taken_0x2171ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2171F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171ECu;
        // 0x2171f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2171ec) {
            ctx->pc = 0x2171F8u;
            goto label_2171f8;
        }
    }
    ctx->pc = 0x2171F4u;
label_2171f4:
    // 0x2171f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2171f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2171f8:
    // 0x2171f8: 0x5480fff5  bnel        $a0, $zero, . + 4 + (-0xB << 2)
label_2171fc:
    if (ctx->pc == 0x2171FCu) {
        ctx->pc = 0x2171FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2171F8u;
        // 0x2171fc: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217200u;
        goto label_217200;
    }
    ctx->pc = 0x2171F8u;
    {
        const bool branch_taken_0x2171f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2171f8) {
            ctx->pc = 0x2171FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2171F8u;
            // 0x2171fc: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2171D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2171d0;
        }
    }
    ctx->pc = 0x217200u;
label_217200:
    // 0x217200: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x217200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
label_217204:
    // 0x217204: 0x24c234f0  addiu       $v0, $a2, 0x34F0
    ctx->pc = 0x217204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 13552));
label_217208:
    // 0x217208: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x217208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21720c:
    // 0x21720c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21720cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_217210:
    // 0x217210: 0x10000006  b           . + 4 + (0x6 << 2)
label_217214:
    if (ctx->pc == 0x217214u) {
        ctx->pc = 0x217214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217210u;
        // 0x217214: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217218u;
        goto label_217218;
    }
    ctx->pc = 0x217210u;
    {
        const bool branch_taken_0x217210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x217214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217210u;
        // 0x217214: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217210) {
            ctx->pc = 0x21722Cu;
            goto label_21722c;
        }
    }
    ctx->pc = 0x217218u;
label_217218:
    // 0x217218: 0xc07624c  jal         func_1D8930
label_21721c:
    if (ctx->pc == 0x21721Cu) {
        ctx->pc = 0x21721Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217218u;
        // 0x21721c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217220u;
        goto label_217220;
    }
    ctx->pc = 0x217218u;
    SET_GPR_U32(ctx, 31, 0x217220u);
    ctx->pc = 0x21721Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217218u;
    // 0x21721c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8930u, 0x217218u, 0x217220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217220u;
label_217220:
    // 0x217220: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x217220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_217224:
    // 0x217224: 0xc0f77da  jal         func_3DDF68
label_217228:
    if (ctx->pc == 0x217228u) {
        ctx->pc = 0x217228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217224u;
        // 0x217228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21722Cu;
        goto label_21722c;
    }
    ctx->pc = 0x217224u;
    SET_GPR_U32(ctx, 31, 0x21722Cu);
    ctx->pc = 0x217228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217224u;
    // 0x217228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DDF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DDF68u, 0x217224u, 0x21722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21722Cu;
label_21722c:
    // 0x21722c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x21722cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_217230:
    // 0x217230: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_217234:
    if (ctx->pc == 0x217234u) {
        ctx->pc = 0x217234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217230u;
        // 0x217234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217238u;
        goto label_217238;
    }
    ctx->pc = 0x217230u;
    {
        const bool branch_taken_0x217230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x217234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217230u;
        // 0x217234: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217230) {
            ctx->pc = 0x21723Cu;
            goto label_21723c;
        }
    }
    ctx->pc = 0x217238u;
label_217238:
    // 0x217238: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x217238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21723c:
    // 0x21723c: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
label_217240:
    if (ctx->pc == 0x217240u) {
        ctx->pc = 0x217240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21723Cu;
        // 0x217240: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217244u;
        goto label_217244;
    }
    ctx->pc = 0x21723Cu;
    {
        const bool branch_taken_0x21723c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x217240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21723Cu;
        // 0x217240: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21723c) {
            ctx->pc = 0x217218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217218;
        }
    }
    ctx->pc = 0x217244u;
label_217244:
    // 0x217244: 0x8c4495a8  lw          $a0, -0x6A58($v0)
    ctx->pc = 0x217244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940072)));
label_217248:
    // 0x217248: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_21724c:
    if (ctx->pc == 0x21724Cu) {
        ctx->pc = 0x21724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217248u;
        // 0x21724c: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217250u;
        goto label_217250;
    }
    ctx->pc = 0x217248u;
    {
        const bool branch_taken_0x217248 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217248) {
            ctx->pc = 0x21724Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x217248u;
            // 0x21724c: 0x3c04004a  lui         $a0, 0x4A (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21725Cu;
            goto label_21725c;
        }
    }
    ctx->pc = 0x217250u;
label_217250:
    // 0x217250: 0xc0f528a  jal         func_3D4A28
label_217254:
    if (ctx->pc == 0x217254u) {
        ctx->pc = 0x217258u;
        goto label_217258;
    }
    ctx->pc = 0x217250u;
    SET_GPR_U32(ctx, 31, 0x217258u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x217250u, 0x217258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217258u;
label_217258:
    // 0x217258: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x217258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_21725c:
    // 0x21725c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x21725cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_217260:
    // 0x217260: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x217260u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_217264:
    // 0x217264: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x217264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_217268:
    // 0x217268: 0x24923598  addiu       $s2, $a0, 0x3598
    ctx->pc = 0x217268u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 13720));
label_21726c:
    // 0x21726c: 0xaca095b4  sw          $zero, -0x6A4C($a1)
    ctx->pc = 0x21726cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294940084), GPR_U32(ctx, 0));
label_217270:
    // 0x217270: 0xacc095b8  sw          $zero, -0x6A48($a2)
    ctx->pc = 0x217270u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294940088), GPR_U32(ctx, 0));
label_217274:
    // 0x217274: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x217274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_217278:
    // 0x217278: 0xac4095bc  sw          $zero, -0x6A44($v0)
    ctx->pc = 0x217278u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940092), GPR_U32(ctx, 0));
label_21727c:
    // 0x21727c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x21727cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_217280:
    // 0x217280: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x217280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_217284:
    // 0x217284: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x217284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_217288:
    // 0x217288: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x217288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_21728c:
    // 0x21728c: 0xac6095ac  sw          $zero, -0x6A54($v1)
    ctx->pc = 0x21728cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294940076), GPR_U32(ctx, 0));
label_217290:
    // 0x217290: 0xac8095c0  sw          $zero, -0x6A40($a0)
    ctx->pc = 0x217290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294940096), GPR_U32(ctx, 0));
label_217294:
    // 0x217294: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x217294u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_217298:
    // 0x217298: 0xaca095c4  sw          $zero, -0x6A3C($a1)
    ctx->pc = 0x217298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294940100), GPR_U32(ctx, 0));
label_21729c:
    // 0x21729c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x21729cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2172a0:
    // 0x2172a0: 0xacc095c8  sw          $zero, -0x6A38($a2)
    ctx->pc = 0x2172a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294940104), GPR_U32(ctx, 0));
label_2172a4:
    // 0x2172a4: 0xac4095cc  sw          $zero, -0x6A34($v0)
    ctx->pc = 0x2172a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940108), GPR_U32(ctx, 0));
label_2172a8:
    // 0x2172a8: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x2172a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2172ac:
    // 0x2172ac: 0x0  nop
    ctx->pc = 0x2172acu;
    // NOP
label_2172b0:
    // 0x2172b0: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x2172b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2172b4:
    // 0x2172b4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2172b4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2172b8:
    // 0x2172b8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x2172b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_2172bc:
    // 0x2172bc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2172bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2172c0:
    // 0x2172c0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2172c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2172c4:
    // 0x2172c4: 0x10a60008  beq         $a1, $a2, . + 4 + (0x8 << 2)
label_2172c8:
    if (ctx->pc == 0x2172C8u) {
        ctx->pc = 0x2172C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C4u;
        // 0x2172c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172CCu;
        goto label_2172cc;
    }
    ctx->pc = 0x2172C4u;
    {
        const bool branch_taken_0x2172c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x2172C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172C4u;
        // 0x2172c8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172c4) {
            ctx->pc = 0x2172E8u;
            goto label_2172e8;
        }
    }
    ctx->pc = 0x2172CCu;
label_2172cc:
    // 0x2172cc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2172ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2172d0:
    // 0x2172d0: 0x0  nop
    ctx->pc = 0x2172d0u;
    // NOP
label_2172d4:
    // 0x2172d4: 0x0  nop
    ctx->pc = 0x2172d4u;
    // NOP
label_2172d8:
    // 0x2172d8: 0x0  nop
    ctx->pc = 0x2172d8u;
    // NOP
label_2172dc:
    // 0x2172dc: 0x0  nop
    ctx->pc = 0x2172dcu;
    // NOP
label_2172e0:
    // 0x2172e0: 0x1486fffb  bne         $a0, $a2, . + 4 + (-0x5 << 2)
label_2172e4:
    if (ctx->pc == 0x2172E4u) {
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E0u;
        // 0x2172e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2172E8u;
        goto label_2172e8;
    }
    ctx->pc = 0x2172E0u;
    {
        const bool branch_taken_0x2172e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2172E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2172E0u;
        // 0x2172e4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2172e0) {
            ctx->pc = 0x2172D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2172d0;
        }
    }
    ctx->pc = 0x2172E8u;
label_2172e8:
    // 0x2172e8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x2172e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_2172ec:
    // 0x2172ec: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x2172ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_2172f0:
    // 0x2172f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2172f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2172f4:
    // 0x2172f4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2172f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2172f8:
    // 0x2172f8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x2172f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_2172fc:
    // 0x2172fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2172fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_217300:
    // 0x217300: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x217300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_217304:
    // 0x217304: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x217304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_217308:
    // 0x217308: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x217308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21730c:
    // 0x21730c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x21730cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_217310:
    // 0x217310: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x217310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_217314:
    // 0x217314: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x217314u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_217318:
    // 0x217318: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x217318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21731c:
    // 0x21731c: 0xac660004  sw          $a2, 0x4($v1)
    ctx->pc = 0x21731cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 6));
label_217320:
    // 0x217320: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x217320u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_217324:
    // 0x217324: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x217324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_217328:
    // 0x217328: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x217328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_21732c:
    // 0x21732c: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x21732cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_217330:
    // 0x217330: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x217330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_217334:
    // 0x217334: 0x6ba40027  ldl         $a0, 0x27($sp)
    ctx->pc = 0x217334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_217338:
    // 0x217338: 0x6fa40020  ldr         $a0, 0x20($sp)
    ctx->pc = 0x217338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_21733c:
    // 0x21733c: 0xb064000f  sdl         $a0, 0xF($v1)
    ctx->pc = 0x21733cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_217340:
    // 0x217340: 0xb4640008  sdr         $a0, 0x8($v1)
    ctx->pc = 0x217340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_217344:
    // 0x217344: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x217344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_217348:
    // 0x217348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x217348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21734c:
    // 0x21734c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_217350:
    if (ctx->pc == 0x217350u) {
        ctx->pc = 0x217350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21734Cu;
        // 0x217350: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217354u;
        goto label_217354;
    }
    ctx->pc = 0x21734Cu;
    {
        const bool branch_taken_0x21734c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x217350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21734Cu;
        // 0x217350: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21734c) {
            ctx->pc = 0x217370u;
            goto label_217370;
        }
    }
    ctx->pc = 0x217354u;
label_217354:
    // 0x217354: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x217354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_217358:
    // 0x217358: 0x0  nop
    ctx->pc = 0x217358u;
    // NOP
label_21735c:
    // 0x21735c: 0x0  nop
    ctx->pc = 0x21735cu;
    // NOP
label_217360:
    // 0x217360: 0x0  nop
    ctx->pc = 0x217360u;
    // NOP
label_217364:
    // 0x217364: 0x0  nop
    ctx->pc = 0x217364u;
    // NOP
label_217368:
    // 0x217368: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_21736c:
    if (ctx->pc == 0x21736Cu) {
        ctx->pc = 0x21736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217368u;
        // 0x21736c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217370u;
        goto label_217370;
    }
    ctx->pc = 0x217368u;
    {
        const bool branch_taken_0x217368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217368u;
        // 0x21736c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217368) {
            ctx->pc = 0x217358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_217358;
        }
    }
    ctx->pc = 0x217370u;
label_217370:
    // 0x217370: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x217370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_217374:
    // 0x217374: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_217378:
    if (ctx->pc == 0x217378u) {
        ctx->pc = 0x217378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217374u;
        // 0x217378: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21737Cu;
        goto label_21737c;
    }
    ctx->pc = 0x217374u;
    {
        const bool branch_taken_0x217374 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x217378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217374u;
        // 0x217378: 0x200182d  daddu       $v1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217374) {
            ctx->pc = 0x217388u;
            goto label_217388;
        }
    }
    ctx->pc = 0x21737Cu;
label_21737c:
    // 0x21737c: 0xc0f5222  jal         func_3D4888
label_217380:
    if (ctx->pc == 0x217380u) {
        ctx->pc = 0x217384u;
        goto label_217384;
    }
    ctx->pc = 0x21737Cu;
    SET_GPR_U32(ctx, 31, 0x217384u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21737Cu, 0x217384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x217384u;
label_217384:
    // 0x217384: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x217384u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_217388:
    // 0x217388: 0x28620100  slti        $v0, $v1, 0x100
    ctx->pc = 0x217388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
label_21738c:
    // 0x21738c: 0x5440ffc8  bnel        $v0, $zero, . + 4 + (-0x38 << 2)
label_217390:
    if (ctx->pc == 0x217390u) {
        ctx->pc = 0x217390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21738Cu;
        // 0x217390: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217394u;
        goto label_217394;
    }
    ctx->pc = 0x21738Cu;
    {
        const bool branch_taken_0x21738c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21738c) {
            ctx->pc = 0x217390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21738Cu;
            // 0x217390: 0x31100  sll         $v0, $v1, 4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2172B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2172b0;
        }
    }
    ctx->pc = 0x217394u;
label_217394:
    // 0x217394: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x217394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_217398:
    // 0x217398: 0x8ed095d8  lw          $s0, -0x6A28($s6)
    ctx->pc = 0x217398u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940120)));
label_21739c:
    // 0x21739c: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_2173a0:
    if (ctx->pc == 0x2173A0u) {
        ctx->pc = 0x2173A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21739Cu;
        // 0x2173a0: 0xfc6095e0  sd          $zero, -0x6A20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294940128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173A4u;
        goto label_2173a4;
    }
    ctx->pc = 0x21739Cu;
    {
        const bool branch_taken_0x21739c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21739Cu;
        // 0x2173a0: 0xfc6095e0  sd          $zero, -0x6A20($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 4294940128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21739c) {
            ctx->pc = 0x2173F0u;
            goto label_2173f0;
        }
    }
    ctx->pc = 0x2173A4u;
label_2173a4:
    // 0x2173a4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2173a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2173a8:
    // 0x2173a8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2173a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2173ac:
    // 0x2173ac: 0x10830008  beq         $a0, $v1, . + 4 + (0x8 << 2)
label_2173b0:
    if (ctx->pc == 0x2173B0u) {
        ctx->pc = 0x2173B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173ACu;
        // 0x2173b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173B4u;
        goto label_2173b4;
    }
    ctx->pc = 0x2173ACu;
    {
        const bool branch_taken_0x2173ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2173B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173ACu;
        // 0x2173b0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173ac) {
            ctx->pc = 0x2173D0u;
            goto label_2173d0;
        }
    }
    ctx->pc = 0x2173B4u;
label_2173b4:
    // 0x2173b4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2173b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2173b8:
    // 0x2173b8: 0x0  nop
    ctx->pc = 0x2173b8u;
    // NOP
label_2173bc:
    // 0x2173bc: 0x0  nop
    ctx->pc = 0x2173bcu;
    // NOP
label_2173c0:
    // 0x2173c0: 0x0  nop
    ctx->pc = 0x2173c0u;
    // NOP
label_2173c4:
    // 0x2173c4: 0x0  nop
    ctx->pc = 0x2173c4u;
    // NOP
label_2173c8:
    // 0x2173c8: 0x1443fffb  bne         $v0, $v1, . + 4 + (-0x5 << 2)
label_2173cc:
    if (ctx->pc == 0x2173CCu) {
        ctx->pc = 0x2173CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173C8u;
        // 0x2173cc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173D0u;
        goto label_2173d0;
    }
    ctx->pc = 0x2173C8u;
    {
        const bool branch_taken_0x2173c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2173CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173C8u;
        // 0x2173cc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173c8) {
            ctx->pc = 0x2173B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2173b8;
        }
    }
    ctx->pc = 0x2173D0u;
label_2173d0:
    // 0x2173d0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2173d4:
    if (ctx->pc == 0x2173D4u) {
        ctx->pc = 0x2173D8u;
        goto label_2173d8;
    }
    ctx->pc = 0x2173D0u;
    {
        const bool branch_taken_0x2173d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2173d0) {
            ctx->pc = 0x2173E0u;
            goto label_2173e0;
        }
    }
    ctx->pc = 0x2173D8u;
label_2173d8:
    // 0x2173d8: 0xc0f5222  jal         func_3D4888
label_2173dc:
    if (ctx->pc == 0x2173DCu) {
        ctx->pc = 0x2173E0u;
        goto label_2173e0;
    }
    ctx->pc = 0x2173D8u;
    SET_GPR_U32(ctx, 31, 0x2173E0u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2173D8u, 0x2173E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173E0u;
label_2173e0:
    // 0x2173e0: 0xc0f5222  jal         func_3D4888
label_2173e4:
    if (ctx->pc == 0x2173E4u) {
        ctx->pc = 0x2173E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E0u;
        // 0x2173e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173E8u;
        goto label_2173e8;
    }
    ctx->pc = 0x2173E0u;
    SET_GPR_U32(ctx, 31, 0x2173E8u);
    ctx->pc = 0x2173E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173E0u;
    // 0x2173e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2173E0u, 0x2173E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173E8u;
label_2173e8:
    // 0x2173e8: 0xc087282  jal         func_21CA08
label_2173ec:
    if (ctx->pc == 0x2173ECu) {
        ctx->pc = 0x2173ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173E8u;
        // 0x2173ec: 0xaec095d8  sw          $zero, -0x6A28($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4294940120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2173F0u;
        goto label_2173f0;
    }
    ctx->pc = 0x2173E8u;
    SET_GPR_U32(ctx, 31, 0x2173F0u);
    ctx->pc = 0x2173ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173E8u;
    // 0x2173ec: 0xaec095d8  sw          $zero, -0x6A28($s6) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294940120), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CA08u, 0x2173E8u, 0x2173F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2173F0u;
label_2173f0:
    // 0x2173f0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2173f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2173f4:
    // 0x2173f4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2173f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2173f8:
    // 0x2173f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2173f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2173fc:
    // 0x2173fc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2173fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_217400:
    // 0x217400: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x217400u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_217404:
    // 0x217404: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x217404u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_217408:
    // 0x217408: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x217408u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_21740c:
    // 0x21740c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x21740cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_217410:
    // 0x217410: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x217410u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_217414:
    // 0x217414: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x217414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_217418:
    // 0x217418: 0x3e00008  jr          $ra
label_21741c:
    if (ctx->pc == 0x21741Cu) {
        ctx->pc = 0x21741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217418u;
        // 0x21741c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x217420u;
        goto label_fallthrough_0x217418;
    }
    ctx->pc = 0x217418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217418u;
        // 0x21741c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x217418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x217418:
    ctx->pc = 0x217420u;
}
