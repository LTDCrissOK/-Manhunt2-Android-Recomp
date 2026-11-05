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

// Function: sub_0013E438
// Address: 0x13e438 - 0x13e478
void sub_0013E438_0x13e438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013E438_0x13e438");
#endif

    switch (ctx->pc) {
        case 0x13e458u: goto label_13e458;
        case 0x13e464u: goto label_13e464;
        default: break;
    }

    ctx->pc = 0x13e438u;

    // 0x13e438: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13e438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13e43c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13e43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13e440: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13e440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e444: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13E444u;
    {
        const bool branch_taken_0x13e444 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E444u;
        // 0x13e448: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e444) {
            ctx->pc = 0x13E45Cu;
            goto label_13e45c;
        }
    }
    ctx->pc = 0x13E44Cu;
    // 0x13e44c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13e44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13e450: 0xc041e9c  jal         func_107A70
    ctx->pc = 0x13E450u;
    SET_GPR_U32(ctx, 31, 0x13E458u);
    ctx->pc = 0x13E454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E450u;
    // 0x13e454: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A70u, 0x13E450u, 0x13E458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E458u;
label_13e458:
    // 0x13e458: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13e458u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13e45c:
    // 0x13e45c: 0xc045e90  jal         func_117A40
    ctx->pc = 0x13E45Cu;
    SET_GPR_U32(ctx, 31, 0x13E464u);
    ctx->pc = 0x13E460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13E45Cu;
    // 0x13e460: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A40u, 0x13E45Cu, 0x13E464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13E464u;
label_13e464:
    // 0x13e464: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13e464u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e468: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x13e468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13e46c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13e46cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13e470: 0x3e00008  jr          $ra
    ctx->pc = 0x13E470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E470u;
        // 0x13e474: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13E470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13E478u;
}
