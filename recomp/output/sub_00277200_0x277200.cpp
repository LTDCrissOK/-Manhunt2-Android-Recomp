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

// Function: sub_00277200
// Address: 0x277200 - 0x277240
void sub_00277200_0x277200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277200_0x277200");
#endif

    switch (ctx->pc) {
        case 0x277200u: goto label_277200;
        case 0x277204u: goto label_277204;
        case 0x277208u: goto label_277208;
        case 0x27720cu: goto label_27720c;
        case 0x277210u: goto label_277210;
        case 0x277214u: goto label_277214;
        case 0x277218u: goto label_277218;
        case 0x27721cu: goto label_27721c;
        case 0x277220u: goto label_277220;
        case 0x277224u: goto label_277224;
        case 0x277228u: goto label_277228;
        case 0x27722cu: goto label_27722c;
        case 0x277230u: goto label_277230;
        case 0x277234u: goto label_277234;
        case 0x277238u: goto label_277238;
        case 0x27723cu: goto label_27723c;
        default: break;
    }

    ctx->pc = 0x277200u;

label_277200:
    // 0x277200: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_277204:
    // 0x277204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_277208:
    // 0x277208: 0xc09dcc6  jal         func_277318
label_27720c:
    if (ctx->pc == 0x27720Cu) {
        ctx->pc = 0x27720Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277208u;
        // 0x27720c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277210u;
        goto label_277210;
    }
    ctx->pc = 0x277208u;
    SET_GPR_U32(ctx, 31, 0x277210u);
    ctx->pc = 0x27720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277208u;
    // 0x27720c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x277208u, 0x277210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277210u;
label_277210:
    // 0x277210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_277214:
    if (ctx->pc == 0x277214u) {
        ctx->pc = 0x277214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277210u;
        // 0x277214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277218u;
        goto label_277218;
    }
    ctx->pc = 0x277210u;
    {
        const bool branch_taken_0x277210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277210u;
        // 0x277214: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277210) {
            ctx->pc = 0x277230u;
            goto label_277230;
        }
    }
    ctx->pc = 0x277218u;
label_277218:
    // 0x277218: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x277218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27721c:
    // 0x27721c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x27721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_277220:
    // 0x277220: 0x40f809  jalr        $v0
label_277224:
    if (ctx->pc == 0x277224u) {
        ctx->pc = 0x277228u;
        goto label_277228;
    }
    ctx->pc = 0x277220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277228u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277220u, 0x277228u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277228u;
label_277228:
    // 0x277228: 0x10000002  b           . + 4 + (0x2 << 2)
label_27722c:
    if (ctx->pc == 0x27722Cu) {
        ctx->pc = 0x27722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277228u;
        // 0x27722c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277230u;
        goto label_277230;
    }
    ctx->pc = 0x277228u;
    {
        const bool branch_taken_0x277228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27722Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277228u;
        // 0x27722c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277228) {
            ctx->pc = 0x277234u;
            goto label_277234;
        }
    }
    ctx->pc = 0x277230u;
label_277230:
    // 0x277230: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x277230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277234:
    // 0x277234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_277238:
    // 0x277238: 0x3e00008  jr          $ra
label_27723c:
    if (ctx->pc == 0x27723Cu) {
        ctx->pc = 0x27723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277238u;
        // 0x27723c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277240u;
        goto label_fallthrough_0x277238;
    }
    ctx->pc = 0x277238u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27723Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277238u;
        // 0x27723c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277238u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x277238:
    ctx->pc = 0x277240u;
}
