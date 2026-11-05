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

// Function: sub_00107E00
// Address: 0x107e00 - 0x107e30
void sub_00107E00_0x107e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107E00_0x107e00");
#endif

    switch (ctx->pc) {
        case 0x107e00u: goto label_107e00;
        case 0x107e04u: goto label_107e04;
        case 0x107e08u: goto label_107e08;
        case 0x107e0cu: goto label_107e0c;
        case 0x107e10u: goto label_107e10;
        case 0x107e14u: goto label_107e14;
        case 0x107e18u: goto label_107e18;
        case 0x107e1cu: goto label_107e1c;
        case 0x107e20u: goto label_107e20;
        case 0x107e24u: goto label_107e24;
        case 0x107e28u: goto label_107e28;
        case 0x107e2cu: goto label_107e2c;
        default: break;
    }

    ctx->pc = 0x107e00u;

label_107e00:
    // 0x107e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107e04:
    // 0x107e04: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107e08:
    // 0x107e08: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107e0c:
    if (ctx->pc == 0x107E0Cu) {
        ctx->pc = 0x107E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E08u;
        // 0x107e0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E10u;
        goto label_107e10;
    }
    ctx->pc = 0x107E08u;
    {
        const bool branch_taken_0x107e08 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E08u;
        // 0x107e0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e08) {
            ctx->pc = 0x107E20u;
            goto label_107e20;
        }
    }
    ctx->pc = 0x107E10u;
label_107e10:
    // 0x107e10: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107e14:
    // 0x107e14: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107e18:
    // 0x107e18: 0x40f809  jalr        $v0
label_107e1c:
    if (ctx->pc == 0x107E1Cu) {
        ctx->pc = 0x107E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E18u;
        // 0x107e1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E20u;
        goto label_107e20;
    }
    ctx->pc = 0x107E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107E20u);
        ctx->pc = 0x107E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E18u;
        // 0x107e1c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E18u, 0x107E20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107E20u;
label_107e20:
    // 0x107e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107e24:
    // 0x107e24: 0x3e00008  jr          $ra
label_107e28:
    if (ctx->pc == 0x107E28u) {
        ctx->pc = 0x107E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E24u;
        // 0x107e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107E2Cu;
        goto label_107e2c;
    }
    ctx->pc = 0x107E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E24u;
        // 0x107e28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107E2Cu;
label_107e2c:
    // 0x107e2c: 0x0  nop
    ctx->pc = 0x107e2cu;
    // NOP
    ctx->pc = 0x107e30u;
}
