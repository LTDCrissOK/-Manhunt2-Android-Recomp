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

// Function: sub_0020A200
// Address: 0x20a200 - 0x20a230
void sub_0020A200_0x20a200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A200_0x20a200");
#endif

    switch (ctx->pc) {
        case 0x20a220u: goto label_20a220;
        default: break;
    }

    ctx->pc = 0x20a200u;

    // 0x20a200: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a204: 0x24054005  addiu       $a1, $zero, 0x4005
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16389));
    // 0x20a208: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20a208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20a20c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a20cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x20a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20a214: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a218: 0xc082700  jal         func_209C00
    ctx->pc = 0x20A218u;
    SET_GPR_U32(ctx, 31, 0x20A220u);
    ctx->pc = 0x20A21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A218u;
    // 0x20a21c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x20A218u, 0x20A220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A220u;
label_20a220:
    // 0x20a220: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20a220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20a224: 0x3e00008  jr          $ra
    ctx->pc = 0x20A224u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A224u;
        // 0x20a228: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A224u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A22Cu;
    // 0x20a22c: 0x0  nop
    ctx->pc = 0x20a22cu;
    // NOP
    ctx->pc = 0x20a230u;
}
