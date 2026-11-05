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

// Function: sub_0025C690
// Address: 0x25c690 - 0x25c788
void sub_0025C690_0x25c690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C690_0x25c690");
#endif

    switch (ctx->pc) {
        case 0x25c6c0u: goto label_25c6c0;
        case 0x25c6f8u: goto label_25c6f8;
        case 0x25c70cu: goto label_25c70c;
        case 0x25c728u: goto label_25c728;
        case 0x25c75cu: goto label_25c75c;
        default: break;
    }

    ctx->pc = 0x25c690u;

    // 0x25c690: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25c690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25c694: 0x3c03004b  lui         $v1, 0x4B
    ctx->pc = 0x25c694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)75 << 16));
    // 0x25c698: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x25c698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x25c69c: 0x8c623d90  lw          $v0, 0x3D90($v1)
    ctx->pc = 0x25c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4B3D90u));
    // 0x25c6a0: 0x24713d90  addiu       $s1, $v1, 0x3D90
    ctx->pc = 0x25c6a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 15760));
    // 0x25c6a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x25c6a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x25c6a8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x25c6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x25c6ac: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x25C6ACu;
    {
        const bool branch_taken_0x25c6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C6ACu;
        // 0x25c6b0: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c6ac) {
            ctx->pc = 0x25C768u;
            goto label_25c768;
        }
    }
    ctx->pc = 0x25C6B4u;
    // 0x25c6b4: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x25c6b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25c6b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x25c6bc: 0x0  nop
    ctx->pc = 0x25c6bcu;
    // NOP
label_25c6c0:
    // 0x25c6c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x25c6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x25c6c4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x25c6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x25c6c8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x25c6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x25c6cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x25c6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x25c6d0: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x25c6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x25c6d4: 0x718021  addu        $s0, $v1, $s1
    ctx->pc = 0x25c6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x25c6d8: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x25c6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x25c6dc: 0xa3a0000c  sb          $zero, 0xC($sp)
    ctx->pc = 0x25c6dcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 0));
    // 0x25c6e0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x25c6e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x25c6e4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x25c6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x25c6e8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C6E8u;
    {
        const bool branch_taken_0x25c6e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6e8) {
            ctx->pc = 0x25C6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C6E8u;
            // 0x25c6ec: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6FCu;
            goto label_25c6fc;
        }
    }
    ctx->pc = 0x25C6F0u;
    // 0x25c6f0: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C6F0u;
    SET_GPR_U32(ctx, 31, 0x25C6F8u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C6F0u, 0x25C6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C6F8u;
label_25c6f8:
    // 0x25c6f8: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x25c6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_25c6fc:
    // 0x25c6fc: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x25C6FCu;
    {
        const bool branch_taken_0x25c6fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c6fc) {
            ctx->pc = 0x25C700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C6FCu;
            // 0x25c700: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C73Cu;
            goto label_25c73c;
        }
    }
    ctx->pc = 0x25C704u;
    // 0x25c704: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x25C704u;
    SET_GPR_U32(ctx, 31, 0x25C70Cu);
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x25C704u, 0x25C70Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C70Cu;
label_25c70c:
    // 0x25c70c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x25c70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x25c710: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25c710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c714: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x25c714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c718: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25c718u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25c71c: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x25c71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x25c720: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x25C720u;
    SET_GPR_U32(ctx, 31, 0x25C728u);
    ctx->pc = 0x25C724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C720u;
    // 0x25c724: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x25C720u, 0x25C728u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C728u;
label_25c728:
    // 0x25c728: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x25c728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25c72c: 0x93a2000c  lbu         $v0, 0xC($sp)
    ctx->pc = 0x25c72cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x25c730: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x25c730u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x25c734: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25C734u;
    {
        const bool branch_taken_0x25c734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C734u;
        // 0x25c738: 0xa202000c  sb          $v0, 0xC($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c734) {
            ctx->pc = 0x25C748u;
            goto label_25c748;
        }
    }
    ctx->pc = 0x25C73Cu;
label_25c73c:
    // 0x25c73c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x25c73cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x25c740: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x25c740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x25c744: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x25c744u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_25c748:
    // 0x25c748: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x25c748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25c74c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C74Cu;
    {
        const bool branch_taken_0x25c74c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c74c) {
            ctx->pc = 0x25C750u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C74Cu;
            // 0x25c750: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C760u;
            goto label_25c760;
        }
    }
    ctx->pc = 0x25C754u;
    // 0x25c754: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x25C754u;
    SET_GPR_U32(ctx, 31, 0x25C75Cu);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x25C754u, 0x25C75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25C75Cu;
label_25c75c:
    // 0x25c75c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x25c75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_25c760:
    // 0x25c760: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x25C760u;
    {
        const bool branch_taken_0x25c760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c760) {
            ctx->pc = 0x25C764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C760u;
            // 0x25c764: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C6C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_25c6c0;
        }
    }
    ctx->pc = 0x25C768u;
label_25c768:
    // 0x25c768: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x25c768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25c76c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x25c76cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x25c770: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x25c770u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25c774: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x25c774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x25c778: 0x3e00008  jr          $ra
    ctx->pc = 0x25C778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C778u;
        // 0x25c77c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C780u;
    // 0x25c780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x25c780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x25c784: 0x0  nop
    ctx->pc = 0x25c784u;
    // NOP
    ctx->pc = 0x25c788u;
}
