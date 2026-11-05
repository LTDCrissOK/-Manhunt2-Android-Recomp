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

// Function: sub_003A25A8
// Address: 0x3a25a8 - 0x3a25f8
void sub_003A25A8_0x3a25a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A25A8_0x3a25a8");
#endif

    ctx->pc = 0x3a25a8u;

    // 0x3a25a8: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A25A8u;
    {
        const bool branch_taken_0x3a25a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A25ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25A8u;
        // 0x3a25ac: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a25a8) {
            ctx->pc = 0x3A25C0u;
            goto label_3a25c0;
        }
    }
    ctx->pc = 0x3A25B0u;
    // 0x3a25b0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a25b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a25b4: 0xac401dbc  sw          $zero, 0x1DBC($v0)
    ctx->pc = 0x3a25b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7612), GPR_U32(ctx, 0));
    // 0x3a25b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A25B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A25BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25B8u;
        // 0x3a25bc: 0xac601dc0  sw          $zero, 0x1DC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7616), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A25B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A25C0u;
label_3a25c0:
    // 0x3a25c0: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a25c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a25c4: 0xac441dbc  sw          $a0, 0x1DBC($v0)
    ctx->pc = 0x3a25c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7612), GPR_U32(ctx, 4));
    // 0x3a25c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3A25C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A25CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A25C8u;
        // 0x3a25cc: 0xac651dc0  sw          $a1, 0x1DC0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7616), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A25C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A25D0u;
    // 0x3a25d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a25d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a25d4: 0x0  nop
    ctx->pc = 0x3a25d4u;
    // NOP
    // 0x3a25d8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a25d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a25dc: 0x0  nop
    ctx->pc = 0x3a25dcu;
    // NOP
    // 0x3a25e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a25e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a25e4: 0x0  nop
    ctx->pc = 0x3a25e4u;
    // NOP
    // 0x3a25e8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a25e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a25ec: 0x0  nop
    ctx->pc = 0x3a25ecu;
    // NOP
    // 0x3a25f0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3a25f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3a25f4: 0x0  nop
    ctx->pc = 0x3a25f4u;
    // NOP
    ctx->pc = 0x3a25f8u;
}
