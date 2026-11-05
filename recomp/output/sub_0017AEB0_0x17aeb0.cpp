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

// Function: sub_0017AEB0
// Address: 0x17aeb0 - 0x17aef8
void sub_0017AEB0_0x17aeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AEB0_0x17aeb0");
#endif

    ctx->pc = 0x17aeb0u;

    // 0x17aeb0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x17aeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x17aeb4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x17aeb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17aeb8: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x17aeb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x17aebc: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x17aebcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17aec0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x17aec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x17aec4: 0xac470220  sw          $a3, 0x220($v0)
    ctx->pc = 0x17aec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 7));
    // 0x17aec8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x17aec8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aecc: 0xac670224  sw          $a3, 0x224($v1)
    ctx->pc = 0x17aeccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 548), GPR_U32(ctx, 7));
    // 0x17aed0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17aed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aed4: 0xacc00228  sw          $zero, 0x228($a2)
    ctx->pc = 0x17aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 552), GPR_U32(ctx, 0));
    // 0x17aed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17aed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aedc: 0xa0400230  sb          $zero, 0x230($v0)
    ctx->pc = 0x17aedcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 560), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aee0: 0xa040022c  sb          $zero, 0x22C($v0)
    ctx->pc = 0x17aee0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 556), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aee4: 0xa040022d  sb          $zero, 0x22D($v0)
    ctx->pc = 0x17aee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 557), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aee8: 0xa040022e  sb          $zero, 0x22E($v0)
    ctx->pc = 0x17aee8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 558), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aeec: 0xa040022f  sb          $zero, 0x22F($v0)
    ctx->pc = 0x17aeecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 559), (uint8_t)GPR_U32(ctx, 0));
    // 0x17aef0: 0x3e00008  jr          $ra
    ctx->pc = 0x17AEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17AEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AEF0u;
        // 0x17aef4: 0xac800234  sw          $zero, 0x234($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AEF8u;
}
