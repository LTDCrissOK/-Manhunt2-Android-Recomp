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

// Function: sub_001CB418
// Address: 0x1cb418 - 0x1cb460
void sub_001CB418_0x1cb418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB418_0x1cb418");
#endif

    switch (ctx->pc) {
        case 0x1cb434u: goto label_1cb434;
        case 0x1cb448u: goto label_1cb448;
        default: break;
    }

    ctx->pc = 0x1cb418u;

    // 0x1cb418: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cb418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cb41c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb420: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cb420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cb424: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cb424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1cb428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cb428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1cb42c: 0xc072d2a  jal         func_1CB4A8
    ctx->pc = 0x1CB42Cu;
    SET_GPR_U32(ctx, 31, 0x1CB434u);
    ctx->pc = 0x1CB430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB42Cu;
    // 0x1cb430: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB4A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB4A8u, 0x1CB42Cu, 0x1CB434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB434u;
label_1cb434:
    // 0x1cb434: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x1cb434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
    // 0x1cb438: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x1cb438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x1cb43c: 0xae110118  sw          $s1, 0x118($s0)
    ctx->pc = 0x1cb43cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 17));
    // 0x1cb440: 0xc0729c8  jal         func_1CA720
    ctx->pc = 0x1CB440u;
    SET_GPR_U32(ctx, 31, 0x1CB448u);
    ctx->pc = 0x1CB444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB440u;
    // 0x1cb444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA720u, 0x1CB440u, 0x1CB448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB448u;
label_1cb448:
    // 0x1cb448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cb44c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cb44cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb450: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cb450u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cb454: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB454u;
        // 0x1cb458: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB454u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB45Cu;
    // 0x1cb45c: 0x0  nop
    ctx->pc = 0x1cb45cu;
    // NOP
    ctx->pc = 0x1cb460u;
}
