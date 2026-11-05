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

// Function: sub_00287C38
// Address: 0x287c38 - 0x287c70
void sub_00287C38_0x287c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287C38_0x287c38");
#endif

    ctx->pc = 0x287c38u;

    // 0x287c38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287c38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287c3c: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x287c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287c40: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x287C40u;
    {
        const bool branch_taken_0x287c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C40u;
        // 0x287c44: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c40) {
            ctx->pc = 0x287C5Cu;
            goto label_287c5c;
        }
    }
    ctx->pc = 0x287C48u;
    // 0x287c48: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287c4c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x287c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x287c50: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x287c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x287c54: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x287C54u;
    {
        const bool branch_taken_0x287c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x287c54) {
            ctx->pc = 0x287C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x287C54u;
            // 0x287c58: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x287C64u;
            goto label_287c64;
        }
    }
    ctx->pc = 0x287C5Cu;
label_287c5c:
    // 0x287c5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287C5Cu;
    {
        const bool branch_taken_0x287c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C5Cu;
        // 0x287c60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287c5c) {
            ctx->pc = 0x287C68u;
            goto label_287c68;
        }
    }
    ctx->pc = 0x287C64u;
label_287c64:
    // 0x287c64: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x287c64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_287c68:
    // 0x287c68: 0x3e00008  jr          $ra
    ctx->pc = 0x287C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287C68u;
        // 0x287c6c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287C68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287C70u;
}
