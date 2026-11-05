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

// Function: sub_002C0840
// Address: 0x2c0840 - 0x2c0880
void sub_002C0840_0x2c0840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0840_0x2c0840");
#endif

    switch (ctx->pc) {
        case 0x2c0854u: goto label_2c0854;
        default: break;
    }

    ctx->pc = 0x2c0840u;

    // 0x2c0840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c0840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2c0844: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c0844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2c0848: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c0848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2c084c: 0xc0b0018  jal         func_2C0060
    ctx->pc = 0x2C084Cu;
    SET_GPR_U32(ctx, 31, 0x2C0854u);
    ctx->pc = 0x2C0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C084Cu;
    // 0x2c0850: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0060u, 0x2C084Cu, 0x2C0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C0854u;
label_2c0854:
    // 0x2c0854: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2c0854u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2c0858: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c085c: 0x24633cf8  addiu       $v1, $v1, 0x3CF8
    ctx->pc = 0x2c085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15608));
    // 0x2c0860: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2c0860u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x2c0864: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2c0864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x2c0868: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x2c0868u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c086c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c086cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c0870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2c0874: 0x3e00008  jr          $ra
    ctx->pc = 0x2C0874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C0874u;
        // 0x2c0878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C0874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C087Cu;
    // 0x2c087c: 0x0  nop
    ctx->pc = 0x2c087cu;
    // NOP
    ctx->pc = 0x2c0880u;
}
