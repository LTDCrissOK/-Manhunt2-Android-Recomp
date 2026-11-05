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

// Function: sub_0039B230
// Address: 0x39b230 - 0x39b408
void sub_0039B230_0x39b230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039B230_0x39b230");
#endif

    switch (ctx->pc) {
        case 0x39b230u: goto label_39b230;
        case 0x39b234u: goto label_39b234;
        case 0x39b238u: goto label_39b238;
        case 0x39b23cu: goto label_39b23c;
        case 0x39b240u: goto label_39b240;
        case 0x39b244u: goto label_39b244;
        case 0x39b248u: goto label_39b248;
        case 0x39b24cu: goto label_39b24c;
        case 0x39b250u: goto label_39b250;
        case 0x39b254u: goto label_39b254;
        case 0x39b258u: goto label_39b258;
        case 0x39b25cu: goto label_39b25c;
        case 0x39b260u: goto label_39b260;
        case 0x39b264u: goto label_39b264;
        case 0x39b268u: goto label_39b268;
        case 0x39b26cu: goto label_39b26c;
        case 0x39b270u: goto label_39b270;
        case 0x39b274u: goto label_39b274;
        case 0x39b278u: goto label_39b278;
        case 0x39b27cu: goto label_39b27c;
        case 0x39b280u: goto label_39b280;
        case 0x39b284u: goto label_39b284;
        case 0x39b288u: goto label_39b288;
        case 0x39b28cu: goto label_39b28c;
        case 0x39b290u: goto label_39b290;
        case 0x39b294u: goto label_39b294;
        case 0x39b298u: goto label_39b298;
        case 0x39b29cu: goto label_39b29c;
        case 0x39b2a0u: goto label_39b2a0;
        case 0x39b2a4u: goto label_39b2a4;
        case 0x39b2a8u: goto label_39b2a8;
        case 0x39b2acu: goto label_39b2ac;
        case 0x39b2b0u: goto label_39b2b0;
        case 0x39b2b4u: goto label_39b2b4;
        case 0x39b2b8u: goto label_39b2b8;
        case 0x39b2bcu: goto label_39b2bc;
        case 0x39b2c0u: goto label_39b2c0;
        case 0x39b2c4u: goto label_39b2c4;
        case 0x39b2c8u: goto label_39b2c8;
        case 0x39b2ccu: goto label_39b2cc;
        case 0x39b2d0u: goto label_39b2d0;
        case 0x39b2d4u: goto label_39b2d4;
        case 0x39b2d8u: goto label_39b2d8;
        case 0x39b2dcu: goto label_39b2dc;
        case 0x39b2e0u: goto label_39b2e0;
        case 0x39b2e4u: goto label_39b2e4;
        case 0x39b2e8u: goto label_39b2e8;
        case 0x39b2ecu: goto label_39b2ec;
        case 0x39b2f0u: goto label_39b2f0;
        case 0x39b2f4u: goto label_39b2f4;
        case 0x39b2f8u: goto label_39b2f8;
        case 0x39b2fcu: goto label_39b2fc;
        case 0x39b300u: goto label_39b300;
        case 0x39b304u: goto label_39b304;
        case 0x39b308u: goto label_39b308;
        case 0x39b30cu: goto label_39b30c;
        case 0x39b310u: goto label_39b310;
        case 0x39b314u: goto label_39b314;
        case 0x39b318u: goto label_39b318;
        case 0x39b31cu: goto label_39b31c;
        case 0x39b320u: goto label_39b320;
        case 0x39b324u: goto label_39b324;
        case 0x39b328u: goto label_39b328;
        case 0x39b32cu: goto label_39b32c;
        case 0x39b330u: goto label_39b330;
        case 0x39b334u: goto label_39b334;
        case 0x39b338u: goto label_39b338;
        case 0x39b33cu: goto label_39b33c;
        case 0x39b340u: goto label_39b340;
        case 0x39b344u: goto label_39b344;
        case 0x39b348u: goto label_39b348;
        case 0x39b34cu: goto label_39b34c;
        case 0x39b350u: goto label_39b350;
        case 0x39b354u: goto label_39b354;
        case 0x39b358u: goto label_39b358;
        case 0x39b35cu: goto label_39b35c;
        case 0x39b360u: goto label_39b360;
        case 0x39b364u: goto label_39b364;
        case 0x39b368u: goto label_39b368;
        case 0x39b36cu: goto label_39b36c;
        case 0x39b370u: goto label_39b370;
        case 0x39b374u: goto label_39b374;
        case 0x39b378u: goto label_39b378;
        case 0x39b37cu: goto label_39b37c;
        case 0x39b380u: goto label_39b380;
        case 0x39b384u: goto label_39b384;
        case 0x39b388u: goto label_39b388;
        case 0x39b38cu: goto label_39b38c;
        case 0x39b390u: goto label_39b390;
        case 0x39b394u: goto label_39b394;
        case 0x39b398u: goto label_39b398;
        case 0x39b39cu: goto label_39b39c;
        case 0x39b3a0u: goto label_39b3a0;
        case 0x39b3a4u: goto label_39b3a4;
        case 0x39b3a8u: goto label_39b3a8;
        case 0x39b3acu: goto label_39b3ac;
        case 0x39b3b0u: goto label_39b3b0;
        case 0x39b3b4u: goto label_39b3b4;
        case 0x39b3b8u: goto label_39b3b8;
        case 0x39b3bcu: goto label_39b3bc;
        case 0x39b3c0u: goto label_39b3c0;
        case 0x39b3c4u: goto label_39b3c4;
        case 0x39b3c8u: goto label_39b3c8;
        case 0x39b3ccu: goto label_39b3cc;
        case 0x39b3d0u: goto label_39b3d0;
        case 0x39b3d4u: goto label_39b3d4;
        case 0x39b3d8u: goto label_39b3d8;
        case 0x39b3dcu: goto label_39b3dc;
        case 0x39b3e0u: goto label_39b3e0;
        case 0x39b3e4u: goto label_39b3e4;
        case 0x39b3e8u: goto label_39b3e8;
        case 0x39b3ecu: goto label_39b3ec;
        case 0x39b3f0u: goto label_39b3f0;
        case 0x39b3f4u: goto label_39b3f4;
        case 0x39b3f8u: goto label_39b3f8;
        case 0x39b3fcu: goto label_39b3fc;
        case 0x39b400u: goto label_39b400;
        case 0x39b404u: goto label_39b404;
        default: break;
    }

    ctx->pc = 0x39b230u;

label_39b230:
    // 0x39b230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39b234:
    // 0x39b234: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x39b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_39b238:
    // 0x39b238: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39b238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39b23c:
    // 0x39b23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x39b23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_39b240:
    // 0x39b240: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x39b240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_39b244:
    // 0x39b244: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x39b244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_39b248:
    // 0x39b248: 0x1620000b  bnez        $s1, . + 4 + (0xB << 2)
label_39b24c:
    if (ctx->pc == 0x39B24Cu) {
        ctx->pc = 0x39B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B248u;
        // 0x39b24c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B250u;
        goto label_39b250;
    }
    ctx->pc = 0x39B248u;
    {
        const bool branch_taken_0x39b248 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B248u;
        // 0x39b24c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b248) {
            ctx->pc = 0x39B278u;
            goto label_39b278;
        }
    }
    ctx->pc = 0x39B250u;
label_39b250:
    // 0x39b250: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x39b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_39b254:
    // 0x39b254: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b254u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b258:
    // 0x39b258: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b258u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b25c:
    // 0x39b25c: 0x2484b2e0  addiu       $a0, $a0, -0x4D20
    ctx->pc = 0x39b25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947552));
label_39b260:
    // 0x39b260: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b260u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b264:
    // 0x39b264: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b264u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39b268:
    // 0x39b268: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b26c:
    // 0x39b26c: 0x80ec0fe  j           func_3B03F8
label_39b270:
    if (ctx->pc == 0x39B270u) {
        ctx->pc = 0x39B270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B26Cu;
        // 0x39b270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B274u;
        goto label_39b274;
    }
    ctx->pc = 0x39B26Cu;
    ctx->pc = 0x39B270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B26Cu;
    // 0x39b270: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B03F8u;
    sub_003B03F8_0x3b03f8(rdram, ctx, runtime); return;
    ctx->pc = 0x39B274u;
label_39b274:
    // 0x39b274: 0x0  nop
    ctx->pc = 0x39b274u;
    // NOP
label_39b278:
    // 0x39b278: 0xc0e6c62  jal         func_39B188
label_39b27c:
    if (ctx->pc == 0x39B27Cu) {
        ctx->pc = 0x39B280u;
        goto label_39b280;
    }
    ctx->pc = 0x39B278u;
    SET_GPR_U32(ctx, 31, 0x39B280u);
    ctx->pc = 0x39B188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B188u, 0x39B278u, 0x39B280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B280u;
label_39b280:
    // 0x39b280: 0xc0e6c6c  jal         func_39B1B0
label_39b284:
    if (ctx->pc == 0x39B284u) {
        ctx->pc = 0x39B284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B280u;
        // 0x39b284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B288u;
        goto label_39b288;
    }
    ctx->pc = 0x39B280u;
    SET_GPR_U32(ctx, 31, 0x39B288u);
    ctx->pc = 0x39B284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B280u;
    // 0x39b284: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B1B0u, 0x39B280u, 0x39B288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B288u;
label_39b288:
    // 0x39b288: 0xc0e6c76  jal         func_39B1D8
label_39b28c:
    if (ctx->pc == 0x39B28Cu) {
        ctx->pc = 0x39B28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B288u;
        // 0x39b28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B290u;
        goto label_39b290;
    }
    ctx->pc = 0x39B288u;
    SET_GPR_U32(ctx, 31, 0x39B290u);
    ctx->pc = 0x39B28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B288u;
    // 0x39b28c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B1D8u, 0x39B288u, 0x39B290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B290u;
label_39b290:
    // 0x39b290: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x39b290u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_39b294:
    // 0x39b294: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x39b294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_39b298:
    // 0x39b298: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
label_39b29c:
    if (ctx->pc == 0x39B29Cu) {
        ctx->pc = 0x39B29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B298u;
        // 0x39b29c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2A0u;
        goto label_39b2a0;
    }
    ctx->pc = 0x39B298u;
    {
        const bool branch_taken_0x39b298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x39b298) {
            ctx->pc = 0x39B29Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B298u;
            // 0x39b29c: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B2ACu;
            goto label_39b2ac;
        }
    }
    ctx->pc = 0x39B2A0u;
label_39b2a0:
    // 0x39b2a0: 0xc0e6e10  jal         func_39B840
label_39b2a4:
    if (ctx->pc == 0x39B2A4u) {
        ctx->pc = 0x39B2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2A0u;
        // 0x39b2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2A8u;
        goto label_39b2a8;
    }
    ctx->pc = 0x39B2A0u;
    SET_GPR_U32(ctx, 31, 0x39B2A8u);
    ctx->pc = 0x39B2A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2A0u;
    // 0x39b2a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B840u, 0x39B2A0u, 0x39B2A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2A8u;
label_39b2a8:
    // 0x39b2a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x39b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_39b2ac:
    // 0x39b2ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b2b0:
    if (ctx->pc == 0x39B2B0u) {
        ctx->pc = 0x39B2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2ACu;
        // 0x39b2b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2B4u;
        goto label_39b2b4;
    }
    ctx->pc = 0x39B2ACu;
    {
        const bool branch_taken_0x39b2ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2ac) {
            ctx->pc = 0x39B2B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B2ACu;
            // 0x39b2b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B2C0u;
            goto label_39b2c0;
        }
    }
    ctx->pc = 0x39B2B4u;
label_39b2b4:
    // 0x39b2b4: 0xc0e5f0e  jal         func_397C38
label_39b2b8:
    if (ctx->pc == 0x39B2B8u) {
        ctx->pc = 0x39B2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2B4u;
        // 0x39b2b8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2BCu;
        goto label_39b2bc;
    }
    ctx->pc = 0x39B2B4u;
    SET_GPR_U32(ctx, 31, 0x39B2BCu);
    ctx->pc = 0x39B2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2B4u;
    // 0x39b2b8: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C38u, 0x39B2B4u, 0x39B2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2BCu;
label_39b2bc:
    // 0x39b2bc: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x39b2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_39b2c0:
    // 0x39b2c0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b2c4:
    if (ctx->pc == 0x39B2C4u) {
        ctx->pc = 0x39B2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C0u;
        // 0x39b2c4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2C8u;
        goto label_39b2c8;
    }
    ctx->pc = 0x39B2C0u;
    {
        const bool branch_taken_0x39b2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2c0) {
            ctx->pc = 0x39B2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B2C0u;
            // 0x39b2c4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B2D4u;
            goto label_39b2d4;
        }
    }
    ctx->pc = 0x39B2C8u;
label_39b2c8:
    // 0x39b2c8: 0xc0e601a  jal         func_398068
label_39b2cc:
    if (ctx->pc == 0x39B2CCu) {
        ctx->pc = 0x39B2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2C8u;
        // 0x39b2cc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2D0u;
        goto label_39b2d0;
    }
    ctx->pc = 0x39B2C8u;
    SET_GPR_U32(ctx, 31, 0x39B2D0u);
    ctx->pc = 0x39B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2C8u;
    // 0x39b2cc: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398068u, 0x39B2C8u, 0x39B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2D0u;
label_39b2d0:
    // 0x39b2d0: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x39b2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_39b2d4:
    // 0x39b2d4: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_39b2d8:
    if (ctx->pc == 0x39B2D8u) {
        ctx->pc = 0x39B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2D4u;
        // 0x39b2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2DCu;
        goto label_39b2dc;
    }
    ctx->pc = 0x39B2D4u;
    {
        const bool branch_taken_0x39b2d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2D4u;
        // 0x39b2d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b2d4) {
            ctx->pc = 0x39B2F4u;
            goto label_39b2f4;
        }
    }
    ctx->pc = 0x39B2DCu;
label_39b2dc:
    // 0x39b2dc: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x39b2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_39b2e0:
    // 0x39b2e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39b2e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b2e4:
    // 0x39b2e4: 0xc0e6780  jal         func_399E00
label_39b2e8:
    if (ctx->pc == 0x39B2E8u) {
        ctx->pc = 0x39B2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2E4u;
        // 0x39b2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2ECu;
        goto label_39b2ec;
    }
    ctx->pc = 0x39B2E4u;
    SET_GPR_U32(ctx, 31, 0x39B2ECu);
    ctx->pc = 0x39B2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2E4u;
    // 0x39b2e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399E00u, 0x39B2E4u, 0x39B2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2ECu;
label_39b2ec:
    // 0x39b2ec: 0xc0e65d6  jal         func_399758
label_39b2f0:
    if (ctx->pc == 0x39B2F0u) {
        ctx->pc = 0x39B2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B2ECu;
        // 0x39b2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B2F4u;
        goto label_39b2f4;
    }
    ctx->pc = 0x39B2ECu;
    SET_GPR_U32(ctx, 31, 0x39B2F4u);
    ctx->pc = 0x39B2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B2ECu;
    // 0x39b2f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x399758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x399758u, 0x39B2ECu, 0x39B2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B2F4u;
label_39b2f4:
    // 0x39b2f4: 0x8e240094  lw          $a0, 0x94($s1)
    ctx->pc = 0x39b2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
label_39b2f8:
    // 0x39b2f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39b2fc:
    if (ctx->pc == 0x39B2FCu) {
        ctx->pc = 0x39B300u;
        goto label_39b300;
    }
    ctx->pc = 0x39B2F8u;
    {
        const bool branch_taken_0x39b2f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b2f8) {
            ctx->pc = 0x39B308u;
            goto label_39b308;
        }
    }
    ctx->pc = 0x39B300u;
label_39b300:
    // 0x39b300: 0xc0e9b64  jal         func_3A6D90
label_39b304:
    if (ctx->pc == 0x39B304u) {
        ctx->pc = 0x39B304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B300u;
        // 0x39b304: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B308u;
        goto label_39b308;
    }
    ctx->pc = 0x39B300u;
    SET_GPR_U32(ctx, 31, 0x39B308u);
    ctx->pc = 0x39B304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B300u;
    // 0x39b304: 0xae200094  sw          $zero, 0x94($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6D90u, 0x39B300u, 0x39B308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B308u;
label_39b308:
    // 0x39b308: 0xc0ebe50  jal         func_3AF940
label_39b30c:
    if (ctx->pc == 0x39B30Cu) {
        ctx->pc = 0x39B310u;
        goto label_39b310;
    }
    ctx->pc = 0x39B308u;
    SET_GPR_U32(ctx, 31, 0x39B310u);
    ctx->pc = 0x3AF940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AF940u, 0x39B308u, 0x39B310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B310u;
label_39b310:
    // 0x39b310: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x39b310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_39b314:
    // 0x39b314: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39b318:
    if (ctx->pc == 0x39B318u) {
        ctx->pc = 0x39B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B314u;
        // 0x39b318: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B31Cu;
        goto label_39b31c;
    }
    ctx->pc = 0x39B314u;
    {
        const bool branch_taken_0x39b314 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b314) {
            ctx->pc = 0x39B318u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B314u;
            // 0x39b318: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B334u;
            goto label_39b334;
        }
    }
    ctx->pc = 0x39B31Cu;
label_39b31c:
    // 0x39b31c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b320:
    // 0x39b320: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x39b320u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_39b324:
    // 0x39b324: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39b324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39b328:
    // 0x39b328: 0x40f809  jalr        $v0
label_39b32c:
    if (ctx->pc == 0x39B32Cu) {
        ctx->pc = 0x39B330u;
        goto label_39b330;
    }
    ctx->pc = 0x39B328u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B330u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B328u, 0x39B330u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B330u;
label_39b330:
    // 0x39b330: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x39b330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_39b334:
    // 0x39b334: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_39b338:
    if (ctx->pc == 0x39B338u) {
        ctx->pc = 0x39B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B334u;
        // 0x39b338: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B33Cu;
        goto label_39b33c;
    }
    ctx->pc = 0x39B334u;
    {
        const bool branch_taken_0x39b334 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x39B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B334u;
        // 0x39b338: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b334) {
            ctx->pc = 0x39B3C0u;
            goto label_39b3c0;
        }
    }
    ctx->pc = 0x39B33Cu;
label_39b33c:
    // 0x39b33c: 0x26320080  addiu       $s2, $s1, 0x80
    ctx->pc = 0x39b33cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_39b340:
    // 0x39b340: 0x26300078  addiu       $s0, $s1, 0x78
    ctx->pc = 0x39b340u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_39b344:
    // 0x39b344: 0x0  nop
    ctx->pc = 0x39b344u;
    // NOP
label_39b348:
    // 0x39b348: 0x8e03ffa0  lw          $v1, -0x60($s0)
    ctx->pc = 0x39b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967200)));
label_39b34c:
    // 0x39b34c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_39b350:
    if (ctx->pc == 0x39B350u) {
        ctx->pc = 0x39B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B34Cu;
        // 0x39b350: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B354u;
        goto label_39b354;
    }
    ctx->pc = 0x39B34Cu;
    {
        const bool branch_taken_0x39b34c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x39B350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B34Cu;
        // 0x39b350: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b34c) {
            ctx->pc = 0x39B368u;
            goto label_39b368;
        }
    }
    ctx->pc = 0x39B354u;
label_39b354:
    // 0x39b354: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x39b354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_39b358:
    // 0x39b358: 0xae00ffa0  sw          $zero, -0x60($s0)
    ctx->pc = 0x39b358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294967200), GPR_U32(ctx, 0));
label_39b35c:
    // 0x39b35c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39b35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39b360:
    // 0x39b360: 0x40f809  jalr        $v0
label_39b364:
    if (ctx->pc == 0x39B364u) {
        ctx->pc = 0x39B368u;
        goto label_39b368;
    }
    ctx->pc = 0x39B360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B368u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B360u, 0x39B368u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B368u;
label_39b368:
    // 0x39b368: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x39b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_39b36c:
    // 0x39b36c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39b370:
    if (ctx->pc == 0x39B370u) {
        ctx->pc = 0x39B370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B36Cu;
        // 0x39b370: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B374u;
        goto label_39b374;
    }
    ctx->pc = 0x39B36Cu;
    {
        const bool branch_taken_0x39b36c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b36c) {
            ctx->pc = 0x39B370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B36Cu;
            // 0x39b370: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B38Cu;
            goto label_39b38c;
        }
    }
    ctx->pc = 0x39B374u;
label_39b374:
    // 0x39b374: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b378:
    // 0x39b378: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x39b378u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_39b37c:
    // 0x39b37c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39b380:
    // 0x39b380: 0x40f809  jalr        $v0
label_39b384:
    if (ctx->pc == 0x39B384u) {
        ctx->pc = 0x39B388u;
        goto label_39b388;
    }
    ctx->pc = 0x39B380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B388u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B380u, 0x39B388u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B388u;
label_39b388:
    // 0x39b388: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x39b388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_39b38c:
    // 0x39b38c: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_39b390:
    if (ctx->pc == 0x39B390u) {
        ctx->pc = 0x39B390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B38Cu;
        // 0x39b390: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B394u;
        goto label_39b394;
    }
    ctx->pc = 0x39B38Cu;
    {
        const bool branch_taken_0x39b38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b38c) {
            ctx->pc = 0x39B390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B38Cu;
            // 0x39b390: 0x82220003  lb          $v0, 0x3($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B3ACu;
            goto label_39b3ac;
        }
    }
    ctx->pc = 0x39B394u;
label_39b394:
    // 0x39b394: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x39b394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39b398:
    // 0x39b398: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x39b398u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_39b39c:
    // 0x39b39c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x39b39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_39b3a0:
    // 0x39b3a0: 0x40f809  jalr        $v0
label_39b3a4:
    if (ctx->pc == 0x39B3A4u) {
        ctx->pc = 0x39B3A8u;
        goto label_39b3a8;
    }
    ctx->pc = 0x39B3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39B3A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39B3A0u, 0x39B3A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39B3A8u;
label_39b3a8:
    // 0x39b3a8: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x39b3a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_39b3ac:
    // 0x39b3ac: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x39b3acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_39b3b0:
    // 0x39b3b0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x39b3b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_39b3b4:
    // 0x39b3b4: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x39b3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_39b3b8:
    // 0x39b3b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_39b3bc:
    if (ctx->pc == 0x39B3BCu) {
        ctx->pc = 0x39B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3B8u;
        // 0x39b3bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3C0u;
        goto label_39b3c0;
    }
    ctx->pc = 0x39B3B8u;
    {
        const bool branch_taken_0x39b3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x39B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3B8u;
        // 0x39b3bc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39b3b8) {
            ctx->pc = 0x39B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_39b348;
        }
    }
    ctx->pc = 0x39B3C0u;
label_39b3c0:
    // 0x39b3c0: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x39b3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_39b3c4:
    // 0x39b3c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_39b3c8:
    if (ctx->pc == 0x39B3C8u) {
        ctx->pc = 0x39B3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3C4u;
        // 0x39b3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3CCu;
        goto label_39b3cc;
    }
    ctx->pc = 0x39B3C4u;
    {
        const bool branch_taken_0x39b3c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39b3c4) {
            ctx->pc = 0x39B3C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39B3C4u;
            // 0x39b3c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39B3D8u;
            goto label_39b3d8;
        }
    }
    ctx->pc = 0x39B3CCu;
label_39b3cc:
    // 0x39b3cc: 0xc0eb4c8  jal         func_3AD320
label_39b3d0:
    if (ctx->pc == 0x39B3D0u) {
        ctx->pc = 0x39B3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3CCu;
        // 0x39b3d0: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3D4u;
        goto label_39b3d4;
    }
    ctx->pc = 0x39B3CCu;
    SET_GPR_U32(ctx, 31, 0x39B3D4u);
    ctx->pc = 0x39B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3CCu;
    // 0x39b3d0: 0xae200074  sw          $zero, 0x74($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD320u, 0x39B3CCu, 0x39B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3D4u;
label_39b3d4:
    // 0x39b3d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39b3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39b3d8:
    // 0x39b3d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x39b3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_39b3dc:
    // 0x39b3dc: 0xc0efab3  jal         func_3BEACC
label_39b3e0:
    if (ctx->pc == 0x39B3E0u) {
        ctx->pc = 0x39B3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3DCu;
        // 0x39b3e0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B3E4u;
        goto label_39b3e4;
    }
    ctx->pc = 0x39B3DCu;
    SET_GPR_U32(ctx, 31, 0x39B3E4u);
    ctx->pc = 0x39B3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3DCu;
    // 0x39b3e0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x39B3DCu, 0x39B3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39B3E4u;
label_39b3e4:
    // 0x39b3e4: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x39b3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_39b3e8:
    // 0x39b3e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x39b3e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_39b3ec:
    // 0x39b3ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x39b3ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_39b3f0:
    // 0x39b3f0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x39b3f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_39b3f4:
    // 0x39b3f4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x39b3f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_39b3f8:
    // 0x39b3f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39b3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39b3fc:
    // 0x39b3fc: 0x80ebe56  j           func_3AF958
label_39b400:
    if (ctx->pc == 0x39B400u) {
        ctx->pc = 0x39B400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39B3FCu;
        // 0x39b400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39B404u;
        goto label_39b404;
    }
    ctx->pc = 0x39B3FCu;
    ctx->pc = 0x39B400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x39B3FCu;
    // 0x39b400: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AF958u;
    sub_003AF958_0x3af958(rdram, ctx, runtime); return;
    ctx->pc = 0x39B404u;
label_39b404:
    // 0x39b404: 0x0  nop
    ctx->pc = 0x39b404u;
    // NOP
    ctx->pc = 0x39b408u;
}
