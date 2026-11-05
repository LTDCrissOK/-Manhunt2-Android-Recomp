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

// Function: sub_0031E868
// Address: 0x31e868 - 0x31e898
void sub_0031E868_0x31e868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E868_0x31e868");
#endif

    switch (ctx->pc) {
        case 0x31e88cu: goto label_31e88c;
        default: break;
    }

    ctx->pc = 0x31e868u;

    // 0x31e868: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e86c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x31e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x31e870: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31E870u;
    {
        const bool branch_taken_0x31e870 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31E874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E870u;
        // 0x31e874: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e870) {
            ctx->pc = 0x31E88Cu;
            goto label_31e88c;
        }
    }
    ctx->pc = 0x31E878u;
    // 0x31e878: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x31E878u;
    {
        const bool branch_taken_0x31e878 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31E87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E878u;
        // 0x31e87c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e878) {
            ctx->pc = 0x31E890u;
            goto label_31e890;
        }
    }
    ctx->pc = 0x31E880u;
    // 0x31e880: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31e880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x31e884: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x31E884u;
    SET_GPR_U32(ctx, 31, 0x31E88Cu);
    ctx->pc = 0x31E888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31E884u;
    // 0x31e888: 0x24842310  addiu       $a0, $a0, 0x2310 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x31E884u, 0x31E88Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31E88Cu;
label_31e88c:
    // 0x31e88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_31e890:
    // 0x31e890: 0x3e00008  jr          $ra
    ctx->pc = 0x31E890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E890u;
        // 0x31e894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E898u;
}
