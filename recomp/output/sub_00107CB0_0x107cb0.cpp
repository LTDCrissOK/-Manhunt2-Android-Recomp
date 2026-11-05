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

// Function: sub_00107CB0
// Address: 0x107cb0 - 0x107ce0
void sub_00107CB0_0x107cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107CB0_0x107cb0");
#endif

    switch (ctx->pc) {
        case 0x107cb0u: goto label_107cb0;
        case 0x107cb4u: goto label_107cb4;
        case 0x107cb8u: goto label_107cb8;
        case 0x107cbcu: goto label_107cbc;
        case 0x107cc0u: goto label_107cc0;
        case 0x107cc4u: goto label_107cc4;
        case 0x107cc8u: goto label_107cc8;
        case 0x107cccu: goto label_107ccc;
        case 0x107cd0u: goto label_107cd0;
        case 0x107cd4u: goto label_107cd4;
        case 0x107cd8u: goto label_107cd8;
        case 0x107cdcu: goto label_107cdc;
        default: break;
    }

    ctx->pc = 0x107cb0u;

label_107cb0:
    // 0x107cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107cb4:
    // 0x107cb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107cb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107cb8:
    // 0x107cb8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107cbc:
    if (ctx->pc == 0x107CBCu) {
        ctx->pc = 0x107CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB8u;
        // 0x107cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CC0u;
        goto label_107cc0;
    }
    ctx->pc = 0x107CB8u;
    {
        const bool branch_taken_0x107cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CB8u;
        // 0x107cbc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107cb8) {
            ctx->pc = 0x107CD0u;
            goto label_107cd0;
        }
    }
    ctx->pc = 0x107CC0u;
label_107cc0:
    // 0x107cc0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107cc4:
    // 0x107cc4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107cc8:
    // 0x107cc8: 0x40f809  jalr        $v0
label_107ccc:
    if (ctx->pc == 0x107CCCu) {
        ctx->pc = 0x107CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC8u;
        // 0x107ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CD0u;
        goto label_107cd0;
    }
    ctx->pc = 0x107CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107CD0u);
        ctx->pc = 0x107CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CC8u;
        // 0x107ccc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CC8u, 0x107CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107CD0u;
label_107cd0:
    // 0x107cd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107cd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107cd4:
    // 0x107cd4: 0x3e00008  jr          $ra
label_107cd8:
    if (ctx->pc == 0x107CD8u) {
        ctx->pc = 0x107CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD4u;
        // 0x107cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CDCu;
        goto label_107cdc;
    }
    ctx->pc = 0x107CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CD4u;
        // 0x107cd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107CDCu;
label_107cdc:
    // 0x107cdc: 0x0  nop
    ctx->pc = 0x107cdcu;
    // NOP
    ctx->pc = 0x107ce0u;
}
