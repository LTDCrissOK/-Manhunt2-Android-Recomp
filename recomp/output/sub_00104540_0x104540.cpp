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

// Function: sub_00104540
// Address: 0x104540 - 0x104588
void sub_00104540_0x104540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104540_0x104540");
#endif

    ctx->pc = 0x104540u;

    // 0x104540: 0x90830014  lbu         $v1, 0x14($a0)
    ctx->pc = 0x104540u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x104544: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x104544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x104548: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x104548u;
    {
        const bool branch_taken_0x104548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x10454Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104548u;
        // 0x10454c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104548) {
            ctx->pc = 0x10455Cu;
            goto label_10455c;
        }
    }
    ctx->pc = 0x104550u;
    // 0x104550: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x104550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x104554: 0x3e00008  jr          $ra
    ctx->pc = 0x104554u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104554u;
        // 0x104558: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104554u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10455Cu;
label_10455c:
    // 0x10455c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10455Cu;
    {
        const bool branch_taken_0x10455c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10455Cu;
        // 0x104560: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10455c) {
            ctx->pc = 0x104570u;
            goto label_104570;
        }
    }
    ctx->pc = 0x104564u;
    // 0x104564: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x104564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x104568: 0x3e00008  jr          $ra
    ctx->pc = 0x104568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10456Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104568u;
        // 0x10456c: 0xa0820014  sb          $v0, 0x14($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104568u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104570u;
label_104570:
    // 0x104570: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x104570u;
    {
        const bool branch_taken_0x104570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x104574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104570u;
        // 0x104574: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104570) {
            ctx->pc = 0x10457Cu;
            goto label_10457c;
        }
    }
    ctx->pc = 0x104578u;
    // 0x104578: 0xa0820014  sb          $v0, 0x14($a0)
    ctx->pc = 0x104578u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 20), (uint8_t)GPR_U32(ctx, 2));
label_10457c:
    // 0x10457c: 0x3e00008  jr          $ra
    ctx->pc = 0x10457Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10457Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104584u;
    // 0x104584: 0x0  nop
    ctx->pc = 0x104584u;
    // NOP
    ctx->pc = 0x104588u;
}
