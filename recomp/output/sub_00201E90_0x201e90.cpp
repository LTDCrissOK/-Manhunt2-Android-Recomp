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

// Function: sub_00201E90
// Address: 0x201e90 - 0x201ed0
void sub_00201E90_0x201e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201E90_0x201e90");
#endif

    switch (ctx->pc) {
        case 0x201e90u: goto label_201e90;
        case 0x201e94u: goto label_201e94;
        case 0x201e98u: goto label_201e98;
        case 0x201e9cu: goto label_201e9c;
        case 0x201ea0u: goto label_201ea0;
        case 0x201ea4u: goto label_201ea4;
        case 0x201ea8u: goto label_201ea8;
        case 0x201eacu: goto label_201eac;
        case 0x201eb0u: goto label_201eb0;
        case 0x201eb4u: goto label_201eb4;
        case 0x201eb8u: goto label_201eb8;
        case 0x201ebcu: goto label_201ebc;
        case 0x201ec0u: goto label_201ec0;
        case 0x201ec4u: goto label_201ec4;
        case 0x201ec8u: goto label_201ec8;
        case 0x201eccu: goto label_201ecc;
        default: break;
    }

    ctx->pc = 0x201e90u;

label_201e90:
    // 0x201e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_201e94:
    // 0x201e94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_201e98:
    // 0x201e98: 0xc09dcc6  jal         func_277318
label_201e9c:
    if (ctx->pc == 0x201E9Cu) {
        ctx->pc = 0x201E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201E98u;
        // 0x201e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EA0u;
        goto label_201ea0;
    }
    ctx->pc = 0x201E98u;
    SET_GPR_U32(ctx, 31, 0x201EA0u);
    ctx->pc = 0x201E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x201E98u;
    // 0x201e9c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277318u, 0x201E98u, 0x201EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x201EA0u;
label_201ea0:
    // 0x201ea0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_201ea4:
    if (ctx->pc == 0x201EA4u) {
        ctx->pc = 0x201EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA0u;
        // 0x201ea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EA8u;
        goto label_201ea8;
    }
    ctx->pc = 0x201EA0u;
    {
        const bool branch_taken_0x201ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EA0u;
        // 0x201ea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201ea0) {
            ctx->pc = 0x201EC0u;
            goto label_201ec0;
        }
    }
    ctx->pc = 0x201EA8u;
label_201ea8:
    // 0x201ea8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x201ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_201eac:
    // 0x201eac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x201eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_201eb0:
    // 0x201eb0: 0x40f809  jalr        $v0
label_201eb4:
    if (ctx->pc == 0x201EB4u) {
        ctx->pc = 0x201EB8u;
        goto label_201eb8;
    }
    ctx->pc = 0x201EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201EB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EB0u, 0x201EB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x201EB8u;
label_201eb8:
    // 0x201eb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_201ebc:
    if (ctx->pc == 0x201EBCu) {
        ctx->pc = 0x201EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EB8u;
        // 0x201ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201EC0u;
        goto label_201ec0;
    }
    ctx->pc = 0x201EB8u;
    {
        const bool branch_taken_0x201eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EB8u;
        // 0x201ebc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201eb8) {
            ctx->pc = 0x201EC4u;
            goto label_201ec4;
        }
    }
    ctx->pc = 0x201EC0u;
label_201ec0:
    // 0x201ec0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x201ec0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_201ec4:
    // 0x201ec4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_201ec8:
    // 0x201ec8: 0x3e00008  jr          $ra
label_201ecc:
    if (ctx->pc == 0x201ECCu) {
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x201ED0u;
        goto label_fallthrough_0x201ec8;
    }
    ctx->pc = 0x201EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201EC8u;
        // 0x201ecc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x201ec8:
    ctx->pc = 0x201ED0u;
}
