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

// Function: sub_0037C410
// Address: 0x37c410 - 0x37c490
void sub_0037C410_0x37c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C410_0x37c410");
#endif

    switch (ctx->pc) {
        case 0x37c480u: goto label_37c480;
        default: break;
    }

    ctx->pc = 0x37c410u;

    // 0x37c410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37c410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37c414: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x37c414u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c418: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x37c418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x37c41c: 0x3c090038  lui         $t1, 0x38
    ctx->pc = 0x37c41cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)56 << 16));
    // 0x37c420: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x37c420u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c424: 0x2529c7c8  addiu       $t1, $t1, -0x3838
    ctx->pc = 0x37c424u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294952904));
    // 0x37c428: 0x8d670000  lw          $a3, 0x0($t3)
    ctx->pc = 0x37c428u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x37c42c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x37c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x37c430: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x37c430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x37c434: 0x2463c4d0  addiu       $v1, $v1, -0x3B30
    ctx->pc = 0x37c434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952144));
    // 0x37c438: 0x2442c528  addiu       $v0, $v0, -0x3AD8
    ctx->pc = 0x37c438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952232));
    // 0x37c43c: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x37c43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c440: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x37c440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x37c444: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x37c444u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x37c448: 0xafaa0010  sw          $t2, 0x10($sp)
    ctx->pc = 0x37c448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 10));
    // 0x37c44c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x37c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x37c450: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x37c450u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x37c454: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x37c454u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x37c458: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x37c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x37c45c: 0x24a5c800  addiu       $a1, $a1, -0x3800
    ctx->pc = 0x37c45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952960));
    // 0x37c460: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x37c460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x37c464: 0x24c6cc30  addiu       $a2, $a2, -0x33D0
    ctx->pc = 0x37c464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954032));
    // 0x37c468: 0x34e70001  ori         $a3, $a3, 0x1
    ctx->pc = 0x37c468u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x37c46c: 0x2508cdf0  addiu       $t0, $t0, -0x3210
    ctx->pc = 0x37c46cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294954480));
    // 0x37c470: 0xafab000c  sw          $t3, 0xC($sp)
    ctx->pc = 0x37c470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 11));
    // 0x37c474: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x37c474u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37c478: 0xc0dfea4  jal         func_37FA90
    ctx->pc = 0x37C478u;
    SET_GPR_U32(ctx, 31, 0x37C480u);
    ctx->pc = 0x37C47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C478u;
    // 0x37c47c: 0x3a0502d  daddu       $t2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA90u, 0x37C478u, 0x37C480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37C480u;
label_37c480:
    // 0x37c480: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x37c480u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37c484: 0x3e00008  jr          $ra
    ctx->pc = 0x37C484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37C484u;
        // 0x37c488: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37C484u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37C48Cu;
    // 0x37c48c: 0x0  nop
    ctx->pc = 0x37c48cu;
    // NOP
    ctx->pc = 0x37c490u;
}
