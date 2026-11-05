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

// Function: sub_002CC6F8
// Address: 0x2cc6f8 - 0x2cc728
void sub_002CC6F8_0x2cc6f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6F8_0x2cc6f8");
#endif

    ctx->pc = 0x2cc6f8u;

    // 0x2cc6f8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC6F8u;
    {
        const bool branch_taken_0x2cc6f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F8u;
        // 0x2cc6fc: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6f8) {
            ctx->pc = 0x2CC714u;
            goto label_2cc714;
        }
    }
    ctx->pc = 0x2CC700u;
    // 0x2cc700: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x2cc700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2cc704: 0xdc82a620  ld          $v0, -0x59E0($a0)
    ctx->pc = 0x2cc704u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294944288)));
    // 0x2cc708: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cc708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cc70c: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC70Cu;
        // 0x2cc710: 0xfc82a620  sd          $v0, -0x59E0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294944288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC714u;
label_2cc714:
    // 0x2cc714: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x2cc714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x2cc718: 0xdc82a620  ld          $v0, -0x59E0($a0)
    ctx->pc = 0x2cc718u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294944288)));
    // 0x2cc71c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc720: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC720u;
        // 0x2cc724: 0xfc82a620  sd          $v0, -0x59E0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294944288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC728u;
}
