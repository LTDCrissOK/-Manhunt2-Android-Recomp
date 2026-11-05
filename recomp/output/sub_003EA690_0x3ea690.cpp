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

// Function: sub_003EA690
// Address: 0x3ea690 - 0x3ea7c8
void sub_003EA690_0x3ea690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003EA690_0x3ea690");
#endif

    switch (ctx->pc) {
        case 0x3ea690u: goto label_3ea690;
        case 0x3ea694u: goto label_3ea694;
        case 0x3ea698u: goto label_3ea698;
        case 0x3ea69cu: goto label_3ea69c;
        case 0x3ea6a0u: goto label_3ea6a0;
        case 0x3ea6a4u: goto label_3ea6a4;
        case 0x3ea6a8u: goto label_3ea6a8;
        case 0x3ea6acu: goto label_3ea6ac;
        case 0x3ea6b0u: goto label_3ea6b0;
        case 0x3ea6b4u: goto label_3ea6b4;
        case 0x3ea6b8u: goto label_3ea6b8;
        case 0x3ea6bcu: goto label_3ea6bc;
        case 0x3ea6c0u: goto label_3ea6c0;
        case 0x3ea6c4u: goto label_3ea6c4;
        case 0x3ea6c8u: goto label_3ea6c8;
        case 0x3ea6ccu: goto label_3ea6cc;
        case 0x3ea6d0u: goto label_3ea6d0;
        case 0x3ea6d4u: goto label_3ea6d4;
        case 0x3ea6d8u: goto label_3ea6d8;
        case 0x3ea6dcu: goto label_3ea6dc;
        case 0x3ea6e0u: goto label_3ea6e0;
        case 0x3ea6e4u: goto label_3ea6e4;
        case 0x3ea6e8u: goto label_3ea6e8;
        case 0x3ea6ecu: goto label_3ea6ec;
        case 0x3ea6f0u: goto label_3ea6f0;
        case 0x3ea6f4u: goto label_3ea6f4;
        case 0x3ea6f8u: goto label_3ea6f8;
        case 0x3ea6fcu: goto label_3ea6fc;
        case 0x3ea700u: goto label_3ea700;
        case 0x3ea704u: goto label_3ea704;
        case 0x3ea708u: goto label_3ea708;
        case 0x3ea70cu: goto label_3ea70c;
        case 0x3ea710u: goto label_3ea710;
        case 0x3ea714u: goto label_3ea714;
        case 0x3ea718u: goto label_3ea718;
        case 0x3ea71cu: goto label_3ea71c;
        case 0x3ea720u: goto label_3ea720;
        case 0x3ea724u: goto label_3ea724;
        case 0x3ea728u: goto label_3ea728;
        case 0x3ea72cu: goto label_3ea72c;
        case 0x3ea730u: goto label_3ea730;
        case 0x3ea734u: goto label_3ea734;
        case 0x3ea738u: goto label_3ea738;
        case 0x3ea73cu: goto label_3ea73c;
        case 0x3ea740u: goto label_3ea740;
        case 0x3ea744u: goto label_3ea744;
        case 0x3ea748u: goto label_3ea748;
        case 0x3ea74cu: goto label_3ea74c;
        case 0x3ea750u: goto label_3ea750;
        case 0x3ea754u: goto label_3ea754;
        case 0x3ea758u: goto label_3ea758;
        case 0x3ea75cu: goto label_3ea75c;
        case 0x3ea760u: goto label_3ea760;
        case 0x3ea764u: goto label_3ea764;
        case 0x3ea768u: goto label_3ea768;
        case 0x3ea76cu: goto label_3ea76c;
        case 0x3ea770u: goto label_3ea770;
        case 0x3ea774u: goto label_3ea774;
        case 0x3ea778u: goto label_3ea778;
        case 0x3ea77cu: goto label_3ea77c;
        case 0x3ea780u: goto label_3ea780;
        case 0x3ea784u: goto label_3ea784;
        case 0x3ea788u: goto label_3ea788;
        case 0x3ea78cu: goto label_3ea78c;
        case 0x3ea790u: goto label_3ea790;
        case 0x3ea794u: goto label_3ea794;
        case 0x3ea798u: goto label_3ea798;
        case 0x3ea79cu: goto label_3ea79c;
        case 0x3ea7a0u: goto label_3ea7a0;
        case 0x3ea7a4u: goto label_3ea7a4;
        case 0x3ea7a8u: goto label_3ea7a8;
        case 0x3ea7acu: goto label_3ea7ac;
        case 0x3ea7b0u: goto label_3ea7b0;
        case 0x3ea7b4u: goto label_3ea7b4;
        case 0x3ea7b8u: goto label_3ea7b8;
        case 0x3ea7bcu: goto label_3ea7bc;
        case 0x3ea7c0u: goto label_3ea7c0;
        case 0x3ea7c4u: goto label_3ea7c4;
        default: break;
    }

    ctx->pc = 0x3ea690u;

label_3ea690:
    // 0x3ea690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3ea690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3ea694:
    // 0x3ea694: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3ea694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3ea698:
    // 0x3ea698: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ea698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3ea69c:
    // 0x3ea69c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3ea69cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6a0:
    // 0x3ea6a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3ea6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_3ea6a4:
    // 0x3ea6a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3ea6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_3ea6a8:
    // 0x3ea6a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea6ac:
    // 0x3ea6ac: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3ea6b0:
    if (ctx->pc == 0x3EA6B0u) {
        ctx->pc = 0x3EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6ACu;
        // 0x3ea6b0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6B4u;
        goto label_3ea6b4;
    }
    ctx->pc = 0x3EA6ACu;
    {
        const bool branch_taken_0x3ea6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6ACu;
        // 0x3ea6b0: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea6ac) {
            ctx->pc = 0x3EA72Cu;
            goto label_3ea72c;
        }
    }
    ctx->pc = 0x3EA6B4u;
label_3ea6b4:
    // 0x3ea6b4: 0x0  nop
    ctx->pc = 0x3ea6b4u;
    // NOP
label_3ea6b8:
    // 0x3ea6b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea6bc:
    // 0x3ea6bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea6bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea6c0:
    // 0x3ea6c0: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea6c4:
    if (ctx->pc == 0x3EA6C4u) {
        ctx->pc = 0x3EA6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6C0u;
        // 0x3ea6c4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6C8u;
        goto label_3ea6c8;
    }
    ctx->pc = 0x3EA6C0u;
    {
        const bool branch_taken_0x3ea6c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea6c0) {
            ctx->pc = 0x3EA6C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA6C0u;
            // 0x3ea6c4: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA71Cu;
            goto label_3ea71c;
        }
    }
    ctx->pc = 0x3EA6C8u;
label_3ea6c8:
    // 0x3ea6c8: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea6cc:
    // 0x3ea6cc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea6d0:
    // 0x3ea6d0: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea6d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea6d4:
    // 0x3ea6d4: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea6d8:
    if (ctx->pc == 0x3EA6D8u) {
        ctx->pc = 0x3EA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6D4u;
        // 0x3ea6d8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6DCu;
        goto label_3ea6dc;
    }
    ctx->pc = 0x3EA6D4u;
    {
        const bool branch_taken_0x3ea6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea6d4) {
            ctx->pc = 0x3EA6D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA6D4u;
            // 0x3ea6d8: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA708u;
            goto label_3ea708;
        }
    }
    ctx->pc = 0x3EA6DCu;
label_3ea6dc:
    // 0x3ea6dc: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea6dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea6e0:
    // 0x3ea6e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea6e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea6e4:
    // 0x3ea6e4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea6e8:
    // 0x3ea6e8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea6ec:
    // 0x3ea6ec: 0x40f809  jalr        $v0
label_3ea6f0:
    if (ctx->pc == 0x3EA6F0u) {
        ctx->pc = 0x3EA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6ECu;
        // 0x3ea6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA6F4u;
        goto label_3ea6f4;
    }
    ctx->pc = 0x3EA6ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA6F4u);
        ctx->pc = 0x3EA6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6ECu;
        // 0x3ea6f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA6ECu, 0x3EA6F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA6F4u;
label_3ea6f4:
    // 0x3ea6f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3ea6f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea6f8:
    // 0x3ea6f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea6fc:
    // 0x3ea6fc: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea700:
    if (ctx->pc == 0x3EA700u) {
        ctx->pc = 0x3EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6FCu;
        // 0x3ea700: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA704u;
        goto label_3ea704;
    }
    ctx->pc = 0x3EA6FCu;
    {
        const bool branch_taken_0x3ea6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA6FCu;
        // 0x3ea700: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea6fc) {
            ctx->pc = 0x3EA6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea6e0;
        }
    }
    ctx->pc = 0x3EA704u;
label_3ea704:
    // 0x3ea704: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea708:
    // 0x3ea708: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea70c:
    // 0x3ea70c: 0xc0f528a  jal         func_3D4A28
label_3ea710:
    if (ctx->pc == 0x3EA710u) {
        ctx->pc = 0x3EA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA70Cu;
        // 0x3ea710: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA714u;
        goto label_3ea714;
    }
    ctx->pc = 0x3EA70Cu;
    SET_GPR_U32(ctx, 31, 0x3EA714u);
    ctx->pc = 0x3EA710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA70Cu;
    // 0x3ea710: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA70Cu, 0x3EA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA714u;
label_3ea714:
    // 0x3ea714: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3ea714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3ea718:
    // 0x3ea718: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea718u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea71c:
    // 0x3ea71c: 0xc0f5222  jal         func_3D4888
label_3ea720:
    if (ctx->pc == 0x3EA720u) {
        ctx->pc = 0x3EA720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA71Cu;
        // 0x3ea720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA724u;
        goto label_3ea724;
    }
    ctx->pc = 0x3EA71Cu;
    SET_GPR_U32(ctx, 31, 0x3EA724u);
    ctx->pc = 0x3EA720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA71Cu;
    // 0x3ea720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA71Cu, 0x3EA724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA724u;
label_3ea724:
    // 0x3ea724: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea728:
    if (ctx->pc == 0x3EA728u) {
        ctx->pc = 0x3EA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA724u;
        // 0x3ea728: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA72Cu;
        goto label_3ea72c;
    }
    ctx->pc = 0x3EA724u;
    {
        const bool branch_taken_0x3ea724 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA724u;
        // 0x3ea728: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea724) {
            ctx->pc = 0x3EA6B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea6b8;
        }
    }
    ctx->pc = 0x3EA72Cu;
label_3ea72c:
    // 0x3ea72c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea730:
    // 0x3ea730: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_3ea734:
    if (ctx->pc == 0x3EA734u) {
        ctx->pc = 0x3EA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA730u;
        // 0x3ea734: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA738u;
        goto label_3ea738;
    }
    ctx->pc = 0x3EA730u;
    {
        const bool branch_taken_0x3ea730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3EA734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA730u;
        // 0x3ea734: 0x2412001c  addiu       $s2, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea730) {
            ctx->pc = 0x3EA7ACu;
            goto label_3ea7ac;
        }
    }
    ctx->pc = 0x3EA738u;
label_3ea738:
    // 0x3ea738: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea73c:
    // 0x3ea73c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3ea73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea740:
    // 0x3ea740: 0x50600016  beql        $v1, $zero, . + 4 + (0x16 << 2)
label_3ea744:
    if (ctx->pc == 0x3EA744u) {
        ctx->pc = 0x3EA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA740u;
        // 0x3ea744: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA748u;
        goto label_3ea748;
    }
    ctx->pc = 0x3EA740u;
    {
        const bool branch_taken_0x3ea740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ea740) {
            ctx->pc = 0x3EA744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA740u;
            // 0x3ea744: 0x8c500008  lw          $s0, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA79Cu;
            goto label_3ea79c;
        }
    }
    ctx->pc = 0x3EA748u;
label_3ea748:
    // 0x3ea748: 0x8c62fff0  lw          $v0, -0x10($v1)
    ctx->pc = 0x3ea748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967280)));
label_3ea74c:
    // 0x3ea74c: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3ea74cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3ea750:
    // 0x3ea750: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3ea750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_3ea754:
    // 0x3ea754: 0x5070000c  beql        $v1, $s0, . + 4 + (0xC << 2)
label_3ea758:
    if (ctx->pc == 0x3EA758u) {
        ctx->pc = 0x3EA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA754u;
        // 0x3ea758: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA75Cu;
        goto label_3ea75c;
    }
    ctx->pc = 0x3EA754u;
    {
        const bool branch_taken_0x3ea754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        if (branch_taken_0x3ea754) {
            ctx->pc = 0x3EA758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3EA754u;
            // 0x3ea758: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3EA788u;
            goto label_3ea788;
        }
    }
    ctx->pc = 0x3EA75Cu;
label_3ea75c:
    // 0x3ea75c: 0x2610ffe4  addiu       $s0, $s0, -0x1C
    ctx->pc = 0x3ea75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
label_3ea760:
    // 0x3ea760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3ea760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3ea764:
    // 0x3ea764: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3ea764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3ea768:
    // 0x3ea768: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3ea768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_3ea76c:
    // 0x3ea76c: 0x40f809  jalr        $v0
label_3ea770:
    if (ctx->pc == 0x3EA770u) {
        ctx->pc = 0x3EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA76Cu;
        // 0x3ea770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA774u;
        goto label_3ea774;
    }
    ctx->pc = 0x3EA76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3EA774u);
        ctx->pc = 0x3EA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA76Cu;
        // 0x3ea770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA76Cu, 0x3EA774u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3EA774u;
label_3ea774:
    // 0x3ea774: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3ea774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea778:
    // 0x3ea778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ea778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3ea77c:
    // 0x3ea77c: 0x1450fff8  bne         $v0, $s0, . + 4 + (-0x8 << 2)
label_3ea780:
    if (ctx->pc == 0x3EA780u) {
        ctx->pc = 0x3EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA77Cu;
        // 0x3ea780: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA784u;
        goto label_3ea784;
    }
    ctx->pc = 0x3EA77Cu;
    {
        const bool branch_taken_0x3ea77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3EA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA77Cu;
        // 0x3ea780: 0x2610ffe4  addiu       $s0, $s0, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea77c) {
            ctx->pc = 0x3EA760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea760;
        }
    }
    ctx->pc = 0x3EA784u;
label_3ea784:
    // 0x3ea784: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea788:
    // 0x3ea788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3ea788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3ea78c:
    // 0x3ea78c: 0xc0f528a  jal         func_3D4A28
label_3ea790:
    if (ctx->pc == 0x3EA790u) {
        ctx->pc = 0x3EA790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA78Cu;
        // 0x3ea790: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA794u;
        goto label_3ea794;
    }
    ctx->pc = 0x3EA78Cu;
    SET_GPR_U32(ctx, 31, 0x3EA794u);
    ctx->pc = 0x3EA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA78Cu;
    // 0x3ea790: 0x2484fff0  addiu       $a0, $a0, -0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x3EA78Cu, 0x3EA794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA794u;
label_3ea794:
    // 0x3ea794: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3ea794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3ea798:
    // 0x3ea798: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x3ea798u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_3ea79c:
    // 0x3ea79c: 0xc0f5222  jal         func_3D4888
label_3ea7a0:
    if (ctx->pc == 0x3EA7A0u) {
        ctx->pc = 0x3EA7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA79Cu;
        // 0x3ea7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA7A4u;
        goto label_3ea7a4;
    }
    ctx->pc = 0x3EA79Cu;
    SET_GPR_U32(ctx, 31, 0x3EA7A4u);
    ctx->pc = 0x3EA7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3EA79Cu;
    // 0x3ea7a0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3EA79Cu, 0x3EA7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3EA7A4u;
label_3ea7a4:
    // 0x3ea7a4: 0x1600ffe4  bnez        $s0, . + 4 + (-0x1C << 2)
label_3ea7a8:
    if (ctx->pc == 0x3EA7A8u) {
        ctx->pc = 0x3EA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7A4u;
        // 0x3ea7a8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA7ACu;
        goto label_3ea7ac;
    }
    ctx->pc = 0x3EA7A4u;
    {
        const bool branch_taken_0x3ea7a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3EA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7A4u;
        // 0x3ea7a8: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ea7a4) {
            ctx->pc = 0x3EA738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3ea738;
        }
    }
    ctx->pc = 0x3EA7ACu;
label_3ea7ac:
    // 0x3ea7ac: 0xae200048  sw          $zero, 0x48($s1)
    ctx->pc = 0x3ea7acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 0));
label_3ea7b0:
    // 0x3ea7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ea7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3ea7b4:
    // 0x3ea7b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3ea7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_3ea7b8:
    // 0x3ea7b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3ea7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3ea7bc:
    // 0x3ea7bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3ea7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_3ea7c0:
    // 0x3ea7c0: 0x3e00008  jr          $ra
label_3ea7c4:
    if (ctx->pc == 0x3EA7C4u) {
        ctx->pc = 0x3EA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7C0u;
        // 0x3ea7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3EA7C8u;
        goto label_fallthrough_0x3ea7c0;
    }
    ctx->pc = 0x3EA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3EA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3EA7C0u;
        // 0x3ea7c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3EA7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3ea7c0:
    ctx->pc = 0x3EA7C8u;
}
