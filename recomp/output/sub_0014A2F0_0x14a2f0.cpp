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

// Function: sub_0014A2F0
// Address: 0x14a2f0 - 0x14a3a8
void sub_0014A2F0_0x14a2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A2F0_0x14a2f0");
#endif

    switch (ctx->pc) {
        case 0x14a2f0u: goto label_14a2f0;
        case 0x14a2f4u: goto label_14a2f4;
        case 0x14a2f8u: goto label_14a2f8;
        case 0x14a2fcu: goto label_14a2fc;
        case 0x14a300u: goto label_14a300;
        case 0x14a304u: goto label_14a304;
        case 0x14a308u: goto label_14a308;
        case 0x14a30cu: goto label_14a30c;
        case 0x14a310u: goto label_14a310;
        case 0x14a314u: goto label_14a314;
        case 0x14a318u: goto label_14a318;
        case 0x14a31cu: goto label_14a31c;
        case 0x14a320u: goto label_14a320;
        case 0x14a324u: goto label_14a324;
        case 0x14a328u: goto label_14a328;
        case 0x14a32cu: goto label_14a32c;
        case 0x14a330u: goto label_14a330;
        case 0x14a334u: goto label_14a334;
        case 0x14a338u: goto label_14a338;
        case 0x14a33cu: goto label_14a33c;
        case 0x14a340u: goto label_14a340;
        case 0x14a344u: goto label_14a344;
        case 0x14a348u: goto label_14a348;
        case 0x14a34cu: goto label_14a34c;
        case 0x14a350u: goto label_14a350;
        case 0x14a354u: goto label_14a354;
        case 0x14a358u: goto label_14a358;
        case 0x14a35cu: goto label_14a35c;
        case 0x14a360u: goto label_14a360;
        case 0x14a364u: goto label_14a364;
        case 0x14a368u: goto label_14a368;
        case 0x14a36cu: goto label_14a36c;
        case 0x14a370u: goto label_14a370;
        case 0x14a374u: goto label_14a374;
        case 0x14a378u: goto label_14a378;
        case 0x14a37cu: goto label_14a37c;
        case 0x14a380u: goto label_14a380;
        case 0x14a384u: goto label_14a384;
        case 0x14a388u: goto label_14a388;
        case 0x14a38cu: goto label_14a38c;
        case 0x14a390u: goto label_14a390;
        case 0x14a394u: goto label_14a394;
        case 0x14a398u: goto label_14a398;
        case 0x14a39cu: goto label_14a39c;
        case 0x14a3a0u: goto label_14a3a0;
        case 0x14a3a4u: goto label_14a3a4;
        default: break;
    }

    ctx->pc = 0x14a2f0u;

label_14a2f0:
    // 0x14a2f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14a2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_14a2f4:
    // 0x14a2f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_14a2f8:
    // 0x14a2f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x14a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_14a2fc:
    // 0x14a2fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14a2fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14a300:
    // 0x14a300: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14a300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_14a304:
    // 0x14a304: 0x92020009  lbu         $v0, 0x9($s0)
    ctx->pc = 0x14a304u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14a308:
    // 0x14a308: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_14a30c:
    if (ctx->pc == 0x14A30Cu) {
        ctx->pc = 0x14A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A308u;
        // 0x14a30c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A310u;
        goto label_14a310;
    }
    ctx->pc = 0x14A308u;
    {
        const bool branch_taken_0x14a308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a308) {
            ctx->pc = 0x14A30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A308u;
            // 0x14a30c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A398u;
            goto label_14a398;
        }
    }
    ctx->pc = 0x14A310u;
label_14a310:
    // 0x14a310: 0xc04db02  jal         func_136C08
label_14a314:
    if (ctx->pc == 0x14A314u) {
        ctx->pc = 0x14A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A310u;
        // 0x14a314: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A318u;
        goto label_14a318;
    }
    ctx->pc = 0x14A310u;
    SET_GPR_U32(ctx, 31, 0x14A318u);
    ctx->pc = 0x14A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A310u;
    // 0x14a314: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136C08u, 0x14A310u, 0x14A318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A318u;
label_14a318:
    // 0x14a318: 0xc05294e  jal         func_14A538
label_14a31c:
    if (ctx->pc == 0x14A31Cu) {
        ctx->pc = 0x14A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A318u;
        // 0x14a31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A320u;
        goto label_14a320;
    }
    ctx->pc = 0x14A318u;
    SET_GPR_U32(ctx, 31, 0x14A320u);
    ctx->pc = 0x14A31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A318u;
    // 0x14a31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A538u, 0x14A318u, 0x14A320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A320u;
label_14a320:
    // 0x14a320: 0x10000003  b           . + 4 + (0x3 << 2)
label_14a324:
    if (ctx->pc == 0x14A324u) {
        ctx->pc = 0x14A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A320u;
        // 0x14a324: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A328u;
        goto label_14a328;
    }
    ctx->pc = 0x14A320u;
    {
        const bool branch_taken_0x14a320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14A324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A320u;
        // 0x14a324: 0xa200046c  sb          $zero, 0x46C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a320) {
            ctx->pc = 0x14A330u;
            goto label_14a330;
        }
    }
    ctx->pc = 0x14A328u;
label_14a328:
    // 0x14a328: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x14a328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_14a32c:
    // 0x14a32c: 0xa202046c  sb          $v0, 0x46C($s0)
    ctx->pc = 0x14a32cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1132), (uint8_t)GPR_U32(ctx, 2));
label_14a330:
    // 0x14a330: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14a330u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a334:
    // 0x14a334: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x14a334u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_14a338:
    // 0x14a338: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
label_14a33c:
    if (ctx->pc == 0x14A33Cu) {
        ctx->pc = 0x14A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A338u;
        // 0x14a33c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A340u;
        goto label_14a340;
    }
    ctx->pc = 0x14A338u;
    {
        const bool branch_taken_0x14a338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a338) {
            ctx->pc = 0x14A33Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A338u;
            // 0x14a33c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A388u;
            goto label_14a388;
        }
    }
    ctx->pc = 0x14A340u;
label_14a340:
    // 0x14a340: 0x9202046c  lbu         $v0, 0x46C($s0)
    ctx->pc = 0x14a340u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
label_14a344:
    // 0x14a344: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x14a344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_14a348:
    // 0x14a348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14a348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14a34c:
    // 0x14a34c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_14a350:
    // 0x14a350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14a350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_14a354:
    // 0x14a354: 0x5060fff4  beql        $v1, $zero, . + 4 + (-0xC << 2)
label_14a358:
    if (ctx->pc == 0x14A358u) {
        ctx->pc = 0x14A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A354u;
        // 0x14a358: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A35Cu;
        goto label_14a35c;
    }
    ctx->pc = 0x14A354u;
    {
        const bool branch_taken_0x14a354 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14a354) {
            ctx->pc = 0x14A358u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A354u;
            // 0x14a358: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a328;
        }
    }
    ctx->pc = 0x14A35Cu;
label_14a35c:
    // 0x14a35c: 0xc0529d6  jal         func_14A758
label_14a360:
    if (ctx->pc == 0x14A360u) {
        ctx->pc = 0x14A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A35Cu;
        // 0x14a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A364u;
        goto label_14a364;
    }
    ctx->pc = 0x14A35Cu;
    SET_GPR_U32(ctx, 31, 0x14A364u);
    ctx->pc = 0x14A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A35Cu;
    // 0x14a360: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A758u, 0x14A35Cu, 0x14A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A364u;
label_14a364:
    // 0x14a364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14a364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_14a368:
    // 0x14a368: 0xc04d80c  jal         func_136030
label_14a36c:
    if (ctx->pc == 0x14A36Cu) {
        ctx->pc = 0x14A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A368u;
        // 0x14a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A370u;
        goto label_14a370;
    }
    ctx->pc = 0x14A368u;
    SET_GPR_U32(ctx, 31, 0x14A370u);
    ctx->pc = 0x14A36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A368u;
    // 0x14a36c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136030u, 0x14A368u, 0x14A370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A370u;
label_14a370:
    // 0x14a370: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x14a370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_14a374:
    // 0x14a374: 0x92030009  lbu         $v1, 0x9($s0)
    ctx->pc = 0x14a374u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 9)));
label_14a378:
    // 0x14a378: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x14a378u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_14a37c:
    // 0x14a37c: 0x5623ffea  bnel        $s1, $v1, . + 4 + (-0x16 << 2)
label_14a380:
    if (ctx->pc == 0x14A380u) {
        ctx->pc = 0x14A380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A37Cu;
        // 0x14a380: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A384u;
        goto label_14a384;
    }
    ctx->pc = 0x14A37Cu;
    {
        const bool branch_taken_0x14a37c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x14a37c) {
            ctx->pc = 0x14A380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14A37Cu;
            // 0x14a380: 0x9202046c  lbu         $v0, 0x46C($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14A328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a328;
        }
    }
    ctx->pc = 0x14A384u;
label_14a384:
    // 0x14a384: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x14a384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_14a388:
    // 0x14a388: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x14a388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_14a38c:
    // 0x14a38c: 0x40f809  jalr        $v0
label_14a390:
    if (ctx->pc == 0x14A390u) {
        ctx->pc = 0x14A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A38Cu;
        // 0x14a390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A394u;
        goto label_14a394;
    }
    ctx->pc = 0x14A38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x14A394u);
        ctx->pc = 0x14A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A38Cu;
        // 0x14a390: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A38Cu, 0x14A394u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14A394u;
label_14a394:
    // 0x14a394: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a394u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14a398:
    // 0x14a398: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x14a398u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_14a39c:
    // 0x14a39c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14a39cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_14a3a0:
    // 0x14a3a0: 0x3e00008  jr          $ra
label_14a3a4:
    if (ctx->pc == 0x14A3A4u) {
        ctx->pc = 0x14A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3A0u;
        // 0x14a3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14A3A8u;
        goto label_fallthrough_0x14a3a0;
    }
    ctx->pc = 0x14A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A3A0u;
        // 0x14a3a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14a3a0:
    ctx->pc = 0x14A3A8u;
}
