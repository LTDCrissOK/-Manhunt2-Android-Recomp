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

// Function: sub_00142178
// Address: 0x142178 - 0x1421a0
void sub_00142178_0x142178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00142178_0x142178");
#endif

    ctx->pc = 0x142178u;

    // 0x142178: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x142178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x14217c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x14217cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x142180: 0xa23018  mult        $a2, $a1, $v0
    ctx->pc = 0x142180u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x142184: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x142184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x142188: 0xac600b10  sw          $zero, 0xB10($v1)
    ctx->pc = 0x142188u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2832), GPR_U32(ctx, 0));
    // 0x14218c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14218cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142190: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x142190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142194: 0xacc00b14  sw          $zero, 0xB14($a2)
    ctx->pc = 0x142194u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 2836), GPR_U32(ctx, 0));
    // 0x142198: 0x3e00008  jr          $ra
    ctx->pc = 0x142198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142198u;
        // 0x14219c: 0xaca00b18  sw          $zero, 0xB18($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 2840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1421A0u;
}
