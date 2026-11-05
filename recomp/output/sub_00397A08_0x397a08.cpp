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

// Function: sub_00397A08
// Address: 0x397a08 - 0x397a50
void sub_00397A08_0x397a08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00397A08_0x397a08");
#endif

    switch (ctx->pc) {
        case 0x397a08u: goto label_397a08;
        case 0x397a0cu: goto label_397a0c;
        case 0x397a10u: goto label_397a10;
        case 0x397a14u: goto label_397a14;
        case 0x397a18u: goto label_397a18;
        case 0x397a1cu: goto label_397a1c;
        case 0x397a20u: goto label_397a20;
        case 0x397a24u: goto label_397a24;
        case 0x397a28u: goto label_397a28;
        case 0x397a2cu: goto label_397a2c;
        case 0x397a30u: goto label_397a30;
        case 0x397a34u: goto label_397a34;
        case 0x397a38u: goto label_397a38;
        case 0x397a3cu: goto label_397a3c;
        case 0x397a40u: goto label_397a40;
        case 0x397a44u: goto label_397a44;
        case 0x397a48u: goto label_397a48;
        case 0x397a4cu: goto label_397a4c;
        default: break;
    }

    ctx->pc = 0x397a08u;

label_397a08:
    // 0x397a08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x397a08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_397a0c:
    // 0x397a0c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x397a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_397a10:
    // 0x397a10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x397a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_397a14:
    // 0x397a14: 0x24426510  addiu       $v0, $v0, 0x6510
    ctx->pc = 0x397a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25872));
label_397a18:
    // 0x397a18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x397a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_397a1c:
    // 0x397a1c: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_397a20:
    if (ctx->pc == 0x397A20u) {
        ctx->pc = 0x397A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A1Cu;
        // 0x397a20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A24u;
        goto label_397a24;
    }
    ctx->pc = 0x397A1Cu;
    {
        const bool branch_taken_0x397a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x397a1c) {
            ctx->pc = 0x397A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x397A1Cu;
            // 0x397a20: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x397A30u;
            goto label_397a30;
        }
    }
    ctx->pc = 0x397A24u;
label_397a24:
    // 0x397a24: 0x60f809  jalr        $v1
label_397a28:
    if (ctx->pc == 0x397A28u) {
        ctx->pc = 0x397A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A24u;
        // 0x397a28: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A2Cu;
        goto label_397a2c;
    }
    ctx->pc = 0x397A24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x397A2Cu);
        ctx->pc = 0x397A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A24u;
        // 0x397a28: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397A24u, 0x397A2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x397A2Cu;
label_397a2c:
    // 0x397a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x397a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_397a30:
    // 0x397a30: 0x3e00008  jr          $ra
label_397a34:
    if (ctx->pc == 0x397A34u) {
        ctx->pc = 0x397A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A30u;
        // 0x397a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x397A38u;
        goto label_397a38;
    }
    ctx->pc = 0x397A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x397A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x397A30u;
        // 0x397a34: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x397A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x397A38u;
label_397a38:
    // 0x397a38: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x397a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_397a3c:
    // 0x397a3c: 0x0  nop
    ctx->pc = 0x397a3cu;
    // NOP
label_397a40:
    // 0x397a40: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x397a40u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_397a44:
    // 0x397a44: 0x0  nop
    ctx->pc = 0x397a44u;
    // NOP
label_397a48:
    // 0x397a48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x397a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_397a4c:
    // 0x397a4c: 0x0  nop
    ctx->pc = 0x397a4cu;
    // NOP
    ctx->pc = 0x397a50u;
}
