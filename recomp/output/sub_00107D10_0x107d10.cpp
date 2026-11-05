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

// Function: sub_00107D10
// Address: 0x107d10 - 0x107d40
void sub_00107D10_0x107d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107D10_0x107d10");
#endif

    switch (ctx->pc) {
        case 0x107d10u: goto label_107d10;
        case 0x107d14u: goto label_107d14;
        case 0x107d18u: goto label_107d18;
        case 0x107d1cu: goto label_107d1c;
        case 0x107d20u: goto label_107d20;
        case 0x107d24u: goto label_107d24;
        case 0x107d28u: goto label_107d28;
        case 0x107d2cu: goto label_107d2c;
        case 0x107d30u: goto label_107d30;
        case 0x107d34u: goto label_107d34;
        case 0x107d38u: goto label_107d38;
        case 0x107d3cu: goto label_107d3c;
        default: break;
    }

    ctx->pc = 0x107d10u;

label_107d10:
    // 0x107d10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107d14:
    // 0x107d14: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107d18:
    // 0x107d18: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107d1c:
    if (ctx->pc == 0x107D1Cu) {
        ctx->pc = 0x107D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D18u;
        // 0x107d1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D20u;
        goto label_107d20;
    }
    ctx->pc = 0x107D18u;
    {
        const bool branch_taken_0x107d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D18u;
        // 0x107d1c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d18) {
            ctx->pc = 0x107D30u;
            goto label_107d30;
        }
    }
    ctx->pc = 0x107D20u;
label_107d20:
    // 0x107d20: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107d24:
    // 0x107d24: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107d28:
    // 0x107d28: 0x40f809  jalr        $v0
label_107d2c:
    if (ctx->pc == 0x107D2Cu) {
        ctx->pc = 0x107D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D28u;
        // 0x107d2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D30u;
        goto label_107d30;
    }
    ctx->pc = 0x107D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107D30u);
        ctx->pc = 0x107D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D28u;
        // 0x107d2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D28u, 0x107D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D30u;
label_107d30:
    // 0x107d30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107d34:
    // 0x107d34: 0x3e00008  jr          $ra
label_107d38:
    if (ctx->pc == 0x107D38u) {
        ctx->pc = 0x107D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D34u;
        // 0x107d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D3Cu;
        goto label_107d3c;
    }
    ctx->pc = 0x107D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D34u;
        // 0x107d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D3Cu;
label_107d3c:
    // 0x107d3c: 0x0  nop
    ctx->pc = 0x107d3cu;
    // NOP
    ctx->pc = 0x107d40u;
}
