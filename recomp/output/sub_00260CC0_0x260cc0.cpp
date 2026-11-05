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

// Function: sub_00260CC0
// Address: 0x260cc0 - 0x260d18
void sub_00260CC0_0x260cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260CC0_0x260cc0");
#endif

    switch (ctx->pc) {
        case 0x260cd4u: goto label_260cd4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260d08u: goto label_260d08;
        default: break;
    }

    ctx->pc = 0x260cc0u;

    // 0x260cc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x260cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x260cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x260cc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x260cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x260ccc: 0xc0982c8  jal         func_260B20
    ctx->pc = 0x260CCCu;
    SET_GPR_U32(ctx, 31, 0x260CD4u);
    ctx->pc = 0x260CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CCCu;
    // 0x260cd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260B20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260B20u, 0x260CCCu, 0x260CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CD4u;
label_260cd4:
    // 0x260cd4: 0x8e020234  lw          $v0, 0x234($s0)
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x260cd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260CD8u;
    {
        const bool branch_taken_0x260cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260cd8) {
            ctx->pc = 0x260CF0u;
            goto label_260cf0;
        }
    }
    ctx->pc = 0x260CE0u;
    // 0x260ce0: 0x8e020230  lw          $v0, 0x230($s0)
    ctx->pc = 0x260ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 560)));
    // 0x260ce4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x260ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x260ce8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x260CE8u;
    {
        const bool branch_taken_0x260ce8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260ce8) {
            ctx->pc = 0x260D00u;
            goto label_260d00;
        }
    }
    ctx->pc = 0x260CF0u;
label_260cf0:
    // 0x260cf0: 0xc084aba  jal         func_212AE8
    ctx->pc = 0x260CF0u;
    SET_GPR_U32(ctx, 31, 0x260CF8u);
    ctx->pc = 0x260CF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260CF0u;
    // 0x260cf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212AE8u, 0x260CF0u, 0x260CF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CF8u;
label_260cf8:
    // 0x260cf8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x260CF8u;
    {
        const bool branch_taken_0x260cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CF8u;
        // 0x260cfc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260cf8) {
            ctx->pc = 0x260D0Cu;
            goto label_260d0c;
        }
    }
    ctx->pc = 0x260D00u;
label_260d00:
    // 0x260d00: 0xc08735a  jal         func_21CD68
    ctx->pc = 0x260D00u;
    SET_GPR_U32(ctx, 31, 0x260D08u);
    ctx->pc = 0x260D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260D00u;
    // 0x260d04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21CD68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21CD68u, 0x260D00u, 0x260D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260D08u;
label_260d08:
    // 0x260d08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260d08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260d0c:
    // 0x260d0c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x260d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x260d10: 0x3e00008  jr          $ra
    ctx->pc = 0x260D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260D10u;
        // 0x260d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260D18u;
}
