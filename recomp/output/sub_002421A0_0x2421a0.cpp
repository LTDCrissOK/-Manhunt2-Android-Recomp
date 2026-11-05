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

// Function: sub_002421A0
// Address: 0x2421a0 - 0x2421f8
void sub_002421A0_0x2421a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002421A0_0x2421a0");
#endif

    switch (ctx->pc) {
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ecu: goto label_2421ec;
        default: break;
    }

    ctx->pc = 0x2421a0u;

    // 0x2421a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2421a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2421a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2421a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2421a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2421ac: 0x8cc80334  lw          $t0, 0x334($a2)
    ctx->pc = 0x2421acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x2421b0: 0x8d0401e4  lw          $a0, 0x1E4($t0)
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 484)));
    // 0x2421b4: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2421B4u;
    {
        const bool branch_taken_0x2421b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2421B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421B4u;
        // 0x2421b8: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421b4) {
            ctx->pc = 0x2421E4u;
            goto label_2421e4;
        }
    }
    ctx->pc = 0x2421BCu;
    // 0x2421bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2421bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2421c0: 0x250301ec  addiu       $v1, $t0, 0x1EC
    ctx->pc = 0x2421c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 492));
    // 0x2421c4: 0x0  nop
    ctx->pc = 0x2421c4u;
    // NOP
label_2421c8:
    // 0x2421c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2421c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2421cc: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2421CCu;
    {
        const bool branch_taken_0x2421cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2421D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421CCu;
        // 0x2421d0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421cc) {
            ctx->pc = 0x2421E4u;
            goto label_2421e4;
        }
    }
    ctx->pc = 0x2421D4u;
    // 0x2421d4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x2421d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2421d8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2421D8u;
    {
        const bool branch_taken_0x2421d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2421DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421D8u;
        // 0x2421dc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421d8) {
            ctx->pc = 0x2421C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2421c8;
        }
    }
    ctx->pc = 0x2421E0u;
    // 0x2421e0: 0x8d0401e8  lw          $a0, 0x1E8($t0)
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 488)));
label_2421e4:
    // 0x2421e4: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x2421E4u;
    SET_GPR_U32(ctx, 31, 0x2421ECu);
    ctx->pc = 0x2421E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2421E4u;
    // 0x2421e8: 0x24a55750  addiu       $a1, $a1, 0x5750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x2421E4u, 0x2421ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2421ECu;
label_2421ec:
    // 0x2421ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2421ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2421f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2421F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2421F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2421F0u;
        // 0x2421f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2421F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2421F8u;
}
