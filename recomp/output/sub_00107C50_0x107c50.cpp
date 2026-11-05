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

// Function: sub_00107C50
// Address: 0x107c50 - 0x107c80
void sub_00107C50_0x107c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107C50_0x107c50");
#endif

    switch (ctx->pc) {
        case 0x107c50u: goto label_107c50;
        case 0x107c54u: goto label_107c54;
        case 0x107c58u: goto label_107c58;
        case 0x107c5cu: goto label_107c5c;
        case 0x107c60u: goto label_107c60;
        case 0x107c64u: goto label_107c64;
        case 0x107c68u: goto label_107c68;
        case 0x107c6cu: goto label_107c6c;
        case 0x107c70u: goto label_107c70;
        case 0x107c74u: goto label_107c74;
        case 0x107c78u: goto label_107c78;
        case 0x107c7cu: goto label_107c7c;
        default: break;
    }

    ctx->pc = 0x107c50u;

label_107c50:
    // 0x107c50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107c54:
    // 0x107c54: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107c58:
    // 0x107c58: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107c5c:
    if (ctx->pc == 0x107C5Cu) {
        ctx->pc = 0x107C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C58u;
        // 0x107c5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C60u;
        goto label_107c60;
    }
    ctx->pc = 0x107C58u;
    {
        const bool branch_taken_0x107c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C58u;
        // 0x107c5c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c58) {
            ctx->pc = 0x107C70u;
            goto label_107c70;
        }
    }
    ctx->pc = 0x107C60u;
label_107c60:
    // 0x107c60: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107c64:
    // 0x107c64: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107c68:
    // 0x107c68: 0x40f809  jalr        $v0
label_107c6c:
    if (ctx->pc == 0x107C6Cu) {
        ctx->pc = 0x107C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C68u;
        // 0x107c6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C70u;
        goto label_107c70;
    }
    ctx->pc = 0x107C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107C70u);
        ctx->pc = 0x107C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C68u;
        // 0x107c6c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C68u, 0x107C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107C70u;
label_107c70:
    // 0x107c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107c74:
    // 0x107c74: 0x3e00008  jr          $ra
label_107c78:
    if (ctx->pc == 0x107C78u) {
        ctx->pc = 0x107C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C74u;
        // 0x107c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107C7Cu;
        goto label_107c7c;
    }
    ctx->pc = 0x107C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C74u;
        // 0x107c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C7Cu;
label_107c7c:
    // 0x107c7c: 0x0  nop
    ctx->pc = 0x107c7cu;
    // NOP
    ctx->pc = 0x107c80u;
}
