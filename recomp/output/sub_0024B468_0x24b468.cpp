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

// Function: sub_0024B468
// Address: 0x24b468 - 0x24b4d0
void sub_0024B468_0x24b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B468_0x24b468");
#endif

    switch (ctx->pc) {
        case 0x24b480u: goto label_24b480;
        case 0x24b498u: goto label_24b498;
        case 0x24b4c0u: goto label_24b4c0;
        default: break;
    }

    ctx->pc = 0x24b468u;

    // 0x24b468: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24b46c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b474: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24b474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24b478: 0xc08dc16  jal         func_237058
    ctx->pc = 0x24B478u;
    SET_GPR_U32(ctx, 31, 0x24B480u);
    ctx->pc = 0x24B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B478u;
    // 0x24b47c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x237058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x237058u, 0x24B478u, 0x24B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B480u;
label_24b480:
    // 0x24b480: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x24b480u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24b484: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x24b484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
    // 0x24b488: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x24B488u;
    {
        const bool branch_taken_0x24b488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B488u;
        // 0x24b48c: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b488) {
            ctx->pc = 0x24B4B4u;
            goto label_24b4b4;
        }
    }
    ctx->pc = 0x24B490u;
    // 0x24b490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24b490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b494: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x24b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_24b498:
    // 0x24b498: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24b498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24b49c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B49Cu;
    {
        const bool branch_taken_0x24b49c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B49Cu;
        // 0x24b4a0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b49c) {
            ctx->pc = 0x24B4B4u;
            goto label_24b4b4;
        }
    }
    ctx->pc = 0x24B4A4u;
    // 0x24b4a4: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24b4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x24b4a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x24B4A8u;
    {
        const bool branch_taken_0x24b4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24B4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4A8u;
        // 0x24b4ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b4a8) {
            ctx->pc = 0x24B498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24b498;
        }
    }
    ctx->pc = 0x24B4B0u;
    // 0x24b4b0: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x24b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24b4b4:
    // 0x24b4b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24b4b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b4b8: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x24B4B8u;
    SET_GPR_U32(ctx, 31, 0x24B4C0u);
    ctx->pc = 0x24B4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B4B8u;
    // 0x24b4bc: 0x24a5b008  addiu       $a1, $a1, -0x4FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x24B4B8u, 0x24B4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B4C0u;
label_24b4c0:
    // 0x24b4c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b4c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24b4c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24b4c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b4c8: 0x3e00008  jr          $ra
    ctx->pc = 0x24B4C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B4C8u;
        // 0x24b4cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B4C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B4D0u;
}
