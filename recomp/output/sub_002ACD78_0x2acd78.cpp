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

// Function: sub_002ACD78
// Address: 0x2acd78 - 0x2acdb0
void sub_002ACD78_0x2acd78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACD78_0x2acd78");
#endif

    switch (ctx->pc) {
        case 0x2acd8cu: goto label_2acd8c;
        default: break;
    }

    ctx->pc = 0x2acd78u;

    // 0x2acd78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2acd78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2acd7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2acd80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2acd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2acd84: 0xc0ab326  jal         func_2ACC98
    ctx->pc = 0x2ACD84u;
    SET_GPR_U32(ctx, 31, 0x2ACD8Cu);
    ctx->pc = 0x2ACD88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ACD84u;
    // 0x2acd88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ACC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ACC98u, 0x2ACD84u, 0x2ACD8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ACD8Cu;
label_2acd8c:
    // 0x2acd8c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2acd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2acd90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2acd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2acd94: 0x24633880  addiu       $v1, $v1, 0x3880
    ctx->pc = 0x2acd94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14464));
    // 0x2acd98: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2acd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x2acd9c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2acd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2acda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2acda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2acda4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2acda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2acda8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ACDA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ACDA8u;
        // 0x2acdac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ACDA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ACDB0u;
}
