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

// Function: sub_00180590
// Address: 0x180590 - 0x1805b8
void sub_00180590_0x180590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180590_0x180590");
#endif

    ctx->pc = 0x180590u;

    // 0x180590: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x180590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x180594: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x180594u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x180598: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x180598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x18059c: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x18059cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1805a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1805a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1805a4: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x1805a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x1805a8: 0x7c800000  sq          $zero, 0x0($a0)
    ctx->pc = 0x1805a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 0));
    // 0x1805ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1805ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1805ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1805B4u;
    // 0x1805b4: 0x0  nop
    ctx->pc = 0x1805b4u;
    // NOP
    ctx->pc = 0x1805b8u;
}
