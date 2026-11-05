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

// Function: sub_0014F1A8
// Address: 0x14f1a8 - 0x14f1c0
void sub_0014F1A8_0x14f1a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F1A8_0x14f1a8");
#endif

    ctx->pc = 0x14f1a8u;

    // 0x14f1a8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x14f1a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14f1ac: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x14f1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x14f1b0: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x14f1b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f1b4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x14f1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14f1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x14F1B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14F1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14F1B8u;
        // 0x14f1bc: 0x8ca204f8  lw          $v0, 0x4F8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1272)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14F1B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14F1C0u;
}
