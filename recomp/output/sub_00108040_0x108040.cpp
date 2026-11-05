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

// Function: sub_00108040
// Address: 0x108040 - 0x108070
void sub_00108040_0x108040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108040_0x108040");
#endif

    switch (ctx->pc) {
        case 0x108040u: goto label_108040;
        case 0x108044u: goto label_108044;
        case 0x108048u: goto label_108048;
        case 0x10804cu: goto label_10804c;
        case 0x108050u: goto label_108050;
        case 0x108054u: goto label_108054;
        case 0x108058u: goto label_108058;
        case 0x10805cu: goto label_10805c;
        case 0x108060u: goto label_108060;
        case 0x108064u: goto label_108064;
        case 0x108068u: goto label_108068;
        case 0x10806cu: goto label_10806c;
        default: break;
    }

    ctx->pc = 0x108040u;

label_108040:
    // 0x108040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108044:
    // 0x108044: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108048:
    // 0x108048: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10804c:
    if (ctx->pc == 0x10804Cu) {
        ctx->pc = 0x10804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108048u;
        // 0x10804c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108050u;
        goto label_108050;
    }
    ctx->pc = 0x108048u;
    {
        const bool branch_taken_0x108048 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108048u;
        // 0x10804c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108048) {
            ctx->pc = 0x108060u;
            goto label_108060;
        }
    }
    ctx->pc = 0x108050u;
label_108050:
    // 0x108050: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_108054:
    // 0x108054: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108058:
    // 0x108058: 0x40f809  jalr        $v0
label_10805c:
    if (ctx->pc == 0x10805Cu) {
        ctx->pc = 0x10805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108058u;
        // 0x10805c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108060u;
        goto label_108060;
    }
    ctx->pc = 0x108058u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108060u);
        ctx->pc = 0x10805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108058u;
        // 0x10805c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108058u, 0x108060u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108060u;
label_108060:
    // 0x108060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108064:
    // 0x108064: 0x3e00008  jr          $ra
label_108068:
    if (ctx->pc == 0x108068u) {
        ctx->pc = 0x108068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108064u;
        // 0x108068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10806Cu;
        goto label_10806c;
    }
    ctx->pc = 0x108064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108064u;
        // 0x108068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10806Cu;
label_10806c:
    // 0x10806c: 0x0  nop
    ctx->pc = 0x10806cu;
    // NOP
    ctx->pc = 0x108070u;
}
