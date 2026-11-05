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

// Function: sub_001A6068
// Address: 0x1a6068 - 0x1a60c8
void sub_001A6068_0x1a6068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6068_0x1a6068");
#endif

    switch (ctx->pc) {
        case 0x1a6088u: goto label_1a6088;
        case 0x1a609cu: goto label_1a609c;
        case 0x1a60b0u: goto label_1a60b0;
        default: break;
    }

    ctx->pc = 0x1a6068u;

    // 0x1a6068: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a606c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a606cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6070: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6074: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a6074u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6078: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a607c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a607cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6080: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1A6080u;
    SET_GPR_U32(ctx, 31, 0x1A6088u);
    ctx->pc = 0x1A6084u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6080u;
    // 0x1a6084: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1A6080u, 0x1A6088u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6088u;
label_1a6088:
    // 0x1a6088: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6088u;
    {
        const bool branch_taken_0x1a6088 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A608Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6088u;
        // 0x1a608c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6088) {
            ctx->pc = 0x1A60A4u;
            goto label_1a60a4;
        }
    }
    ctx->pc = 0x1A6090u;
    // 0x1a6090: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1a6090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1a6094: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6094u;
    SET_GPR_U32(ctx, 31, 0x1A609Cu);
    ctx->pc = 0x1A6098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6094u;
    // 0x1a6098: 0x2406080d  addiu       $a2, $zero, 0x80D (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2061));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6094u, 0x1A609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A609Cu;
label_1a609c:
    // 0x1a609c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A609Cu;
    {
        const bool branch_taken_0x1a609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A60A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A609Cu;
        // 0x1a60a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a609c) {
            ctx->pc = 0x1A60B4u;
            goto label_1a60b4;
        }
    }
    ctx->pc = 0x1A60A4u;
label_1a60a4:
    // 0x1a60a4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a60a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a60a8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A60A8u;
    SET_GPR_U32(ctx, 31, 0x1A60B0u);
    ctx->pc = 0x1A60ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A60A8u;
    // 0x1a60ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A60A8u, 0x1A60B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A60B0u;
label_1a60b0:
    // 0x1a60b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a60b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a60b4:
    // 0x1a60b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a60b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a60b8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a60b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a60bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A60BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A60C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A60BCu;
        // 0x1a60c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A60BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A60C4u;
    // 0x1a60c4: 0x0  nop
    ctx->pc = 0x1a60c4u;
    // NOP
    ctx->pc = 0x1a60c8u;
}
