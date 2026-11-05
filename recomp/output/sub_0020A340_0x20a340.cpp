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

// Function: sub_0020A340
// Address: 0x20a340 - 0x20a370
void sub_0020A340_0x20a340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A340_0x20a340");
#endif

    switch (ctx->pc) {
        case 0x20a364u: goto label_20a364;
        default: break;
    }

    ctx->pc = 0x20a340u;

    // 0x20a340: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a344: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a344u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a348: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a34c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a350: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x20a350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x20a354: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a358: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20a358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20a35c: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A35Cu;
    SET_GPR_U32(ctx, 31, 0x20A364u);
    ctx->pc = 0x20A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A35Cu;
    // 0x20a360: 0x2405400d  addiu       $a1, $zero, 0x400D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16397));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A35Cu, 0x20A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A364u;
label_20a364:
    // 0x20a364: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a368: 0x3e00008  jr          $ra
    ctx->pc = 0x20A368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A368u;
        // 0x20a36c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A370u;
}
