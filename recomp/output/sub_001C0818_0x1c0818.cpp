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

// Function: sub_001C0818
// Address: 0x1c0818 - 0x1c0860
void sub_001C0818_0x1c0818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0818_0x1c0818");
#endif

    switch (ctx->pc) {
        case 0x1c0818u: goto label_1c0818;
        case 0x1c081cu: goto label_1c081c;
        case 0x1c0820u: goto label_1c0820;
        case 0x1c0824u: goto label_1c0824;
        case 0x1c0828u: goto label_1c0828;
        case 0x1c082cu: goto label_1c082c;
        case 0x1c0830u: goto label_1c0830;
        case 0x1c0834u: goto label_1c0834;
        case 0x1c0838u: goto label_1c0838;
        case 0x1c083cu: goto label_1c083c;
        case 0x1c0840u: goto label_1c0840;
        case 0x1c0844u: goto label_1c0844;
        case 0x1c0848u: goto label_1c0848;
        case 0x1c084cu: goto label_1c084c;
        case 0x1c0850u: goto label_1c0850;
        case 0x1c0854u: goto label_1c0854;
        case 0x1c0858u: goto label_1c0858;
        case 0x1c085cu: goto label_1c085c;
        default: break;
    }

    ctx->pc = 0x1c0818u;

label_1c0818:
    // 0x1c0818: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c0818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c081c:
    // 0x1c081c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c081cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c0820:
    // 0x1c0820: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c0820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1c0824:
    // 0x1c0824: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c0828:
    if (ctx->pc == 0x1C0828u) {
        ctx->pc = 0x1C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0824u;
        // 0x1c0828: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C082Cu;
        goto label_1c082c;
    }
    ctx->pc = 0x1C0824u;
    {
        const bool branch_taken_0x1c0824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C0828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0824u;
        // 0x1c0828: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0824) {
            ctx->pc = 0x1C0844u;
            goto label_1c0844;
        }
    }
    ctx->pc = 0x1C082Cu;
label_1c082c:
    // 0x1c082c: 0x8d030394  lw          $v1, 0x394($t0)
    ctx->pc = 0x1c082cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 916)));
label_1c0830:
    // 0x1c0830: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c0830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1c0834:
    // 0x1c0834: 0x40f809  jalr        $v0
label_1c0838:
    if (ctx->pc == 0x1C0838u) {
        ctx->pc = 0x1C083Cu;
        goto label_1c083c;
    }
    ctx->pc = 0x1C0834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C083Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0834u, 0x1C083Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C083Cu;
label_1c083c:
    // 0x1c083c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c0840:
    if (ctx->pc == 0x1C0840u) {
        ctx->pc = 0x1C0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C083Cu;
        // 0x1c0840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0844u;
        goto label_1c0844;
    }
    ctx->pc = 0x1C083Cu;
    {
        const bool branch_taken_0x1c083c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C083Cu;
        // 0x1c0840: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c083c) {
            ctx->pc = 0x1C0858u;
            goto label_1c0858;
        }
    }
    ctx->pc = 0x1C0844u;
label_1c0844:
    // 0x1c0844: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c0844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c0848:
    // 0x1c0848: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x1c0848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1c084c:
    // 0x1c084c: 0xc06f6f2  jal         func_1BDBC8
label_1c0850:
    if (ctx->pc == 0x1C0850u) {
        ctx->pc = 0x1C0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C084Cu;
        // 0x1c0850: 0xad0204b0  sw          $v0, 0x4B0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 1200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0854u;
        goto label_1c0854;
    }
    ctx->pc = 0x1C084Cu;
    SET_GPR_U32(ctx, 31, 0x1C0854u);
    ctx->pc = 0x1C0850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C084Cu;
    // 0x1c0850: 0xad0204b0  sw          $v0, 0x4B0($t0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 8), 1200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDBC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDBC8u, 0x1C084Cu, 0x1C0854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0854u;
label_1c0854:
    // 0x1c0854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c0854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c0858:
    // 0x1c0858: 0x3e00008  jr          $ra
label_1c085c:
    if (ctx->pc == 0x1C085Cu) {
        ctx->pc = 0x1C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0858u;
        // 0x1c085c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0860u;
        goto label_fallthrough_0x1c0858;
    }
    ctx->pc = 0x1C0858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0858u;
        // 0x1c085c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c0858:
    ctx->pc = 0x1C0860u;
}
