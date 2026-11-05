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

// Function: sub_00175828
// Address: 0x175828 - 0x175860
void sub_00175828_0x175828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175828_0x175828");
#endif

    switch (ctx->pc) {
        case 0x175828u: goto label_175828;
        case 0x17582cu: goto label_17582c;
        case 0x175830u: goto label_175830;
        case 0x175834u: goto label_175834;
        case 0x175838u: goto label_175838;
        case 0x17583cu: goto label_17583c;
        case 0x175840u: goto label_175840;
        case 0x175844u: goto label_175844;
        case 0x175848u: goto label_175848;
        case 0x17584cu: goto label_17584c;
        case 0x175850u: goto label_175850;
        case 0x175854u: goto label_175854;
        case 0x175858u: goto label_175858;
        case 0x17585cu: goto label_17585c;
        default: break;
    }

    ctx->pc = 0x175828u;

label_175828:
    // 0x175828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_17582c:
    // 0x17582c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17582cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_175830:
    // 0x175830: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x175830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
label_175834:
    // 0x175834: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x175834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_175838:
    // 0x175838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_17583c:
    if (ctx->pc == 0x17583Cu) {
        ctx->pc = 0x17583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175838u;
        // 0x17583c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175840u;
        goto label_175840;
    }
    ctx->pc = 0x175838u;
    {
        const bool branch_taken_0x175838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17583Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175838u;
        // 0x17583c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175838) {
            ctx->pc = 0x175850u;
            goto label_175850;
        }
    }
    ctx->pc = 0x175840u;
label_175840:
    // 0x175840: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x175840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_175844:
    // 0x175844: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x175844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_175848:
    // 0x175848: 0x40f809  jalr        $v0
label_17584c:
    if (ctx->pc == 0x17584Cu) {
        ctx->pc = 0x175850u;
        goto label_175850;
    }
    ctx->pc = 0x175848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x175850u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175848u, 0x175850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x175850u;
label_175850:
    // 0x175850: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175850u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175854:
    // 0x175854: 0x3e00008  jr          $ra
label_175858:
    if (ctx->pc == 0x175858u) {
        ctx->pc = 0x175858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175854u;
        // 0x175858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17585Cu;
        goto label_17585c;
    }
    ctx->pc = 0x175854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175854u;
        // 0x175858: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17585Cu;
label_17585c:
    // 0x17585c: 0x0  nop
    ctx->pc = 0x17585cu;
    // NOP
    ctx->pc = 0x175860u;
}
