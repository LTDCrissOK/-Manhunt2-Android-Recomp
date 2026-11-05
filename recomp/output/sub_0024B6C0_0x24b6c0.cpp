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

// Function: sub_0024B6C0
// Address: 0x24b6c0 - 0x24b740
void sub_0024B6C0_0x24b6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B6C0_0x24b6c0");
#endif

    switch (ctx->pc) {
        case 0x24b6f0u: goto label_24b6f0;
        case 0x24b704u: goto label_24b704;
        case 0x24b72cu: goto label_24b72c;
        default: break;
    }

    ctx->pc = 0x24b6c0u;

    // 0x24b6c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24b6c4: 0x24020465  addiu       $v0, $zero, 0x465
    ctx->pc = 0x24b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1125));
    // 0x24b6c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24b6cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24b6ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24b6d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24b6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b6d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x24b6d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x24b6d8: 0x8e11004c  lw          $s1, 0x4C($s0)
    ctx->pc = 0x24b6d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x24b6dc: 0x56220006  bnel        $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B6DCu;
    {
        const bool branch_taken_0x24b6dc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x24b6dc) {
            ctx->pc = 0x24B6E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B6DCu;
            // 0x24b6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B6F8u;
            goto label_24b6f8;
        }
    }
    ctx->pc = 0x24B6E4u;
    // 0x24b6e4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b6e8: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B6E8u;
    SET_GPR_U32(ctx, 31, 0x24B6F0u);
    ctx->pc = 0x24B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6E8u;
    // 0x24b6ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B6E8u, 0x24B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B6F0u;
label_24b6f0:
    // 0x24b6f0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x24B6F0u;
    {
        const bool branch_taken_0x24b6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6F0u;
        // 0x24b6f4: 0x8e030148  lw          $v1, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6f0) {
            ctx->pc = 0x24B708u;
            goto label_24b708;
        }
    }
    ctx->pc = 0x24B6F8u;
label_24b6f8:
    // 0x24b6f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x24b6f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24b6fc: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x24B6FCu;
    SET_GPR_U32(ctx, 31, 0x24B704u);
    ctx->pc = 0x24B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B6FCu;
    // 0x24b700: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x24B6FCu, 0x24B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B704u;
label_24b704:
    // 0x24b704: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x24b704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_24b708:
    // 0x24b708: 0x24040013  addiu       $a0, $zero, 0x13
    ctx->pc = 0x24b708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x24b70c: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x24b70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x24b710: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x24b710u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x24b714: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x24b714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
    // 0x24b718: 0x54640005  bnel        $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24B718u;
    {
        const bool branch_taken_0x24b718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x24b718) {
            ctx->pc = 0x24B71Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24B718u;
            // 0x24b71c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24B730u;
            goto label_24b730;
        }
    }
    ctx->pc = 0x24B720u;
    // 0x24b720: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24b720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24b724: 0xc092e60  jal         func_24B980
    ctx->pc = 0x24B724u;
    SET_GPR_U32(ctx, 31, 0x24B72Cu);
    ctx->pc = 0x24B728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24B724u;
    // 0x24b728: 0x26250006  addiu       $a1, $s1, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B980u, 0x24B724u, 0x24B72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24B72Cu;
label_24b72c:
    // 0x24b72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24b72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24b730:
    // 0x24b730: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x24b730u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24b734: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24b734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24b738: 0x3e00008  jr          $ra
    ctx->pc = 0x24B738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B738u;
        // 0x24b73c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B740u;
}
