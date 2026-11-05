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

// Function: sub_00248408
// Address: 0x248408 - 0x248480
void sub_00248408_0x248408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00248408_0x248408");
#endif

    switch (ctx->pc) {
        case 0x248408u: goto label_248408;
        case 0x24840cu: goto label_24840c;
        case 0x248410u: goto label_248410;
        case 0x248414u: goto label_248414;
        case 0x248418u: goto label_248418;
        case 0x24841cu: goto label_24841c;
        case 0x248420u: goto label_248420;
        case 0x248424u: goto label_248424;
        case 0x248428u: goto label_248428;
        case 0x24842cu: goto label_24842c;
        case 0x248430u: goto label_248430;
        case 0x248434u: goto label_248434;
        case 0x248438u: goto label_248438;
        case 0x24843cu: goto label_24843c;
        case 0x248440u: goto label_248440;
        case 0x248444u: goto label_248444;
        case 0x248448u: goto label_248448;
        case 0x24844cu: goto label_24844c;
        case 0x248450u: goto label_248450;
        case 0x248454u: goto label_248454;
        case 0x248458u: goto label_248458;
        case 0x24845cu: goto label_24845c;
        case 0x248460u: goto label_248460;
        case 0x248464u: goto label_248464;
        case 0x248468u: goto label_248468;
        case 0x24846cu: goto label_24846c;
        case 0x248470u: goto label_248470;
        case 0x248474u: goto label_248474;
        case 0x248478u: goto label_248478;
        case 0x24847cu: goto label_24847c;
        default: break;
    }

    ctx->pc = 0x248408u;

label_248408:
    // 0x248408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x248408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_24840c:
    // 0x24840c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_248410:
    // 0x248410: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x248410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_248414:
    // 0x248414: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x248414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_248418:
    // 0x248418: 0x8e070334  lw          $a3, 0x334($s0)
    ctx->pc = 0x248418u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
label_24841c:
    // 0x24841c: 0x8ce401e4  lw          $a0, 0x1E4($a3)
    ctx->pc = 0x24841cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 484)));
label_248420:
    // 0x248420: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_248424:
    if (ctx->pc == 0x248424u) {
        ctx->pc = 0x248424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248420u;
        // 0x248424: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248428u;
        goto label_248428;
    }
    ctx->pc = 0x248420u;
    {
        const bool branch_taken_0x248420 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248420u;
        // 0x248424: 0x3c050025  lui         $a1, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)37 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248420) {
            ctx->pc = 0x24844Cu;
            goto label_24844c;
        }
    }
    ctx->pc = 0x248428u;
label_248428:
    // 0x248428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24842c:
    // 0x24842c: 0x24e301ec  addiu       $v1, $a3, 0x1EC
    ctx->pc = 0x24842cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 492));
label_248430:
    // 0x248430: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x248430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_248434:
    // 0x248434: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_248438:
    if (ctx->pc == 0x248438u) {
        ctx->pc = 0x248438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248434u;
        // 0x248438: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24843Cu;
        goto label_24843c;
    }
    ctx->pc = 0x248434u;
    {
        const bool branch_taken_0x248434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x248438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248434u;
        // 0x248438: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248434) {
            ctx->pc = 0x24844Cu;
            goto label_24844c;
        }
    }
    ctx->pc = 0x24843Cu;
label_24843c:
    // 0x24843c: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x24843cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_248440:
    // 0x248440: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_248444:
    if (ctx->pc == 0x248444u) {
        ctx->pc = 0x248444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248440u;
        // 0x248444: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248448u;
        goto label_248448;
    }
    ctx->pc = 0x248440u;
    {
        const bool branch_taken_0x248440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x248444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248440u;
        // 0x248444: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248440) {
            ctx->pc = 0x248430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_248430;
        }
    }
    ctx->pc = 0x248448u;
label_248448:
    // 0x248448: 0x8ce401e8  lw          $a0, 0x1E8($a3)
    ctx->pc = 0x248448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 488)));
label_24844c:
    // 0x24844c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x24844cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248450:
    // 0x248450: 0xc073fde  jal         func_1CFF78
label_248454:
    if (ctx->pc == 0x248454u) {
        ctx->pc = 0x248454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248450u;
        // 0x248454: 0x24a58088  addiu       $a1, $a1, -0x7F78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x248458u;
        goto label_248458;
    }
    ctx->pc = 0x248450u;
    SET_GPR_U32(ctx, 31, 0x248458u);
    ctx->pc = 0x248454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x248450u;
    // 0x248454: 0x24a58088  addiu       $a1, $a1, -0x7F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFF78u, 0x248450u, 0x248458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x248458u;
label_248458:
    // 0x248458: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x248458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_24845c:
    // 0x24845c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x24845cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_248460:
    // 0x248460: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x248460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_248464:
    // 0x248464: 0x40f809  jalr        $v0
label_248468:
    if (ctx->pc == 0x248468u) {
        ctx->pc = 0x24846Cu;
        goto label_24846c;
    }
    ctx->pc = 0x248464u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24846Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248464u, 0x24846Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24846Cu;
label_24846c:
    // 0x24846c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24846cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_248470:
    // 0x248470: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x248470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_248474:
    // 0x248474: 0x3e00008  jr          $ra
label_248478:
    if (ctx->pc == 0x248478u) {
        ctx->pc = 0x248478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248474u;
        // 0x248478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24847Cu;
        goto label_24847c;
    }
    ctx->pc = 0x248474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x248478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x248474u;
        // 0x248478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x248474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24847Cu;
label_24847c:
    // 0x24847c: 0x0  nop
    ctx->pc = 0x24847cu;
    // NOP
    ctx->pc = 0x248480u;
}
