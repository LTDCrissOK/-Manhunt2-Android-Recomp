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

// Function: sub_00108228
// Address: 0x108228 - 0x108258
void sub_00108228_0x108228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108228_0x108228");
#endif

    switch (ctx->pc) {
        case 0x108228u: goto label_108228;
        case 0x10822cu: goto label_10822c;
        case 0x108230u: goto label_108230;
        case 0x108234u: goto label_108234;
        case 0x108238u: goto label_108238;
        case 0x10823cu: goto label_10823c;
        case 0x108240u: goto label_108240;
        case 0x108244u: goto label_108244;
        case 0x108248u: goto label_108248;
        case 0x10824cu: goto label_10824c;
        case 0x108250u: goto label_108250;
        case 0x108254u: goto label_108254;
        default: break;
    }

    ctx->pc = 0x108228u;

label_108228:
    // 0x108228: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_10822c:
    // 0x10822c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x10822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108230:
    // 0x108230: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_108234:
    if (ctx->pc == 0x108234u) {
        ctx->pc = 0x108234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108230u;
        // 0x108234: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108238u;
        goto label_108238;
    }
    ctx->pc = 0x108230u;
    {
        const bool branch_taken_0x108230 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x108234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108230u;
        // 0x108234: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108230) {
            ctx->pc = 0x108248u;
            goto label_108248;
        }
    }
    ctx->pc = 0x108238u;
label_108238:
    // 0x108238: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x108238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_10823c:
    // 0x10823c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x10823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108240:
    // 0x108240: 0x40f809  jalr        $v0
label_108244:
    if (ctx->pc == 0x108244u) {
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108248u;
        goto label_108248;
    }
    ctx->pc = 0x108240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108248u);
        ctx->pc = 0x108244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108240u;
        // 0x108244: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108240u, 0x108248u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108248u;
label_108248:
    // 0x108248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10824c:
    // 0x10824c: 0x3e00008  jr          $ra
label_108250:
    if (ctx->pc == 0x108250u) {
        ctx->pc = 0x108250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10824Cu;
        // 0x108250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108254u;
        goto label_108254;
    }
    ctx->pc = 0x10824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10824Cu;
        // 0x108250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10824Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108254u;
label_108254:
    // 0x108254: 0x0  nop
    ctx->pc = 0x108254u;
    // NOP
    ctx->pc = 0x108258u;
}
