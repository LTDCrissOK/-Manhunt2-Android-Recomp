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

// Function: sub_00141DD8
// Address: 0x141dd8 - 0x141e20
void sub_00141DD8_0x141dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141DD8_0x141dd8");
#endif

    switch (ctx->pc) {
        case 0x141df0u: goto label_141df0;
        case 0x141e08u: goto label_141e08;
        default: break;
    }

    ctx->pc = 0x141dd8u;

    // 0x141dd8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x141dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x141ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x141ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x141de0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x141de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x141de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x141de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141de8: 0xc04e866  jal         func_13A198
    ctx->pc = 0x141DE8u;
    SET_GPR_U32(ctx, 31, 0x141DF0u);
    ctx->pc = 0x141DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141DE8u;
    // 0x141dec: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A198u, 0x141DE8u, 0x141DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141DF0u;
label_141df0:
    // 0x141df0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x141df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x141df4: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x141DF4u;
    {
        const bool branch_taken_0x141df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x141DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141DF4u;
        // 0x141df8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141df4) {
            ctx->pc = 0x141E0Cu;
            goto label_141e0c;
        }
    }
    ctx->pc = 0x141DFCu;
    // 0x141dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x141dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141e00: 0xc04ebf6  jal         func_13AFD8
    ctx->pc = 0x141E00u;
    SET_GPR_U32(ctx, 31, 0x141E08u);
    ctx->pc = 0x141E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x141E00u;
    // 0x141e04: 0x9085046c  lbu         $a1, 0x46C($a0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AFD8u, 0x141E00u, 0x141E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x141E08u;
label_141e08:
    // 0x141e08: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x141e08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_141e0c:
    // 0x141e0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x141e0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141e10: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x141e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x141e14: 0x3e00008  jr          $ra
    ctx->pc = 0x141E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x141E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141E14u;
        // 0x141e18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x141E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x141E1Cu;
    // 0x141e1c: 0x0  nop
    ctx->pc = 0x141e1cu;
    // NOP
    ctx->pc = 0x141e20u;
}
