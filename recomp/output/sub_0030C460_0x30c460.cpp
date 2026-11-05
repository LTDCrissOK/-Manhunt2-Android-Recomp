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

// Function: sub_0030C460
// Address: 0x30c460 - 0x30c490
void sub_0030C460_0x30c460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C460_0x30c460");
#endif

    switch (ctx->pc) {
        case 0x30c47cu: goto label_30c47c;
        default: break;
    }

    ctx->pc = 0x30c460u;

    // 0x30c460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30c464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30c468: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x30c468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x30c46c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30c46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c470: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x30c470u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x30c474: 0xc0c24de  jal         func_309378
    ctx->pc = 0x30C474u;
    SET_GPR_U32(ctx, 31, 0x30C47Cu);
    ctx->pc = 0x30C478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C474u;
    // 0x30c478: 0x34a50001  ori         $a1, $a1, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x309378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x309378u, 0x30C474u, 0x30C47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C47Cu;
label_30c47c:
    // 0x30c47c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x30c47cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c480: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x30c480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30c484: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30c484u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c488: 0x3e00008  jr          $ra
    ctx->pc = 0x30C488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C488u;
        // 0x30c48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C490u;
}
