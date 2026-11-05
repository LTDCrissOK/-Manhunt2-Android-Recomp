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

// Function: sub_00209D48
// Address: 0x209d48 - 0x209d70
void sub_00209D48_0x209d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209D48_0x209d48");
#endif

    switch (ctx->pc) {
        case 0x209d64u: goto label_209d64;
        default: break;
    }

    ctx->pc = 0x209d48u;

    // 0x209d48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x209d4c: 0x24051013  addiu       $a1, $zero, 0x1013
    ctx->pc = 0x209d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4115));
    // 0x209d50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x209d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x209d54: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x209d54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x209d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x209d5c: 0xc082700  jal         func_209C00
    ctx->pc = 0x209D5Cu;
    SET_GPR_U32(ctx, 31, 0x209D64u);
    ctx->pc = 0x209D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x209D5Cu;
    // 0x209d60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C00u, 0x209D5Cu, 0x209D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x209D64u;
label_209d64:
    // 0x209d64: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x209d64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d68: 0x3e00008  jr          $ra
    ctx->pc = 0x209D68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209D68u;
        // 0x209d6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209D68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209D70u;
}
