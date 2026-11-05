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

// Function: sub_00370658
// Address: 0x370658 - 0x370690
void sub_00370658_0x370658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370658_0x370658");
#endif

    switch (ctx->pc) {
        case 0x370674u: goto label_370674;
        default: break;
    }

    ctx->pc = 0x370658u;

    // 0x370658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37065c: 0x24050088  addiu       $a1, $zero, 0x88
    ctx->pc = 0x37065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
    // 0x370660: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370664: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x370664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x370668: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x370668u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37066c: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x37066Cu;
    SET_GPR_U32(ctx, 31, 0x370674u);
    ctx->pc = 0x370670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37066Cu;
    // 0x370670: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x37066Cu, 0x370674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370674u;
label_370674:
    // 0x370674: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x370674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x370678: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x370678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x37067c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37067cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370680: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x370684: 0x3e00008  jr          $ra
    ctx->pc = 0x370684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370684u;
        // 0x370688: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37068Cu;
    // 0x37068c: 0x0  nop
    ctx->pc = 0x37068cu;
    // NOP
    ctx->pc = 0x370690u;
}
