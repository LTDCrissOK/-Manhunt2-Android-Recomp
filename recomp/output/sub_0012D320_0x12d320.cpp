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

// Function: sub_0012D320
// Address: 0x12d320 - 0x12d358
void sub_0012D320_0x12d320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012D320_0x12d320");
#endif

    switch (ctx->pc) {
        case 0x12d338u: goto label_12d338;
        default: break;
    }

    ctx->pc = 0x12d320u;

    // 0x12d320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12d320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12d324: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12d328: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12d328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12d32c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12d32cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12d330: 0xc04cb76  jal         func_132DD8
    ctx->pc = 0x12D330u;
    SET_GPR_U32(ctx, 31, 0x12D338u);
    ctx->pc = 0x12D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12D330u;
    // 0x12d334: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x132DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x132DD8u, 0x12D330u, 0x12D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D338u;
label_12d338:
    // 0x12d338: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x12d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12d33c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x12d33cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x12d340: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x12d340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x12d344: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12d344u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12d348: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12d348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12d34c: 0x3e00008  jr          $ra
    ctx->pc = 0x12D34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12D350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12D34Cu;
        // 0x12d350: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12D34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12D354u;
    // 0x12d354: 0x0  nop
    ctx->pc = 0x12d354u;
    // NOP
    ctx->pc = 0x12d358u;
}
