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

// Function: sub_0025FE88
// Address: 0x25fe88 - 0x25fec0
void sub_0025FE88_0x25fe88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025FE88_0x25fe88");
#endif

    switch (ctx->pc) {
        case 0x25fe88u: goto label_25fe88;
        case 0x25fe8cu: goto label_25fe8c;
        case 0x25fe90u: goto label_25fe90;
        case 0x25fe94u: goto label_25fe94;
        case 0x25fe98u: goto label_25fe98;
        case 0x25fe9cu: goto label_25fe9c;
        case 0x25fea0u: goto label_25fea0;
        case 0x25fea4u: goto label_25fea4;
        case 0x25fea8u: goto label_25fea8;
        case 0x25feacu: goto label_25feac;
        case 0x25feb0u: goto label_25feb0;
        case 0x25feb4u: goto label_25feb4;
        case 0x25feb8u: goto label_25feb8;
        case 0x25febcu: goto label_25febc;
        default: break;
    }

    ctx->pc = 0x25fe88u;

label_25fe88:
    // 0x25fe88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25fe88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25fe8c:
    // 0x25fe8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25fe90:
    // 0x25fe90: 0xc097f26  jal         func_25FC98
label_25fe94:
    if (ctx->pc == 0x25FE94u) {
        ctx->pc = 0x25FE98u;
        goto label_25fe98;
    }
    ctx->pc = 0x25FE90u;
    SET_GPR_U32(ctx, 31, 0x25FE98u);
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x25FE90u, 0x25FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25FE98u;
label_25fe98:
    // 0x25fe98: 0x2443ff98  addiu       $v1, $v0, -0x68
    ctx->pc = 0x25fe98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967192));
label_25fe9c:
    // 0x25fe9c: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x25fe9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_25fea0:
    // 0x25fea0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_25fea4:
    if (ctx->pc == 0x25FEA4u) {
        ctx->pc = 0x25FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEA0u;
        // 0x25fea4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25FEA8u;
        goto label_25fea8;
    }
    ctx->pc = 0x25FEA0u;
    {
        const bool branch_taken_0x25fea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25FEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25FEA0u;
        // 0x25fea4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25fea0) {
            ctx->pc = 0x25FEC8u;
            return;
        }
    }
    ctx->pc = 0x25FEA8u;
label_25fea8:
    // 0x25fea8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x25fea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_25feac:
    // 0x25feac: 0x244273a0  addiu       $v0, $v0, 0x73A0
    ctx->pc = 0x25feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29600));
label_25feb0:
    // 0x25feb0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x25feb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_25feb4:
    // 0x25feb4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x25feb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_25feb8:
    // 0x25feb8: 0x800008  jr          $a0
label_25febc:
    if (ctx->pc == 0x25FEBCu) {
        ctx->pc = 0x25FEC0u;
        goto label_fallthrough_0x25feb8;
    }
    ctx->pc = 0x25FEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25FEB8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x25feb8:
    ctx->pc = 0x25FEC0u;
}
