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

// Function: sub_0020A1D0
// Address: 0x20a1d0 - 0x20a200
void sub_0020A1D0_0x20a1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A1D0_0x20a1d0");
#endif

    switch (ctx->pc) {
        case 0x20a1f0u: goto label_20a1f0;
        default: break;
    }

    ctx->pc = 0x20a1d0u;

    // 0x20a1d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a1d4: 0x24054004  addiu       $a1, $zero, 0x4004
    ctx->pc = 0x20a1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16388));
    // 0x20a1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a1dc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a1dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a1e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a1e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a1e8: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A1E8u;
    SET_GPR_U32(ctx, 31, 0x20A1F0u);
    ctx->pc = 0x20A1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A1E8u;
    // 0x20a1ec: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A1E8u, 0x20A1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A1F0u;
label_20a1f0:
    // 0x20a1f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a1f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a1f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20A1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A1F4u;
        // 0x20a1f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A1F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A1FCu;
    // 0x20a1fc: 0x0  nop
    ctx->pc = 0x20a1fcu;
    // NOP
    ctx->pc = 0x20a200u;
}
