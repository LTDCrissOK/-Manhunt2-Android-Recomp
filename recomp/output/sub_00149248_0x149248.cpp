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

// Function: sub_00149248
// Address: 0x149248 - 0x149268
void sub_00149248_0x149248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149248_0x149248");
#endif

    ctx->pc = 0x149248u;

    // 0x149248: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x149248u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14924c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x14924cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x149250: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x149250u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x149254: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x149254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149258: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x149258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x14925c: 0x8c62a9d4  lw          $v0, -0x562C($v1)
    ctx->pc = 0x14925cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x149260: 0x3e00008  jr          $ra
    ctx->pc = 0x149260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149260u;
        // 0x149264: 0xaca204f8  sw          $v0, 0x4F8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 1272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x149268u;
}
