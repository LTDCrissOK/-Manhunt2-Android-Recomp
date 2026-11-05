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

// Function: sub_0035D170
// Address: 0x35d170 - 0x35d1a0
void sub_0035D170_0x35d170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D170_0x35d170");
#endif

    switch (ctx->pc) {
        case 0x35d18cu: goto label_35d18c;
        default: break;
    }

    ctx->pc = 0x35d170u;

    // 0x35d170: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x35d170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x35d174: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x35d174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x35d178: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x35d178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x35d17c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x35d17cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d180: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x35d180u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d184: 0xc0d743c  jal         func_35D0F0
    ctx->pc = 0x35D184u;
    SET_GPR_U32(ctx, 31, 0x35D18Cu);
    ctx->pc = 0x35D188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D184u;
    // 0x35d188: 0x84a50004  lh          $a1, 0x4($a1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D0F0u, 0x35D184u, 0x35D18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D18Cu;
label_35d18c:
    // 0x35d18c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x35d18cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d190: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x35d190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35d194: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35d194u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35d198: 0x3e00008  jr          $ra
    ctx->pc = 0x35D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D198u;
        // 0x35d19c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D1A0u;
}
