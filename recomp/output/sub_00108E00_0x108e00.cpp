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

// Function: sub_00108E00
// Address: 0x108e00 - 0x108e48
void sub_00108E00_0x108e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108E00_0x108e00");
#endif

    switch (ctx->pc) {
        case 0x108e00u: goto label_108e00;
        case 0x108e04u: goto label_108e04;
        case 0x108e08u: goto label_108e08;
        case 0x108e0cu: goto label_108e0c;
        case 0x108e10u: goto label_108e10;
        case 0x108e14u: goto label_108e14;
        case 0x108e18u: goto label_108e18;
        case 0x108e1cu: goto label_108e1c;
        case 0x108e20u: goto label_108e20;
        case 0x108e24u: goto label_108e24;
        case 0x108e28u: goto label_108e28;
        case 0x108e2cu: goto label_108e2c;
        case 0x108e30u: goto label_108e30;
        case 0x108e34u: goto label_108e34;
        case 0x108e38u: goto label_108e38;
        case 0x108e3cu: goto label_108e3c;
        case 0x108e40u: goto label_108e40;
        case 0x108e44u: goto label_108e44;
        default: break;
    }

    ctx->pc = 0x108e00u;

label_108e00:
    // 0x108e00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108e04:
    // 0x108e04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x108e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_108e08:
    // 0x108e08: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108e0c:
    // 0x108e0c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x108e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_108e10:
    // 0x108e10: 0x40f809  jalr        $v0
label_108e14:
    if (ctx->pc == 0x108E14u) {
        ctx->pc = 0x108E18u;
        goto label_108e18;
    }
    ctx->pc = 0x108E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108E18u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E10u, 0x108E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108E18u;
label_108e18:
    // 0x108e18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_108e1c:
    if (ctx->pc == 0x108E1Cu) {
        ctx->pc = 0x108E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E18u;
        // 0x108e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E20u;
        goto label_108e20;
    }
    ctx->pc = 0x108E18u;
    {
        const bool branch_taken_0x108e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x108e18) {
            ctx->pc = 0x108E1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x108E18u;
            // 0x108e1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x108E30u;
            goto label_108e30;
        }
    }
    ctx->pc = 0x108E20u;
label_108e20:
    // 0x108e20: 0x8c430ff8  lw          $v1, 0xFF8($v0)
    ctx->pc = 0x108e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4088)));
label_108e24:
    // 0x108e24: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x108e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_108e28:
    // 0x108e28: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x108e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_108e2c:
    // 0x108e2c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x108e2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_108e30:
    // 0x108e30: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108e34:
    // 0x108e34: 0x3e00008  jr          $ra
label_108e38:
    if (ctx->pc == 0x108E38u) {
        ctx->pc = 0x108E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E34u;
        // 0x108e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108E3Cu;
        goto label_108e3c;
    }
    ctx->pc = 0x108E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108E34u;
        // 0x108e38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108E3Cu;
label_108e3c:
    // 0x108e3c: 0x0  nop
    ctx->pc = 0x108e3cu;
    // NOP
label_108e40:
    // 0x108e40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x108e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_108e44:
    // 0x108e44: 0x0  nop
    ctx->pc = 0x108e44u;
    // NOP
    ctx->pc = 0x108e48u;
}
