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

// Function: sub_002DEB70
// Address: 0x2deb70 - 0x2debb8
void sub_002DEB70_0x2deb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DEB70_0x2deb70");
#endif

    switch (ctx->pc) {
        case 0x2deb70u: goto label_2deb70;
        case 0x2deb74u: goto label_2deb74;
        case 0x2deb78u: goto label_2deb78;
        case 0x2deb7cu: goto label_2deb7c;
        case 0x2deb80u: goto label_2deb80;
        case 0x2deb84u: goto label_2deb84;
        case 0x2deb88u: goto label_2deb88;
        case 0x2deb8cu: goto label_2deb8c;
        case 0x2deb90u: goto label_2deb90;
        case 0x2deb94u: goto label_2deb94;
        case 0x2deb98u: goto label_2deb98;
        case 0x2deb9cu: goto label_2deb9c;
        case 0x2deba0u: goto label_2deba0;
        case 0x2deba4u: goto label_2deba4;
        case 0x2deba8u: goto label_2deba8;
        case 0x2debacu: goto label_2debac;
        case 0x2debb0u: goto label_2debb0;
        case 0x2debb4u: goto label_2debb4;
        default: break;
    }

    ctx->pc = 0x2deb70u;

label_2deb70:
    // 0x2deb70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2deb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2deb74:
    // 0x2deb74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2deb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2deb78:
    // 0x2deb78: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2deb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2deb7c:
    // 0x2deb7c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2deb7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2deb80:
    // 0x2deb80: 0x8e0200e0  lw          $v0, 0xE0($s0)
    ctx->pc = 0x2deb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_2deb84:
    // 0x2deb84: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2deb88:
    if (ctx->pc == 0x2DEB88u) {
        ctx->pc = 0x2DEB8Cu;
        goto label_2deb8c;
    }
    ctx->pc = 0x2DEB84u;
    {
        const bool branch_taken_0x2deb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2deb84) {
            ctx->pc = 0x2DEB9Cu;
            goto label_2deb9c;
        }
    }
    ctx->pc = 0x2DEB8Cu;
label_2deb8c:
    // 0x2deb8c: 0x8e030070  lw          $v1, 0x70($s0)
    ctx->pc = 0x2deb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_2deb90:
    // 0x2deb90: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2deb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2deb94:
    // 0x2deb94: 0x40f809  jalr        $v0
label_2deb98:
    if (ctx->pc == 0x2DEB98u) {
        ctx->pc = 0x2DEB9Cu;
        goto label_2deb9c;
    }
    ctx->pc = 0x2DEB94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DEB9Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEB94u, 0x2DEB9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DEB9Cu;
label_2deb9c:
    // 0x2deb9c: 0xc0b88b8  jal         func_2E22E0
label_2deba0:
    if (ctx->pc == 0x2DEBA0u) {
        ctx->pc = 0x2DEBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEB9Cu;
        // 0x2deba0: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBA4u;
        goto label_2deba4;
    }
    ctx->pc = 0x2DEB9Cu;
    SET_GPR_U32(ctx, 31, 0x2DEBA4u);
    ctx->pc = 0x2DEBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DEB9Cu;
    // 0x2deba0: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E22E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E22E0u, 0x2DEB9Cu, 0x2DEBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEBA4u;
label_2deba4:
    // 0x2deba4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2deba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2deba8:
    // 0x2deba8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2deba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2debac:
    // 0x2debac: 0x3e00008  jr          $ra
label_2debb0:
    if (ctx->pc == 0x2DEBB0u) {
        ctx->pc = 0x2DEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBACu;
        // 0x2debb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DEBB4u;
        goto label_2debb4;
    }
    ctx->pc = 0x2DEBACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DEBACu;
        // 0x2debb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DEBACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DEBB4u;
label_2debb4:
    // 0x2debb4: 0x0  nop
    ctx->pc = 0x2debb4u;
    // NOP
    ctx->pc = 0x2debb8u;
}
