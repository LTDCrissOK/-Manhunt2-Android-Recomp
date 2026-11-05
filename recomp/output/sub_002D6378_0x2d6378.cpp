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

// Function: sub_002D6378
// Address: 0x2d6378 - 0x2d63b8
void sub_002D6378_0x2d6378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6378_0x2d6378");
#endif

    switch (ctx->pc) {
        case 0x2d638cu: goto label_2d638c;
        default: break;
    }

    ctx->pc = 0x2d6378u;

    // 0x2d6378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d6378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d637c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d637cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6380: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d6380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d6384: 0xc0b589e  jal         func_2D6278
    ctx->pc = 0x2D6384u;
    SET_GPR_U32(ctx, 31, 0x2D638Cu);
    ctx->pc = 0x2D6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6384u;
    // 0x2d6388: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6278u, 0x2D6384u, 0x2D638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D638Cu;
label_2d638c:
    // 0x2d638c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2d638cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6390: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D6390u;
    {
        const bool branch_taken_0x2d6390 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2D6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6390u;
        // 0x2d6394: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6390) {
            ctx->pc = 0x2D63A8u;
            goto label_2d63a8;
        }
    }
    ctx->pc = 0x2D6398u;
    // 0x2d6398: 0x240201c4  addiu       $v0, $zero, 0x1C4
    ctx->pc = 0x2d6398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 452));
    // 0x2d639c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x2d639cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x2d63a0: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x2d63a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2d63a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2d63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2d63a8:
    // 0x2d63a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d63a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d63ac: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d63acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d63b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D63B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D63B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D63B0u;
        // 0x2d63b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D63B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D63B8u;
}
