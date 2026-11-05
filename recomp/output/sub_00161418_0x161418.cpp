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

// Function: sub_00161418
// Address: 0x161418 - 0x161450
void sub_00161418_0x161418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161418_0x161418");
#endif

    switch (ctx->pc) {
        case 0x161428u: goto label_161428;
        case 0x161438u: goto label_161438;
        default: break;
    }

    ctx->pc = 0x161418u;

    // 0x161418: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16141c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16141cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x161420: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x161420u;
    SET_GPR_U32(ctx, 31, 0x161428u);
    ctx->pc = 0x161424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161420u;
    // 0x161424: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x161420u, 0x161428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161428u;
label_161428:
    // 0x161428: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x161428u;
    {
        const bool branch_taken_0x161428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x161428) {
            ctx->pc = 0x16142Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x161428u;
            // 0x16142c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x161440u;
            goto label_161440;
        }
    }
    ctx->pc = 0x161430u;
    // 0x161430: 0xc053832  jal         func_14E0C8
    ctx->pc = 0x161430u;
    SET_GPR_U32(ctx, 31, 0x161438u);
    ctx->pc = 0x161434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161430u;
    // 0x161434: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E0C8u, 0x161430u, 0x161438u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161438u;
label_161438:
    // 0x161438: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x161438u;
    {
        const bool branch_taken_0x161438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161438u;
        // 0x16143c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161438) {
            ctx->pc = 0x161444u;
            goto label_161444;
        }
    }
    ctx->pc = 0x161440u;
label_161440:
    // 0x161440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_161444:
    // 0x161444: 0x3e00008  jr          $ra
    ctx->pc = 0x161444u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161444u;
        // 0x161448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161444u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16144Cu;
    // 0x16144c: 0x0  nop
    ctx->pc = 0x16144cu;
    // NOP
    ctx->pc = 0x161450u;
}
