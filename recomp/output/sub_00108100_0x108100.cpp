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

// Function: sub_00108100
// Address: 0x108100 - 0x108130
void sub_00108100_0x108100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108100_0x108100");
#endif

    switch (ctx->pc) {
        case 0x108100u: goto label_108100;
        case 0x108104u: goto label_108104;
        case 0x108108u: goto label_108108;
        case 0x10810cu: goto label_10810c;
        case 0x108110u: goto label_108110;
        case 0x108114u: goto label_108114;
        case 0x108118u: goto label_108118;
        case 0x10811cu: goto label_10811c;
        case 0x108120u: goto label_108120;
        case 0x108124u: goto label_108124;
        case 0x108128u: goto label_108128;
        case 0x10812cu: goto label_10812c;
        default: break;
    }

    ctx->pc = 0x108100u;

label_108100:
    // 0x108100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108104:
    // 0x108104: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108108:
    // 0x108108: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10810c:
    if (ctx->pc == 0x10810Cu) {
        ctx->pc = 0x10810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108108u;
        // 0x10810c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108110u;
        goto label_108110;
    }
    ctx->pc = 0x108108u;
    {
        const bool branch_taken_0x108108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108108u;
        // 0x10810c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108108) {
            ctx->pc = 0x108120u;
            goto label_108120;
        }
    }
    ctx->pc = 0x108110u;
label_108110:
    // 0x108110: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108114:
    // 0x108114: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108118:
    // 0x108118: 0x40f809  jalr        $v0
label_10811c:
    if (ctx->pc == 0x10811Cu) {
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108120u;
        goto label_108120;
    }
    ctx->pc = 0x108118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108120u);
        ctx->pc = 0x10811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108118u;
        // 0x10811c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108118u, 0x108120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108120u;
label_108120:
    // 0x108120: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108120u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108124:
    // 0x108124: 0x3e00008  jr          $ra
label_108128:
    if (ctx->pc == 0x108128u) {
        ctx->pc = 0x108128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108124u;
        // 0x108128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10812Cu;
        goto label_10812c;
    }
    ctx->pc = 0x108124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108124u;
        // 0x108128: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10812Cu;
label_10812c:
    // 0x10812c: 0x0  nop
    ctx->pc = 0x10812cu;
    // NOP
    ctx->pc = 0x108130u;
}
