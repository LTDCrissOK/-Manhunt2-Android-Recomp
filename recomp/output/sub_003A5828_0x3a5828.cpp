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

// Function: sub_003A5828
// Address: 0x3a5828 - 0x3a5858
void sub_003A5828_0x3a5828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A5828_0x3a5828");
#endif

    switch (ctx->pc) {
        case 0x3a5828u: goto label_3a5828;
        case 0x3a582cu: goto label_3a582c;
        case 0x3a5830u: goto label_3a5830;
        case 0x3a5834u: goto label_3a5834;
        case 0x3a5838u: goto label_3a5838;
        case 0x3a583cu: goto label_3a583c;
        case 0x3a5840u: goto label_3a5840;
        case 0x3a5844u: goto label_3a5844;
        case 0x3a5848u: goto label_3a5848;
        case 0x3a584cu: goto label_3a584c;
        case 0x3a5850u: goto label_3a5850;
        case 0x3a5854u: goto label_3a5854;
        default: break;
    }

    ctx->pc = 0x3a5828u;

label_3a5828:
    // 0x3a5828: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a582c:
    // 0x3a582c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a582cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a5830:
    // 0x3a5830: 0x8c43392c  lw          $v1, 0x392C($v0)
    ctx->pc = 0x3a5830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14636)));
label_3a5834:
    // 0x3a5834: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a5834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a5838:
    // 0x3a5838: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a583c:
    if (ctx->pc == 0x3A583Cu) {
        ctx->pc = 0x3A583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5838u;
        // 0x3a583c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5840u;
        goto label_3a5840;
    }
    ctx->pc = 0x3A5838u;
    {
        const bool branch_taken_0x3a5838 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5838u;
        // 0x3a583c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a5838) {
            ctx->pc = 0x3A584Cu;
            goto label_3a584c;
        }
    }
    ctx->pc = 0x3A5840u;
label_3a5840:
    // 0x3a5840: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a5840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a5844:
    // 0x3a5844: 0x60f809  jalr        $v1
label_3a5848:
    if (ctx->pc == 0x3A5848u) {
        ctx->pc = 0x3A5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5844u;
        // 0x3a5848: 0x8c443930  lw          $a0, 0x3930($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A584Cu;
        goto label_3a584c;
    }
    ctx->pc = 0x3A5844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A584Cu);
        ctx->pc = 0x3A5848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5844u;
        // 0x3a5848: 0x8c443930  lw          $a0, 0x3930($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14640)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5844u, 0x3A584Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A584Cu;
label_3a584c:
    // 0x3a584c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a584cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a5850:
    // 0x3a5850: 0x3e00008  jr          $ra
label_3a5854:
    if (ctx->pc == 0x3A5854u) {
        ctx->pc = 0x3A5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5850u;
        // 0x3a5854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A5858u;
        goto label_fallthrough_0x3a5850;
    }
    ctx->pc = 0x3A5850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A5854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A5850u;
        // 0x3a5854: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A5850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a5850:
    ctx->pc = 0x3A5858u;
}
