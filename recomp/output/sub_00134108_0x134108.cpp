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

// Function: sub_00134108
// Address: 0x134108 - 0x134130
void sub_00134108_0x134108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134108_0x134108");
#endif

    switch (ctx->pc) {
        case 0x13411cu: goto label_13411c;
        default: break;
    }

    ctx->pc = 0x134108u;

    // 0x134108: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x134108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13410c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13410cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x134110: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x134110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x134114: 0xc04d0a2  jal         func_134288
    ctx->pc = 0x134114u;
    SET_GPR_U32(ctx, 31, 0x13411Cu);
    ctx->pc = 0x134118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134114u;
    // 0x134118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134288u, 0x134114u, 0x13411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13411Cu;
label_13411c:
    // 0x13411c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x13411cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x134120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x134120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x134124: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x134124u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x134128: 0x3e00008  jr          $ra
    ctx->pc = 0x134128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134128u;
        // 0x13412c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x134128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x134130u;
}
