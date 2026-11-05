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

// Function: sub_00107C20
// Address: 0x107c20 - 0x107c50
void sub_00107C20_0x107c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C20_0x107c20");
#endif

    switch (ctx->pc) {
        case 0x107c20u: goto label_107c20;
        case 0x107c24u: goto label_107c24;
        case 0x107c28u: goto label_107c28;
        case 0x107c2cu: goto label_107c2c;
        case 0x107c30u: goto label_107c30;
        case 0x107c34u: goto label_107c34;
        case 0x107c38u: goto label_107c38;
        case 0x107c3cu: goto label_107c3c;
        case 0x107c40u: goto label_107c40;
        case 0x107c44u: goto label_107c44;
        case 0x107c48u: goto label_107c48;
        case 0x107c4cu: goto label_107c4c;
        default: break;
    }

    ctx->pc = 0x107c20u;

label_107c20:
    // 0x107c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107c24:
    // 0x107c24: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107c28:
    // 0x107c28: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107c2c:
    if (ctx->pc == 0x107C2Cu) {
        ctx->pc = 0x107C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C28u;
        // 0x107c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C30u;
        goto label_107c30;
    }
    ctx->pc = 0x107C28u;
    {
        const bool branch_taken_0x107c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C28u;
        // 0x107c2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c28) {
            ctx->pc = 0x107C40u;
            goto label_107c40;
        }
    }
    ctx->pc = 0x107C30u;
label_107c30:
    // 0x107c30: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107c34:
    // 0x107c34: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107c38:
    // 0x107c38: 0x40f809  jalr        $v0
label_107c3c:
    if (ctx->pc == 0x107C3Cu) {
        ctx->pc = 0x107C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C38u;
        // 0x107c3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C40u;
        goto label_107c40;
    }
    ctx->pc = 0x107C38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107C40u);
        ctx->pc = 0x107C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C38u;
        // 0x107c3c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C38u, 0x107C40u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107C40u;
label_107c40:
    // 0x107c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107c44:
    // 0x107c44: 0x3e00008  jr          $ra
label_107c48:
    if (ctx->pc == 0x107C48u) {
        ctx->pc = 0x107C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C44u;
        // 0x107c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C4Cu;
        goto label_107c4c;
    }
    ctx->pc = 0x107C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C44u;
        // 0x107c48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C4Cu;
label_107c4c:
    // 0x107c4c: 0x0  nop
    ctx->pc = 0x107c4cu;
    // NOP
    ctx->pc = 0x107c50u;
}
