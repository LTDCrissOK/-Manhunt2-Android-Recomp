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

// Function: sub_0025A818
// Address: 0x25a818 - 0x25a840
void sub_0025A818_0x25a818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A818_0x25a818");
#endif

    ctx->pc = 0x25a818u;

    // 0x25a818: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x25a818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a81c: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x25a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x25a820: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x25a820u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x25a824: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x25a828: 0x24429ba8  addiu       $v0, $v0, -0x6458
    ctx->pc = 0x25a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941608));
    // 0x25a82c: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x25a82cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x25a830: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x25a830u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x25a834: 0x3e00008  jr          $ra
    ctx->pc = 0x25A834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A834u;
        // 0x25a838: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A83Cu;
    // 0x25a83c: 0x0  nop
    ctx->pc = 0x25a83cu;
    // NOP
    ctx->pc = 0x25a840u;
}
