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

// Function: sub_00107DA0
// Address: 0x107da0 - 0x107dd0
void sub_00107DA0_0x107da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107DA0_0x107da0");
#endif

    switch (ctx->pc) {
        case 0x107da0u: goto label_107da0;
        case 0x107da4u: goto label_107da4;
        case 0x107da8u: goto label_107da8;
        case 0x107dacu: goto label_107dac;
        case 0x107db0u: goto label_107db0;
        case 0x107db4u: goto label_107db4;
        case 0x107db8u: goto label_107db8;
        case 0x107dbcu: goto label_107dbc;
        case 0x107dc0u: goto label_107dc0;
        case 0x107dc4u: goto label_107dc4;
        case 0x107dc8u: goto label_107dc8;
        case 0x107dccu: goto label_107dcc;
        default: break;
    }

    ctx->pc = 0x107da0u;

label_107da0:
    // 0x107da0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107da4:
    // 0x107da4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107da8:
    // 0x107da8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107dac:
    if (ctx->pc == 0x107DACu) {
        ctx->pc = 0x107DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA8u;
        // 0x107dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DB0u;
        goto label_107db0;
    }
    ctx->pc = 0x107DA8u;
    {
        const bool branch_taken_0x107da8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DA8u;
        // 0x107dac: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107da8) {
            ctx->pc = 0x107DC0u;
            goto label_107dc0;
        }
    }
    ctx->pc = 0x107DB0u;
label_107db0:
    // 0x107db0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107db4:
    // 0x107db4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107db8:
    // 0x107db8: 0x40f809  jalr        $v0
label_107dbc:
    if (ctx->pc == 0x107DBCu) {
        ctx->pc = 0x107DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DB8u;
        // 0x107dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DC0u;
        goto label_107dc0;
    }
    ctx->pc = 0x107DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107DC0u);
        ctx->pc = 0x107DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DB8u;
        // 0x107dbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DB8u, 0x107DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107DC0u;
label_107dc0:
    // 0x107dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107dc4:
    // 0x107dc4: 0x3e00008  jr          $ra
label_107dc8:
    if (ctx->pc == 0x107DC8u) {
        ctx->pc = 0x107DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC4u;
        // 0x107dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107DCCu;
        goto label_107dcc;
    }
    ctx->pc = 0x107DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107DC4u;
        // 0x107dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107DCCu;
label_107dcc:
    // 0x107dcc: 0x0  nop
    ctx->pc = 0x107dccu;
    // NOP
    ctx->pc = 0x107dd0u;
}
