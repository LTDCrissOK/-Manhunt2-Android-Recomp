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

// Function: sub_00107D70
// Address: 0x107d70 - 0x107da0
void sub_00107D70_0x107d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107D70_0x107d70");
#endif

    switch (ctx->pc) {
        case 0x107d70u: goto label_107d70;
        case 0x107d74u: goto label_107d74;
        case 0x107d78u: goto label_107d78;
        case 0x107d7cu: goto label_107d7c;
        case 0x107d80u: goto label_107d80;
        case 0x107d84u: goto label_107d84;
        case 0x107d88u: goto label_107d88;
        case 0x107d8cu: goto label_107d8c;
        case 0x107d90u: goto label_107d90;
        case 0x107d94u: goto label_107d94;
        case 0x107d98u: goto label_107d98;
        case 0x107d9cu: goto label_107d9c;
        default: break;
    }

    ctx->pc = 0x107d70u;

label_107d70:
    // 0x107d70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107d74:
    // 0x107d74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107d78:
    // 0x107d78: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107d7c:
    if (ctx->pc == 0x107D7Cu) {
        ctx->pc = 0x107D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D78u;
        // 0x107d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D80u;
        goto label_107d80;
    }
    ctx->pc = 0x107D78u;
    {
        const bool branch_taken_0x107d78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D78u;
        // 0x107d7c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d78) {
            ctx->pc = 0x107D90u;
            goto label_107d90;
        }
    }
    ctx->pc = 0x107D80u;
label_107d80:
    // 0x107d80: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107d84:
    // 0x107d84: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107d88:
    // 0x107d88: 0x40f809  jalr        $v0
label_107d8c:
    if (ctx->pc == 0x107D8Cu) {
        ctx->pc = 0x107D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D88u;
        // 0x107d8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D90u;
        goto label_107d90;
    }
    ctx->pc = 0x107D88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107D90u);
        ctx->pc = 0x107D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D88u;
        // 0x107d8c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D88u, 0x107D90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D90u;
label_107d90:
    // 0x107d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107d94:
    // 0x107d94: 0x3e00008  jr          $ra
label_107d98:
    if (ctx->pc == 0x107D98u) {
        ctx->pc = 0x107D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D94u;
        // 0x107d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D9Cu;
        goto label_107d9c;
    }
    ctx->pc = 0x107D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D94u;
        // 0x107d98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D9Cu;
label_107d9c:
    // 0x107d9c: 0x0  nop
    ctx->pc = 0x107d9cu;
    // NOP
    ctx->pc = 0x107da0u;
}
