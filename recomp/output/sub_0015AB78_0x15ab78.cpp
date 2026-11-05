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

// Function: sub_0015AB78
// Address: 0x15ab78 - 0x15abb0
void sub_0015AB78_0x15ab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015AB78_0x15ab78");
#endif

    ctx->pc = 0x15ab78u;

    // 0x15ab78: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x15ab78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15ab7c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15ab80: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x15ab80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15ab84: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x15ab84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15ab88: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x15ab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x15ab8c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x15ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x15ab90: 0xaca00a24  sw          $zero, 0xA24($a1)
    ctx->pc = 0x15ab90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 2596), GPR_U32(ctx, 0));
    // 0x15ab94: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x15ab94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ab98: 0xac400a28  sw          $zero, 0xA28($v0)
    ctx->pc = 0x15ab98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2600), GPR_U32(ctx, 0));
    // 0x15ab9c: 0xc43021  addu        $a2, $a2, $a0
    ctx->pc = 0x15ab9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15aba0: 0xac600a2c  sw          $zero, 0xA2C($v1)
    ctx->pc = 0x15aba0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2604), GPR_U32(ctx, 0));
    // 0x15aba4: 0xac400a30  sw          $zero, 0xA30($v0)
    ctx->pc = 0x15aba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2608), GPR_U32(ctx, 0));
    // 0x15aba8: 0x3e00008  jr          $ra
    ctx->pc = 0x15ABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15ABA8u;
        // 0x15abac: 0xacc00a34  sw          $zero, 0xA34($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 2612), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15ABA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15ABB0u;
}
