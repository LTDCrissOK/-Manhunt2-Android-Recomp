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

// Function: sub_00125A58
// Address: 0x125a58 - 0x125a90
void sub_00125A58_0x125a58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125A58_0x125a58");
#endif

    ctx->pc = 0x125a58u;

    // 0x125a58: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x125a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125a5c: 0x8ca20054  lw          $v0, 0x54($a1)
    ctx->pc = 0x125a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x125a60: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125A60u;
    {
        const bool branch_taken_0x125a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A60u;
        // 0x125a64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a60) {
            ctx->pc = 0x125A70u;
            goto label_125a70;
        }
    }
    ctx->pc = 0x125A68u;
    // 0x125a68: 0x3e00008  jr          $ra
    ctx->pc = 0x125A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A68u;
        // 0x125a6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125A70u;
label_125a70:
    // 0x125a70: 0x8ca40828  lw          $a0, 0x828($a1)
    ctx->pc = 0x125a70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 2088)));
    // 0x125a74: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x125a74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294945236)));
    // 0x125a78: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x125A78u;
    {
        const bool branch_taken_0x125a78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x125A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125A78u;
        // 0x125a7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125a78) {
            ctx->pc = 0x125A84u;
            goto label_125a84;
        }
    }
    ctx->pc = 0x125A80u;
    // 0x125a80: 0x24a20850  addiu       $v0, $a1, 0x850
    ctx->pc = 0x125a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 2128));
label_125a84:
    // 0x125a84: 0x3e00008  jr          $ra
    ctx->pc = 0x125A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125A84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125A8Cu;
    // 0x125a8c: 0x0  nop
    ctx->pc = 0x125a8cu;
    // NOP
    ctx->pc = 0x125a90u;
}
