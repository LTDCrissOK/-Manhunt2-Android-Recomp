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

// Function: sub_00337220
// Address: 0x337220 - 0x337268
void sub_00337220_0x337220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00337220_0x337220");
#endif

    switch (ctx->pc) {
        case 0x337258u: goto label_337258;
        default: break;
    }

    ctx->pc = 0x337220u;

    // 0x337220: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x337220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x337224: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337224u;
    {
        const bool branch_taken_0x337224 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x337228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337224u;
        // 0x337228: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337224) {
            ctx->pc = 0x337234u;
            goto label_337234;
        }
    }
    ctx->pc = 0x33722Cu;
    // 0x33722c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33722Cu;
    {
        const bool branch_taken_0x33722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33722Cu;
        // 0x337230: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33722c) {
            ctx->pc = 0x337250u;
            goto label_337250;
        }
    }
    ctx->pc = 0x337234u;
label_337234:
    // 0x337234: 0x8ca200bc  lw          $v0, 0xBC($a1)
    ctx->pc = 0x337234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 188)));
    // 0x337238: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x337238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x33723c: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x33723cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x337240: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x337240u;
    {
        const bool branch_taken_0x337240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337240u;
        // 0x337244: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337240) {
            ctx->pc = 0x337250u;
            goto label_337250;
        }
    }
    ctx->pc = 0x337248u;
    // 0x337248: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x337248u;
    {
        const bool branch_taken_0x337248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33724Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337248u;
        // 0x33724c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337248) {
            ctx->pc = 0x33725Cu;
            goto label_33725c;
        }
    }
    ctx->pc = 0x337250u;
label_337250:
    // 0x337250: 0xc0cdfdc  jal         func_337F70
    ctx->pc = 0x337250u;
    SET_GPR_U32(ctx, 31, 0x337258u);
    ctx->pc = 0x337F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x337F70u, 0x337250u, 0x337258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337258u;
label_337258:
    // 0x337258: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x337258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33725c:
    // 0x33725c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33725cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x337260: 0x3e00008  jr          $ra
    ctx->pc = 0x337260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x337264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337260u;
        // 0x337264: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337268u;
}
