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

// Function: sub_00287DE8
// Address: 0x287de8 - 0x287e48
void sub_00287DE8_0x287de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287DE8_0x287de8");
#endif

    switch (ctx->pc) {
        case 0x287df8u: goto label_287df8;
        default: break;
    }

    ctx->pc = 0x287de8u;

    // 0x287de8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x287de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x287dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x287decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x287df0: 0xc0a1faa  jal         func_287EA8
    ctx->pc = 0x287DF0u;
    SET_GPR_U32(ctx, 31, 0x287DF8u);
    ctx->pc = 0x287EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287EA8u, 0x287DF0u, 0x287DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x287DF8u;
label_287df8:
    // 0x287df8: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x287DF8u;
    {
        const bool branch_taken_0x287df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287DF8u;
        // 0x287dfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287df8) {
            ctx->pc = 0x287E3Cu;
            goto label_287e3c;
        }
    }
    ctx->pc = 0x287E00u;
    // 0x287e00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x287e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x287e04: 0x8c43aa88  lw          $v1, -0x5578($v0)
    ctx->pc = 0x287e04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FAA88u));
    // 0x287e08: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x287E08u;
    {
        const bool branch_taken_0x287e08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E08u;
        // 0x287e0c: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e08) {
            ctx->pc = 0x287E34u;
            goto label_287e34;
        }
    }
    ctx->pc = 0x287E10u;
    // 0x287e10: 0x24632450  addiu       $v1, $v1, 0x2450
    ctx->pc = 0x287e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9296));
    // 0x287e14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x287e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x287e18: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x287e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x287e1c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x287E1Cu;
    {
        const bool branch_taken_0x287e1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x287E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E1Cu;
        // 0x287e20: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e1c) {
            ctx->pc = 0x287E38u;
            goto label_287e38;
        }
    }
    ctx->pc = 0x287E24u;
    // 0x287e24: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x287e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x287e28: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x287e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x287e2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x287E2Cu;
    {
        const bool branch_taken_0x287e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x287E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E2Cu;
        // 0x287e30: 0x2202b  sltu        $a0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x287e2c) {
            ctx->pc = 0x287E38u;
            goto label_287e38;
        }
    }
    ctx->pc = 0x287E34u;
label_287e34:
    // 0x287e34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x287e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_287e38:
    // 0x287e38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x287e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_287e3c:
    // 0x287e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x287e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x287e40: 0x3e00008  jr          $ra
    ctx->pc = 0x287E40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x287E40u;
        // 0x287e44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x287E40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287E48u;
}
