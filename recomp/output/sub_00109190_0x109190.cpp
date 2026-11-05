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

// Function: sub_00109190
// Address: 0x109190 - 0x1091c8
void sub_00109190_0x109190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109190_0x109190");
#endif

    switch (ctx->pc) {
        case 0x1091b0u: goto label_1091b0;
        default: break;
    }

    ctx->pc = 0x109190u;

    // 0x109190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x109190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x109194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x109194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x109198: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10919c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10919cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1091a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1091a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091a4: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1091a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1091a8: 0xc0430e4  jal         func_10C390
    ctx->pc = 0x1091A8u;
    SET_GPR_U32(ctx, 31, 0x1091B0u);
    ctx->pc = 0x1091ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1091A8u;
    // 0x1091ac: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C390u, 0x1091A8u, 0x1091B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1091B0u;
label_1091b0:
    // 0x1091b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1091b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1091b4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1091b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1091b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1091b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1091bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1091BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1091C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1091BCu;
        // 0x1091c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1091BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1091C4u;
    // 0x1091c4: 0x0  nop
    ctx->pc = 0x1091c4u;
    // NOP
    ctx->pc = 0x1091c8u;
}
