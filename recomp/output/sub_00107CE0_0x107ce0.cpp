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

// Function: sub_00107CE0
// Address: 0x107ce0 - 0x107d10
void sub_00107CE0_0x107ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107CE0_0x107ce0");
#endif

    switch (ctx->pc) {
        case 0x107ce0u: goto label_107ce0;
        case 0x107ce4u: goto label_107ce4;
        case 0x107ce8u: goto label_107ce8;
        case 0x107cecu: goto label_107cec;
        case 0x107cf0u: goto label_107cf0;
        case 0x107cf4u: goto label_107cf4;
        case 0x107cf8u: goto label_107cf8;
        case 0x107cfcu: goto label_107cfc;
        case 0x107d00u: goto label_107d00;
        case 0x107d04u: goto label_107d04;
        case 0x107d08u: goto label_107d08;
        case 0x107d0cu: goto label_107d0c;
        default: break;
    }

    ctx->pc = 0x107ce0u;

label_107ce0:
    // 0x107ce0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107ce4:
    // 0x107ce4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107ce8:
    // 0x107ce8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107cec:
    if (ctx->pc == 0x107CECu) {
        ctx->pc = 0x107CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CE8u;
        // 0x107cec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107CF0u;
        goto label_107cf0;
    }
    ctx->pc = 0x107CE8u;
    {
        const bool branch_taken_0x107ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CE8u;
        // 0x107cec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107ce8) {
            ctx->pc = 0x107D00u;
            goto label_107d00;
        }
    }
    ctx->pc = 0x107CF0u;
label_107cf0:
    // 0x107cf0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107cf4:
    // 0x107cf4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107cf8:
    // 0x107cf8: 0x40f809  jalr        $v0
label_107cfc:
    if (ctx->pc == 0x107CFCu) {
        ctx->pc = 0x107CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF8u;
        // 0x107cfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D00u;
        goto label_107d00;
    }
    ctx->pc = 0x107CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107D00u);
        ctx->pc = 0x107CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107CF8u;
        // 0x107cfc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107CF8u, 0x107D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107D00u;
label_107d00:
    // 0x107d00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107d00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107d04:
    // 0x107d04: 0x3e00008  jr          $ra
label_107d08:
    if (ctx->pc == 0x107D08u) {
        ctx->pc = 0x107D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D04u;
        // 0x107d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107D0Cu;
        goto label_107d0c;
    }
    ctx->pc = 0x107D04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107D04u;
        // 0x107d08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107D04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107D0Cu;
label_107d0c:
    // 0x107d0c: 0x0  nop
    ctx->pc = 0x107d0cu;
    // NOP
    ctx->pc = 0x107d10u;
}
