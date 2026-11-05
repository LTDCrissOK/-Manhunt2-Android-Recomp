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

// Function: sub_003DB040
// Address: 0x3db040 - 0x3db068
void sub_003DB040_0x3db040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DB040_0x3db040");
#endif

    switch (ctx->pc) {
        case 0x3db050u: goto label_3db050;
        case 0x3db058u: goto label_3db058;
        default: break;
    }

    ctx->pc = 0x3db040u;

    // 0x3db040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3db040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3db044: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3db044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3db048: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x3DB048u;
    SET_GPR_U32(ctx, 31, 0x3DB050u);
    ctx->pc = 0x3DB04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB048u;
    // 0x3db04c: 0x240402f0  addiu       $a0, $zero, 0x2F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x3DB048u, 0x3DB050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB050u;
label_3db050:
    // 0x3db050: 0xc055be2  jal         func_156F88
    ctx->pc = 0x3DB050u;
    SET_GPR_U32(ctx, 31, 0x3DB058u);
    ctx->pc = 0x3DB054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DB050u;
    // 0x3db054: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156F88u, 0x3DB050u, 0x3DB058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DB058u;
label_3db058:
    // 0x3db058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3db058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3db05c: 0x3e00008  jr          $ra
    ctx->pc = 0x3DB05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DB060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DB05Cu;
        // 0x3db060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DB05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DB064u;
    // 0x3db064: 0x0  nop
    ctx->pc = 0x3db064u;
    // NOP
    ctx->pc = 0x3db068u;
}
