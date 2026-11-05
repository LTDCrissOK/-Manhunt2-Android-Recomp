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

// Function: sub_00383E20
// Address: 0x383e20 - 0x3842d8
void sub_00383E20_0x383e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383E20_0x383e20");
#endif

    switch (ctx->pc) {
        case 0x383e20u: goto label_383e20;
        case 0x383e24u: goto label_383e24;
        case 0x383e28u: goto label_383e28;
        case 0x383e2cu: goto label_383e2c;
        case 0x383e30u: goto label_383e30;
        case 0x383e34u: goto label_383e34;
        case 0x383e38u: goto label_383e38;
        case 0x383e3cu: goto label_383e3c;
        case 0x383e40u: goto label_383e40;
        case 0x383e44u: goto label_383e44;
        case 0x383e48u: goto label_383e48;
        case 0x383e4cu: goto label_383e4c;
        case 0x383e50u: goto label_383e50;
        case 0x383e54u: goto label_383e54;
        case 0x383e58u: goto label_383e58;
        case 0x383e5cu: goto label_383e5c;
        case 0x383e60u: goto label_383e60;
        case 0x383e64u: goto label_383e64;
        case 0x383e68u: goto label_383e68;
        case 0x383e6cu: goto label_383e6c;
        case 0x383e70u: goto label_383e70;
        case 0x383e74u: goto label_383e74;
        case 0x383e78u: goto label_383e78;
        case 0x383e7cu: goto label_383e7c;
        case 0x383e80u: goto label_383e80;
        case 0x383e84u: goto label_383e84;
        case 0x383e88u: goto label_383e88;
        case 0x383e8cu: goto label_383e8c;
        case 0x383e90u: goto label_383e90;
        case 0x383e94u: goto label_383e94;
        case 0x383e98u: goto label_383e98;
        case 0x383e9cu: goto label_383e9c;
        case 0x383ea0u: goto label_383ea0;
        case 0x383ea4u: goto label_383ea4;
        case 0x383ea8u: goto label_383ea8;
        case 0x383eacu: goto label_383eac;
        case 0x383eb0u: goto label_383eb0;
        case 0x383eb4u: goto label_383eb4;
        case 0x383eb8u: goto label_383eb8;
        case 0x383ebcu: goto label_383ebc;
        case 0x383ec0u: goto label_383ec0;
        case 0x383ec4u: goto label_383ec4;
        case 0x383ec8u: goto label_383ec8;
        case 0x383eccu: goto label_383ecc;
        case 0x383ed0u: goto label_383ed0;
        case 0x383ed4u: goto label_383ed4;
        case 0x383ed8u: goto label_383ed8;
        case 0x383edcu: goto label_383edc;
        case 0x383ee0u: goto label_383ee0;
        case 0x383ee4u: goto label_383ee4;
        case 0x383ee8u: goto label_383ee8;
        case 0x383eecu: goto label_383eec;
        case 0x383ef0u: goto label_383ef0;
        case 0x383ef4u: goto label_383ef4;
        case 0x383ef8u: goto label_383ef8;
        case 0x383efcu: goto label_383efc;
        case 0x383f00u: goto label_383f00;
        case 0x383f04u: goto label_383f04;
        case 0x383f08u: goto label_383f08;
        case 0x383f0cu: goto label_383f0c;
        case 0x383f10u: goto label_383f10;
        case 0x383f14u: goto label_383f14;
        case 0x383f18u: goto label_383f18;
        case 0x383f1cu: goto label_383f1c;
        case 0x383f20u: goto label_383f20;
        case 0x383f24u: goto label_383f24;
        case 0x383f28u: goto label_383f28;
        case 0x383f2cu: goto label_383f2c;
        case 0x383f30u: goto label_383f30;
        case 0x383f34u: goto label_383f34;
        case 0x383f38u: goto label_383f38;
        case 0x383f3cu: goto label_383f3c;
        case 0x383f40u: goto label_383f40;
        case 0x383f44u: goto label_383f44;
        case 0x383f48u: goto label_383f48;
        case 0x383f4cu: goto label_383f4c;
        case 0x383f50u: goto label_383f50;
        case 0x383f54u: goto label_383f54;
        case 0x383f58u: goto label_383f58;
        case 0x383f5cu: goto label_383f5c;
        case 0x383f60u: goto label_383f60;
        case 0x383f64u: goto label_383f64;
        case 0x383f68u: goto label_383f68;
        case 0x383f6cu: goto label_383f6c;
        case 0x383f70u: goto label_383f70;
        case 0x383f74u: goto label_383f74;
        case 0x383f78u: goto label_383f78;
        case 0x383f7cu: goto label_383f7c;
        case 0x383f80u: goto label_383f80;
        case 0x383f84u: goto label_383f84;
        case 0x383f88u: goto label_383f88;
        case 0x383f8cu: goto label_383f8c;
        case 0x383f90u: goto label_383f90;
        case 0x383f94u: goto label_383f94;
        case 0x383f98u: goto label_383f98;
        case 0x383f9cu: goto label_383f9c;
        case 0x383fa0u: goto label_383fa0;
        case 0x383fa4u: goto label_383fa4;
        case 0x383fa8u: goto label_383fa8;
        case 0x383facu: goto label_383fac;
        case 0x383fb0u: goto label_383fb0;
        case 0x383fb4u: goto label_383fb4;
        case 0x383fb8u: goto label_383fb8;
        case 0x383fbcu: goto label_383fbc;
        case 0x383fc0u: goto label_383fc0;
        case 0x383fc4u: goto label_383fc4;
        case 0x383fc8u: goto label_383fc8;
        case 0x383fccu: goto label_383fcc;
        case 0x383fd0u: goto label_383fd0;
        case 0x383fd4u: goto label_383fd4;
        case 0x383fd8u: goto label_383fd8;
        case 0x383fdcu: goto label_383fdc;
        case 0x383fe0u: goto label_383fe0;
        case 0x383fe4u: goto label_383fe4;
        case 0x383fe8u: goto label_383fe8;
        case 0x383fecu: goto label_383fec;
        case 0x383ff0u: goto label_383ff0;
        case 0x383ff4u: goto label_383ff4;
        case 0x383ff8u: goto label_383ff8;
        case 0x383ffcu: goto label_383ffc;
        case 0x384000u: goto label_384000;
        case 0x384004u: goto label_384004;
        case 0x384008u: goto label_384008;
        case 0x38400cu: goto label_38400c;
        case 0x384010u: goto label_384010;
        case 0x384014u: goto label_384014;
        case 0x384018u: goto label_384018;
        case 0x38401cu: goto label_38401c;
        case 0x384020u: goto label_384020;
        case 0x384024u: goto label_384024;
        case 0x384028u: goto label_384028;
        case 0x38402cu: goto label_38402c;
        case 0x384030u: goto label_384030;
        case 0x384034u: goto label_384034;
        case 0x384038u: goto label_384038;
        case 0x38403cu: goto label_38403c;
        case 0x384040u: goto label_384040;
        case 0x384044u: goto label_384044;
        case 0x384048u: goto label_384048;
        case 0x38404cu: goto label_38404c;
        case 0x384050u: goto label_384050;
        case 0x384054u: goto label_384054;
        case 0x384058u: goto label_384058;
        case 0x38405cu: goto label_38405c;
        case 0x384060u: goto label_384060;
        case 0x384064u: goto label_384064;
        case 0x384068u: goto label_384068;
        case 0x38406cu: goto label_38406c;
        case 0x384070u: goto label_384070;
        case 0x384074u: goto label_384074;
        case 0x384078u: goto label_384078;
        case 0x38407cu: goto label_38407c;
        case 0x384080u: goto label_384080;
        case 0x384084u: goto label_384084;
        case 0x384088u: goto label_384088;
        case 0x38408cu: goto label_38408c;
        case 0x384090u: goto label_384090;
        case 0x384094u: goto label_384094;
        case 0x384098u: goto label_384098;
        case 0x38409cu: goto label_38409c;
        case 0x3840a0u: goto label_3840a0;
        case 0x3840a4u: goto label_3840a4;
        case 0x3840a8u: goto label_3840a8;
        case 0x3840acu: goto label_3840ac;
        case 0x3840b0u: goto label_3840b0;
        case 0x3840b4u: goto label_3840b4;
        case 0x3840b8u: goto label_3840b8;
        case 0x3840bcu: goto label_3840bc;
        case 0x3840c0u: goto label_3840c0;
        case 0x3840c4u: goto label_3840c4;
        case 0x3840c8u: goto label_3840c8;
        case 0x3840ccu: goto label_3840cc;
        case 0x3840d0u: goto label_3840d0;
        case 0x3840d4u: goto label_3840d4;
        case 0x3840d8u: goto label_3840d8;
        case 0x3840dcu: goto label_3840dc;
        case 0x3840e0u: goto label_3840e0;
        case 0x3840e4u: goto label_3840e4;
        case 0x3840e8u: goto label_3840e8;
        case 0x3840ecu: goto label_3840ec;
        case 0x3840f0u: goto label_3840f0;
        case 0x3840f4u: goto label_3840f4;
        case 0x3840f8u: goto label_3840f8;
        case 0x3840fcu: goto label_3840fc;
        case 0x384100u: goto label_384100;
        case 0x384104u: goto label_384104;
        case 0x384108u: goto label_384108;
        case 0x38410cu: goto label_38410c;
        case 0x384110u: goto label_384110;
        case 0x384114u: goto label_384114;
        case 0x384118u: goto label_384118;
        case 0x38411cu: goto label_38411c;
        case 0x384120u: goto label_384120;
        case 0x384124u: goto label_384124;
        case 0x384128u: goto label_384128;
        case 0x38412cu: goto label_38412c;
        case 0x384130u: goto label_384130;
        case 0x384134u: goto label_384134;
        case 0x384138u: goto label_384138;
        case 0x38413cu: goto label_38413c;
        case 0x384140u: goto label_384140;
        case 0x384144u: goto label_384144;
        case 0x384148u: goto label_384148;
        case 0x38414cu: goto label_38414c;
        case 0x384150u: goto label_384150;
        case 0x384154u: goto label_384154;
        case 0x384158u: goto label_384158;
        case 0x38415cu: goto label_38415c;
        case 0x384160u: goto label_384160;
        case 0x384164u: goto label_384164;
        case 0x384168u: goto label_384168;
        case 0x38416cu: goto label_38416c;
        case 0x384170u: goto label_384170;
        case 0x384174u: goto label_384174;
        case 0x384178u: goto label_384178;
        case 0x38417cu: goto label_38417c;
        case 0x384180u: goto label_384180;
        case 0x384184u: goto label_384184;
        case 0x384188u: goto label_384188;
        case 0x38418cu: goto label_38418c;
        case 0x384190u: goto label_384190;
        case 0x384194u: goto label_384194;
        case 0x384198u: goto label_384198;
        case 0x38419cu: goto label_38419c;
        case 0x3841a0u: goto label_3841a0;
        case 0x3841a4u: goto label_3841a4;
        case 0x3841a8u: goto label_3841a8;
        case 0x3841acu: goto label_3841ac;
        case 0x3841b0u: goto label_3841b0;
        case 0x3841b4u: goto label_3841b4;
        case 0x3841b8u: goto label_3841b8;
        case 0x3841bcu: goto label_3841bc;
        case 0x3841c0u: goto label_3841c0;
        case 0x3841c4u: goto label_3841c4;
        case 0x3841c8u: goto label_3841c8;
        case 0x3841ccu: goto label_3841cc;
        case 0x3841d0u: goto label_3841d0;
        case 0x3841d4u: goto label_3841d4;
        case 0x3841d8u: goto label_3841d8;
        case 0x3841dcu: goto label_3841dc;
        case 0x3841e0u: goto label_3841e0;
        case 0x3841e4u: goto label_3841e4;
        case 0x3841e8u: goto label_3841e8;
        case 0x3841ecu: goto label_3841ec;
        case 0x3841f0u: goto label_3841f0;
        case 0x3841f4u: goto label_3841f4;
        case 0x3841f8u: goto label_3841f8;
        case 0x3841fcu: goto label_3841fc;
        case 0x384200u: goto label_384200;
        case 0x384204u: goto label_384204;
        case 0x384208u: goto label_384208;
        case 0x38420cu: goto label_38420c;
        case 0x384210u: goto label_384210;
        case 0x384214u: goto label_384214;
        case 0x384218u: goto label_384218;
        case 0x38421cu: goto label_38421c;
        case 0x384220u: goto label_384220;
        case 0x384224u: goto label_384224;
        case 0x384228u: goto label_384228;
        case 0x38422cu: goto label_38422c;
        case 0x384230u: goto label_384230;
        case 0x384234u: goto label_384234;
        case 0x384238u: goto label_384238;
        case 0x38423cu: goto label_38423c;
        case 0x384240u: goto label_384240;
        case 0x384244u: goto label_384244;
        case 0x384248u: goto label_384248;
        case 0x38424cu: goto label_38424c;
        case 0x384250u: goto label_384250;
        case 0x384254u: goto label_384254;
        case 0x384258u: goto label_384258;
        case 0x38425cu: goto label_38425c;
        case 0x384260u: goto label_384260;
        case 0x384264u: goto label_384264;
        case 0x384268u: goto label_384268;
        case 0x38426cu: goto label_38426c;
        case 0x384270u: goto label_384270;
        case 0x384274u: goto label_384274;
        case 0x384278u: goto label_384278;
        case 0x38427cu: goto label_38427c;
        case 0x384280u: goto label_384280;
        case 0x384284u: goto label_384284;
        case 0x384288u: goto label_384288;
        case 0x38428cu: goto label_38428c;
        case 0x384290u: goto label_384290;
        case 0x384294u: goto label_384294;
        case 0x384298u: goto label_384298;
        case 0x38429cu: goto label_38429c;
        case 0x3842a0u: goto label_3842a0;
        case 0x3842a4u: goto label_3842a4;
        case 0x3842a8u: goto label_3842a8;
        case 0x3842acu: goto label_3842ac;
        case 0x3842b0u: goto label_3842b0;
        case 0x3842b4u: goto label_3842b4;
        case 0x3842b8u: goto label_3842b8;
        case 0x3842bcu: goto label_3842bc;
        case 0x3842c0u: goto label_3842c0;
        case 0x3842c4u: goto label_3842c4;
        case 0x3842c8u: goto label_3842c8;
        case 0x3842ccu: goto label_3842cc;
        case 0x3842d0u: goto label_3842d0;
        case 0x3842d4u: goto label_3842d4;
        default: break;
    }

    ctx->pc = 0x383e20u;

label_383e20:
    // 0x383e20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x383e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_383e24:
    // 0x383e24: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x383e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_383e28:
    // 0x383e28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x383e28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_383e2c:
    // 0x383e2c: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x383e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
label_383e30:
    // 0x383e30: 0x3c1e0065  lui         $fp, 0x65
    ctx->pc = 0x383e30u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)101 << 16));
label_383e34:
    // 0x383e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x383e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383e38:
    // 0x383e38: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x383e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
label_383e3c:
    // 0x383e3c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x383e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_383e40:
    // 0x383e40: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x383e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_383e44:
    // 0x383e44: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x383e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
label_383e48:
    // 0x383e48: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x383e48u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_383e4c:
    // 0x383e4c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x383e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
label_383e50:
    // 0x383e50: 0x3c150048  lui         $s5, 0x48
    ctx->pc = 0x383e50u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
label_383e54:
    // 0x383e54: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x383e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_383e58:
    // 0x383e58: 0x3c160065  lui         $s6, 0x65
    ctx->pc = 0x383e58u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)101 << 16));
label_383e5c:
    // 0x383e5c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x383e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_383e60:
    // 0x383e60: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x383e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
label_383e64:
    // 0x383e64: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x383e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
label_383e68:
    // 0x383e68: 0xc0f3272  jal         func_3CC9C8
label_383e6c:
    if (ctx->pc == 0x383E6Cu) {
        ctx->pc = 0x383E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383E68u;
        // 0x383e6c: 0x26d26080  addiu       $s2, $s6, 0x6080 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 24704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383E70u;
        goto label_383e70;
    }
    ctx->pc = 0x383E68u;
    SET_GPR_U32(ctx, 31, 0x383E70u);
    ctx->pc = 0x383E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383E68u;
    // 0x383e6c: 0x26d26080  addiu       $s2, $s6, 0x6080 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 24704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC9C8u, 0x383E68u, 0x383E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383E70u;
label_383e70:
    // 0x383e70: 0x27c36280  addiu       $v1, $fp, 0x6280
    ctx->pc = 0x383e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 25216));
label_383e74:
    // 0x383e74: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x383e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_383e78:
    // 0x383e78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x383e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_383e7c:
    // 0x383e7c: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x383e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_383e80:
    // 0x383e80: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x383e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
label_383e84:
    // 0x383e84: 0xac83dfe0  sw          $v1, -0x2020($a0)
    ctx->pc = 0x383e84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294959072), GPR_U32(ctx, 3));
label_383e88:
    // 0x383e88: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x383e88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_383e8c:
    // 0x383e8c: 0xaca06248  sw          $zero, 0x6248($a1)
    ctx->pc = 0x383e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 25160), GPR_U32(ctx, 0));
label_383e90:
    // 0x383e90: 0x3c055049  lui         $a1, 0x5049
    ctx->pc = 0x383e90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20553 << 16));
label_383e94:
    // 0x383e94: 0x0  nop
    ctx->pc = 0x383e94u;
    // NOP
label_383e98:
    // 0x383e98: 0x26c46080  addiu       $a0, $s6, 0x6080
    ctx->pc = 0x383e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24704));
label_383e9c:
    // 0x383e9c: 0x34a54c42  ori         $a1, $a1, 0x4C42
    ctx->pc = 0x383e9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)19522);
label_383ea0:
    // 0x383ea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383ea4:
    // 0x383ea4: 0xc0f3404  jal         func_3CD010
label_383ea8:
    if (ctx->pc == 0x383EA8u) {
        ctx->pc = 0x383EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EA4u;
        // 0x383ea8: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383EACu;
        goto label_383eac;
    }
    ctx->pc = 0x383EA4u;
    SET_GPR_U32(ctx, 31, 0x383EACu);
    ctx->pc = 0x383EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EA4u;
    // 0x383ea8: 0x3c100001  lui         $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)1 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD010u, 0x383EA4u, 0x383EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EACu;
label_383eac:
    // 0x383eac: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
label_383eb0:
    if (ctx->pc == 0x383EB0u) {
        ctx->pc = 0x383EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EACu;
        // 0x383eb0: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383EB4u;
        goto label_383eb4;
    }
    ctx->pc = 0x383EACu;
    {
        const bool branch_taken_0x383eac = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x383eac) {
            ctx->pc = 0x383EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383EACu;
            // 0x383eb0: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383EE8u;
            goto label_383ee8;
        }
    }
    ctx->pc = 0x383EB4u;
label_383eb4:
    // 0x383eb4: 0xc0efe28  jal         func_3BF8A0
label_383eb8:
    if (ctx->pc == 0x383EB8u) {
        ctx->pc = 0x383EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EB4u;
        // 0x383eb8: 0x26648900  addiu       $a0, $s3, -0x7700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383EBCu;
        goto label_383ebc;
    }
    ctx->pc = 0x383EB4u;
    SET_GPR_U32(ctx, 31, 0x383EBCu);
    ctx->pc = 0x383EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EB4u;
    // 0x383eb8: 0x26648900  addiu       $a0, $s3, -0x7700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294936832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383EB4u, 0x383EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EBCu;
label_383ebc:
    // 0x383ebc: 0xc0efe28  jal         func_3BF8A0
label_383ec0:
    if (ctx->pc == 0x383EC0u) {
        ctx->pc = 0x383EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EBCu;
        // 0x383ec0: 0x26a48920  addiu       $a0, $s5, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383EC4u;
        goto label_383ec4;
    }
    ctx->pc = 0x383EBCu;
    SET_GPR_U32(ctx, 31, 0x383EC4u);
    ctx->pc = 0x383EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383EBCu;
    // 0x383ec0: 0x26a48920  addiu       $a0, $s5, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383EBCu, 0x383EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383EC4u;
label_383ec4:
    // 0x383ec4: 0x0  nop
    ctx->pc = 0x383ec4u;
    // NOP
label_383ec8:
    // 0x383ec8: 0x0  nop
    ctx->pc = 0x383ec8u;
    // NOP
label_383ecc:
    // 0x383ecc: 0x0  nop
    ctx->pc = 0x383eccu;
    // NOP
label_383ed0:
    // 0x383ed0: 0x0  nop
    ctx->pc = 0x383ed0u;
    // NOP
label_383ed4:
    // 0x383ed4: 0x0  nop
    ctx->pc = 0x383ed4u;
    // NOP
label_383ed8:
    // 0x383ed8: 0x0  nop
    ctx->pc = 0x383ed8u;
    // NOP
label_383edc:
    // 0x383edc: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_383ee0:
    if (ctx->pc == 0x383EE0u) {
        ctx->pc = 0x383EE4u;
        goto label_383ee4;
    }
    ctx->pc = 0x383EDCu;
    {
        const bool branch_taken_0x383edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383edc) {
            ctx->pc = 0x383EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ec8;
        }
    }
    ctx->pc = 0x383EE4u;
label_383ee4:
    // 0x383ee4: 0x0  nop
    ctx->pc = 0x383ee4u;
    // NOP
label_383ee8:
    // 0x383ee8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_383eec:
    if (ctx->pc == 0x383EECu) {
        ctx->pc = 0x383EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383EE8u;
        // 0x383eec: 0x3c130065  lui         $s3, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383EF0u;
        goto label_383ef0;
    }
    ctx->pc = 0x383EE8u;
    {
        const bool branch_taken_0x383ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x383ee8) {
            ctx->pc = 0x383EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383EE8u;
            // 0x383eec: 0x3c130065  lui         $s3, 0x65 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)101 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383F20u;
            goto label_383f20;
        }
    }
    ctx->pc = 0x383EF0u;
label_383ef0:
    // 0x383ef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x383ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_383ef4:
    // 0x383ef4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x383ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_383ef8:
    // 0x383ef8: 0x0  nop
    ctx->pc = 0x383ef8u;
    // NOP
label_383efc:
    // 0x383efc: 0x0  nop
    ctx->pc = 0x383efcu;
    // NOP
label_383f00:
    // 0x383f00: 0x0  nop
    ctx->pc = 0x383f00u;
    // NOP
label_383f04:
    // 0x383f04: 0x0  nop
    ctx->pc = 0x383f04u;
    // NOP
label_383f08:
    // 0x383f08: 0x0  nop
    ctx->pc = 0x383f08u;
    // NOP
label_383f0c:
    // 0x383f0c: 0x5602fffa  bnel        $s0, $v0, . + 4 + (-0x6 << 2)
label_383f10:
    if (ctx->pc == 0x383F10u) {
        ctx->pc = 0x383F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F0Cu;
        // 0x383f10: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F14u;
        goto label_383f14;
    }
    ctx->pc = 0x383F0Cu;
    {
        const bool branch_taken_0x383f0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x383f0c) {
            ctx->pc = 0x383F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383F0Cu;
            // 0x383f10: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383ef8;
        }
    }
    ctx->pc = 0x383F14u;
label_383f14:
    // 0x383f14: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_383f18:
    if (ctx->pc == 0x383F18u) {
        ctx->pc = 0x383F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F14u;
        // 0x383f18: 0x3c055049  lui         $a1, 0x5049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20553 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F1Cu;
        goto label_383f1c;
    }
    ctx->pc = 0x383F14u;
    {
        const bool branch_taken_0x383f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x383F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F14u;
        // 0x383f18: 0x3c055049  lui         $a1, 0x5049 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20553 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f14) {
            ctx->pc = 0x383E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383e98;
        }
    }
    ctx->pc = 0x383F1Cu;
label_383f1c:
    // 0x383f1c: 0x0  nop
    ctx->pc = 0x383f1cu;
    // NOP
label_383f20:
    // 0x383f20: 0x26c46080  addiu       $a0, $s6, 0x6080
    ctx->pc = 0x383f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24704));
label_383f24:
    // 0x383f24: 0x266260c0  addiu       $v0, $s3, 0x60C0
    ctx->pc = 0x383f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_383f28:
    // 0x383f28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x383f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_383f2c:
    // 0x383f2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x383f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_383f30:
    // 0x383f30: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x383f30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_383f34:
    // 0x383f34: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x383f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383f38:
    // 0x383f38: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x383f38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_383f3c:
    // 0x383f3c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x383f3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_383f40:
    // 0x383f40: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x383f40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_383f44:
    // 0x383f44: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x383f44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_383f48:
    // 0x383f48: 0xc0f347c  jal         func_3CD1F0
label_383f4c:
    if (ctx->pc == 0x383F4Cu) {
        ctx->pc = 0x383F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F48u;
        // 0x383f4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F50u;
        goto label_383f50;
    }
    ctx->pc = 0x383F48u;
    SET_GPR_U32(ctx, 31, 0x383F50u);
    ctx->pc = 0x383F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F48u;
    // 0x383f4c: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x383F48u, 0x383F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F50u;
label_383f50:
    // 0x383f50: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_383f54:
    if (ctx->pc == 0x383F54u) {
        ctx->pc = 0x383F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F50u;
        // 0x383f54: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F58u;
        goto label_383f58;
    }
    ctx->pc = 0x383F50u;
    {
        const bool branch_taken_0x383f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x383F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F50u;
        // 0x383f54: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383f50) {
            ctx->pc = 0x383F90u;
            goto label_383f90;
        }
    }
    ctx->pc = 0x383F58u;
label_383f58:
    // 0x383f58: 0xc0efe28  jal         func_3BF8A0
label_383f5c:
    if (ctx->pc == 0x383F5Cu) {
        ctx->pc = 0x383F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F58u;
        // 0x383f5c: 0x24848940  addiu       $a0, $a0, -0x76C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F60u;
        goto label_383f60;
    }
    ctx->pc = 0x383F58u;
    SET_GPR_U32(ctx, 31, 0x383F60u);
    ctx->pc = 0x383F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F58u;
    // 0x383f5c: 0x24848940  addiu       $a0, $a0, -0x76C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383F58u, 0x383F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F60u;
label_383f60:
    // 0x383f60: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x383f60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_383f64:
    // 0x383f64: 0xc0efe28  jal         func_3BF8A0
label_383f68:
    if (ctx->pc == 0x383F68u) {
        ctx->pc = 0x383F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383F64u;
        // 0x383f68: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383F6Cu;
        goto label_383f6c;
    }
    ctx->pc = 0x383F64u;
    SET_GPR_U32(ctx, 31, 0x383F6Cu);
    ctx->pc = 0x383F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383F64u;
    // 0x383f68: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383F64u, 0x383F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383F6Cu;
label_383f6c:
    // 0x383f6c: 0x0  nop
    ctx->pc = 0x383f6cu;
    // NOP
label_383f70:
    // 0x383f70: 0x0  nop
    ctx->pc = 0x383f70u;
    // NOP
label_383f74:
    // 0x383f74: 0x0  nop
    ctx->pc = 0x383f74u;
    // NOP
label_383f78:
    // 0x383f78: 0x0  nop
    ctx->pc = 0x383f78u;
    // NOP
label_383f7c:
    // 0x383f7c: 0x0  nop
    ctx->pc = 0x383f7cu;
    // NOP
label_383f80:
    // 0x383f80: 0x0  nop
    ctx->pc = 0x383f80u;
    // NOP
label_383f84:
    // 0x383f84: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_383f88:
    if (ctx->pc == 0x383F88u) {
        ctx->pc = 0x383F8Cu;
        goto label_383f8c;
    }
    ctx->pc = 0x383F84u;
    {
        const bool branch_taken_0x383f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x383f84) {
            ctx->pc = 0x383F70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383f70;
        }
    }
    ctx->pc = 0x383F8Cu;
label_383f8c:
    // 0x383f8c: 0x0  nop
    ctx->pc = 0x383f8cu;
    // NOP
label_383f90:
    // 0x383f90: 0x267060c0  addiu       $s0, $s3, 0x60C0
    ctx->pc = 0x383f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_383f94:
    // 0x383f94: 0x3c02010a  lui         $v0, 0x10A
    ctx->pc = 0x383f94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)266 << 16));
label_383f98:
    // 0x383f98: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x383f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_383f9c:
    // 0x383f9c: 0x34420600  ori         $v0, $v0, 0x600
    ctx->pc = 0x383f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1536);
label_383fa0:
    // 0x383fa0: 0x10820038  beq         $a0, $v0, . + 4 + (0x38 << 2)
label_383fa4:
    if (ctx->pc == 0x383FA4u) {
        ctx->pc = 0x383FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FA0u;
        // 0x383fa4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383FA8u;
        goto label_383fa8;
    }
    ctx->pc = 0x383FA0u;
    {
        const bool branch_taken_0x383fa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x383FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FA0u;
        // 0x383fa4: 0x3c02ffff  lui         $v0, 0xFFFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383fa0) {
            ctx->pc = 0x384084u;
            goto label_384084;
        }
    }
    ctx->pc = 0x383FA8u;
label_383fa8:
    // 0x383fa8: 0x3c03010a  lui         $v1, 0x10A
    ctx->pc = 0x383fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)266 << 16));
label_383fac:
    // 0x383fac: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x383facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_383fb0:
    // 0x383fb0: 0x5043001f  beql        $v0, $v1, . + 4 + (0x1F << 2)
label_383fb4:
    if (ctx->pc == 0x383FB4u) {
        ctx->pc = 0x383FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FB0u;
        // 0x383fb4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383FB8u;
        goto label_383fb8;
    }
    ctx->pc = 0x383FB0u;
    {
        const bool branch_taken_0x383fb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x383fb0) {
            ctx->pc = 0x383FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383FB0u;
            // 0x383fb4: 0x3c040048  lui         $a0, 0x48 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x384030u;
            goto label_384030;
        }
    }
    ctx->pc = 0x383FB8u;
label_383fb8:
    // 0x383fb8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x383fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_383fbc:
    // 0x383fbc: 0xc0efe28  jal         func_3BF8A0
label_383fc0:
    if (ctx->pc == 0x383FC0u) {
        ctx->pc = 0x383FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FBCu;
        // 0x383fc0: 0x24848958  addiu       $a0, $a0, -0x76A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383FC4u;
        goto label_383fc4;
    }
    ctx->pc = 0x383FBCu;
    SET_GPR_U32(ctx, 31, 0x383FC4u);
    ctx->pc = 0x383FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FBCu;
    // 0x383fc0: 0x24848958  addiu       $a0, $a0, -0x76A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383FBCu, 0x383FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FC4u;
label_383fc4:
    // 0x383fc4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x383fc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_383fc8:
    // 0x383fc8: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x383fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_383fcc:
    // 0x383fcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x383fccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_383fd0:
    // 0x383fd0: 0x24848888  addiu       $a0, $a0, -0x7778
    ctx->pc = 0x383fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936712));
label_383fd4:
    // 0x383fd4: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x383fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_383fd8:
    // 0x383fd8: 0xc0efe28  jal         func_3BF8A0
label_383fdc:
    if (ctx->pc == 0x383FDCu) {
        ctx->pc = 0x383FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FD8u;
        // 0x383fdc: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383FE0u;
        goto label_383fe0;
    }
    ctx->pc = 0x383FD8u;
    SET_GPR_U32(ctx, 31, 0x383FE0u);
    ctx->pc = 0x383FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FD8u;
    // 0x383fdc: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383FD8u, 0x383FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x383FE0u;
label_383fe0:
    // 0x383fe0: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x383fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_383fe4:
    // 0x383fe4: 0x103403  sra         $a2, $s0, 16
    ctx->pc = 0x383fe4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
label_383fe8:
    // 0x383fe8: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x383fe8u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
label_383fec:
    // 0x383fec: 0x248488b8  addiu       $a0, $a0, -0x7748
    ctx->pc = 0x383fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936760));
label_383ff0:
    // 0x383ff0: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x383ff0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
label_383ff4:
    // 0x383ff4: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x383ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_383ff8:
    // 0x383ff8: 0xc0efe28  jal         func_3BF8A0
label_383ffc:
    if (ctx->pc == 0x383FFCu) {
        ctx->pc = 0x383FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383FF8u;
        // 0x383ffc: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x384000u;
        goto label_384000;
    }
    ctx->pc = 0x383FF8u;
    SET_GPR_U32(ctx, 31, 0x384000u);
    ctx->pc = 0x383FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x383FF8u;
    // 0x383ffc: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x383FF8u, 0x384000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384000u;
label_384000:
    // 0x384000: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384000u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384004:
    // 0x384004: 0xc0efe28  jal         func_3BF8A0
label_384008:
    if (ctx->pc == 0x384008u) {
        ctx->pc = 0x384008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384004u;
        // 0x384008: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38400Cu;
        goto label_38400c;
    }
    ctx->pc = 0x384004u;
    SET_GPR_U32(ctx, 31, 0x38400Cu);
    ctx->pc = 0x384008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384004u;
    // 0x384008: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384004u, 0x38400Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38400Cu;
label_38400c:
    // 0x38400c: 0x0  nop
    ctx->pc = 0x38400cu;
    // NOP
label_384010:
    // 0x384010: 0x0  nop
    ctx->pc = 0x384010u;
    // NOP
label_384014:
    // 0x384014: 0x0  nop
    ctx->pc = 0x384014u;
    // NOP
label_384018:
    // 0x384018: 0x0  nop
    ctx->pc = 0x384018u;
    // NOP
label_38401c:
    // 0x38401c: 0x0  nop
    ctx->pc = 0x38401cu;
    // NOP
label_384020:
    // 0x384020: 0x0  nop
    ctx->pc = 0x384020u;
    // NOP
label_384024:
    // 0x384024: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_384028:
    if (ctx->pc == 0x384028u) {
        ctx->pc = 0x38402Cu;
        goto label_38402c;
    }
    ctx->pc = 0x384024u;
    {
        const bool branch_taken_0x384024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384024) {
            ctx->pc = 0x384010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384010;
        }
    }
    ctx->pc = 0x38402Cu;
label_38402c:
    // 0x38402c: 0x0  nop
    ctx->pc = 0x38402cu;
    // NOP
label_384030:
    // 0x384030: 0xc0efe28  jal         func_3BF8A0
label_384034:
    if (ctx->pc == 0x384034u) {
        ctx->pc = 0x384034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384030u;
        // 0x384034: 0x24848980  addiu       $a0, $a0, -0x7680 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384038u;
        goto label_384038;
    }
    ctx->pc = 0x384030u;
    SET_GPR_U32(ctx, 31, 0x384038u);
    ctx->pc = 0x384034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384030u;
    // 0x384034: 0x24848980  addiu       $a0, $a0, -0x7680 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384030u, 0x384038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384038u;
label_384038:
    // 0x384038: 0x266360c0  addiu       $v1, $s3, 0x60C0
    ctx->pc = 0x384038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_38403c:
    // 0x38403c: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x38403cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_384040:
    // 0x384040: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384044:
    // 0x384044: 0x24848888  addiu       $a0, $a0, -0x7778
    ctx->pc = 0x384044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936712));
label_384048:
    // 0x384048: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x384048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_38404c:
    // 0x38404c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x38404cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_384050:
    // 0x384050: 0xc0efe28  jal         func_3BF8A0
label_384054:
    if (ctx->pc == 0x384054u) {
        ctx->pc = 0x384054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384050u;
        // 0x384054: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384058u;
        goto label_384058;
    }
    ctx->pc = 0x384050u;
    SET_GPR_U32(ctx, 31, 0x384058u);
    ctx->pc = 0x384054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384050u;
    // 0x384054: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384050u, 0x384058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384058u;
label_384058:
    // 0x384058: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384058u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_38405c:
    // 0x38405c: 0x103403  sra         $a2, $s0, 16
    ctx->pc = 0x38405cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 16), 16));
label_384060:
    // 0x384060: 0x103a03  sra         $a3, $s0, 8
    ctx->pc = 0x384060u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 16), 8));
label_384064:
    // 0x384064: 0x248488b8  addiu       $a0, $a0, -0x7748
    ctx->pc = 0x384064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936760));
label_384068:
    // 0x384068: 0x102e03  sra         $a1, $s0, 24
    ctx->pc = 0x384068u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 16), 24));
label_38406c:
    // 0x38406c: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x38406cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_384070:
    // 0x384070: 0xc0efe28  jal         func_3BF8A0
label_384074:
    if (ctx->pc == 0x384074u) {
        ctx->pc = 0x384074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384070u;
        // 0x384074: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x384078u;
        goto label_384078;
    }
    ctx->pc = 0x384070u;
    SET_GPR_U32(ctx, 31, 0x384078u);
    ctx->pc = 0x384074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384070u;
    // 0x384074: 0x30e700ff  andi        $a3, $a3, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384070u, 0x384078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384078u;
label_384078:
    // 0x384078: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384078u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_38407c:
    // 0x38407c: 0xc0efe28  jal         func_3BF8A0
label_384080:
    if (ctx->pc == 0x384080u) {
        ctx->pc = 0x384080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38407Cu;
        // 0x384080: 0x248489c8  addiu       $a0, $a0, -0x7638 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384084u;
        goto label_384084;
    }
    ctx->pc = 0x38407Cu;
    SET_GPR_U32(ctx, 31, 0x384084u);
    ctx->pc = 0x384080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38407Cu;
    // 0x384080: 0x248489c8  addiu       $a0, $a0, -0x7638 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x38407Cu, 0x384084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384084u;
label_384084:
    // 0x384084: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
label_384088:
    if (ctx->pc == 0x384088u) {
        ctx->pc = 0x384088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384084u;
        // 0x384088: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38408Cu;
        goto label_38408c;
    }
    ctx->pc = 0x384084u;
    {
        const bool branch_taken_0x384084 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x384088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384084u;
        // 0x384088: 0x3c02002d  lui         $v0, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384084) {
            ctx->pc = 0x384090u;
            goto label_384090;
        }
    }
    ctx->pc = 0x38408Cu;
label_38408c:
    // 0x38408c: 0x24549068  addiu       $s4, $v0, -0x6F98
    ctx->pc = 0x38408cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938728));
label_384090:
    // 0x384090: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_384094:
    if (ctx->pc == 0x384094u) {
        ctx->pc = 0x384094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384090u;
        // 0x384094: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384098u;
        goto label_384098;
    }
    ctx->pc = 0x384090u;
    {
        const bool branch_taken_0x384090 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x384094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384090u;
        // 0x384094: 0x3c120040  lui         $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384090) {
            ctx->pc = 0x3840A0u;
            goto label_3840a0;
        }
    }
    ctx->pc = 0x384098u;
label_384098:
    // 0x384098: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x384098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
label_38409c:
    // 0x38409c: 0x24519490  addiu       $s1, $v0, -0x6B70
    ctx->pc = 0x38409cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939792));
label_3840a0:
    // 0x3840a0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x3840a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_3840a4:
    // 0x3840a4: 0x2650dfd8  addiu       $s0, $s2, -0x2028
    ctx->pc = 0x3840a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959064));
label_3840a8:
    // 0x3840a8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3840a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3840ac:
    // 0x3840ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x3840acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3840b0:
    // 0x3840b0: 0xac74dfe8  sw          $s4, -0x2018($v1)
    ctx->pc = 0x3840b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294959080), GPR_U32(ctx, 20));
label_3840b4:
    // 0x3840b4: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_3840b8:
    if (ctx->pc == 0x3840B8u) {
        ctx->pc = 0x3840B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840B4u;
        // 0x3840b8: 0xac51dfec  sw          $s1, -0x2014($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3840BCu;
        goto label_3840bc;
    }
    ctx->pc = 0x3840B4u;
    {
        const bool branch_taken_0x3840b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840B4u;
        // 0x3840b8: 0xac51dfec  sw          $s1, -0x2014($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294959084), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840b4) {
            ctx->pc = 0x3840F8u;
            goto label_3840f8;
        }
    }
    ctx->pc = 0x3840BCu;
label_3840bc:
    // 0x3840bc: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3840bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_3840c0:
    // 0x3840c0: 0x266260c0  addiu       $v0, $s3, 0x60C0
    ctx->pc = 0x3840c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_3840c4:
    // 0x3840c4: 0x8c440020  lw          $a0, 0x20($v0)
    ctx->pc = 0x3840c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_3840c8:
    // 0x3840c8: 0x8ea3dfd0  lw          $v1, -0x2030($s5)
    ctx->pc = 0x3840c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294959056)));
label_3840cc:
    // 0x3840cc: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
label_3840d0:
    if (ctx->pc == 0x3840D0u) {
        ctx->pc = 0x3840D4u;
        goto label_3840d4;
    }
    ctx->pc = 0x3840CCu;
    {
        const bool branch_taken_0x3840cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3840cc) {
            ctx->pc = 0x3840E4u;
            goto label_3840e4;
        }
    }
    ctx->pc = 0x3840D4u;
label_3840d4:
    // 0x3840d4: 0x220f809  jalr        $s1
label_3840d8:
    if (ctx->pc == 0x3840D8u) {
        ctx->pc = 0x3840D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840D4u;
        // 0x3840d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3840DCu;
        goto label_3840dc;
    }
    ctx->pc = 0x3840D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 17);
        SET_GPR_U32(ctx, 31, 0x3840DCu);
        ctx->pc = 0x3840D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840D4u;
        // 0x3840d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3840D4u, 0x3840DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3840DCu;
label_3840dc:
    // 0x3840dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x3840dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_3840e0:
    // 0x3840e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3840e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3840e4:
    // 0x3840e4: 0x14a00036  bnez        $a1, . + 4 + (0x36 << 2)
label_3840e8:
    if (ctx->pc == 0x3840E8u) {
        ctx->pc = 0x3840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840E4u;
        // 0x3840e8: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3840ECu;
        goto label_3840ec;
    }
    ctx->pc = 0x3840E4u;
    {
        const bool branch_taken_0x3840e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3840E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840E4u;
        // 0x3840e8: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840e4) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x3840ECu;
label_3840ec:
    // 0x3840ec: 0x10000004  b           . + 4 + (0x4 << 2)
label_3840f0:
    if (ctx->pc == 0x3840F0u) {
        ctx->pc = 0x3840F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840ECu;
        // 0x3840f0: 0x266560c0  addiu       $a1, $s3, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3840F4u;
        goto label_3840f4;
    }
    ctx->pc = 0x3840ECu;
    {
        const bool branch_taken_0x3840ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3840F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3840ECu;
        // 0x3840f0: 0x266560c0  addiu       $a1, $s3, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3840ec) {
            ctx->pc = 0x384100u;
            goto label_384100;
        }
    }
    ctx->pc = 0x3840F4u;
label_3840f4:
    // 0x3840f4: 0x0  nop
    ctx->pc = 0x3840f4u;
    // NOP
label_3840f8:
    // 0x3840f8: 0x3c150040  lui         $s5, 0x40
    ctx->pc = 0x3840f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
label_3840fc:
    // 0x3840fc: 0x266560c0  addiu       $a1, $s3, 0x60C0
    ctx->pc = 0x3840fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_384100:
    // 0x384100: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x384100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_384104:
    // 0x384104: 0x2c620181  sltiu       $v0, $v1, 0x181
    ctx->pc = 0x384104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)385) ? 1 : 0);
label_384108:
    // 0x384108: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_38410c:
    if (ctx->pc == 0x38410Cu) {
        ctx->pc = 0x38410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384108u;
        // 0x38410c: 0x2463003f  addiu       $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384110u;
        goto label_384110;
    }
    ctx->pc = 0x384108u;
    {
        const bool branch_taken_0x384108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384108u;
        // 0x38410c: 0x2463003f  addiu       $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384108) {
            ctx->pc = 0x384130u;
            goto label_384130;
        }
    }
    ctx->pc = 0x384110u;
label_384110:
    // 0x384110: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x384110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_384114:
    // 0x384114: 0x24040180  addiu       $a0, $zero, 0x180
    ctx->pc = 0x384114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_384118:
    // 0x384118: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x384118u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_38411c:
    // 0x38411c: 0x24030150  addiu       $v1, $zero, 0x150
    ctx->pc = 0x38411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_384120:
    // 0x384120: 0xac45dfdc  sw          $a1, -0x2024($v0)
    ctx->pc = 0x384120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959068), GPR_U32(ctx, 5));
label_384124:
    // 0x384124: 0xaea4dfd0  sw          $a0, -0x2030($s5)
    ctx->pc = 0x384124u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294959056), GPR_U32(ctx, 4));
label_384128:
    // 0x384128: 0x10000025  b           . + 4 + (0x25 << 2)
label_38412c:
    if (ctx->pc == 0x38412Cu) {
        ctx->pc = 0x38412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384128u;
        // 0x38412c: 0xaee3dfd4  sw          $v1, -0x202C($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384130u;
        goto label_384130;
    }
    ctx->pc = 0x384128u;
    {
        const bool branch_taken_0x384128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384128u;
        // 0x38412c: 0xaee3dfd4  sw          $v1, -0x202C($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 4294959060), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384128) {
            ctx->pc = 0x3841C0u;
            goto label_3841c0;
        }
    }
    ctx->pc = 0x384130u;
label_384130:
    // 0x384130: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x384130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_384134:
    // 0x384134: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x384134u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_384138:
    // 0x384138: 0x2650dfd8  addiu       $s0, $s2, -0x2028
    ctx->pc = 0x384138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959064));
label_38413c:
    // 0x38413c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x38413cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_384140:
    // 0x384140: 0x280f809  jalr        $s4
label_384144:
    if (ctx->pc == 0x384144u) {
        ctx->pc = 0x384144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384140u;
        // 0x384144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384148u;
        goto label_384148;
    }
    ctx->pc = 0x384140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x384148u);
        ctx->pc = 0x384144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384140u;
        // 0x384144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384140u, 0x384148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x384148u;
label_384148:
    // 0x384148: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_38414c:
    if (ctx->pc == 0x38414Cu) {
        ctx->pc = 0x38414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384148u;
        // 0x38414c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384150u;
        goto label_384150;
    }
    ctx->pc = 0x384148u;
    {
        const bool branch_taken_0x384148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384148u;
        // 0x38414c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384148) {
            ctx->pc = 0x384190u;
            goto label_384190;
        }
    }
    ctx->pc = 0x384150u;
label_384150:
    // 0x384150: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384154:
    // 0x384154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x384154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_384158:
    // 0x384158: 0xc0efe28  jal         func_3BF8A0
label_38415c:
    if (ctx->pc == 0x38415Cu) {
        ctx->pc = 0x38415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384158u;
        // 0x38415c: 0x248489e0  addiu       $a0, $a0, -0x7620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384160u;
        goto label_384160;
    }
    ctx->pc = 0x384158u;
    SET_GPR_U32(ctx, 31, 0x384160u);
    ctx->pc = 0x38415Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384158u;
    // 0x38415c: 0x248489e0  addiu       $a0, $a0, -0x7620 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384158u, 0x384160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384160u;
label_384160:
    // 0x384160: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384164:
    // 0x384164: 0xc0efe28  jal         func_3BF8A0
label_384168:
    if (ctx->pc == 0x384168u) {
        ctx->pc = 0x384168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384164u;
        // 0x384168: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38416Cu;
        goto label_38416c;
    }
    ctx->pc = 0x384164u;
    SET_GPR_U32(ctx, 31, 0x38416Cu);
    ctx->pc = 0x384168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384164u;
    // 0x384168: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384164u, 0x38416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38416Cu;
label_38416c:
    // 0x38416c: 0x0  nop
    ctx->pc = 0x38416cu;
    // NOP
label_384170:
    // 0x384170: 0x0  nop
    ctx->pc = 0x384170u;
    // NOP
label_384174:
    // 0x384174: 0x0  nop
    ctx->pc = 0x384174u;
    // NOP
label_384178:
    // 0x384178: 0x0  nop
    ctx->pc = 0x384178u;
    // NOP
label_38417c:
    // 0x38417c: 0x0  nop
    ctx->pc = 0x38417cu;
    // NOP
label_384180:
    // 0x384180: 0x0  nop
    ctx->pc = 0x384180u;
    // NOP
label_384184:
    // 0x384184: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_384188:
    if (ctx->pc == 0x384188u) {
        ctx->pc = 0x38418Cu;
        goto label_38418c;
    }
    ctx->pc = 0x384184u;
    {
        const bool branch_taken_0x384184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x384184) {
            ctx->pc = 0x384170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384170;
        }
    }
    ctx->pc = 0x38418Cu;
label_38418c:
    // 0x38418c: 0x0  nop
    ctx->pc = 0x38418cu;
    // NOP
label_384190:
    // 0x384190: 0x266260c0  addiu       $v0, $s3, 0x60C0
    ctx->pc = 0x384190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_384194:
    // 0x384194: 0x8e43dfd8  lw          $v1, -0x2028($s2)
    ctx->pc = 0x384194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294959064)));
label_384198:
    // 0x384198: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x384198u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_38419c:
    // 0x38419c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x38419cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3841a0:
    // 0x3841a0: 0x2404ffc0  addiu       $a0, $zero, -0x40
    ctx->pc = 0x3841a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
label_3841a4:
    // 0x3841a4: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x3841a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_3841a8:
    // 0x3841a8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3841a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_3841ac:
    // 0x3841ac: 0x24c5ffd0  addiu       $a1, $a2, -0x30
    ctx->pc = 0x3841acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_3841b0:
    // 0x3841b0: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x3841b0u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_3841b4:
    // 0x3841b4: 0xac43dfdc  sw          $v1, -0x2024($v0)
    ctx->pc = 0x3841b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959068), GPR_U32(ctx, 3));
label_3841b8:
    // 0x3841b8: 0xaea6dfd0  sw          $a2, -0x2030($s5)
    ctx->pc = 0x3841b8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294959056), GPR_U32(ctx, 6));
label_3841bc:
    // 0x3841bc: 0xaee5dfd4  sw          $a1, -0x202C($s7)
    ctx->pc = 0x3841bcu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294959060), GPR_U32(ctx, 5));
label_3841c0:
    // 0x3841c0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3841c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_3841c4:
    // 0x3841c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3841c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3841c8:
    // 0x3841c8: 0x2452dfe4  addiu       $s2, $v0, -0x201C
    ctx->pc = 0x3841c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959076));
label_3841cc:
    // 0x3841cc: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x3841ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3841d0:
    // 0x3841d0: 0x1623001e  bne         $s1, $v1, . + 4 + (0x1E << 2)
label_3841d4:
    if (ctx->pc == 0x3841D4u) {
        ctx->pc = 0x3841D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841D0u;
        // 0x3841d4: 0x27d06280  addiu       $s0, $fp, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 25216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3841D8u;
        goto label_3841d8;
    }
    ctx->pc = 0x3841D0u;
    {
        const bool branch_taken_0x3841d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x3841D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841D0u;
        // 0x3841d4: 0x27d06280  addiu       $s0, $fp, 0x6280 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 25216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3841d0) {
            ctx->pc = 0x38424Cu;
            goto label_38424c;
        }
    }
    ctx->pc = 0x3841D8u;
label_3841d8:
    // 0x3841d8: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x3841d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3841dc:
    // 0x3841dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3841dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3841e0:
    // 0x3841e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3841e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3841e4:
    // 0x3841e4: 0xc0efab3  jal         func_3BEACC
label_3841e8:
    if (ctx->pc == 0x3841E8u) {
        ctx->pc = 0x3841E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841E4u;
        // 0x3841e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3841ECu;
        goto label_3841ec;
    }
    ctx->pc = 0x3841E4u;
    SET_GPR_U32(ctx, 31, 0x3841ECu);
    ctx->pc = 0x3841E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841E4u;
    // 0x3841e8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3841E4u, 0x3841ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3841ECu;
label_3841ec:
    // 0x3841ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3841ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3841f0:
    // 0x3841f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3841f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3841f4:
    // 0x3841f4: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x3841f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_3841f8:
    // 0x3841f8: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3841f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_3841fc:
    // 0x3841fc: 0xc0f2668  jal         func_3C99A0
label_384200:
    if (ctx->pc == 0x384200u) {
        ctx->pc = 0x384200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3841FCu;
        // 0x384200: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384204u;
        goto label_384204;
    }
    ctx->pc = 0x3841FCu;
    SET_GPR_U32(ctx, 31, 0x384204u);
    ctx->pc = 0x384200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3841FCu;
    // 0x384200: 0xafa00024  sw          $zero, 0x24($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C99A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C99A0u, 0x3841FCu, 0x384204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384204u;
label_384204:
    // 0x384204: 0x14510010  bne         $v0, $s1, . + 4 + (0x10 << 2)
label_384208:
    if (ctx->pc == 0x384208u) {
        ctx->pc = 0x384208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384204u;
        // 0x384208: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38420Cu;
        goto label_38420c;
    }
    ctx->pc = 0x384204u;
    {
        const bool branch_taken_0x384204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x384208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384204u;
        // 0x384208: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384204) {
            ctx->pc = 0x384248u;
            goto label_384248;
        }
    }
    ctx->pc = 0x38420Cu;
label_38420c:
    // 0x38420c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x38420cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384210:
    // 0x384210: 0xc0efe28  jal         func_3BF8A0
label_384214:
    if (ctx->pc == 0x384214u) {
        ctx->pc = 0x384214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384210u;
        // 0x384214: 0x24848a10  addiu       $a0, $a0, -0x75F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384218u;
        goto label_384218;
    }
    ctx->pc = 0x384210u;
    SET_GPR_U32(ctx, 31, 0x384218u);
    ctx->pc = 0x384214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384210u;
    // 0x384214: 0x24848a10  addiu       $a0, $a0, -0x75F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384210u, 0x384218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384218u;
label_384218:
    // 0x384218: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_38421c:
    // 0x38421c: 0xc0efe28  jal         func_3BF8A0
label_384220:
    if (ctx->pc == 0x384220u) {
        ctx->pc = 0x384220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38421Cu;
        // 0x384220: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384224u;
        goto label_384224;
    }
    ctx->pc = 0x38421Cu;
    SET_GPR_U32(ctx, 31, 0x384224u);
    ctx->pc = 0x384220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38421Cu;
    // 0x384220: 0x24848920  addiu       $a0, $a0, -0x76E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x38421Cu, 0x384224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384224u;
label_384224:
    // 0x384224: 0x0  nop
    ctx->pc = 0x384224u;
    // NOP
label_384228:
    // 0x384228: 0x0  nop
    ctx->pc = 0x384228u;
    // NOP
label_38422c:
    // 0x38422c: 0x0  nop
    ctx->pc = 0x38422cu;
    // NOP
label_384230:
    // 0x384230: 0x0  nop
    ctx->pc = 0x384230u;
    // NOP
label_384234:
    // 0x384234: 0x0  nop
    ctx->pc = 0x384234u;
    // NOP
label_384238:
    // 0x384238: 0x0  nop
    ctx->pc = 0x384238u;
    // NOP
label_38423c:
    // 0x38423c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_384240:
    if (ctx->pc == 0x384240u) {
        ctx->pc = 0x384244u;
        goto label_384244;
    }
    ctx->pc = 0x38423Cu;
    {
        const bool branch_taken_0x38423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38423c) {
            ctx->pc = 0x384228u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_384228;
        }
    }
    ctx->pc = 0x384244u;
label_384244:
    // 0x384244: 0x0  nop
    ctx->pc = 0x384244u;
    // NOP
label_384248:
    // 0x384248: 0x27d06280  addiu       $s0, $fp, 0x6280
    ctx->pc = 0x384248u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 25216));
label_38424c:
    // 0x38424c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x38424cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_384250:
    // 0x384250: 0xc0f28c4  jal         func_3CA310
label_384254:
    if (ctx->pc == 0x384254u) {
        ctx->pc = 0x384254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384250u;
        // 0x384254: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384258u;
        goto label_384258;
    }
    ctx->pc = 0x384250u;
    SET_GPR_U32(ctx, 31, 0x384258u);
    ctx->pc = 0x384254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384250u;
    // 0x384254: 0x2605003f  addiu       $a1, $s0, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA310u, 0x384250u, 0x384258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384258u;
label_384258:
    // 0x384258: 0x266260c0  addiu       $v0, $s3, 0x60C0
    ctx->pc = 0x384258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 24768));
label_38425c:
    // 0x38425c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x38425cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_384260:
    // 0x384260: 0xac500020  sw          $s0, 0x20($v0)
    ctx->pc = 0x384260u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 16));
label_384264:
    // 0x384264: 0x26c46080  addiu       $a0, $s6, 0x6080
    ctx->pc = 0x384264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 24704));
label_384268:
    // 0x384268: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x384268u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_38426c:
    // 0x38426c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x38426cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_384270:
    // 0x384270: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x384270u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384274:
    // 0x384274: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x384274u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384278:
    // 0x384278: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x384278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_38427c:
    // 0x38427c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x38427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_384280:
    // 0x384280: 0xc0f347c  jal         func_3CD1F0
label_384284:
    if (ctx->pc == 0x384284u) {
        ctx->pc = 0x384284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384280u;
        // 0x384284: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x384288u;
        goto label_384288;
    }
    ctx->pc = 0x384280u;
    SET_GPR_U32(ctx, 31, 0x384288u);
    ctx->pc = 0x384284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384280u;
    // 0x384284: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x384280u, 0x384288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384288u;
label_384288:
    // 0x384288: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x384288u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_38428c:
    // 0x38428c: 0x8ee6dfd4  lw          $a2, -0x202C($s7)
    ctx->pc = 0x38428cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294959060)));
label_384290:
    // 0x384290: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x384290u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_384294:
    // 0x384294: 0x8c65dff0  lw          $a1, -0x2010($v1)
    ctx->pc = 0x384294u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959088)));
label_384298:
    // 0x384298: 0xc0efe28  jal         func_3BF8A0
label_38429c:
    if (ctx->pc == 0x38429Cu) {
        ctx->pc = 0x38429Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384298u;
        // 0x38429c: 0x24848a38  addiu       $a0, $a0, -0x75C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3842A0u;
        goto label_3842a0;
    }
    ctx->pc = 0x384298u;
    SET_GPR_U32(ctx, 31, 0x3842A0u);
    ctx->pc = 0x38429Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384298u;
    // 0x38429c: 0x24848a38  addiu       $a0, $a0, -0x75C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF8A0u, 0x384298u, 0x3842A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3842A0u;
label_3842a0:
    // 0x3842a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3842a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3842a4:
    // 0x3842a4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3842a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3842a8:
    // 0x3842a8: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x3842a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_3842ac:
    // 0x3842ac: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x3842acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3842b0:
    // 0x3842b0: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x3842b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_3842b4:
    // 0x3842b4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x3842b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3842b8:
    // 0x3842b8: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x3842b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_3842bc:
    // 0x3842bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3842bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3842c0:
    // 0x3842c0: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x3842c0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_3842c4:
    // 0x3842c4: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x3842c4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3842c8:
    // 0x3842c8: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x3842c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_3842cc:
    // 0x3842cc: 0x3e00008  jr          $ra
label_3842d0:
    if (ctx->pc == 0x3842D0u) {
        ctx->pc = 0x3842D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842CCu;
        // 0x3842d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3842D4u;
        goto label_3842d4;
    }
    ctx->pc = 0x3842CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3842D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3842CCu;
        // 0x3842d0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3842CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3842D4u;
label_3842d4:
    // 0x3842d4: 0x0  nop
    ctx->pc = 0x3842d4u;
    // NOP
    ctx->pc = 0x3842d8u;
}
