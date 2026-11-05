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

// Function: sub_003086E8
// Address: 0x3086e8 - 0x308730
void sub_003086E8_0x3086e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003086E8_0x3086e8");
#endif

    switch (ctx->pc) {
        case 0x3086e8u: goto label_3086e8;
        case 0x3086ecu: goto label_3086ec;
        case 0x3086f0u: goto label_3086f0;
        case 0x3086f4u: goto label_3086f4;
        case 0x3086f8u: goto label_3086f8;
        case 0x3086fcu: goto label_3086fc;
        case 0x308700u: goto label_308700;
        case 0x308704u: goto label_308704;
        case 0x308708u: goto label_308708;
        case 0x30870cu: goto label_30870c;
        case 0x308710u: goto label_308710;
        case 0x308714u: goto label_308714;
        case 0x308718u: goto label_308718;
        case 0x30871cu: goto label_30871c;
        case 0x308720u: goto label_308720;
        case 0x308724u: goto label_308724;
        case 0x308728u: goto label_308728;
        case 0x30872cu: goto label_30872c;
        default: break;
    }

    ctx->pc = 0x3086e8u;

label_3086e8:
    // 0x3086e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3086e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3086ec:
    // 0x3086ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3086ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_3086f0:
    // 0x3086f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3086f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_3086f4:
    // 0x3086f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3086f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3086f8:
    // 0x3086f8: 0xc09900c  jal         func_264030
label_3086fc:
    if (ctx->pc == 0x3086FCu) {
        ctx->pc = 0x3086FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3086F8u;
        // 0x3086fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308700u;
        goto label_308700;
    }
    ctx->pc = 0x3086F8u;
    SET_GPR_U32(ctx, 31, 0x308700u);
    ctx->pc = 0x3086FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3086F8u;
    // 0x3086fc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x264030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x264030u, 0x3086F8u, 0x308700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x308700u;
label_308700:
    // 0x308700: 0x8e0402e4  lw          $a0, 0x2E4($s0)
    ctx->pc = 0x308700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_308704:
    // 0x308704: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x308704u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308708:
    // 0x308708: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x308708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
label_30870c:
    // 0x30870c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x30870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_308710:
    // 0x308710: 0x40f809  jalr        $v0
label_308714:
    if (ctx->pc == 0x308714u) {
        ctx->pc = 0x308718u;
        goto label_308718;
    }
    ctx->pc = 0x308710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308718u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308710u, 0x308718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308718u;
label_308718:
    // 0x308718: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x308718u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_30871c:
    // 0x30871c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30871cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308720:
    // 0x308720: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x308720u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_308724:
    // 0x308724: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x308724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_308728:
    // 0x308728: 0x3e00008  jr          $ra
label_30872c:
    if (ctx->pc == 0x30872Cu) {
        ctx->pc = 0x30872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308728u;
        // 0x30872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308730u;
        goto label_fallthrough_0x308728;
    }
    ctx->pc = 0x308728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30872Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308728u;
        // 0x30872c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x308728:
    ctx->pc = 0x308730u;
}
