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

// Function: sub_0016D208
// Address: 0x16d208 - 0x16d238
void sub_0016D208_0x16d208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D208_0x16d208");
#endif

    switch (ctx->pc) {
        case 0x16d220u: goto label_16d220;
        case 0x16d228u: goto label_16d228;
        default: break;
    }

    ctx->pc = 0x16d208u;

    // 0x16d208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16d20c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16d20cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16d210: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16d210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16d214: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16d214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d218: 0xc05b1c8  jal         func_16C720
    ctx->pc = 0x16D218u;
    SET_GPR_U32(ctx, 31, 0x16D220u);
    ctx->pc = 0x16D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D218u;
    // 0x16d21c: 0xa20500f8  sb          $a1, 0xF8($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 248), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C720u, 0x16D218u, 0x16D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D220u;
label_16d220:
    // 0x16d220: 0xc05bcbc  jal         func_16F2F0
    ctx->pc = 0x16D220u;
    SET_GPR_U32(ctx, 31, 0x16D228u);
    ctx->pc = 0x16D224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16D220u;
    // 0x16d224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F2F0u, 0x16D220u, 0x16D228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16D228u;
label_16d228:
    // 0x16d228: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16d228u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d22c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16d22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16d230: 0x3e00008  jr          $ra
    ctx->pc = 0x16D230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16D230u;
        // 0x16d234: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16D230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16D238u;
}
