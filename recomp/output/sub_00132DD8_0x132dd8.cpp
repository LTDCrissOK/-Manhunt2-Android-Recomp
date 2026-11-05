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

// Function: sub_00132DD8
// Address: 0x132dd8 - 0x132e20
void sub_00132DD8_0x132dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132DD8_0x132dd8");
#endif

    switch (ctx->pc) {
        case 0x132df4u: goto label_132df4;
        case 0x132e08u: goto label_132e08;
        default: break;
    }

    ctx->pc = 0x132dd8u;

    // 0x132dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132ddc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132de0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132dec: 0xc04cc54  jal         func_133150
    ctx->pc = 0x132DECu;
    SET_GPR_U32(ctx, 31, 0x132DF4u);
    ctx->pc = 0x132DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132DECu;
    // 0x132df0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133150u, 0x132DECu, 0x132DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132DF4u;
label_132df4:
    // 0x132df4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x132DF4u;
    {
        const bool branch_taken_0x132df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x132df4) {
            ctx->pc = 0x132DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132DF4u;
            // 0x132df8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132E0Cu;
            goto label_132e0c;
        }
    }
    ctx->pc = 0x132DFCu;
    // 0x132dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x132dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e00: 0xc04cc6c  jal         func_1331B0
    ctx->pc = 0x132E00u;
    SET_GPR_U32(ctx, 31, 0x132E08u);
    ctx->pc = 0x132E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132E00u;
    // 0x132e04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1331B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1331B0u, 0x132E00u, 0x132E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132E08u;
label_132e08:
    // 0x132e08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132e08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132e0c:
    // 0x132e0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132e0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132e10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132e14: 0x3e00008  jr          $ra
    ctx->pc = 0x132E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132E14u;
        // 0x132e18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132E14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132E1Cu;
    // 0x132e1c: 0x0  nop
    ctx->pc = 0x132e1cu;
    // NOP
    ctx->pc = 0x132e20u;
}
