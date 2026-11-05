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

// Function: sub_00308488
// Address: 0x308488 - 0x3084d0
void sub_00308488_0x308488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308488_0x308488");
#endif

    switch (ctx->pc) {
        case 0x3084b0u: goto label_3084b0;
        default: break;
    }

    ctx->pc = 0x308488u;

    // 0x308488: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x308488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30848c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x30848cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x308490: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x308490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x308494: 0x244243c8  addiu       $v0, $v0, 0x43C8
    ctx->pc = 0x308494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17352));
    // 0x308498: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x308498u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30849c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30849cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3084a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3084a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3084a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3084a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084a8: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x3084A8u;
    SET_GPR_U32(ctx, 31, 0x3084B0u);
    ctx->pc = 0x3084ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3084A8u;
    // 0x3084ac: 0xae020068  sw          $v0, 0x68($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x3084A8u, 0x3084B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3084B0u;
label_3084b0:
    // 0x3084b0: 0xae110064  sw          $s1, 0x64($s0)
    ctx->pc = 0x3084b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 17));
    // 0x3084b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3084b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3084b8: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x3084b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x3084bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3084bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3084c0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3084c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3084c4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3084c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3084c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3084C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3084CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3084C8u;
        // 0x3084cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3084C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3084D0u;
}
