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

// Function: sub_00399EB8
// Address: 0x399eb8 - 0x39a318
void sub_00399EB8_0x399eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399EB8_0x399eb8");
#endif

    switch (ctx->pc) {
        case 0x399eb8u: goto label_399eb8;
        case 0x399ebcu: goto label_399ebc;
        case 0x399ec0u: goto label_399ec0;
        case 0x399ec4u: goto label_399ec4;
        case 0x399ec8u: goto label_399ec8;
        case 0x399eccu: goto label_399ecc;
        case 0x399ed0u: goto label_399ed0;
        case 0x399ed4u: goto label_399ed4;
        case 0x399ed8u: goto label_399ed8;
        case 0x399edcu: goto label_399edc;
        case 0x399ee0u: goto label_399ee0;
        case 0x399ee4u: goto label_399ee4;
        case 0x399ee8u: goto label_399ee8;
        case 0x399eecu: goto label_399eec;
        case 0x399ef0u: goto label_399ef0;
        case 0x399ef4u: goto label_399ef4;
        case 0x399ef8u: goto label_399ef8;
        case 0x399efcu: goto label_399efc;
        case 0x399f00u: goto label_399f00;
        case 0x399f04u: goto label_399f04;
        case 0x399f08u: goto label_399f08;
        case 0x399f0cu: goto label_399f0c;
        case 0x399f10u: goto label_399f10;
        case 0x399f14u: goto label_399f14;
        case 0x399f18u: goto label_399f18;
        case 0x399f1cu: goto label_399f1c;
        case 0x399f20u: goto label_399f20;
        case 0x399f24u: goto label_399f24;
        case 0x399f28u: goto label_399f28;
        case 0x399f2cu: goto label_399f2c;
        case 0x399f30u: goto label_399f30;
        case 0x399f34u: goto label_399f34;
        case 0x399f38u: goto label_399f38;
        case 0x399f3cu: goto label_399f3c;
        case 0x399f40u: goto label_399f40;
        case 0x399f44u: goto label_399f44;
        case 0x399f48u: goto label_399f48;
        case 0x399f4cu: goto label_399f4c;
        case 0x399f50u: goto label_399f50;
        case 0x399f54u: goto label_399f54;
        case 0x399f58u: goto label_399f58;
        case 0x399f5cu: goto label_399f5c;
        case 0x399f60u: goto label_399f60;
        case 0x399f64u: goto label_399f64;
        case 0x399f68u: goto label_399f68;
        case 0x399f6cu: goto label_399f6c;
        case 0x399f70u: goto label_399f70;
        case 0x399f74u: goto label_399f74;
        case 0x399f78u: goto label_399f78;
        case 0x399f7cu: goto label_399f7c;
        case 0x399f80u: goto label_399f80;
        case 0x399f84u: goto label_399f84;
        case 0x399f88u: goto label_399f88;
        case 0x399f8cu: goto label_399f8c;
        case 0x399f90u: goto label_399f90;
        case 0x399f94u: goto label_399f94;
        case 0x399f98u: goto label_399f98;
        case 0x399f9cu: goto label_399f9c;
        case 0x399fa0u: goto label_399fa0;
        case 0x399fa4u: goto label_399fa4;
        case 0x399fa8u: goto label_399fa8;
        case 0x399facu: goto label_399fac;
        case 0x399fb0u: goto label_399fb0;
        case 0x399fb4u: goto label_399fb4;
        case 0x399fb8u: goto label_399fb8;
        case 0x399fbcu: goto label_399fbc;
        case 0x399fc0u: goto label_399fc0;
        case 0x399fc4u: goto label_399fc4;
        case 0x399fc8u: goto label_399fc8;
        case 0x399fccu: goto label_399fcc;
        case 0x399fd0u: goto label_399fd0;
        case 0x399fd4u: goto label_399fd4;
        case 0x399fd8u: goto label_399fd8;
        case 0x399fdcu: goto label_399fdc;
        case 0x399fe0u: goto label_399fe0;
        case 0x399fe4u: goto label_399fe4;
        case 0x399fe8u: goto label_399fe8;
        case 0x399fecu: goto label_399fec;
        case 0x399ff0u: goto label_399ff0;
        case 0x399ff4u: goto label_399ff4;
        case 0x399ff8u: goto label_399ff8;
        case 0x399ffcu: goto label_399ffc;
        case 0x39a000u: goto label_39a000;
        case 0x39a004u: goto label_39a004;
        case 0x39a008u: goto label_39a008;
        case 0x39a00cu: goto label_39a00c;
        case 0x39a010u: goto label_39a010;
        case 0x39a014u: goto label_39a014;
        case 0x39a018u: goto label_39a018;
        case 0x39a01cu: goto label_39a01c;
        case 0x39a020u: goto label_39a020;
        case 0x39a024u: goto label_39a024;
        case 0x39a028u: goto label_39a028;
        case 0x39a02cu: goto label_39a02c;
        case 0x39a030u: goto label_39a030;
        case 0x39a034u: goto label_39a034;
        case 0x39a038u: goto label_39a038;
        case 0x39a03cu: goto label_39a03c;
        case 0x39a040u: goto label_39a040;
        case 0x39a044u: goto label_39a044;
        case 0x39a048u: goto label_39a048;
        case 0x39a04cu: goto label_39a04c;
        case 0x39a050u: goto label_39a050;
        case 0x39a054u: goto label_39a054;
        case 0x39a058u: goto label_39a058;
        case 0x39a05cu: goto label_39a05c;
        case 0x39a060u: goto label_39a060;
        case 0x39a064u: goto label_39a064;
        case 0x39a068u: goto label_39a068;
        case 0x39a06cu: goto label_39a06c;
        case 0x39a070u: goto label_39a070;
        case 0x39a074u: goto label_39a074;
        case 0x39a078u: goto label_39a078;
        case 0x39a07cu: goto label_39a07c;
        case 0x39a080u: goto label_39a080;
        case 0x39a084u: goto label_39a084;
        case 0x39a088u: goto label_39a088;
        case 0x39a08cu: goto label_39a08c;
        case 0x39a090u: goto label_39a090;
        case 0x39a094u: goto label_39a094;
        case 0x39a098u: goto label_39a098;
        case 0x39a09cu: goto label_39a09c;
        case 0x39a0a0u: goto label_39a0a0;
        case 0x39a0a4u: goto label_39a0a4;
        case 0x39a0a8u: goto label_39a0a8;
        case 0x39a0acu: goto label_39a0ac;
        case 0x39a0b0u: goto label_39a0b0;
        case 0x39a0b4u: goto label_39a0b4;
        case 0x39a0b8u: goto label_39a0b8;
        case 0x39a0bcu: goto label_39a0bc;
        case 0x39a0c0u: goto label_39a0c0;
        case 0x39a0c4u: goto label_39a0c4;
        case 0x39a0c8u: goto label_39a0c8;
        case 0x39a0ccu: goto label_39a0cc;
        case 0x39a0d0u: goto label_39a0d0;
        case 0x39a0d4u: goto label_39a0d4;
        case 0x39a0d8u: goto label_39a0d8;
        case 0x39a0dcu: goto label_39a0dc;
        case 0x39a0e0u: goto label_39a0e0;
        case 0x39a0e4u: goto label_39a0e4;
        case 0x39a0e8u: goto label_39a0e8;
        case 0x39a0ecu: goto label_39a0ec;
        case 0x39a0f0u: goto label_39a0f0;
        case 0x39a0f4u: goto label_39a0f4;
        case 0x39a0f8u: goto label_39a0f8;
        case 0x39a0fcu: goto label_39a0fc;
        case 0x39a100u: goto label_39a100;
        case 0x39a104u: goto label_39a104;
        case 0x39a108u: goto label_39a108;
        case 0x39a10cu: goto label_39a10c;
        case 0x39a110u: goto label_39a110;
        case 0x39a114u: goto label_39a114;
        case 0x39a118u: goto label_39a118;
        case 0x39a11cu: goto label_39a11c;
        case 0x39a120u: goto label_39a120;
        case 0x39a124u: goto label_39a124;
        case 0x39a128u: goto label_39a128;
        case 0x39a12cu: goto label_39a12c;
        case 0x39a130u: goto label_39a130;
        case 0x39a134u: goto label_39a134;
        case 0x39a138u: goto label_39a138;
        case 0x39a13cu: goto label_39a13c;
        case 0x39a140u: goto label_39a140;
        case 0x39a144u: goto label_39a144;
        case 0x39a148u: goto label_39a148;
        case 0x39a14cu: goto label_39a14c;
        case 0x39a150u: goto label_39a150;
        case 0x39a154u: goto label_39a154;
        case 0x39a158u: goto label_39a158;
        case 0x39a15cu: goto label_39a15c;
        case 0x39a160u: goto label_39a160;
        case 0x39a164u: goto label_39a164;
        case 0x39a168u: goto label_39a168;
        case 0x39a16cu: goto label_39a16c;
        case 0x39a170u: goto label_39a170;
        case 0x39a174u: goto label_39a174;
        case 0x39a178u: goto label_39a178;
        case 0x39a17cu: goto label_39a17c;
        case 0x39a180u: goto label_39a180;
        case 0x39a184u: goto label_39a184;
        case 0x39a188u: goto label_39a188;
        case 0x39a18cu: goto label_39a18c;
        case 0x39a190u: goto label_39a190;
        case 0x39a194u: goto label_39a194;
        case 0x39a198u: goto label_39a198;
        case 0x39a19cu: goto label_39a19c;
        case 0x39a1a0u: goto label_39a1a0;
        case 0x39a1a4u: goto label_39a1a4;
        case 0x39a1a8u: goto label_39a1a8;
        case 0x39a1acu: goto label_39a1ac;
        case 0x39a1b0u: goto label_39a1b0;
        case 0x39a1b4u: goto label_39a1b4;
        case 0x39a1b8u: goto label_39a1b8;
        case 0x39a1bcu: goto label_39a1bc;
        case 0x39a1c0u: goto label_39a1c0;
        case 0x39a1c4u: goto label_39a1c4;
        case 0x39a1c8u: goto label_39a1c8;
        case 0x39a1ccu: goto label_39a1cc;
        case 0x39a1d0u: goto label_39a1d0;
        case 0x39a1d4u: goto label_39a1d4;
        case 0x39a1d8u: goto label_39a1d8;
        case 0x39a1dcu: goto label_39a1dc;
        case 0x39a1e0u: goto label_39a1e0;
        case 0x39a1e4u: goto label_39a1e4;
        case 0x39a1e8u: goto label_39a1e8;
        case 0x39a1ecu: goto label_39a1ec;
        case 0x39a1f0u: goto label_39a1f0;
        case 0x39a1f4u: goto label_39a1f4;
        case 0x39a1f8u: goto label_39a1f8;
        case 0x39a1fcu: goto label_39a1fc;
        case 0x39a200u: goto label_39a200;
        case 0x39a204u: goto label_39a204;
        case 0x39a208u: goto label_39a208;
        case 0x39a20cu: goto label_39a20c;
        case 0x39a210u: goto label_39a210;
        case 0x39a214u: goto label_39a214;
        case 0x39a218u: goto label_39a218;
        case 0x39a21cu: goto label_39a21c;
        case 0x39a220u: goto label_39a220;
        case 0x39a224u: goto label_39a224;
        case 0x39a228u: goto label_39a228;
        case 0x39a22cu: goto label_39a22c;
        case 0x39a230u: goto label_39a230;
        case 0x39a234u: goto label_39a234;
        case 0x39a238u: goto label_39a238;
        case 0x39a23cu: goto label_39a23c;
        case 0x39a240u: goto label_39a240;
        case 0x39a244u: goto label_39a244;
        case 0x39a248u: goto label_39a248;
        case 0x39a24cu: goto label_39a24c;
        case 0x39a250u: goto label_39a250;
        case 0x39a254u: goto label_39a254;
        case 0x39a258u: goto label_39a258;
        case 0x39a25cu: goto label_39a25c;
        case 0x39a260u: goto label_39a260;
        case 0x39a264u: goto label_39a264;
        case 0x39a268u: goto label_39a268;
        case 0x39a26cu: goto label_39a26c;
        case 0x39a270u: goto label_39a270;
        case 0x39a274u: goto label_39a274;
        case 0x39a278u: goto label_39a278;
        case 0x39a27cu: goto label_39a27c;
        case 0x39a280u: goto label_39a280;
        case 0x39a284u: goto label_39a284;
        case 0x39a288u: goto label_39a288;
        case 0x39a28cu: goto label_39a28c;
        case 0x39a290u: goto label_39a290;
        case 0x39a294u: goto label_39a294;
        case 0x39a298u: goto label_39a298;
        case 0x39a29cu: goto label_39a29c;
        case 0x39a2a0u: goto label_39a2a0;
        case 0x39a2a4u: goto label_39a2a4;
        case 0x39a2a8u: goto label_39a2a8;
        case 0x39a2acu: goto label_39a2ac;
        case 0x39a2b0u: goto label_39a2b0;
        case 0x39a2b4u: goto label_39a2b4;
        case 0x39a2b8u: goto label_39a2b8;
        case 0x39a2bcu: goto label_39a2bc;
        case 0x39a2c0u: goto label_39a2c0;
        case 0x39a2c4u: goto label_39a2c4;
        case 0x39a2c8u: goto label_39a2c8;
        case 0x39a2ccu: goto label_39a2cc;
        case 0x39a2d0u: goto label_39a2d0;
        case 0x39a2d4u: goto label_39a2d4;
        case 0x39a2d8u: goto label_39a2d8;
        case 0x39a2dcu: goto label_39a2dc;
        case 0x39a2e0u: goto label_39a2e0;
        case 0x39a2e4u: goto label_39a2e4;
        case 0x39a2e8u: goto label_39a2e8;
        case 0x39a2ecu: goto label_39a2ec;
        case 0x39a2f0u: goto label_39a2f0;
        case 0x39a2f4u: goto label_39a2f4;
        case 0x39a2f8u: goto label_39a2f8;
        case 0x39a2fcu: goto label_39a2fc;
        case 0x39a300u: goto label_39a300;
        case 0x39a304u: goto label_39a304;
        case 0x39a308u: goto label_39a308;
        case 0x39a30cu: goto label_39a30c;
        case 0x39a310u: goto label_39a310;
        case 0x39a314u: goto label_39a314;
        default: break;
    }

    ctx->pc = 0x399eb8u;

label_399eb8:
    // 0x399eb8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x399eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_399ebc:
    // 0x399ebc: 0x24639cfc  addiu       $v1, $v1, -0x6304
    ctx->pc = 0x399ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941948));
label_399ec0:
    // 0x399ec0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x399ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_399ec4:
    // 0x399ec4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x399ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_399ec8:
    // 0x399ec8: 0x3e00008  jr          $ra
label_399ecc:
    if (ctx->pc == 0x399ECCu) {
        ctx->pc = 0x399ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EC8u;
        // 0x399ecc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399ED0u;
        goto label_399ed0;
    }
    ctx->pc = 0x399EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EC8u;
        // 0x399ecc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x399ED0u;
label_399ed0:
    // 0x399ed0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x399ed0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_399ed4:
    // 0x399ed4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x399ed4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_399ed8:
    // 0x399ed8: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x399ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_399edc:
    // 0x399edc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x399edcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_399ee0:
    // 0x399ee0: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x399ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_399ee4:
    // 0x399ee4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x399ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_399ee8:
    // 0x399ee8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x399ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_399eec:
    // 0x399eec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x399eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_399ef0:
    // 0x399ef0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x399ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_399ef4:
    // 0x399ef4: 0xc0e890a  jal         func_3A2428
label_399ef8:
    if (ctx->pc == 0x399EF8u) {
        ctx->pc = 0x399EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EF4u;
        // 0x399ef8: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399EFCu;
        goto label_399efc;
    }
    ctx->pc = 0x399EF4u;
    SET_GPR_U32(ctx, 31, 0x399EFCu);
    ctx->pc = 0x399EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EF4u;
    // 0x399ef8: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2428u, 0x399EF4u, 0x399EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399EFCu;
label_399efc:
    // 0x399efc: 0xc0e6a60  jal         func_39A980
label_399f00:
    if (ctx->pc == 0x399F00u) {
        ctx->pc = 0x399F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399EFCu;
        // 0x399f00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F04u;
        goto label_399f04;
    }
    ctx->pc = 0x399EFCu;
    SET_GPR_U32(ctx, 31, 0x399F04u);
    ctx->pc = 0x399F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399EFCu;
    // 0x399f00: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x399EFCu, 0x399F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F04u;
label_399f04:
    // 0x399f04: 0x82630002  lb          $v1, 0x2($s3)
    ctx->pc = 0x399f04u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_399f08:
    // 0x399f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x399f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_399f0c:
    // 0x399f0c: 0x14620062  bne         $v1, $v0, . + 4 + (0x62 << 2)
label_399f10:
    if (ctx->pc == 0x399F10u) {
        ctx->pc = 0x399F14u;
        goto label_399f14;
    }
    ctx->pc = 0x399F0Cu;
    {
        const bool branch_taken_0x399f0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x399f0c) {
            ctx->pc = 0x39A098u;
            goto label_39a098;
        }
    }
    ctx->pc = 0x399F14u;
label_399f14:
    // 0x399f14: 0x5603003c  bnel        $s0, $v1, . + 4 + (0x3C << 2)
label_399f18:
    if (ctx->pc == 0x399F18u) {
        ctx->pc = 0x399F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F14u;
        // 0x399f18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F1Cu;
        goto label_399f1c;
    }
    ctx->pc = 0x399F14u;
    {
        const bool branch_taken_0x399f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x399f14) {
            ctx->pc = 0x399F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399F14u;
            // 0x399f18: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A008u;
            goto label_39a008;
        }
    }
    ctx->pc = 0x399F1Cu;
label_399f1c:
    // 0x399f1c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x399f1cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_399f20:
    // 0x399f20: 0xc0e6a66  jal         func_39A998
label_399f24:
    if (ctx->pc == 0x399F24u) {
        ctx->pc = 0x399F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F20u;
        // 0x399f24: 0x26720028  addiu       $s2, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F28u;
        goto label_399f28;
    }
    ctx->pc = 0x399F20u;
    SET_GPR_U32(ctx, 31, 0x399F28u);
    ctx->pc = 0x399F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F20u;
    // 0x399f24: 0x26720028  addiu       $s2, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x399F20u, 0x399F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F28u;
label_399f28:
    // 0x399f28: 0x8e700024  lw          $s0, 0x24($s3)
    ctx->pc = 0x399f28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_399f2c:
    // 0x399f2c: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x399f2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_399f30:
    // 0x399f30: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x399f30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399f34:
    // 0x399f34: 0x1082c0  sll         $s0, $s0, 11
    ctx->pc = 0x399f34u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 11));
label_399f38:
    // 0x399f38: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x399f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_399f3c:
    // 0x399f3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x399f3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_399f40:
    // 0x399f40: 0xc0eb07e  jal         func_3AC1F8
label_399f44:
    if (ctx->pc == 0x399F44u) {
        ctx->pc = 0x399F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F40u;
        // 0x399f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F48u;
        goto label_399f48;
    }
    ctx->pc = 0x399F40u;
    SET_GPR_U32(ctx, 31, 0x399F48u);
    ctx->pc = 0x399F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x399F40u;
    // 0x399f44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AC1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AC1F8u, 0x399F40u, 0x399F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x399F48u;
label_399f48:
    // 0x399f48: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x399f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_399f4c:
    // 0x399f4c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x399f4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_399f50:
    // 0x399f50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_399f54:
    // 0x399f54: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x399f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_399f58:
    // 0x399f58: 0x40f809  jalr        $v0
label_399f5c:
    if (ctx->pc == 0x399F5Cu) {
        ctx->pc = 0x399F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F58u;
        // 0x399f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F60u;
        goto label_399f60;
    }
    ctx->pc = 0x399F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399F60u);
        ctx->pc = 0x399F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F58u;
        // 0x399f5c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399F58u, 0x399F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399F60u;
label_399f60:
    // 0x399f60: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x399f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_399f64:
    // 0x399f64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x399f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_399f68:
    // 0x399f68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x399f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_399f6c:
    // 0x399f6c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x399f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_399f70:
    // 0x399f70: 0x40f809  jalr        $v0
label_399f74:
    if (ctx->pc == 0x399F74u) {
        ctx->pc = 0x399F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F70u;
        // 0x399f74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399F78u;
        goto label_399f78;
    }
    ctx->pc = 0x399F70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399F78u);
        ctx->pc = 0x399F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399F70u;
        // 0x399f74: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399F70u, 0x399F78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399F78u;
label_399f78:
    // 0x399f78: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x399f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_399f7c:
    // 0x399f7c: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x399f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_399f80:
    // 0x399f80: 0x8e640024  lw          $a0, 0x24($s3)
    ctx->pc = 0x399f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_399f84:
    // 0x399f84: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x399f84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_399f88:
    // 0x399f88: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x399f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_399f8c:
    // 0x399f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x399f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_399f90:
    // 0x399f90: 0xae620038  sw          $v0, 0x38($s3)
    ctx->pc = 0x399f90u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 2));
label_399f94:
    // 0x399f94: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x399f94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_399f98:
    // 0x399f98: 0xae63005c  sw          $v1, 0x5C($s3)
    ctx->pc = 0x399f98u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 3));
label_399f9c:
    // 0x399f9c: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x399f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_399fa0:
    // 0x399fa0: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_399fa4:
    if (ctx->pc == 0x399FA4u) {
        ctx->pc = 0x399FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FA0u;
        // 0x399fa4: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FA8u;
        goto label_399fa8;
    }
    ctx->pc = 0x399FA0u;
    {
        const bool branch_taken_0x399fa0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x399FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FA0u;
        // 0x399fa4: 0x8e700018  lw          $s0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fa0) {
            ctx->pc = 0x399FBCu;
            goto label_399fbc;
        }
    }
    ctx->pc = 0x399FA8u;
label_399fa8:
    // 0x399fa8: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x399fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_399fac:
    // 0x399fac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_399fb0:
    if (ctx->pc == 0x399FB0u) {
        ctx->pc = 0x399FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FACu;
        // 0x399fb0: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FB4u;
        goto label_399fb4;
    }
    ctx->pc = 0x399FACu;
    {
        const bool branch_taken_0x399fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x399fac) {
            ctx->pc = 0x399FB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FACu;
            // 0x399fb0: 0x8e62005c  lw          $v0, 0x5C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x399FC0u;
            goto label_399fc0;
        }
    }
    ctx->pc = 0x399FB4u;
label_399fb4:
    // 0x399fb4: 0x40f809  jalr        $v0
label_399fb8:
    if (ctx->pc == 0x399FB8u) {
        ctx->pc = 0x399FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FB4u;
        // 0x399fb8: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FBCu;
        goto label_399fbc;
    }
    ctx->pc = 0x399FB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x399FBCu);
        ctx->pc = 0x399FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FB4u;
        // 0x399fb8: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x399FB4u, 0x399FBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x399FBCu;
label_399fbc:
    // 0x399fbc: 0x8e62005c  lw          $v0, 0x5C($s3)
    ctx->pc = 0x399fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_399fc0:
    // 0x399fc0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x399fc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_399fc4:
    // 0x399fc4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_399fc8:
    if (ctx->pc == 0x399FC8u) {
        ctx->pc = 0x399FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FC4u;
        // 0x399fc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FCCu;
        goto label_399fcc;
    }
    ctx->pc = 0x399FC4u;
    {
        const bool branch_taken_0x399fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x399FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FC4u;
        // 0x399fc8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x399fc4) {
            ctx->pc = 0x399FFCu;
            goto label_399ffc;
        }
    }
    ctx->pc = 0x399FCCu;
label_399fcc:
    // 0x399fcc: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x399fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_399fd0:
    // 0x399fd0: 0x8e630060  lw          $v1, 0x60($s3)
    ctx->pc = 0x399fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_399fd4:
    // 0x399fd4: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x399fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_399fd8:
    // 0x399fd8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x399fd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_399fdc:
    // 0x399fdc: 0x54400030  bnel        $v0, $zero, . + 4 + (0x30 << 2)
label_399fe0:
    if (ctx->pc == 0x399FE0u) {
        ctx->pc = 0x399FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FDCu;
        // 0x399fe0: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FE4u;
        goto label_399fe4;
    }
    ctx->pc = 0x399FDCu;
    {
        const bool branch_taken_0x399fdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399fdc) {
            ctx->pc = 0x399FE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FDCu;
            // 0x399fe0: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x399FE4u;
label_399fe4:
    // 0x399fe4: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x399fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_399fe8:
    // 0x399fe8: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x399fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_399fec:
    // 0x399fec: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x399fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_399ff0:
    // 0x399ff0: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_399ff4:
    if (ctx->pc == 0x399FF4u) {
        ctx->pc = 0x399FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x399FF0u;
        // 0x399ff4: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x399FF8u;
        goto label_399ff8;
    }
    ctx->pc = 0x399FF0u;
    {
        const bool branch_taken_0x399ff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x399ff0) {
            ctx->pc = 0x399FF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x399FF0u;
            // 0x399ff4: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x399FF8u;
label_399ff8:
    // 0x399ff8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x399ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_399ffc:
    // 0x399ffc: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x399ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_39a000:
    // 0x39a000: 0x10000027  b           . + 4 + (0x27 << 2)
label_39a004:
    if (ctx->pc == 0x39A004u) {
        ctx->pc = 0x39A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A000u;
        // 0x39a004: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A008u;
        goto label_39a008;
    }
    ctx->pc = 0x39A000u;
    {
        const bool branch_taken_0x39a000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A000u;
        // 0x39a004: 0xae600050  sw          $zero, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a000) {
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x39A008u;
label_39a008:
    // 0x39a008: 0x1602001f  bne         $s0, $v0, . + 4 + (0x1F << 2)
label_39a00c:
    if (ctx->pc == 0x39A00Cu) {
        ctx->pc = 0x39A010u;
        goto label_39a010;
    }
    ctx->pc = 0x39A008u;
    {
        const bool branch_taken_0x39a008 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x39a008) {
            ctx->pc = 0x39A088u;
            goto label_39a088;
        }
    }
    ctx->pc = 0x39A010u;
label_39a010:
    // 0x39a010: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x39a010u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_39a014:
    // 0x39a014: 0xc0e6a66  jal         func_39A998
label_39a018:
    if (ctx->pc == 0x39A018u) {
        ctx->pc = 0x39A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A014u;
        // 0x39a018: 0x26700028  addiu       $s0, $s3, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A01Cu;
        goto label_39a01c;
    }
    ctx->pc = 0x39A014u;
    SET_GPR_U32(ctx, 31, 0x39A01Cu);
    ctx->pc = 0x39A018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A014u;
    // 0x39a018: 0x26700028  addiu       $s0, $s3, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A014u, 0x39A01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A01Cu;
label_39a01c:
    // 0x39a01c: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x39a01cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39a020:
    // 0x39a020: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39a020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a024:
    // 0x39a024: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a028:
    // 0x39a028: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39a02c:
    // 0x39a02c: 0x40f809  jalr        $v0
label_39a030:
    if (ctx->pc == 0x39A030u) {
        ctx->pc = 0x39A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A02Cu;
        // 0x39a030: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A034u;
        goto label_39a034;
    }
    ctx->pc = 0x39A02Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A034u);
        ctx->pc = 0x39A030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A02Cu;
        // 0x39a030: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A02Cu, 0x39A034u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A034u;
label_39a034:
    // 0x39a034: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39a034u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39a038:
    // 0x39a038: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x39a038u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_39a03c:
    // 0x39a03c: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39a040:
    // 0x39a040: 0x8c429cf8  lw          $v0, -0x6308($v0)
    ctx->pc = 0x39a040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941944)));
label_39a044:
    // 0x39a044: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_39a048:
    if (ctx->pc == 0x39A048u) {
        ctx->pc = 0x39A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A044u;
        // 0x39a048: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A04Cu;
        goto label_39a04c;
    }
    ctx->pc = 0x39A044u;
    {
        const bool branch_taken_0x39a044 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39A048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A044u;
        // 0x39a048: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a044) {
            ctx->pc = 0x39A068u;
            goto label_39a068;
        }
    }
    ctx->pc = 0x39A04Cu;
label_39a04c:
    // 0x39a04c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x39a04cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39a050:
    // 0x39a050: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39a054:
    if (ctx->pc == 0x39A054u) {
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A058u;
        goto label_39a058;
    }
    ctx->pc = 0x39A050u;
    {
        const bool branch_taken_0x39a050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A050u;
        // 0x39a054: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a050) {
            ctx->pc = 0x39A06Cu;
            goto label_39a06c;
        }
    }
    ctx->pc = 0x39A058u;
label_39a058:
    // 0x39a058: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a05c:
    // 0x39a05c: 0x10000010  b           . + 4 + (0x10 << 2)
label_39a060:
    if (ctx->pc == 0x39A060u) {
        ctx->pc = 0x39A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A05Cu;
        // 0x39a060: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A064u;
        goto label_39a064;
    }
    ctx->pc = 0x39A05Cu;
    {
        const bool branch_taken_0x39a05c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A05Cu;
        // 0x39a060: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a05c) {
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x39A064u;
label_39a064:
    // 0x39a064: 0x0  nop
    ctx->pc = 0x39a064u;
    // NOP
label_39a068:
    // 0x39a068: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x39a068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_39a06c:
    // 0x39a06c: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x39a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_39a070:
    // 0x39a070: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39a070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39a074:
    // 0x39a074: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_39a078:
    if (ctx->pc == 0x39A078u) {
        ctx->pc = 0x39A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A074u;
        // 0x39a078: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A07Cu;
        goto label_39a07c;
    }
    ctx->pc = 0x39A074u;
    {
        const bool branch_taken_0x39a074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a074) {
            ctx->pc = 0x39A078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A074u;
            // 0x39a078: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A0A4u;
            goto label_39a0a4;
        }
    }
    ctx->pc = 0x39A07Cu;
label_39a07c:
    // 0x39a07c: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x39a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39a080:
    // 0x39a080: 0x10000007  b           . + 4 + (0x7 << 2)
label_39a084:
    if (ctx->pc == 0x39A084u) {
        ctx->pc = 0x39A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A080u;
        // 0x39a084: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A088u;
        goto label_39a088;
    }
    ctx->pc = 0x39A080u;
    {
        const bool branch_taken_0x39a080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A080u;
        // 0x39a084: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a080) {
            ctx->pc = 0x39A0A0u;
            goto label_39a0a0;
        }
    }
    ctx->pc = 0x39A088u;
label_39a088:
    // 0x39a088: 0xc0e6a66  jal         func_39A998
label_39a08c:
    if (ctx->pc == 0x39A08Cu) {
        ctx->pc = 0x39A090u;
        goto label_39a090;
    }
    ctx->pc = 0x39A088u;
    SET_GPR_U32(ctx, 31, 0x39A090u);
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A088u, 0x39A090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A090u;
label_39a090:
    // 0x39a090: 0x10000004  b           . + 4 + (0x4 << 2)
label_39a094:
    if (ctx->pc == 0x39A094u) {
        ctx->pc = 0x39A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A090u;
        // 0x39a094: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A098u;
        goto label_39a098;
    }
    ctx->pc = 0x39A090u;
    {
        const bool branch_taken_0x39a090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A090u;
        // 0x39a094: 0x82630001  lb          $v1, 0x1($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a090) {
            ctx->pc = 0x39A0A4u;
            goto label_39a0a4;
        }
    }
    ctx->pc = 0x39A098u;
label_39a098:
    // 0x39a098: 0xc0e6a66  jal         func_39A998
label_39a09c:
    if (ctx->pc == 0x39A09Cu) {
        ctx->pc = 0x39A0A0u;
        goto label_39a0a0;
    }
    ctx->pc = 0x39A098u;
    SET_GPR_U32(ctx, 31, 0x39A0A0u);
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A098u, 0x39A0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0A0u;
label_39a0a0:
    // 0x39a0a0: 0x82630001  lb          $v1, 0x1($s3)
    ctx->pc = 0x39a0a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_39a0a4:
    // 0x39a0a4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a0a8:
    // 0x39a0a8: 0x10620094  beq         $v1, $v0, . + 4 + (0x94 << 2)
label_39a0ac:
    if (ctx->pc == 0x39A0ACu) {
        ctx->pc = 0x39A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0A8u;
        // 0x39a0ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0B0u;
        goto label_39a0b0;
    }
    ctx->pc = 0x39A0A8u;
    {
        const bool branch_taken_0x39a0a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x39A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0A8u;
        // 0x39a0ac: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0a8) {
            ctx->pc = 0x39A2FCu;
            goto label_39a2fc;
        }
    }
    ctx->pc = 0x39A0B0u;
label_39a0b0:
    // 0x39a0b0: 0xc0e6a60  jal         func_39A980
label_39a0b4:
    if (ctx->pc == 0x39A0B4u) {
        ctx->pc = 0x39A0B8u;
        goto label_39a0b8;
    }
    ctx->pc = 0x39A0B0u;
    SET_GPR_U32(ctx, 31, 0x39A0B8u);
    ctx->pc = 0x39A980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A980u, 0x39A0B0u, 0x39A0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0B8u;
label_39a0b8:
    // 0x39a0b8: 0x82620002  lb          $v0, 0x2($s3)
    ctx->pc = 0x39a0b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 2)));
label_39a0bc:
    // 0x39a0bc: 0x1440008c  bnez        $v0, . + 4 + (0x8C << 2)
label_39a0c0:
    if (ctx->pc == 0x39A0C0u) {
        ctx->pc = 0x39A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0BCu;
        // 0x39a0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0C4u;
        goto label_39a0c4;
    }
    ctx->pc = 0x39A0BCu;
    {
        const bool branch_taken_0x39a0bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0BCu;
        // 0x39a0c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0bc) {
            ctx->pc = 0x39A2F0u;
            goto label_39a2f0;
        }
    }
    ctx->pc = 0x39A0C4u;
label_39a0c4:
    // 0x39a0c4: 0xae600028  sw          $zero, 0x28($s3)
    ctx->pc = 0x39a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 0));
label_39a0c8:
    // 0x39a0c8: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x39a0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
label_39a0cc:
    // 0x39a0cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x39a0ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39a0d0:
    // 0x39a0d0: 0xc0e6a66  jal         func_39A998
label_39a0d4:
    if (ctx->pc == 0x39A0D4u) {
        ctx->pc = 0x39A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0D0u;
        // 0x39a0d4: 0xae60002c  sw          $zero, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0D8u;
        goto label_39a0d8;
    }
    ctx->pc = 0x39A0D0u;
    SET_GPR_U32(ctx, 31, 0x39A0D8u);
    ctx->pc = 0x39A0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A0D0u;
    // 0x39a0d4: 0xae60002c  sw          $zero, 0x2C($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A0D0u, 0x39A0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A0D8u;
label_39a0d8:
    // 0x39a0d8: 0x82620048  lb          $v0, 0x48($s3)
    ctx->pc = 0x39a0d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 72)));
label_39a0dc:
    // 0x39a0dc: 0x50510086  beql        $v0, $s1, . + 4 + (0x86 << 2)
label_39a0e0:
    if (ctx->pc == 0x39A0E0u) {
        ctx->pc = 0x39A0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0DCu;
        // 0x39a0e0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0E4u;
        goto label_39a0e4;
    }
    ctx->pc = 0x39A0DCu;
    {
        const bool branch_taken_0x39a0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x39a0dc) {
            ctx->pc = 0x39A0E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A0DCu;
            // 0x39a0e0: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A0E4u;
label_39a0e4:
    // 0x39a0e4: 0x8262004c  lb          $v0, 0x4C($s3)
    ctx->pc = 0x39a0e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 76)));
label_39a0e8:
    // 0x39a0e8: 0x50510083  beql        $v0, $s1, . + 4 + (0x83 << 2)
label_39a0ec:
    if (ctx->pc == 0x39A0ECu) {
        ctx->pc = 0x39A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0E8u;
        // 0x39a0ec: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0F0u;
        goto label_39a0f0;
    }
    ctx->pc = 0x39A0E8u;
    {
        const bool branch_taken_0x39a0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x39a0e8) {
            ctx->pc = 0x39A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A0E8u;
            // 0x39a0ec: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A0F0u;
label_39a0f0:
    // 0x39a0f0: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39a0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39a0f4:
    // 0x39a0f4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39a0f8:
    if (ctx->pc == 0x39A0F8u) {
        ctx->pc = 0x39A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0F4u;
        // 0x39a0f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A0FCu;
        goto label_39a0fc;
    }
    ctx->pc = 0x39A0F4u;
    {
        const bool branch_taken_0x39a0f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A0F4u;
        // 0x39a0f8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a0f4) {
            ctx->pc = 0x39A110u;
            goto label_39a110;
        }
    }
    ctx->pc = 0x39A0FCu;
label_39a0fc:
    // 0x39a0fc: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x39a0fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_39a100:
    // 0x39a100: 0xa2620001  sb          $v0, 0x1($s3)
    ctx->pc = 0x39a100u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
label_39a104:
    // 0x39a104: 0x1000007c  b           . + 4 + (0x7C << 2)
label_39a108:
    if (ctx->pc == 0x39A108u) {
        ctx->pc = 0x39A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A104u;
        // 0x39a108: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A10Cu;
        goto label_39a10c;
    }
    ctx->pc = 0x39A104u;
    {
        const bool branch_taken_0x39a104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A104u;
        // 0x39a108: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a104) {
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A10Cu;
label_39a10c:
    // 0x39a10c: 0x0  nop
    ctx->pc = 0x39a10cu;
    // NOP
label_39a110:
    // 0x39a110: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_39a114:
    if (ctx->pc == 0x39A114u) {
        ctx->pc = 0x39A118u;
        goto label_39a118;
    }
    ctx->pc = 0x39A110u;
    {
        const bool branch_taken_0x39a110 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x39a110) {
            ctx->pc = 0x39A124u;
            goto label_39a124;
        }
    }
    ctx->pc = 0x39A118u;
label_39a118:
    // 0x39a118: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x39a118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39a11c:
    // 0x39a11c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_39a120:
    if (ctx->pc == 0x39A120u) {
        ctx->pc = 0x39A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A11Cu;
        // 0x39a120: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A124u;
        goto label_39a124;
    }
    ctx->pc = 0x39A11Cu;
    {
        const bool branch_taken_0x39a11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a11c) {
            ctx->pc = 0x39A120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A11Cu;
            // 0x39a120: 0x8c420024  lw          $v0, 0x24($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A138u;
            goto label_39a138;
        }
    }
    ctx->pc = 0x39A124u;
label_39a124:
    // 0x39a124: 0xc0e67ae  jal         func_399EB8
label_39a128:
    if (ctx->pc == 0x39A128u) {
        ctx->pc = 0x39A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A124u;
        // 0x39a128: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A12Cu;
        goto label_39a12c;
    }
    ctx->pc = 0x39A124u;
    SET_GPR_U32(ctx, 31, 0x39A12Cu);
    ctx->pc = 0x39A128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A124u;
    // 0x39a128: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399EB8u;
    goto label_399eb8;
    ctx->pc = 0x39A12Cu;
label_39a12c:
    // 0x39a12c: 0x10000073  b           . + 4 + (0x73 << 2)
label_39a130:
    if (ctx->pc == 0x39A130u) {
        ctx->pc = 0x39A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A12Cu;
        // 0x39a130: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A134u;
        goto label_39a134;
    }
    ctx->pc = 0x39A12Cu;
    {
        const bool branch_taken_0x39a12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A12Cu;
        // 0x39a130: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a12c) {
            ctx->pc = 0x39A2FCu;
            goto label_39a2fc;
        }
    }
    ctx->pc = 0x39A134u;
label_39a134:
    // 0x39a134: 0x0  nop
    ctx->pc = 0x39a134u;
    // NOP
label_39a138:
    // 0x39a138: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39a138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a13c:
    // 0x39a13c: 0x40f809  jalr        $v0
label_39a140:
    if (ctx->pc == 0x39A140u) {
        ctx->pc = 0x39A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A13Cu;
        // 0x39a140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A144u;
        goto label_39a144;
    }
    ctx->pc = 0x39A13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A144u);
        ctx->pc = 0x39A140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A13Cu;
        // 0x39a140: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A13Cu, 0x39A144u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A144u;
label_39a144:
    // 0x39a144: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x39a144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_39a148:
    // 0x39a148: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x39a148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_39a14c:
    // 0x39a14c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x39a14cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_39a150:
    // 0x39a150: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x39a150u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_39a154:
    // 0x39a154: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_39a158:
    if (ctx->pc == 0x39A158u) {
        ctx->pc = 0x39A158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A154u;
        // 0x39a158: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A15Cu;
        goto label_39a15c;
    }
    ctx->pc = 0x39A154u;
    {
        const bool branch_taken_0x39a154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x39a154) {
            ctx->pc = 0x39A158u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A154u;
            // 0x39a158: 0x8e830000  lw          $v1, 0x0($s4) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A168u;
            goto label_39a168;
        }
    }
    ctx->pc = 0x39A15Cu;
label_39a15c:
    // 0x39a15c: 0x10000066  b           . + 4 + (0x66 << 2)
label_39a160:
    if (ctx->pc == 0x39A160u) {
        ctx->pc = 0x39A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A15Cu;
        // 0x39a160: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A164u;
        goto label_39a164;
    }
    ctx->pc = 0x39A15Cu;
    {
        const bool branch_taken_0x39a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A15Cu;
        // 0x39a160: 0xa2600002  sb          $zero, 0x2($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a15c) {
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A164u;
label_39a164:
    // 0x39a164: 0x0  nop
    ctx->pc = 0x39a164u;
    // NOP
label_39a168:
    // 0x39a168: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x39a168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_39a16c:
    // 0x39a16c: 0x8e66001c  lw          $a2, 0x1C($s3)
    ctx->pc = 0x39a16cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
label_39a170:
    // 0x39a170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a174:
    // 0x39a174: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x39a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_39a178:
    // 0x39a178: 0x40f809  jalr        $v0
label_39a17c:
    if (ctx->pc == 0x39A17Cu) {
        ctx->pc = 0x39A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A178u;
        // 0x39a17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A180u;
        goto label_39a180;
    }
    ctx->pc = 0x39A178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A180u);
        ctx->pc = 0x39A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A178u;
        // 0x39a17c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A178u, 0x39A180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A180u;
label_39a180:
    // 0x39a180: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x39a180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_39a184:
    // 0x39a184: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x39a184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39a188:
    // 0x39a188: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x39a188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a18c:
    // 0x39a18c: 0x8e67005c  lw          $a3, 0x5C($s3)
    ctx->pc = 0x39a18cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
label_39a190:
    // 0x39a190: 0x246407ff  addiu       $a0, $v1, 0x7FF
    ctx->pc = 0x39a190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 2047));
label_39a194:
    // 0x39a194: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x39a194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_39a198:
    // 0x39a198: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x39a198u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_39a19c:
    // 0x39a19c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x39a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_39a1a0:
    // 0x39a1a0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x39a1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_39a1a4:
    // 0x39a1a4: 0x382c3  sra         $s0, $v1, 11
    ctx->pc = 0x39a1a4u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 11));
label_39a1a8:
    // 0x39a1a8: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x39a1a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_39a1ac:
    // 0x39a1ac: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x39a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_39a1b0:
    // 0x39a1b0: 0xa3800a  movz        $s0, $a1, $v1
    ctx->pc = 0x39a1b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 5));
label_39a1b4:
    // 0x39a1b4: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x39a1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_39a1b8:
    // 0x39a1b8: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x39a1b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39a1bc:
    // 0x39a1bc: 0x8e680030  lw          $t0, 0x30($s3)
    ctx->pc = 0x39a1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_39a1c0:
    // 0x39a1c0: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x39a1c0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_39a1c4:
    // 0x39a1c4: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x39a1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39a1c8:
    // 0x39a1c8: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x39a1c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_39a1cc:
    // 0x39a1cc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x39a1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_39a1d0:
    // 0x39a1d0: 0xc0e88ba  jal         func_3A22E8
label_39a1d4:
    if (ctx->pc == 0x39A1D4u) {
        ctx->pc = 0x39A1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1D0u;
        // 0x39a1d4: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1D8u;
        goto label_39a1d8;
    }
    ctx->pc = 0x39A1D0u;
    SET_GPR_U32(ctx, 31, 0x39A1D8u);
    ctx->pc = 0x39A1D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A1D0u;
    // 0x39a1d4: 0x102800a  movz        $s0, $t0, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A22E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A22E8u, 0x39A1D0u, 0x39A1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A1D8u;
label_39a1d8:
    // 0x39a1d8: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x39a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
label_39a1dc:
    // 0x39a1dc: 0x8c64ad70  lw          $a0, -0x5290($v1)
    ctx->pc = 0x39a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294946160)));
label_39a1e0:
    // 0x39a1e0: 0x1491000b  bne         $a0, $s1, . + 4 + (0xB << 2)
label_39a1e4:
    if (ctx->pc == 0x39A1E4u) {
        ctx->pc = 0x39A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1E0u;
        // 0x39a1e4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1E8u;
        goto label_39a1e8;
    }
    ctx->pc = 0x39A1E0u;
    {
        const bool branch_taken_0x39a1e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 17));
        ctx->pc = 0x39A1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1E0u;
        // 0x39a1e4: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1e0) {
            ctx->pc = 0x39A210u;
            goto label_39a210;
        }
    }
    ctx->pc = 0x39A1E8u;
label_39a1e8:
    // 0x39a1e8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39a1ec:
    // 0x39a1ec: 0xac441e50  sw          $a0, 0x1E50($v0)
    ctx->pc = 0x39a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7760), GPR_U32(ctx, 4));
label_39a1f0:
    // 0x39a1f0: 0x82630003  lb          $v1, 0x3($s3)
    ctx->pc = 0x39a1f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_39a1f4:
    // 0x39a1f4: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_39a1f8:
    if (ctx->pc == 0x39A1F8u) {
        ctx->pc = 0x39A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1F4u;
        // 0x39a1f8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A1FCu;
        goto label_39a1fc;
    }
    ctx->pc = 0x39A1F4u;
    {
        const bool branch_taken_0x39a1f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x39A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1F4u;
        // 0x39a1f8: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1f4) {
            ctx->pc = 0x39A208u;
            goto label_39a208;
        }
    }
    ctx->pc = 0x39A1FCu;
label_39a1fc:
    // 0x39a1fc: 0x10000003  b           . + 4 + (0x3 << 2)
label_39a200:
    if (ctx->pc == 0x39A200u) {
        ctx->pc = 0x39A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1FCu;
        // 0x39a200: 0xa0401e54  sb          $zero, 0x1E54($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 7764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A204u;
        goto label_39a204;
    }
    ctx->pc = 0x39A1FCu;
    {
        const bool branch_taken_0x39a1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A1FCu;
        // 0x39a200: 0xa0401e54  sb          $zero, 0x1E54($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 7764), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a1fc) {
            ctx->pc = 0x39A20Cu;
            goto label_39a20c;
        }
    }
    ctx->pc = 0x39A204u;
label_39a204:
    // 0x39a204: 0x0  nop
    ctx->pc = 0x39a204u;
    // NOP
label_39a208:
    // 0x39a208: 0xa0441e54  sb          $a0, 0x1E54($v0)
    ctx->pc = 0x39a208u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7764), (uint8_t)GPR_U32(ctx, 4));
label_39a20c:
    // 0x39a20c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x39a20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_39a210:
    // 0x39a210: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x39a210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
label_39a214:
    // 0x39a214: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_39a218:
    // 0x39a218: 0x50a2000a  beql        $a1, $v0, . + 4 + (0xA << 2)
label_39a21c:
    if (ctx->pc == 0x39A21Cu) {
        ctx->pc = 0x39A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A218u;
        // 0x39a21c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A220u;
        goto label_39a220;
    }
    ctx->pc = 0x39A218u;
    {
        const bool branch_taken_0x39a218 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x39a218) {
            ctx->pc = 0x39A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A218u;
            // 0x39a21c: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A244u;
            goto label_39a244;
        }
    }
    ctx->pc = 0x39A220u;
label_39a220:
    // 0x39a220: 0x8e620038  lw          $v0, 0x38($s3)
    ctx->pc = 0x39a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
label_39a224:
    // 0x39a224: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x39a224u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
label_39a228:
    // 0x39a228: 0x244407ff  addiu       $a0, $v0, 0x7FF
    ctx->pc = 0x39a228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2047));
label_39a22c:
    // 0x39a22c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x39a22cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_39a230:
    // 0x39a230: 0x212c3  sra         $v0, $v0, 11
    ctx->pc = 0x39a230u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 11));
label_39a234:
    // 0x39a234: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x39a234u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_39a238:
    // 0x39a238: 0x202182a  slt         $v1, $s0, $v0
    ctx->pc = 0x39a238u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39a23c:
    // 0x39a23c: 0x43800a  movz        $s0, $v0, $v1
    ctx->pc = 0x39a23cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_39a240:
    // 0x39a240: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x39a240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_39a244:
    // 0x39a244: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x39a244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_39a248:
    // 0x39a248: 0xc0e88d4  jal         func_3A2350
label_39a24c:
    if (ctx->pc == 0x39A24Cu) {
        ctx->pc = 0x39A24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A248u;
        // 0x39a24c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A250u;
        goto label_39a250;
    }
    ctx->pc = 0x39A248u;
    SET_GPR_U32(ctx, 31, 0x39A250u);
    ctx->pc = 0x39A24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A248u;
    // 0x39a24c: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2350u, 0x39A248u, 0x39A250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A250u;
label_39a250:
    // 0x39a250: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x39a250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_39a254:
    // 0x39a254: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x39a254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_39a258:
    // 0x39a258: 0xae64002c  sw          $a0, 0x2C($s3)
    ctx->pc = 0x39a258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
label_39a25c:
    // 0x39a25c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x39a25cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_39a260:
    // 0x39a260: 0x1c400025  bgtz        $v0, . + 4 + (0x25 << 2)
label_39a264:
    if (ctx->pc == 0x39A264u) {
        ctx->pc = 0x39A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A260u;
        // 0x39a264: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A268u;
        goto label_39a268;
    }
    ctx->pc = 0x39A260u;
    {
        const bool branch_taken_0x39a260 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x39A264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A260u;
        // 0x39a264: 0xae620024  sw          $v0, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a260) {
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A268u;
label_39a268:
    // 0x39a268: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x39a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_39a26c:
    // 0x39a26c: 0x26700028  addiu       $s0, $s3, 0x28
    ctx->pc = 0x39a26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
label_39a270:
    // 0x39a270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x39a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_39a274:
    // 0x39a274: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39a274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39a278:
    // 0x39a278: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x39a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_39a27c:
    // 0x39a27c: 0x40f809  jalr        $v0
label_39a280:
    if (ctx->pc == 0x39A280u) {
        ctx->pc = 0x39A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A27Cu;
        // 0x39a280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A284u;
        goto label_39a284;
    }
    ctx->pc = 0x39A27Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39A284u);
        ctx->pc = 0x39A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A27Cu;
        // 0x39a280: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A27Cu, 0x39A284u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39A284u;
label_39a284:
    // 0x39a284: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39a284u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39a288:
    // 0x39a288: 0xae60002c  sw          $zero, 0x2C($s3)
    ctx->pc = 0x39a288u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 0));
label_39a28c:
    // 0x39a28c: 0xa2600002  sb          $zero, 0x2($s3)
    ctx->pc = 0x39a28cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 0));
label_39a290:
    // 0x39a290: 0xc0e890a  jal         func_3A2428
label_39a294:
    if (ctx->pc == 0x39A294u) {
        ctx->pc = 0x39A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A290u;
        // 0x39a294: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A298u;
        goto label_39a298;
    }
    ctx->pc = 0x39A290u;
    SET_GPR_U32(ctx, 31, 0x39A298u);
    ctx->pc = 0x39A294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39A290u;
    // 0x39a294: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2428u, 0x39A290u, 0x39A298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A298u;
label_39a298:
    // 0x39a298: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x39a298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_39a29c:
    // 0x39a29c: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_39a2a0:
    if (ctx->pc == 0x39A2A0u) {
        ctx->pc = 0x39A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A29Cu;
        // 0x39a2a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2A4u;
        goto label_39a2a4;
    }
    ctx->pc = 0x39A29Cu;
    {
        const bool branch_taken_0x39a29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x39a29c) {
            ctx->pc = 0x39A2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39A29Cu;
            // 0x39a2a0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39A2FCu;
            goto label_39a2fc;
        }
    }
    ctx->pc = 0x39A2A4u;
label_39a2a4:
    // 0x39a2a4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x39a2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_39a2a8:
    // 0x39a2a8: 0x8c429cf8  lw          $v0, -0x6308($v0)
    ctx->pc = 0x39a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294941944)));
label_39a2ac:
    // 0x39a2ac: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
label_39a2b0:
    if (ctx->pc == 0x39A2B0u) {
        ctx->pc = 0x39A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2ACu;
        // 0x39a2b0: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2B4u;
        goto label_39a2b4;
    }
    ctx->pc = 0x39A2ACu;
    {
        const bool branch_taken_0x39a2ac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x39A2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2ACu;
        // 0x39a2b0: 0x8e630050  lw          $v1, 0x50($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2ac) {
            ctx->pc = 0x39A2D0u;
            goto label_39a2d0;
        }
    }
    ctx->pc = 0x39A2B4u;
label_39a2b4:
    // 0x39a2b4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x39a2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39a2b8:
    // 0x39a2b8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_39a2bc:
    if (ctx->pc == 0x39A2BCu) {
        ctx->pc = 0x39A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2B8u;
        // 0x39a2bc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2C0u;
        goto label_39a2c0;
    }
    ctx->pc = 0x39A2B8u;
    {
        const bool branch_taken_0x39a2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2B8u;
        // 0x39a2bc: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2b8) {
            ctx->pc = 0x39A2D4u;
            goto label_39a2d4;
        }
    }
    ctx->pc = 0x39A2C0u;
label_39a2c0:
    // 0x39a2c0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x39a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39a2c4:
    // 0x39a2c4: 0x1000000c  b           . + 4 + (0xC << 2)
label_39a2c8:
    if (ctx->pc == 0x39A2C8u) {
        ctx->pc = 0x39A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2C4u;
        // 0x39a2c8: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2CCu;
        goto label_39a2cc;
    }
    ctx->pc = 0x39A2C4u;
    {
        const bool branch_taken_0x39a2c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2C4u;
        // 0x39a2c8: 0xa2620001  sb          $v0, 0x1($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2c4) {
            ctx->pc = 0x39A2F8u;
            goto label_39a2f8;
        }
    }
    ctx->pc = 0x39A2CCu;
label_39a2cc:
    // 0x39a2cc: 0x0  nop
    ctx->pc = 0x39a2ccu;
    // NOP
label_39a2d0:
    // 0x39a2d0: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x39a2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
label_39a2d4:
    // 0x39a2d4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x39a2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_39a2d8:
    // 0x39a2d8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x39a2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_39a2dc:
    // 0x39a2dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_39a2e0:
    if (ctx->pc == 0x39A2E0u) {
        ctx->pc = 0x39A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2DCu;
        // 0x39a2e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2E4u;
        goto label_39a2e4;
    }
    ctx->pc = 0x39A2DCu;
    {
        const bool branch_taken_0x39a2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39A2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2DCu;
        // 0x39a2e0: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2dc) {
            ctx->pc = 0x39A2FCu;
            goto label_39a2fc;
        }
    }
    ctx->pc = 0x39A2E4u;
label_39a2e4:
    // 0x39a2e4: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x39a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_39a2e8:
    // 0x39a2e8: 0x10000004  b           . + 4 + (0x4 << 2)
label_39a2ec:
    if (ctx->pc == 0x39A2ECu) {
        ctx->pc = 0x39A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2E8u;
        // 0x39a2ec: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A2F0u;
        goto label_39a2f0;
    }
    ctx->pc = 0x39A2E8u;
    {
        const bool branch_taken_0x39a2e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A2E8u;
        // 0x39a2ec: 0xae620050  sw          $v0, 0x50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39a2e8) {
            ctx->pc = 0x39A2FCu;
            goto label_39a2fc;
        }
    }
    ctx->pc = 0x39A2F0u;
label_39a2f0:
    // 0x39a2f0: 0xc0e6a66  jal         func_39A998
label_39a2f4:
    if (ctx->pc == 0x39A2F4u) {
        ctx->pc = 0x39A2F8u;
        goto label_39a2f8;
    }
    ctx->pc = 0x39A2F0u;
    SET_GPR_U32(ctx, 31, 0x39A2F8u);
    ctx->pc = 0x39A998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39A998u, 0x39A2F0u, 0x39A2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39A2F8u;
label_39a2f8:
    // 0x39a2f8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x39a2f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39a2fc:
    // 0x39a2fc: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x39a2fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_39a300:
    // 0x39a300: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x39a300u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_39a304:
    // 0x39a304: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x39a304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_39a308:
    // 0x39a308: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x39a308u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_39a30c:
    // 0x39a30c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x39a30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_39a310:
    // 0x39a310: 0x3e00008  jr          $ra
label_39a314:
    if (ctx->pc == 0x39A314u) {
        ctx->pc = 0x39A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A310u;
        // 0x39a314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39A318u;
        goto label_fallthrough_0x39a310;
    }
    ctx->pc = 0x39A310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39A310u;
        // 0x39a314: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39A310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x39a310:
    ctx->pc = 0x39A318u;
}
