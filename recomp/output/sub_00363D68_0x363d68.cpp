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

// Function: sub_00363D68
// Address: 0x363d68 - 0x363d80
void sub_00363D68_0x363d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363D68_0x363d68");
#endif

    ctx->pc = 0x363d68u;

    // 0x363d68: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x363d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x363d6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x363d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363d70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x363d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363d74: 0x3e00008  jr          $ra
    ctx->pc = 0x363D74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D74u;
        // 0x363d78: 0xc4800010  lwc1        $f0, 0x10($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D7Cu;
    // 0x363d7c: 0x0  nop
    ctx->pc = 0x363d7cu;
    // NOP
    ctx->pc = 0x363d80u;
}
