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

// Function: sub_00107D40
// Address: 0x107d40 - 0x107d70
void sub_00107D40_0x107d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107D40_0x107d40");
#endif

    switch (ctx->pc) {
        case 0x107d40u: goto label_107d40;
        case 0x107d44u: goto label_107d44;
        case 0x107d48u: goto label_107d48;
        case 0x107d4cu: goto label_107d4c;
        case 0x107d50u: goto label_107d50;
        case 0x107d54u: goto label_107d54;
        case 0x107d58u: goto label_107d58;
        case 0x107d5cu: goto label_107d5c;
        case 0x107d60u: goto label_107d60;
        case 0x107d64u: goto label_107d64;
        case 0x107d68u: goto label_107d68;
        case 0x107d6cu: goto label_107d6c;
        default: break;
    }

    ctx->pc = 0x107d40u;

label_107d40:
    // 0x107d40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107d44:
    // 0x107d44: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107d44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107d48:
    // 0x107d48: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107d4c:
    if (ctx->pc == 0x107D4Cu) {
        ctx->pc = 0x107D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D48u;
        // 0x107d4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D50u;
        goto label_107d50;
    }
    ctx->pc = 0x107D48u;
    {
        const bool branch_taken_0x107d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D48u;
        // 0x107d4c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107d48) {
            ctx->pc = 0x107D60u;
            goto label_107d60;
        }
    }
    ctx->pc = 0x107D50u;
label_107d50:
    // 0x107d50: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107d54:
    // 0x107d54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107d58:
    // 0x107d58: 0x40f809  jalr        $v0
label_107d5c:
    if (ctx->pc == 0x107D5Cu) {
        ctx->pc = 0x107D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D58u;
        // 0x107d5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D60u;
        goto label_107d60;
    }
    ctx->pc = 0x107D58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107D60u);
        ctx->pc = 0x107D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D58u;
        // 0x107d5c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D58u, 0x107D60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D60u;
label_107d60:
    // 0x107d60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107d64:
    // 0x107d64: 0x3e00008  jr          $ra
label_107d68:
    if (ctx->pc == 0x107D68u) {
        ctx->pc = 0x107D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D64u;
        // 0x107d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D6Cu;
        goto label_107d6c;
    }
    ctx->pc = 0x107D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D64u;
        // 0x107d68: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D6Cu;
label_107d6c:
    // 0x107d6c: 0x0  nop
    ctx->pc = 0x107d6cu;
    // NOP
    ctx->pc = 0x107d70u;
}
