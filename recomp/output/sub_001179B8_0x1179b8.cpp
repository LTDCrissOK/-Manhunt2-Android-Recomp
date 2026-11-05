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

// Function: sub_001179B8
// Address: 0x1179b8 - 0x1179e8
void sub_001179B8_0x1179b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179B8_0x1179b8");
#endif

    switch (ctx->pc) {
        case 0x1179d0u: goto label_1179d0;
        default: break;
    }

    ctx->pc = 0x1179b8u;

    // 0x1179b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1179b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1179bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1179bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1179c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1179c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1179c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1179c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179c8: 0xc045ea2  jal         func_117A88
    ctx->pc = 0x1179C8u;
    SET_GPR_U32(ctx, 31, 0x1179D0u);
    ctx->pc = 0x1179CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1179C8u;
    // 0x1179cc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A88u, 0x1179C8u, 0x1179D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1179D0u;
label_1179d0:
    // 0x1179d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1179d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1179d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1179d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1179d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1179dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1179DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1179E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1179DCu;
        // 0x1179e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1179DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1179E4u;
    // 0x1179e4: 0x0  nop
    ctx->pc = 0x1179e4u;
    // NOP
    ctx->pc = 0x1179e8u;
}
