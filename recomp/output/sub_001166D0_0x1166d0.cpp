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

// Function: sub_001166D0
// Address: 0x1166d0 - 0x116708
void sub_001166D0_0x1166d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001166D0_0x1166d0");
#endif

    switch (ctx->pc) {
        case 0x1166d0u: goto label_1166d0;
        case 0x1166d4u: goto label_1166d4;
        case 0x1166d8u: goto label_1166d8;
        case 0x1166dcu: goto label_1166dc;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166e4u: goto label_1166e4;
        case 0x1166e8u: goto label_1166e8;
        case 0x1166ecu: goto label_1166ec;
        case 0x1166f0u: goto label_1166f0;
        case 0x1166f4u: goto label_1166f4;
        case 0x1166f8u: goto label_1166f8;
        case 0x1166fcu: goto label_1166fc;
        case 0x116700u: goto label_116700;
        case 0x116704u: goto label_116704;
        default: break;
    }

    ctx->pc = 0x1166d0u;

label_1166d0:
    // 0x1166d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1166d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1166d4:
    // 0x1166d4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1166d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1166d8:
    // 0x1166d8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x1166d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
label_1166dc:
    // 0x1166dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1166dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1166e0:
    // 0x1166e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1166e4:
    if (ctx->pc == 0x1166E4u) {
        ctx->pc = 0x1166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166E0u;
        // 0x1166e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166E8u;
        goto label_1166e8;
    }
    ctx->pc = 0x1166E0u;
    {
        const bool branch_taken_0x1166e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1166E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166E0u;
        // 0x1166e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166e0) {
            ctx->pc = 0x1166F8u;
            goto label_1166f8;
        }
    }
    ctx->pc = 0x1166E8u;
label_1166e8:
    // 0x1166e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1166e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1166ec:
    // 0x1166ec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1166ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1166f0:
    // 0x1166f0: 0x40f809  jalr        $v0
label_1166f4:
    if (ctx->pc == 0x1166F4u) {
        ctx->pc = 0x1166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F0u;
        // 0x1166f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1166F8u;
        goto label_1166f8;
    }
    ctx->pc = 0x1166F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1166F8u);
        ctx->pc = 0x1166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F0u;
        // 0x1166f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166F0u, 0x1166F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1166F8u;
label_1166f8:
    // 0x1166f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1166fc:
    // 0x1166fc: 0x3e00008  jr          $ra
label_116700:
    if (ctx->pc == 0x116700u) {
        ctx->pc = 0x116700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166FCu;
        // 0x116700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116704u;
        goto label_116704;
    }
    ctx->pc = 0x1166FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166FCu;
        // 0x116700: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1166FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116704u;
label_116704:
    // 0x116704: 0x0  nop
    ctx->pc = 0x116704u;
    // NOP
    ctx->pc = 0x116708u;
}
