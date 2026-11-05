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

// Function: sub_002266F0
// Address: 0x2266f0 - 0x226720
void sub_002266F0_0x2266f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002266F0_0x2266f0");
#endif

    ctx->pc = 0x2266f0u;

    // 0x2266f0: 0x8c830228  lw          $v1, 0x228($a0)
    ctx->pc = 0x2266f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 552)));
    // 0x2266f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2266f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2266f8: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2266F8u;
    {
        const bool branch_taken_0x2266f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2266FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2266F8u;
        // 0x2266fc: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2266f8) {
            ctx->pc = 0x226714u;
            goto label_226714;
        }
    }
    ctx->pc = 0x226700u;
    // 0x226700: 0x8c820224  lw          $v0, 0x224($a0)
    ctx->pc = 0x226700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 548)));
    // 0x226704: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x226704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226708: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x226708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x22670c: 0x3e00008  jr          $ra
    ctx->pc = 0x22670Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22670Cu;
        // 0x226710: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22670Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x226714u;
label_226714:
    // 0x226714: 0x3e00008  jr          $ra
    ctx->pc = 0x226714u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226714u;
        // 0x226718: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226714u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22671Cu;
    // 0x22671c: 0x0  nop
    ctx->pc = 0x22671cu;
    // NOP
    ctx->pc = 0x226720u;
}
