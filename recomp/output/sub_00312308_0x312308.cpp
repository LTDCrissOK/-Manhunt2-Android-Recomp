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

// Function: sub_00312308
// Address: 0x312308 - 0x312338
void sub_00312308_0x312308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312308_0x312308");
#endif

    switch (ctx->pc) {
        case 0x312320u: goto label_312320;
        case 0x312328u: goto label_312328;
        default: break;
    }

    ctx->pc = 0x312308u;

    // 0x312308: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31230c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31230cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x312310: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x312310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312314: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x312314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x312318: 0xc0b1612  jal         func_2C5848
    ctx->pc = 0x312318u;
    SET_GPR_U32(ctx, 31, 0x312320u);
    ctx->pc = 0x31231Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312318u;
    // 0x31231c: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5848u, 0x312318u, 0x312320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312320u;
label_312320:
    // 0x312320: 0xc0c48da  jal         func_312368
    ctx->pc = 0x312320u;
    SET_GPR_U32(ctx, 31, 0x312328u);
    ctx->pc = 0x312324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312320u;
    // 0x312324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312368u, 0x312320u, 0x312328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312328u;
label_312328:
    // 0x312328: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x312328u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31232c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31232cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x312330: 0x3e00008  jr          $ra
    ctx->pc = 0x312330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312330u;
        // 0x312334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312338u;
}
