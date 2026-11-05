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

// Function: sub_00249C80
// Address: 0x249c80 - 0x249cd8
void sub_00249C80_0x249c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00249C80_0x249c80");
#endif

    switch (ctx->pc) {
        case 0x249ca8u: goto label_249ca8;
        case 0x249cccu: goto label_249ccc;
        default: break;
    }

    ctx->pc = 0x249c80u;

    // 0x249c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x249c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x249c84: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x249c84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x249c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x249c8c: 0x8cc80334  lw          $t0, 0x334($a2)
    ctx->pc = 0x249c8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x249c90: 0x8d0401e4  lw          $a0, 0x1E4($t0)
    ctx->pc = 0x249c90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 484)));
    // 0x249c94: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x249C94u;
    {
        const bool branch_taken_0x249c94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x249C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249C94u;
        // 0x249c98: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249c94) {
            ctx->pc = 0x249CC4u;
            goto label_249cc4;
        }
    }
    ctx->pc = 0x249C9Cu;
    // 0x249c9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x249c9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249ca0: 0x250301ec  addiu       $v1, $t0, 0x1EC
    ctx->pc = 0x249ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 492));
    // 0x249ca4: 0x0  nop
    ctx->pc = 0x249ca4u;
    // NOP
label_249ca8:
    // 0x249ca8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x249ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x249cac: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x249CACu;
    {
        const bool branch_taken_0x249cac = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CACu;
        // 0x249cb0: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cac) {
            ctx->pc = 0x249CC4u;
            goto label_249cc4;
        }
    }
    ctx->pc = 0x249CB4u;
    // 0x249cb4: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x249cb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x249cb8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x249CB8u;
    {
        const bool branch_taken_0x249cb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x249CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CB8u;
        // 0x249cbc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249cb8) {
            ctx->pc = 0x249CA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_249ca8;
        }
    }
    ctx->pc = 0x249CC0u;
    // 0x249cc0: 0x8d0401e8  lw          $a0, 0x1E8($t0)
    ctx->pc = 0x249cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 488)));
label_249cc4:
    // 0x249cc4: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x249CC4u;
    SET_GPR_U32(ctx, 31, 0x249CCCu);
    ctx->pc = 0x249CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x249CC4u;
    // 0x249cc8: 0x24a58cd8  addiu       $a1, $a1, -0x7328 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x249CC4u, 0x249CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249CCCu;
label_249ccc:
    // 0x249ccc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x249cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x249cd0: 0x3e00008  jr          $ra
    ctx->pc = 0x249CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249CD0u;
        // 0x249cd4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x249CD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249CD8u;
}
