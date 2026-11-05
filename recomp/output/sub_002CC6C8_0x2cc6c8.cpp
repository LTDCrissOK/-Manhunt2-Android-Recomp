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

// Function: sub_002CC6C8
// Address: 0x2cc6c8 - 0x2cc6f8
void sub_002CC6C8_0x2cc6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CC6C8_0x2cc6c8");
#endif

    ctx->pc = 0x2cc6c8u;

    // 0x2cc6c8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CC6C8u;
    {
        const bool branch_taken_0x2cc6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6C8u;
        // 0x2cc6cc: 0x3c040058  lui         $a0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc6c8) {
            ctx->pc = 0x2CC6E4u;
            goto label_2cc6e4;
        }
    }
    ctx->pc = 0x2CC6D0u;
    // 0x2cc6d0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2cc6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2cc6d4: 0xdc82a620  ld          $v0, -0x59E0($a0)
    ctx->pc = 0x2cc6d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294944288)));
    // 0x2cc6d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2cc6d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2cc6dc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC6DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6DCu;
        // 0x2cc6e0: 0xfc82a620  sd          $v0, -0x59E0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294944288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC6E4u;
label_2cc6e4:
    // 0x2cc6e4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2cc6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2cc6e8: 0xdc82a620  ld          $v0, -0x59E0($a0)
    ctx->pc = 0x2cc6e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294944288)));
    // 0x2cc6ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2cc6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2cc6f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC6F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CC6F0u;
        // 0x2cc6f4: 0xfc82a620  sd          $v0, -0x59E0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 4294944288), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CC6F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CC6F8u;
}
