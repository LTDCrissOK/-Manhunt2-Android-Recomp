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

// Function: sub_00144DE8
// Address: 0x144de8 - 0x144e40
void sub_00144DE8_0x144de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144DE8_0x144de8");
#endif

    switch (ctx->pc) {
        case 0x144e04u: goto label_144e04;
        case 0x144e20u: goto label_144e20;
        case 0x144e30u: goto label_144e30;
        default: break;
    }

    ctx->pc = 0x144de8u;

    // 0x144de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x144de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x144dec: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x144decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x144df0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x144df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x144df4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x144df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x144df8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144dfc: 0xc04e86c  jal         func_13A1B0
    ctx->pc = 0x144DFCu;
    SET_GPR_U32(ctx, 31, 0x144E04u);
    ctx->pc = 0x144E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144DFCu;
    // 0x144e00: 0x9205046c  lbu         $a1, 0x46C($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13A1B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13A1B0u, 0x144DFCu, 0x144E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E04u;
label_144e04:
    // 0x144e04: 0x92020b11  lbu         $v0, 0xB11($s0)
    ctx->pc = 0x144e04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2833)));
    // 0x144e08: 0x92030b10  lbu         $v1, 0xB10($s0)
    ctx->pc = 0x144e08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2832)));
    // 0x144e0c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x144e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x144e10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x144E10u;
    {
        const bool branch_taken_0x144e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x144e10) {
            ctx->pc = 0x144E28u;
            goto label_144e28;
        }
    }
    ctx->pc = 0x144E18u;
    // 0x144e18: 0xc04ecde  jal         func_13B378
    ctx->pc = 0x144E18u;
    SET_GPR_U32(ctx, 31, 0x144E20u);
    ctx->pc = 0x144E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E18u;
    // 0x144e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B378u, 0x144E18u, 0x144E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E20u;
label_144e20:
    // 0x144e20: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x144E20u;
    {
        const bool branch_taken_0x144e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E20u;
        // 0x144e24: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144e20) {
            ctx->pc = 0x144E34u;
            goto label_144e34;
        }
    }
    ctx->pc = 0x144E28u;
label_144e28:
    // 0x144e28: 0xc0513de  jal         func_144F78
    ctx->pc = 0x144E28u;
    SET_GPR_U32(ctx, 31, 0x144E30u);
    ctx->pc = 0x144E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144E28u;
    // 0x144e2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x144F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x144F78u, 0x144E28u, 0x144E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144E30u;
label_144e30:
    // 0x144e30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x144e30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_144e34:
    // 0x144e34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x144e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x144e38: 0x3e00008  jr          $ra
    ctx->pc = 0x144E38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x144E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144E38u;
        // 0x144e3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144E38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x144E40u;
}
