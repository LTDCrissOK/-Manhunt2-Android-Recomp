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

// Function: sub_002ACC98
// Address: 0x2acc98 - 0x2accd0
void sub_002ACC98_0x2acc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACC98_0x2acc98");
#endif

    switch (ctx->pc) {
        case 0x2accbcu: goto label_2accbc;
        default: break;
    }

    ctx->pc = 0x2acc98u;

    // 0x2acc98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acc9c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2acc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2acca0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acca4: 0x24423868  addiu       $v0, $v0, 0x3868
    ctx->pc = 0x2acca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14440));
    // 0x2acca8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2acca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2accac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2accacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x2accb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x2accb4: 0xc0ab334  jal         func_2ACCD0
    ctx->pc = 0x2ACCB4u;
    SET_GPR_U32(ctx, 31, 0x2ACCBCu);
    ctx->pc = 0x2ACCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACCB4u;
    // 0x2accb8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACCD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACCD0u, 0x2ACCB4u, 0x2ACCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACCBCu;
label_2accbc:
    // 0x2accbc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2accbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2accc0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2accc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2accc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2accc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2accc8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACCC8u;
        // 0x2acccc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACCD0u;
}
