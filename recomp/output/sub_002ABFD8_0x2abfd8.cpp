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

// Function: sub_002ABFD8
// Address: 0x2abfd8 - 0x2ac010
void sub_002ABFD8_0x2abfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABFD8_0x2abfd8");
#endif

    switch (ctx->pc) {
        case 0x2abfe0u: goto label_2abfe0;
        default: break;
    }

    ctx->pc = 0x2abfd8u;

    // 0x2abfd8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABFD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFD8u;
        // 0x2abfdc: 0x240205dc  addiu       $v0, $zero, 0x5DC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1500));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABFD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABFE0u;
label_2abfe0:
    // 0x2abfe0: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x2abfe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x2abfe4: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABFE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABFE4u;
        // 0x2abfe8: 0xa21018  mult        $v0, $a1, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABFE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABFECu;
    // 0x2abfec: 0x0  nop
    ctx->pc = 0x2abfecu;
    // NOP
    // 0x2abff0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2abff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2abff4: 0x0  nop
    ctx->pc = 0x2abff4u;
    // NOP
    // 0x2abff8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2abff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2abffc: 0x0  nop
    ctx->pc = 0x2abffcu;
    // NOP
    // 0x2ac000: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2ac000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2ac004: 0x0  nop
    ctx->pc = 0x2ac004u;
    // NOP
    // 0x2ac008: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x2ac008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2ac00c: 0x0  nop
    ctx->pc = 0x2ac00cu;
    // NOP
    ctx->pc = 0x2ac010u;
}
