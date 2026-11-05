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

// Function: sub_003A6DC0
// Address: 0x3a6dc0 - 0x3a6e10
void sub_003A6DC0_0x3a6dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6DC0_0x3a6dc0");
#endif

    switch (ctx->pc) {
        case 0x3a6ddcu: goto label_3a6ddc;
        default: break;
    }

    ctx->pc = 0x3a6dc0u;

    // 0x3a6dc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6dc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a6dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a6dc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a6dc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6dcc: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x3A6DCCu;
    {
        const bool branch_taken_0x3a6dcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6DCCu;
        // 0x3a6dd0: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6dcc) {
            ctx->pc = 0x3A6E00u;
            goto label_3a6e00;
        }
    }
    ctx->pc = 0x3A6DD4u;
    // 0x3a6dd4: 0xc0e9c5e  jal         func_3A7178
    ctx->pc = 0x3A6DD4u;
    SET_GPR_U32(ctx, 31, 0x3A6DDCu);
    ctx->pc = 0x3A7178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7178u, 0x3A6DD4u, 0x3A6DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A6DDCu;
label_3a6ddc:
    // 0x3a6ddc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a6ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6de0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x3a6de0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a6de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a6de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6de8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a6de8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6dec: 0x24060238  addiu       $a2, $zero, 0x238
    ctx->pc = 0x3a6decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 568));
    // 0x3a6df0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6df0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6df4: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3A6DF4u;
    ctx->pc = 0x3A6DF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6DF4u;
    // 0x3a6df8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3A6DFCu;
    // 0x3a6dfc: 0x0  nop
    ctx->pc = 0x3a6dfcu;
    // NOP
label_3a6e00:
    // 0x3a6e00: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a6e00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6e04: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3a6e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a6e08: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6E08u;
        // 0x3a6e0c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6E10u;
}
