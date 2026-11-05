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

// Function: sub_003EA2A0
// Address: 0x3ea2a0 - 0x3ea3d8
void sub_003EA2A0_0x3ea2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA2A0_0x3ea2a0");
#endif

    switch (ctx->pc) {
        case 0x3ea2a0u: goto label_3ea2a0;
        case 0x3ea2a4u: goto label_3ea2a4;
        case 0x3ea2a8u: goto label_3ea2a8;
        case 0x3ea2acu: goto label_3ea2ac;
        case 0x3ea2b0u: goto label_3ea2b0;
        case 0x3ea2b4u: goto label_3ea2b4;
        case 0x3ea2b8u: goto label_3ea2b8;
        case 0x3ea2bcu: goto label_3ea2bc;
        case 0x3ea2c0u: goto label_3ea2c0;
        case 0x3ea2c4u: goto label_3ea2c4;
        case 0x3ea2c8u: goto label_3ea2c8;
        case 0x3ea2ccu: goto label_3ea2cc;
        case 0x3ea2d0u: goto label_3ea2d0;
        case 0x3ea2d4u: goto label_3ea2d4;
        case 0x3ea2d8u: goto label_3ea2d8;
        case 0x3ea2dcu: goto label_3ea2dc;
        case 0x3ea2e0u: goto label_3ea2e0;
        case 0x3ea2e4u: goto label_3ea2e4;
        case 0x3ea2e8u: goto label_3ea2e8;
        case 0x3ea2ecu: goto label_3ea2ec;
        case 0x3ea2f0u: goto label_3ea2f0;
        case 0x3ea2f4u: goto label_3ea2f4;
        case 0x3ea2f8u: goto label_3ea2f8;
        case 0x3ea2fcu: goto label_3ea2fc;
        case 0x3ea300u: goto label_3ea300;
        case 0x3ea304u: goto label_3ea304;
        case 0x3ea308u: goto label_3ea308;
        case 0x3ea30cu: goto label_3ea30c;
        case 0x3ea310u: goto label_3ea310;
        case 0x3ea314u: goto label_3ea314;
        case 0x3ea318u: goto label_3ea318;
        case 0x3ea31cu: goto label_3ea31c;
        case 0x3ea320u: goto label_3ea320;
        case 0x3ea324u: goto label_3ea324;
        case 0x3ea328u: goto label_3ea328;
        case 0x3ea32cu: goto label_3ea32c;
        case 0x3ea330u: goto label_3ea330;
        case 0x3ea334u: goto label_3ea334;
        case 0x3ea338u: goto label_3ea338;
        case 0x3ea33cu: goto label_3ea33c;
        case 0x3ea340u: goto label_3ea340;
        case 0x3ea344u: goto label_3ea344;
        case 0x3ea348u: goto label_3ea348;
        case 0x3ea34cu: goto label_3ea34c;
        case 0x3ea350u: goto label_3ea350;
        case 0x3ea354u: goto label_3ea354;
        case 0x3ea358u: goto label_3ea358;
        case 0x3ea35cu: goto label_3ea35c;
        case 0x3ea360u: goto label_3ea360;
        case 0x3ea364u: goto label_3ea364;
        case 0x3ea368u: goto label_3ea368;
        case 0x3ea36cu: goto label_3ea36c;
        case 0x3ea370u: goto label_3ea370;
        case 0x3ea374u: goto label_3ea374;
        case 0x3ea378u: goto label_3ea378;
        case 0x3ea37cu: goto label_3ea37c;
        case 0x3ea380u: goto label_3ea380;
        case 0x3ea384u: goto label_3ea384;
        case 0x3ea388u: goto label_3ea388;
        case 0x3ea38cu: goto label_3ea38c;
        case 0x3ea390u: goto label_3ea390;
        case 0x3ea394u: goto label_3ea394;
        case 0x3ea398u: goto label_3ea398;
        case 0x3ea39cu: goto label_3ea39c;
        case 0x3ea3a0u: goto label_3ea3a0;
        case 0x3ea3a4u: goto label_3ea3a4;
        case 0x3ea3a8u: goto label_3ea3a8;
        case 0x3ea3acu: goto label_3ea3ac;
        case 0x3ea3b0u: goto label_3ea3b0;
        case 0x3ea3b4u: goto label_3ea3b4;
        case 0x3ea3b8u: goto label_3ea3b8;
        case 0x3ea3bcu: goto label_3ea3bc;
        case 0x3ea3c0u: goto label_3ea3c0;
        case 0x3ea3c4u: goto label_3ea3c4;
        case 0x3ea3c8u: goto label_3ea3c8;
        case 0x3ea3ccu: goto label_3ea3cc;
        case 0x3ea3d0u: goto label_3ea3d0;
        case 0x3ea3d4u: goto label_3ea3d4;
        default: break;
    }

    ctx->pc = 0x3ea2a0u;

label_3ea2a0:
    // 0x3ea2a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea2a4:
    // 0x3ea2a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea2a8:
    // 0x3ea2a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea2ac:
    // 0x3ea2ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea2acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea2b0:
    // 0x3ea2b0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea2b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea2b4:
    // 0x3ea2b4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea2b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea2b8:
    // 0x3ea2b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea2bc:
    // 0x3ea2bc: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea2c0:
    if (ctx->pc == 0x3EA2C0u) {
        ctx->pc = 0x3EA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2BCu;
        // 0x3ea2c0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA2C4u;
        goto label_3ea2c4;
    }
    ctx->pc = 0x3EA2BCu;
    {
        const bool branch_taken_0x3ea2bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2BCu;
        // 0x3ea2c0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea2bc) {
            ctx->pc = 0x3EA33Cu;
            goto label_3ea33c;
        }
    }
    ctx->pc = 0x3EA2C4u;
label_3ea2c4:
    // 0x3ea2c4: 0x0  nop
    ctx->pc = 0x3ea2c4u;
    // NOP
label_3ea2c8:
    // 0x3ea2c8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea2cc:
    // 0x3ea2cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea2d0:
    // 0x3ea2d0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea2d4:
    if (ctx->pc == 0x3EA2D4u) {
        ctx->pc = 0x3EA2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2D0u;
        // 0x3ea2d4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA2D8u;
        goto label_3ea2d8;
    }
    ctx->pc = 0x3EA2D0u;
    {
        const bool branch_taken_0x3ea2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea2d0) {
            ctx->pc = 0x3EA2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA2D0u;
            // 0x3ea2d4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA32Cu;
            goto label_3ea32c;
        }
    }
    ctx->pc = 0x3EA2D8u;
label_3ea2d8:
    // 0x3ea2d8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea2dc:
    // 0x3ea2dc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea2dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea2e0:
    // 0x3ea2e0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea2e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea2e4:
    // 0x3ea2e4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea2e8:
    if (ctx->pc == 0x3EA2E8u) {
        ctx->pc = 0x3EA2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2E4u;
        // 0x3ea2e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA2ECu;
        goto label_3ea2ec;
    }
    ctx->pc = 0x3EA2E4u;
    {
        const bool branch_taken_0x3ea2e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea2e4) {
            ctx->pc = 0x3EA2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA2E4u;
            // 0x3ea2e8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA318u;
            goto label_3ea318;
        }
    }
    ctx->pc = 0x3EA2ECu;
label_3ea2ec:
    // 0x3ea2ec: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea2ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea2f0:
    // 0x3ea2f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea2f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea2f4:
    // 0x3ea2f4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea2f8:
    // 0x3ea2f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea2fc:
    // 0x3ea2fc: 0x40f809  jalr        $v0
label_3ea300:
    if (ctx->pc == 0x3EA300u) {
        ctx->pc = 0x3EA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2FCu;
        // 0x3ea300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA304u;
        goto label_3ea304;
    }
    ctx->pc = 0x3EA2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA304u);
        ctx->pc = 0x3EA300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA2FCu;
        // 0x3ea300: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA2FCu, 0x3EA304u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA304u;
label_3ea304:
    // 0x3ea304: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea308:
    // 0x3ea308: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea30c:
    // 0x3ea30c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea310:
    if (ctx->pc == 0x3EA310u) {
        ctx->pc = 0x3EA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA30Cu;
        // 0x3ea310: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA314u;
        goto label_3ea314;
    }
    ctx->pc = 0x3EA30Cu;
    {
        const bool branch_taken_0x3ea30c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA30Cu;
        // 0x3ea310: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea30c) {
            ctx->pc = 0x3EA2F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea2f0;
        }
    }
    ctx->pc = 0x3EA314u;
label_3ea314:
    // 0x3ea314: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea318:
    // 0x3ea318: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea31c:
    // 0x3ea31c: 0xc0f528a  jal         func_3D4A28
label_3ea320:
    if (ctx->pc == 0x3EA320u) {
        ctx->pc = 0x3EA320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA31Cu;
        // 0x3ea320: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA324u;
        goto label_3ea324;
    }
    ctx->pc = 0x3EA31Cu;
    SET_GPR_U32(ctx, 31, 0x3EA324u);
    ctx->pc = 0x3EA320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA31Cu;
    // 0x3ea320: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA31Cu, 0x3EA324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA324u;
label_3ea324:
    // 0x3ea324: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea328:
    // 0x3ea328: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea328u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea32c:
    // 0x3ea32c: 0xc0f5222  jal         func_3D4888
label_3ea330:
    if (ctx->pc == 0x3EA330u) {
        ctx->pc = 0x3EA330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA32Cu;
        // 0x3ea330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA334u;
        goto label_3ea334;
    }
    ctx->pc = 0x3EA32Cu;
    SET_GPR_U32(ctx, 31, 0x3EA334u);
    ctx->pc = 0x3EA330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA32Cu;
    // 0x3ea330: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA32Cu, 0x3EA334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA334u;
label_3ea334:
    // 0x3ea334: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea338:
    if (ctx->pc == 0x3EA338u) {
        ctx->pc = 0x3EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA334u;
        // 0x3ea338: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA33Cu;
        goto label_3ea33c;
    }
    ctx->pc = 0x3EA334u;
    {
        const bool branch_taken_0x3ea334 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA334u;
        // 0x3ea338: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea334) {
            ctx->pc = 0x3EA2C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea2c8;
        }
    }
    ctx->pc = 0x3EA33Cu;
label_3ea33c:
    // 0x3ea33c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea340:
    // 0x3ea340: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea344:
    if (ctx->pc == 0x3EA344u) {
        ctx->pc = 0x3EA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA340u;
        // 0x3ea344: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA348u;
        goto label_3ea348;
    }
    ctx->pc = 0x3EA340u;
    {
        const bool branch_taken_0x3ea340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA340u;
        // 0x3ea344: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea340) {
            ctx->pc = 0x3EA3BCu;
            goto label_3ea3bc;
        }
    }
    ctx->pc = 0x3EA348u;
label_3ea348:
    // 0x3ea348: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea34c:
    // 0x3ea34c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea350:
    // 0x3ea350: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea354:
    if (ctx->pc == 0x3EA354u) {
        ctx->pc = 0x3EA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA350u;
        // 0x3ea354: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA358u;
        goto label_3ea358;
    }
    ctx->pc = 0x3EA350u;
    {
        const bool branch_taken_0x3ea350 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea350) {
            ctx->pc = 0x3EA354u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA350u;
            // 0x3ea354: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA3ACu;
            goto label_3ea3ac;
        }
    }
    ctx->pc = 0x3EA358u;
label_3ea358:
    // 0x3ea358: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea35c:
    // 0x3ea35c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea35cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea360:
    // 0x3ea360: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea364:
    // 0x3ea364: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea368:
    if (ctx->pc == 0x3EA368u) {
        ctx->pc = 0x3EA368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA364u;
        // 0x3ea368: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA36Cu;
        goto label_3ea36c;
    }
    ctx->pc = 0x3EA364u;
    {
        const bool branch_taken_0x3ea364 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea364) {
            ctx->pc = 0x3EA368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA364u;
            // 0x3ea368: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA398u;
            goto label_3ea398;
        }
    }
    ctx->pc = 0x3EA36Cu;
label_3ea36c:
    // 0x3ea36c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea36cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea370:
    // 0x3ea370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea374:
    // 0x3ea374: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea378:
    // 0x3ea378: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea37c:
    // 0x3ea37c: 0x40f809  jalr        $v0
label_3ea380:
    if (ctx->pc == 0x3EA380u) {
        ctx->pc = 0x3EA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA37Cu;
        // 0x3ea380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA384u;
        goto label_3ea384;
    }
    ctx->pc = 0x3EA37Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA384u);
        ctx->pc = 0x3EA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA37Cu;
        // 0x3ea380: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA37Cu, 0x3EA384u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA384u;
label_3ea384:
    // 0x3ea384: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea388:
    // 0x3ea388: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea38c:
    // 0x3ea38c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea390:
    if (ctx->pc == 0x3EA390u) {
        ctx->pc = 0x3EA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA38Cu;
        // 0x3ea390: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA394u;
        goto label_3ea394;
    }
    ctx->pc = 0x3EA38Cu;
    {
        const bool branch_taken_0x3ea38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA38Cu;
        // 0x3ea390: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea38c) {
            ctx->pc = 0x3EA370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea370;
        }
    }
    ctx->pc = 0x3EA394u;
label_3ea394:
    // 0x3ea394: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea398:
    // 0x3ea398: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea39c:
    // 0x3ea39c: 0xc0f528a  jal         func_3D4A28
label_3ea3a0:
    if (ctx->pc == 0x3EA3A0u) {
        ctx->pc = 0x3EA3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA39Cu;
        // 0x3ea3a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3A4u;
        goto label_3ea3a4;
    }
    ctx->pc = 0x3EA39Cu;
    SET_GPR_U32(ctx, 31, 0x3EA3A4u);
    ctx->pc = 0x3EA3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA39Cu;
    // 0x3ea3a0: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA39Cu, 0x3EA3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3A4u;
label_3ea3a4:
    // 0x3ea3a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea3a8:
    // 0x3ea3a8: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea3ac:
    // 0x3ea3ac: 0xc0f5222  jal         func_3D4888
label_3ea3b0:
    if (ctx->pc == 0x3EA3B0u) {
        ctx->pc = 0x3EA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3ACu;
        // 0x3ea3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3B4u;
        goto label_3ea3b4;
    }
    ctx->pc = 0x3EA3ACu;
    SET_GPR_U32(ctx, 31, 0x3EA3B4u);
    ctx->pc = 0x3EA3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA3ACu;
    // 0x3ea3b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA3ACu, 0x3EA3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA3B4u;
label_3ea3b4:
    // 0x3ea3b4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea3b8:
    if (ctx->pc == 0x3EA3B8u) {
        ctx->pc = 0x3EA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3B4u;
        // 0x3ea3b8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3BCu;
        goto label_3ea3bc;
    }
    ctx->pc = 0x3EA3B4u;
    {
        const bool branch_taken_0x3ea3b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3B4u;
        // 0x3ea3b8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea3b4) {
            ctx->pc = 0x3EA348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea348;
        }
    }
    ctx->pc = 0x3EA3BCu;
label_3ea3bc:
    // 0x3ea3bc: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea3c0:
    // 0x3ea3c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea3c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea3c4:
    // 0x3ea3c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea3c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea3c8:
    // 0x3ea3c8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea3c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea3cc:
    // 0x3ea3cc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea3ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea3d0:
    // 0x3ea3d0: 0x3e00008  jr          $ra
label_3ea3d4:
    if (ctx->pc == 0x3EA3D4u) {
        ctx->pc = 0x3EA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3D0u;
        // 0x3ea3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA3D8u;
        goto label_fallthrough_0x3ea3d0;
    }
    ctx->pc = 0x3EA3D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA3D0u;
        // 0x3ea3d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA3D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea3d0:
    ctx->pc = 0x3EA3D8u;
}
