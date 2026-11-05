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

// Function: sub_0017CCF8
// Address: 0x17ccf8 - 0x17cd20
void sub_0017CCF8_0x17ccf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017CCF8_0x17ccf8");
#endif

    ctx->pc = 0x17ccf8u;

    // 0x17ccf8: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x17ccf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x17ccfc: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x17ccfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x17cd00: 0xac820074  sw          $v0, 0x74($a0)
    ctx->pc = 0x17cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 116), GPR_U32(ctx, 2));
    // 0x17cd04: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x17cd04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x17cd08: 0x7c800080  sq          $zero, 0x80($a0)
    ctx->pc = 0x17cd08u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), GPR_VEC(ctx, 0));
    // 0x17cd0c: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x17cd0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x17cd10: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x17cd10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x17cd14: 0x3e00008  jr          $ra
    ctx->pc = 0x17CD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17CD14u;
        // 0x17cd18: 0xac800094  sw          $zero, 0x94($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17CD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17CD1Cu;
    // 0x17cd1c: 0x0  nop
    ctx->pc = 0x17cd1cu;
    // NOP
    ctx->pc = 0x17cd20u;
}
