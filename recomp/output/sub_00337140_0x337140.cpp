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

// Function: sub_00337140
// Address: 0x337140 - 0x337190
void sub_00337140_0x337140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337140_0x337140");
#endif

    switch (ctx->pc) {
        case 0x33717cu: goto label_33717c;
        default: break;
    }

    ctx->pc = 0x337140u;

    // 0x337140: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337144: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337144u;
    {
        const bool branch_taken_0x337144 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337144u;
        // 0x337148: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337144) {
            ctx->pc = 0x337154u;
            goto label_337154;
        }
    }
    ctx->pc = 0x33714Cu;
    // 0x33714c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33714Cu;
    {
        const bool branch_taken_0x33714c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33714Cu;
        // 0x337150: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33714c) {
            ctx->pc = 0x337174u;
            goto label_337174;
        }
    }
    ctx->pc = 0x337154u;
label_337154:
    // 0x337154: 0x8ca300bc  lw          $v1, 0xBC($a1)
    ctx->pc = 0x337154u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337158: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x337158u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x33715c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x33715cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x337160: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x337160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337164: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337164u;
    {
        const bool branch_taken_0x337164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x337168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337164u;
        // 0x337168: 0x24050013  addiu       $a1, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337164) {
            ctx->pc = 0x337174u;
            goto label_337174;
        }
    }
    ctx->pc = 0x33716Cu;
    // 0x33716c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x33716Cu;
    {
        const bool branch_taken_0x33716c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33716Cu;
        // 0x337170: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33716c) {
            ctx->pc = 0x337180u;
            goto label_337180;
        }
    }
    ctx->pc = 0x337174u;
label_337174:
    // 0x337174: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337174u;
    SET_GPR_U32(ctx, 31, 0x33717Cu);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337174u, 0x33717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33717Cu;
label_33717c:
    // 0x33717c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33717cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_337180:
    // 0x337180: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x337180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337184: 0x3e00008  jr          $ra
    ctx->pc = 0x337184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337184u;
        // 0x337188: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33718Cu;
    // 0x33718c: 0x0  nop
    ctx->pc = 0x33718cu;
    // NOP
    ctx->pc = 0x337190u;
}
