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

// Function: sub_0028B738
// Address: 0x28b738 - 0x28b788
void sub_0028B738_0x28b738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B738_0x28b738");
#endif

    switch (ctx->pc) {
        case 0x28b748u: goto label_28b748;
        case 0x28b770u: goto label_28b770;
        case 0x28b778u: goto label_28b778;
        default: break;
    }

    ctx->pc = 0x28b738u;

    // 0x28b738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x28b738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x28b73c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b73cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b740: 0xc097f2a  jal         func_25FCA8
    ctx->pc = 0x28B740u;
    SET_GPR_U32(ctx, 31, 0x28B748u);
    ctx->pc = 0x25FCA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FCA8u, 0x28B740u, 0x28B748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B748u;
label_28b748:
    // 0x28b748: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28b748u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b74c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28B74Cu;
    {
        const bool branch_taken_0x28b74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B74Cu;
        // 0x28b750: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b74c) {
            ctx->pc = 0x28B778u;
            goto label_28b778;
        }
    }
    ctx->pc = 0x28B754u;
    // 0x28b754: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B754u;
    {
        const bool branch_taken_0x28b754 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B754u;
        // 0x28b758: 0x3c04006c  lui         $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b754) {
            ctx->pc = 0x28B764u;
            goto label_28b764;
        }
    }
    ctx->pc = 0x28B75Cu;
    // 0x28b75c: 0x2482ac88  addiu       $v0, $a0, -0x5378
    ctx->pc = 0x28b75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    // 0x28b760: 0xac430168  sw          $v1, 0x168($v0)
    ctx->pc = 0x28b760u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 3));
label_28b764:
    // 0x28b764: 0x2482ac88  addiu       $v0, $a0, -0x5378
    ctx->pc = 0x28b764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945928));
    // 0x28b768: 0xc0a2dbe  jal         func_28B6F8
    ctx->pc = 0x28B768u;
    SET_GPR_U32(ctx, 31, 0x28B770u);
    ctx->pc = 0x28B76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B768u;
    // 0x28b76c: 0x8c440168  lw          $a0, 0x168($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B6F8u, 0x28B768u, 0x28B770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B770u;
label_28b770:
    // 0x28b770: 0xc0a2de2  jal         func_28B788
    ctx->pc = 0x28B770u;
    SET_GPR_U32(ctx, 31, 0x28B778u);
    ctx->pc = 0x28B788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B788u, 0x28B770u, 0x28B778u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28B778u;
label_28b778:
    // 0x28b778: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b77c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B77Cu;
        // 0x28b780: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B784u;
    // 0x28b784: 0x0  nop
    ctx->pc = 0x28b784u;
    // NOP
    ctx->pc = 0x28b788u;
}
