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

// Function: sub_00108130
// Address: 0x108130 - 0x108160
void sub_00108130_0x108130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108130_0x108130");
#endif

    switch (ctx->pc) {
        case 0x108130u: goto label_108130;
        case 0x108134u: goto label_108134;
        case 0x108138u: goto label_108138;
        case 0x10813cu: goto label_10813c;
        case 0x108140u: goto label_108140;
        case 0x108144u: goto label_108144;
        case 0x108148u: goto label_108148;
        case 0x10814cu: goto label_10814c;
        case 0x108150u: goto label_108150;
        case 0x108154u: goto label_108154;
        case 0x108158u: goto label_108158;
        case 0x10815cu: goto label_10815c;
        default: break;
    }

    ctx->pc = 0x108130u;

label_108130:
    // 0x108130: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x108130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_108134:
    // 0x108134: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x108134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_108138:
    // 0x108138: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_10813c:
    if (ctx->pc == 0x10813Cu) {
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108140u;
        goto label_108140;
    }
    ctx->pc = 0x108138u;
    {
        const bool branch_taken_0x108138 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10813Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108138u;
        // 0x10813c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108138) {
            ctx->pc = 0x108150u;
            goto label_108150;
        }
    }
    ctx->pc = 0x108140u;
label_108140:
    // 0x108140: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x108140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_108144:
    // 0x108144: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x108144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_108148:
    // 0x108148: 0x40f809  jalr        $v0
label_10814c:
    if (ctx->pc == 0x10814Cu) {
        ctx->pc = 0x10814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108148u;
        // 0x10814c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x108150u;
        goto label_108150;
    }
    ctx->pc = 0x108148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x108150u);
        ctx->pc = 0x10814Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108148u;
        // 0x10814c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108148u, 0x108150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x108150u;
label_108150:
    // 0x108150: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x108150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_108154:
    // 0x108154: 0x3e00008  jr          $ra
label_108158:
    if (ctx->pc == 0x108158u) {
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108154u;
        // 0x108158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10815Cu;
        goto label_10815c;
    }
    ctx->pc = 0x108154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108154u;
        // 0x108158: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10815Cu;
label_10815c:
    // 0x10815c: 0x0  nop
    ctx->pc = 0x10815cu;
    // NOP
    ctx->pc = 0x108160u;
}
