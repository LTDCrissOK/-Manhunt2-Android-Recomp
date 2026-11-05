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

// Function: sub_00104448
// Address: 0x104448 - 0x104480
void sub_00104448_0x104448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104448_0x104448");
#endif

    switch (ctx->pc) {
        case 0x104468u: goto label_104468;
        default: break;
    }

    ctx->pc = 0x104448u;

    // 0x104448: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10444c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10444cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x104450: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x104450u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104454: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x104454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x104458: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x104458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x10445c: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x10445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x104460: 0xc040000  jal         func_100000
    ctx->pc = 0x104460u;
    SET_GPR_U32(ctx, 31, 0x104468u);
    ctx->pc = 0x104464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104460u;
    // 0x104464: 0xa6000008  sh          $zero, 0x8($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x100000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100000u, 0x104460u, 0x104468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x104468u;
label_104468:
    // 0x104468: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x104468u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10446c: 0xa2000014  sb          $zero, 0x14($s0)
    ctx->pc = 0x10446cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x104470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x104470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104474: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x104474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x104478: 0x3e00008  jr          $ra
    ctx->pc = 0x104478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104478u;
        // 0x10447c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104480u;
}
