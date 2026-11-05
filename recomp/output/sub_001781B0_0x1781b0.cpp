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

// Function: sub_001781B0
// Address: 0x1781b0 - 0x178208
void sub_001781B0_0x1781b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001781B0_0x1781b0");
#endif

    switch (ctx->pc) {
        case 0x1781c8u: goto label_1781c8;
        case 0x1781e0u: goto label_1781e0;
        default: break;
    }

    ctx->pc = 0x1781b0u;

    // 0x1781b0: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x1781b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1781b4: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1781b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1781b8: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1781B8u;
    {
        const bool branch_taken_0x1781b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1781BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781B8u;
        // 0x1781bc: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781b8) {
            ctx->pc = 0x1781D0u;
            goto label_1781d0;
        }
    }
    ctx->pc = 0x1781C0u;
    // 0x1781c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1781C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1781C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781C0u;
        // 0x1781c4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1781C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1781C8u;
label_1781c8:
    // 0x1781c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1781C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1781CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781C8u;
        // 0x1781cc: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1781C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1781D0u;
label_1781d0:
    // 0x1781d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1781d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1781d4: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x1781d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1781d8: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x1781d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1781dc: 0x0  nop
    ctx->pc = 0x1781dcu;
    // NOP
label_1781e0:
    // 0x1781e0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1781e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1781e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1781e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1781e8: 0x1066fff7  beq         $v1, $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1781E8u;
    {
        const bool branch_taken_0x1781e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1781ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781E8u;
        // 0x1781ec: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781e8) {
            ctx->pc = 0x1781C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1781c8;
        }
    }
    ctx->pc = 0x1781F0u;
    // 0x1781f0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x1781f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1781f4: 0x2ca30010  sltiu       $v1, $a1, 0x10
    ctx->pc = 0x1781f4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1781f8: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1781F8u;
    {
        const bool branch_taken_0x1781f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1781FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1781F8u;
        // 0x1781fc: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1781f8) {
            ctx->pc = 0x1781E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1781e0;
        }
    }
    ctx->pc = 0x178200u;
    // 0x178200: 0x3e00008  jr          $ra
    ctx->pc = 0x178200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178200u;
        // 0x178204: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178208u;
}
