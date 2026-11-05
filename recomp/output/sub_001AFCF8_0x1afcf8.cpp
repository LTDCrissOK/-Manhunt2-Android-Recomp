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

// Function: sub_001AFCF8
// Address: 0x1afcf8 - 0x1afd20
void sub_001AFCF8_0x1afcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AFCF8_0x1afcf8");
#endif

    switch (ctx->pc) {
        case 0x1afd10u: goto label_1afd10;
        default: break;
    }

    ctx->pc = 0x1afcf8u;

    // 0x1afcf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1afcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1afcfc: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1afcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1afd00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1afd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1afd04: 0x24060190  addiu       $a2, $zero, 0x190
    ctx->pc = 0x1afd04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x1afd08: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AFD08u;
    SET_GPR_U32(ctx, 31, 0x1AFD10u);
    ctx->pc = 0x1AFD0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AFD08u;
    // 0x1afd0c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AFD08u, 0x1AFD10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AFD10u;
label_1afd10:
    // 0x1afd10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1afd10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1afd14: 0x3e00008  jr          $ra
    ctx->pc = 0x1AFD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AFD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AFD14u;
        // 0x1afd18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AFD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AFD1Cu;
    // 0x1afd1c: 0x0  nop
    ctx->pc = 0x1afd1cu;
    // NOP
    ctx->pc = 0x1afd20u;
}
