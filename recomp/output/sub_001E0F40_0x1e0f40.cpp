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

// Function: sub_001E0F40
// Address: 0x1e0f40 - 0x1e0f70
void sub_001E0F40_0x1e0f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E0F40_0x1e0f40");
#endif

    ctx->pc = 0x1e0f40u;

    // 0x1e0f40: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x1e0f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1e0f44: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E0F44u;
    {
        const bool branch_taken_0x1e0f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F44u;
        // 0x1e0f48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f44) {
            ctx->pc = 0x1E0F64u;
            goto label_1e0f64;
        }
    }
    ctx->pc = 0x1E0F4Cu;
    // 0x1e0f4c: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1e0f4cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e0f50: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x1e0f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x1e0f54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E0F54u;
    {
        const bool branch_taken_0x1e0f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F54u;
        // 0x1e0f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e0f54) {
            ctx->pc = 0x1E0F68u;
            goto label_1e0f68;
        }
    }
    ctx->pc = 0x1E0F5Cu;
    // 0x1e0f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F5Cu;
        // 0x1e0f60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F64u;
label_1e0f64:
    // 0x1e0f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1e0f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e0f68:
    // 0x1e0f68: 0x3e00008  jr          $ra
    ctx->pc = 0x1E0F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E0F68u;
        // 0x1e0f6c: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E0F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E0F70u;
}
