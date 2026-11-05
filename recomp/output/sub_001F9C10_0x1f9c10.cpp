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

// Function: sub_001F9C10
// Address: 0x1f9c10 - 0x1f9c20
void sub_001F9C10_0x1f9c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9C10_0x1f9c10");
#endif

    ctx->pc = 0x1f9c10u;

    // 0x1f9c10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f9c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f9c14: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1f9c14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f9c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1F9C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9C18u;
        // 0x1f9c1c: 0xe48c161c  swc1        $f12, 0x161C($a0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 5660), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F9C20u;
}
