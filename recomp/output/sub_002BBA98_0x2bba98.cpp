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

// Function: sub_002BBA98
// Address: 0x2bba98 - 0x2bbad0
void sub_002BBA98_0x2bba98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBA98_0x2bba98");
#endif

    switch (ctx->pc) {
        case 0x2bbaacu: goto label_2bbaac;
        default: break;
    }

    ctx->pc = 0x2bba98u;

    // 0x2bba98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bba98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bba9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bba9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bbaa0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bbaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bbaa4: 0xc0b0bc2  jal         func_2C2F08
    ctx->pc = 0x2BBAA4u;
    SET_GPR_U32(ctx, 31, 0x2BBAACu);
    ctx->pc = 0x2BBAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBAA4u;
    // 0x2bbaa8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2F08u, 0x2BBAA4u, 0x2BBAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBAACu;
label_2bbaac:
    // 0x2bbaac: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bbaacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bbab0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bbab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bbab4: 0x24633968  addiu       $v1, $v1, 0x3968
    ctx->pc = 0x2bbab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14696));
    // 0x2bbab8: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2bbab8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2bbabc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x2bbabcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x2bbac0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbac0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbac4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bbac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bbac8: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAC8u;
        // 0x2bbacc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBAD0u;
}
