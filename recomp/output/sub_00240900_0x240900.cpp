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

// Function: sub_00240900
// Address: 0x240900 - 0x240968
void sub_00240900_0x240900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240900_0x240900");
#endif

    switch (ctx->pc) {
        case 0x240938u: goto label_240938;
        case 0x24095cu: goto label_24095c;
        default: break;
    }

    ctx->pc = 0x240900u;

    // 0x240900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x240900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x240904: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x240904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x240908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24090c: 0x8cc2010c  lw          $v0, 0x10C($a2)
    ctx->pc = 0x24090cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
    // 0x240910: 0xac400030  sw          $zero, 0x30($v0)
    ctx->pc = 0x240910u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 0));
    // 0x240914: 0x8cc3010c  lw          $v1, 0x10C($a2)
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 268)));
    // 0x240918: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x240918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x24091c: 0x8cc80334  lw          $t0, 0x334($a2)
    ctx->pc = 0x24091cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x240920: 0x8d0401e4  lw          $a0, 0x1E4($t0)
    ctx->pc = 0x240920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 484)));
    // 0x240924: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x240924u;
    {
        const bool branch_taken_0x240924 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240924u;
        // 0x240928: 0x3c050024  lui         $a1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240924) {
            ctx->pc = 0x240954u;
            goto label_240954;
        }
    }
    ctx->pc = 0x24092Cu;
    // 0x24092c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x24092cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x240930: 0x250301ec  addiu       $v1, $t0, 0x1EC
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 492));
    // 0x240934: 0x0  nop
    ctx->pc = 0x240934u;
    // NOP
label_240938:
    // 0x240938: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x240938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x24093c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x24093Cu;
    {
        const bool branch_taken_0x24093c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24093Cu;
        // 0x240940: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24093c) {
            ctx->pc = 0x240954u;
            goto label_240954;
        }
    }
    ctx->pc = 0x240944u;
    // 0x240944: 0x28e20004  slti        $v0, $a3, 0x4
    ctx->pc = 0x240944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x240948: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x240948u;
    {
        const bool branch_taken_0x240948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24094Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240948u;
        // 0x24094c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240948) {
            ctx->pc = 0x240938u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_240938;
        }
    }
    ctx->pc = 0x240950u;
    // 0x240950: 0x8d0401e8  lw          $a0, 0x1E8($t0)
    ctx->pc = 0x240950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 488)));
label_240954:
    // 0x240954: 0xc073fde  jal         func_1CFF78
    ctx->pc = 0x240954u;
    SET_GPR_U32(ctx, 31, 0x24095Cu);
    ctx->pc = 0x240958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240954u;
    // 0x240958: 0x24a56058  addiu       $a1, $a1, 0x6058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x240954u, 0x24095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24095Cu;
label_24095c:
    // 0x24095c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24095cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x240960: 0x3e00008  jr          $ra
    ctx->pc = 0x240960u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x240964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240960u;
        // 0x240964: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x240960u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x240968u;
}
