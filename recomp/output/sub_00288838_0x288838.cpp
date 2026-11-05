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

// Function: sub_00288838
// Address: 0x288838 - 0x288870
void sub_00288838_0x288838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288838_0x288838");
#endif

    ctx->pc = 0x288838u;

    // 0x288838: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x288838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28883c: 0x3e00008  jr          $ra
    ctx->pc = 0x28883Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28883Cu;
        // 0x288840: 0x8c6225d4  lw          $v0, 0x25D4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 9684)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28883Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288844u;
    // 0x288844: 0x0  nop
    ctx->pc = 0x288844u;
    // NOP
    // 0x288848: 0xac4400cc  sw          $a0, 0xCC($v0)
    ctx->pc = 0x288848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 4));
    // 0x28884c: 0x0  nop
    ctx->pc = 0x28884cu;
    // NOP
    // 0x288850: 0xac830048  sw          $v1, 0x48($a0)
    ctx->pc = 0x288850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
    // 0x288854: 0x0  nop
    ctx->pc = 0x288854u;
    // NOP
    // 0x288858: 0xac8300e4  sw          $v1, 0xE4($a0)
    ctx->pc = 0x288858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 228), GPR_U32(ctx, 3));
    // 0x28885c: 0x0  nop
    ctx->pc = 0x28885cu;
    // NOP
    // 0x288860: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x288860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
    // 0x288864: 0x0  nop
    ctx->pc = 0x288864u;
    // NOP
    // 0x288868: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x288868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x28886c: 0x0  nop
    ctx->pc = 0x28886cu;
    // NOP
    ctx->pc = 0x288870u;
}
