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

// Function: sub_00108318
// Address: 0x108318 - 0x108348
void sub_00108318_0x108318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108318_0x108318");
#endif

    switch (ctx->pc) {
        case 0x108318u: goto label_108318;
        case 0x10831cu: goto label_10831c;
        case 0x108320u: goto label_108320;
        case 0x108324u: goto label_108324;
        case 0x108328u: goto label_108328;
        case 0x10832cu: goto label_10832c;
        case 0x108330u: goto label_108330;
        case 0x108334u: goto label_108334;
        case 0x108338u: goto label_108338;
        case 0x10833cu: goto label_10833c;
        case 0x108340u: goto label_108340;
        case 0x108344u: goto label_108344;
        default: break;
    }

    ctx->pc = 0x108318u;

label_108318:
    // 0x108318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10831c:
    // 0x10831c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10831cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108320:
    // 0x108320: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108324:
    if (ctx->pc == 0x108324u) {
        ctx->pc = 0x108324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108320u;
        // 0x108324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108328u;
        goto label_108328;
    }
    ctx->pc = 0x108320u;
    {
        const bool branch_taken_0x108320 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108320u;
        // 0x108324: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108320) {
            ctx->pc = 0x108338u;
            goto label_108338;
        }
    }
    ctx->pc = 0x108328u;
label_108328:
    // 0x108328: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x108328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_10832c:
    // 0x10832c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x10832cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_108330:
    // 0x108330: 0x40f809  jalr        $v0
label_108334:
    if (ctx->pc == 0x108334u) {
        ctx->pc = 0x108334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108330u;
        // 0x108334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108338u;
        goto label_108338;
    }
    ctx->pc = 0x108330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108338u);
        ctx->pc = 0x108334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108330u;
        // 0x108334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108330u, 0x108338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108338u;
label_108338:
    // 0x108338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10833c:
    // 0x10833c: 0x3e00008  jr          $ra
label_108340:
    if (ctx->pc == 0x108340u) {
        ctx->pc = 0x108340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10833Cu;
        // 0x108340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108344u;
        goto label_108344;
    }
    ctx->pc = 0x10833Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10833Cu;
        // 0x108340: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10833Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108344u;
label_108344:
    // 0x108344: 0x0  nop
    ctx->pc = 0x108344u;
    // NOP
    ctx->pc = 0x108348u;
}
