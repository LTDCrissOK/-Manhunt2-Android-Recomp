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

// Function: sub_002B39F0
// Address: 0x2b39f0 - 0x2b3a40
void sub_002B39F0_0x2b39f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B39F0_0x2b39f0");
#endif

    switch (ctx->pc) {
        case 0x2b3a24u: goto label_2b3a24;
        default: break;
    }

    ctx->pc = 0x2b39f0u;

    // 0x2b39f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2b39f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2b39f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b39f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b39f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b39f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b39fc: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2b39fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2b3a00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2b3a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2b3a04: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B3A04u;
    {
        const bool branch_taken_0x2b3a04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b3a04) {
            ctx->pc = 0x2B3A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A04u;
            // 0x2b3a08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A2Cu;
            goto label_2b3a2c;
        }
    }
    ctx->pc = 0x2B3A0Cu;
    // 0x2b3a0c: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x2b3a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2b3a10: 0x56030006  bnel        $s0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B3A10u;
    {
        const bool branch_taken_0x2b3a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x2b3a10) {
            ctx->pc = 0x2B3A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B3A10u;
            // 0x2b3a14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B3A2Cu;
            goto label_2b3a2c;
        }
    }
    ctx->pc = 0x2B3A18u;
    // 0x2b3a18: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b3a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x2b3a1c: 0xc0acee4  jal         func_2B3B90
    ctx->pc = 0x2B3A1Cu;
    SET_GPR_U32(ctx, 31, 0x2B3A24u);
    ctx->pc = 0x2B3A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B3A1Cu;
    // 0x2b3a20: 0x24a5ac90  addiu       $a1, $a1, -0x5370 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294945936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3B90u, 0x2B3A1Cu, 0x2B3A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B3A24u;
label_2b3a24:
    // 0x2b3a24: 0x2800b  movn        $s0, $zero, $v0
    ctx->pc = 0x2b3a24u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
    // 0x2b3a28: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2b3a28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b3a2c:
    // 0x2b3a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b3a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b3a30: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2b3a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b3a34: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3A34u;
        // 0x2b3a38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3A3Cu;
    // 0x2b3a3c: 0x0  nop
    ctx->pc = 0x2b3a3cu;
    // NOP
    ctx->pc = 0x2b3a40u;
}
