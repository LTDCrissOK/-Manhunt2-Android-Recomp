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

// Function: sub_001AB1D0
// Address: 0x1ab1d0 - 0x1ab210
void sub_001AB1D0_0x1ab1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB1D0_0x1ab1d0");
#endif

    switch (ctx->pc) {
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab200u: goto label_1ab200;
        default: break;
    }

    ctx->pc = 0x1ab1d0u;

    // 0x1ab1d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ab1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1ab1d4: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x1ab1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x1ab1d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ab1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ab1dc: 0x8c820158  lw          $v0, 0x158($a0)
    ctx->pc = 0x1ab1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x1ab1e0: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AB1E0u;
    {
        const bool branch_taken_0x1ab1e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1AB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1E0u;
        // 0x1ab1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1e0) {
            ctx->pc = 0x1AB1F8u;
            goto label_1ab1f8;
        }
    }
    ctx->pc = 0x1AB1E8u;
    // 0x1ab1e8: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB1E8u;
    SET_GPR_U32(ctx, 31, 0x1AB1F0u);
    ctx->pc = 0x1AB1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1E8u;
    // 0x1ab1ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB1E8u, 0x1AB1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB1F0u;
label_1ab1f0:
    // 0x1ab1f0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AB1F0u;
    {
        const bool branch_taken_0x1ab1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB1F0u;
        // 0x1ab1f4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab1f0) {
            ctx->pc = 0x1AB204u;
            goto label_1ab204;
        }
    }
    ctx->pc = 0x1AB1F8u;
label_1ab1f8:
    // 0x1ab1f8: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1AB1F8u;
    SET_GPR_U32(ctx, 31, 0x1AB200u);
    ctx->pc = 0x1AB1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AB1F8u;
    // 0x1ab1fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1AB1F8u, 0x1AB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB200u;
label_1ab200:
    // 0x1ab200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ab200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ab204:
    // 0x1ab204: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB204u;
        // 0x1ab208: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB20Cu;
    // 0x1ab20c: 0x0  nop
    ctx->pc = 0x1ab20cu;
    // NOP
    ctx->pc = 0x1ab210u;
}
