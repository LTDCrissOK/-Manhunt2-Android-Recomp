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

// Function: sub_00325DC0
// Address: 0x325dc0 - 0x325df0
void sub_00325DC0_0x325dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00325DC0_0x325dc0");
#endif

    ctx->pc = 0x325dc0u;

    // 0x325dc0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325dc4: 0x8c62bd70  lw          $v0, -0x4290($v1)
    ctx->pc = 0x325dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBD70u));
    // 0x325dc8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x325dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x325dcc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x325DCCu;
    {
        const bool branch_taken_0x325dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x325DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DCCu;
        // 0x325dd0: 0x3c03005a  lui         $v1, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x325dcc) {
            ctx->pc = 0x325DE4u;
            goto label_325de4;
        }
    }
    ctx->pc = 0x325DD4u;
    // 0x325dd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x325dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x325dd8: 0x8c62be8c  lw          $v0, -0x4174($v1)
    ctx->pc = 0x325dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FBE8Cu));
    // 0x325ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x325DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DDCu;
        // 0x325de0: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DE4u;
label_325de4:
    // 0x325de4: 0x90627cc4  lbu         $v0, 0x7CC4($v1)
    ctx->pc = 0x325de4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 31940)));
    // 0x325de8: 0x3e00008  jr          $ra
    ctx->pc = 0x325DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x325DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x325DE8u;
        // 0x325dec: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x325DE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x325DF0u;
}
