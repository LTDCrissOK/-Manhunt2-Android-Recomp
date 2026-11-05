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

// Function: sub_00133820
// Address: 0x133820 - 0x133868
void sub_00133820_0x133820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133820_0x133820");
#endif

    switch (ctx->pc) {
        case 0x133844u: goto label_133844;
        default: break;
    }

    ctx->pc = 0x133820u;

    // 0x133820: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133824: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133828: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13382c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13382cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133830: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x133830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133834: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x133834u;
    {
        const bool branch_taken_0x133834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133834) {
            ctx->pc = 0x133838u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133834u;
            // 0x133838: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133858u;
            goto label_133858;
        }
    }
    ctx->pc = 0x13383Cu;
    // 0x13383c: 0xc04b408  jal         func_12D020
    ctx->pc = 0x13383Cu;
    SET_GPR_U32(ctx, 31, 0x133844u);
    ctx->pc = 0x12D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D020u, 0x13383Cu, 0x133844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133844u;
label_133844:
    // 0x133844: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x133844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x133848: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x133848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x13384c: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x13384cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x133850: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x133850u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x133854: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133854u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133858:
    // 0x133858: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x133858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13385c: 0x3e00008  jr          $ra
    ctx->pc = 0x13385Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13385Cu;
        // 0x133860: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13385Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133864u;
    // 0x133864: 0x0  nop
    ctx->pc = 0x133864u;
    // NOP
    ctx->pc = 0x133868u;
}
