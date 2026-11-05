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

// Function: sub_00108FE8
// Address: 0x108fe8 - 0x109018
void sub_00108FE8_0x108fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108FE8_0x108fe8");
#endif

    switch (ctx->pc) {
        case 0x109000u: goto label_109000;
        default: break;
    }

    ctx->pc = 0x108fe8u;

    // 0x108fe8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x108fec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x108fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108ff0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x108ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x108ff4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108ff8: 0xc042456  jal         func_109158
    ctx->pc = 0x108FF8u;
    SET_GPR_U32(ctx, 31, 0x109000u);
    ctx->pc = 0x108FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x108FF8u;
    // 0x108ffc: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109158u, 0x108FF8u, 0x109000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109000u;
label_109000:
    // 0x109000: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x109000u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109004: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x109004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x109008: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109008u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10900c: 0x3e00008  jr          $ra
    ctx->pc = 0x10900Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10900Cu;
        // 0x109010: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10900Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x109014u;
    // 0x109014: 0x0  nop
    ctx->pc = 0x109014u;
    // NOP
    ctx->pc = 0x109018u;
}
