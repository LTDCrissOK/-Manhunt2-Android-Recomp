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

// Function: sub_001C0860
// Address: 0x1c0860 - 0x1c08a8
void sub_001C0860_0x1c0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0860_0x1c0860");
#endif

    switch (ctx->pc) {
        case 0x1c0888u: goto label_1c0888;
        case 0x1c0898u: goto label_1c0898;
        default: break;
    }

    ctx->pc = 0x1c0860u;

    // 0x1c0860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c0864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c0868: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c0868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c086c: 0xac8204b0  sw          $v0, 0x4B0($a0)
    ctx->pc = 0x1c086cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1200), GPR_U32(ctx, 2));
    // 0x1c0870: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1c0874: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0874u;
    {
        const bool branch_taken_0x1c0874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0874) {
            ctx->pc = 0x1C0890u;
            goto label_1c0890;
        }
    }
    ctx->pc = 0x1C087Cu;
    // 0x1c087c: 0x8ca50014  lw          $a1, 0x14($a1)
    ctx->pc = 0x1c087cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1c0880: 0xc07026c  jal         func_1C09B0
    ctx->pc = 0x1C0880u;
    SET_GPR_U32(ctx, 31, 0x1C0888u);
    ctx->pc = 0x1C0884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0880u;
    // 0x1c0884: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C09B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C09B0u, 0x1C0880u, 0x1C0888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0888u;
label_1c0888:
    // 0x1c0888: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C0888u;
    {
        const bool branch_taken_0x1c0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0888u;
        // 0x1c088c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0888) {
            ctx->pc = 0x1C089Cu;
            goto label_1c089c;
        }
    }
    ctx->pc = 0x1C0890u;
label_1c0890:
    // 0x1c0890: 0xc06f738  jal         func_1BDCE0
    ctx->pc = 0x1C0890u;
    SET_GPR_U32(ctx, 31, 0x1C0898u);
    ctx->pc = 0x1BDCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDCE0u, 0x1C0890u, 0x1C0898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0898u;
label_1c0898:
    // 0x1c0898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c089c:
    // 0x1c089c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C089Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C08A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C089Cu;
        // 0x1c08a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C089Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C08A4u;
    // 0x1c08a4: 0x0  nop
    ctx->pc = 0x1c08a4u;
    // NOP
    ctx->pc = 0x1c08a8u;
}
