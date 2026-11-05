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

// Function: sub_00288940
// Address: 0x288940 - 0x288980
void sub_00288940_0x288940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288940_0x288940");
#endif

    ctx->pc = 0x288940u;

    // 0x288940: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x288940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x288944: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x288944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x288948: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x288948u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28894c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28894Cu;
    {
        const bool branch_taken_0x28894c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28894c) {
            ctx->pc = 0x288950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28894Cu;
            // 0x288950: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x288954u;
            goto label_288954;
        }
    }
    ctx->pc = 0x288954u;
label_288954:
    // 0x288954: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x288954u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x288958: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x288958u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28895c: 0x2012  mflo        $a0
    ctx->pc = 0x28895cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x288960: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x288960u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x288964: 0xacc4a4e4  sw          $a0, -0x5B1C($a2)
    ctx->pc = 0x288964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294943972), GPR_U32(ctx, 4));
    // 0x288968: 0x1012  mflo        $v0
    ctx->pc = 0x288968u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x28896c: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x28896cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288970: 0xaca2a4e0  sw          $v0, -0x5B20($a1)
    ctx->pc = 0x288970u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943968), GPR_U32(ctx, 2));
    // 0x288974: 0x832023  subu        $a0, $a0, $v1
    ctx->pc = 0x288974u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x288978: 0x3e00008  jr          $ra
    ctx->pc = 0x288978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28897Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288978u;
        // 0x28897c: 0xacc4a4e4  sw          $a0, -0x5B1C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294943972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288980u;
}
