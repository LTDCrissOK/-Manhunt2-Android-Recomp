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

// Function: sub_0021CCB0
// Address: 0x21ccb0 - 0x21cd00
void sub_0021CCB0_0x21ccb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021CCB0_0x21ccb0");
#endif

    switch (ctx->pc) {
        case 0x21ccdcu: goto label_21ccdc;
        case 0x21cce8u: goto label_21cce8;
        default: break;
    }

    ctx->pc = 0x21ccb0u;

    // 0x21ccb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21ccb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21ccb4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x21ccb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x21ccb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21ccb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21ccbc: 0x24421690  addiu       $v0, $v0, 0x1690
    ctx->pc = 0x21ccbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5776));
    // 0x21ccc0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21ccc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21ccc4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21ccc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccc8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21ccc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x21cccc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x21ccccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ccd0: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x21ccd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x21ccd4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x21CCD4u;
    SET_GPR_U32(ctx, 31, 0x21CCDCu);
    ctx->pc = 0x21CCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCD4u;
    // 0x21ccd8: 0x8e040220  lw          $a0, 0x220($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x21CCD4u, 0x21CCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCDCu;
label_21ccdc:
    // 0x21ccdc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ccdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21cce0: 0xc0836c2  jal         func_20DB08
    ctx->pc = 0x21CCE0u;
    SET_GPR_U32(ctx, 31, 0x21CCE8u);
    ctx->pc = 0x21CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21CCE0u;
    // 0x21cce4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB08u, 0x21CCE0u, 0x21CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21CCE8u;
label_21cce8:
    // 0x21cce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21cce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21ccec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21ccecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21ccf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21ccf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ccf4: 0x3e00008  jr          $ra
    ctx->pc = 0x21CCF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21CCF4u;
        // 0x21ccf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21CCF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21CCFCu;
    // 0x21ccfc: 0x0  nop
    ctx->pc = 0x21ccfcu;
    // NOP
    ctx->pc = 0x21cd00u;
}
