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

// Function: sub_00272630
// Address: 0x272630 - 0x2726c0
void sub_00272630_0x272630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00272630_0x272630");
#endif

    switch (ctx->pc) {
        case 0x272670u: goto label_272670;
        default: break;
    }

    ctx->pc = 0x272630u;

    // 0x272630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x272630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x272634: 0x3c02004b  lui         $v0, 0x4B
    ctx->pc = 0x272634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)75 << 16));
    // 0x272638: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x272638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27263c: 0x24424778  addiu       $v0, $v0, 0x4778
    ctx->pc = 0x27263cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18296));
    // 0x272640: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x272640u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4B477Cu));
    // 0x272644: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x272644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x272648: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x272648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27264c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27264cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x272650: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x272650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x272654: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x272654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x272658: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x272658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27265c: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x27265Cu;
    {
        const bool branch_taken_0x27265c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27265Cu;
        // 0x272660: 0xafa0001c  sw          $zero, 0x1C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27265c) {
            ctx->pc = 0x2726B0u;
            goto label_2726b0;
        }
    }
    ctx->pc = 0x272664u;
    // 0x272664: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x272664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x272668: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x272668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x27266c: 0x0  nop
    ctx->pc = 0x27266cu;
    // NOP
label_272670:
    // 0x272670: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x272670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x272674: 0x8ca202d0  lw          $v0, 0x2D0($a1)
    ctx->pc = 0x272674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 720)));
    // 0x272678: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x272678u;
    {
        const bool branch_taken_0x272678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x27267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272678u;
        // 0x27267c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272678) {
            ctx->pc = 0x2726B4u;
            goto label_2726b4;
        }
    }
    ctx->pc = 0x272680u;
    // 0x272680: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x272680u;
    {
        const bool branch_taken_0x272680 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x272684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x272680u;
        // 0x272684: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x272680) {
            ctx->pc = 0x272694u;
            goto label_272694;
        }
    }
    ctx->pc = 0x272688u;
    // 0x272688: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x272688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27268c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27268Cu;
    {
        const bool branch_taken_0x27268c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x272690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27268Cu;
        // 0x272690: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27268c) {
            ctx->pc = 0x2726A4u;
            goto label_2726a4;
        }
    }
    ctx->pc = 0x272694u;
label_272694:
    // 0x272694: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x272694u;
    {
        const bool branch_taken_0x272694 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x272694) {
            ctx->pc = 0x272698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x272694u;
            // 0x272698: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2726A8u;
            goto label_2726a8;
        }
    }
    ctx->pc = 0x27269Cu;
    // 0x27269c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x27269cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x2726a0: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2726a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_2726a4:
    // 0x2726a4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2726a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2726a8:
    // 0x2726a8: 0x1446fff1  bne         $v0, $a2, . + 4 + (-0xF << 2)
    ctx->pc = 0x2726A8u;
    {
        const bool branch_taken_0x2726a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2726ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726A8u;
        // 0x2726ac: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2726a8) {
            ctx->pc = 0x272670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_272670;
        }
    }
    ctx->pc = 0x2726B0u;
label_2726b0:
    // 0x2726b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2726b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2726b4:
    // 0x2726b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2726B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2726B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2726B4u;
        // 0x2726b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2726B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2726BCu;
    // 0x2726bc: 0x0  nop
    ctx->pc = 0x2726bcu;
    // NOP
    ctx->pc = 0x2726c0u;
}
