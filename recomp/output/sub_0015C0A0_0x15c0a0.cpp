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

// Function: sub_0015C0A0
// Address: 0x15c0a0 - 0x15c0c8
void sub_0015C0A0_0x15c0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015C0A0_0x15c0a0");
#endif

    ctx->pc = 0x15c0a0u;

    // 0x15c0a0: 0x90820a20  lbu         $v0, 0xA20($a0)
    ctx->pc = 0x15c0a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x15c0a4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x15c0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15c0a8: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x15c0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x15c0ac: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x15c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x15c0b0: 0xac450320  sw          $a1, 0x320($v0)
    ctx->pc = 0x15c0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 5));
    // 0x15c0b4: 0x90830a20  lbu         $v1, 0xA20($a0)
    ctx->pc = 0x15c0b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2592)));
    // 0x15c0b8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x15c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x15c0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x15C0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15C0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15C0BCu;
        // 0x15c0c0: 0xa0830a20  sb          $v1, 0xA20($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2592), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15C0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15C0C4u;
    // 0x15c0c4: 0x0  nop
    ctx->pc = 0x15c0c4u;
    // NOP
    ctx->pc = 0x15c0c8u;
}
