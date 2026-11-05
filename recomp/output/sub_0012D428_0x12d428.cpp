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

// Function: sub_0012D428
// Address: 0x12d428 - 0x12d468
void sub_0012D428_0x12d428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D428_0x12d428");
#endif

    switch (ctx->pc) {
        case 0x12d440u: goto label_12d440;
        case 0x12d450u: goto label_12d450;
        default: break;
    }

    ctx->pc = 0x12d428u;

    // 0x12d428: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d430: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12d430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d434: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d438: 0xc04c626  jal         func_131898
    ctx->pc = 0x12D438u;
    SET_GPR_U32(ctx, 31, 0x12D440u);
    ctx->pc = 0x12D43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D438u;
    // 0x12d43c: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131898u, 0x12D438u, 0x12D440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D440u;
label_12d440:
    // 0x12d440: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x12d440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x12d444: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x12d444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x12d448: 0xc0420ea  jal         func_1083A8
    ctx->pc = 0x12D448u;
    SET_GPR_U32(ctx, 31, 0x12D450u);
    ctx->pc = 0x12D44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D448u;
    // 0x12d44c: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1083A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1083A8u, 0x12D448u, 0x12D450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D450u;
label_12d450:
    // 0x12d450: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x12d450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x12d454: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d458: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12d458u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d45c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D45Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D45Cu;
        // 0x12d460: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D45Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D464u;
    // 0x12d464: 0x0  nop
    ctx->pc = 0x12d464u;
    // NOP
    ctx->pc = 0x12d468u;
}
