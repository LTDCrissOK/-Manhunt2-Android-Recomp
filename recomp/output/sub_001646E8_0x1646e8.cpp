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

// Function: sub_001646E8
// Address: 0x1646e8 - 0x164778
void sub_001646E8_0x1646e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001646E8_0x1646e8");
#endif

    switch (ctx->pc) {
        case 0x164720u: goto label_164720;
        case 0x164738u: goto label_164738;
        case 0x164754u: goto label_164754;
        default: break;
    }

    ctx->pc = 0x1646e8u;

    // 0x1646e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1646e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1646ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1646ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1646f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1646f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1646f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1646f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1646f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1646f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1646fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1646fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x164700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x164704: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x164704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164708: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x164708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x16470c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x16470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164710: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x164710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x164714: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x164714u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164718: 0xc04f750  jal         func_13DD40
    ctx->pc = 0x164718u;
    SET_GPR_U32(ctx, 31, 0x164720u);
    ctx->pc = 0x16471Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164718u;
    // 0x16471c: 0x100a02d  daddu       $s4, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13DD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DD40u, 0x164718u, 0x164720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164720u;
label_164720:
    // 0x164720: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x164720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164724: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x164724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x164728: 0x50a2000b  beql        $a1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x164728u;
    {
        const bool branch_taken_0x164728 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x164728) {
            ctx->pc = 0x16472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164728u;
            // 0x16472c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x164758u;
            goto label_164758;
        }
    }
    ctx->pc = 0x164730u;
    // 0x164730: 0xc04f130  jal         func_13C4C0
    ctx->pc = 0x164730u;
    SET_GPR_U32(ctx, 31, 0x164738u);
    ctx->pc = 0x164734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164730u;
    // 0x164734: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C4C0u, 0x164730u, 0x164738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164738u;
label_164738:
    // 0x164738: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x164738u;
    {
        const bool branch_taken_0x164738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164738u;
        // 0x16473c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164738) {
            ctx->pc = 0x164754u;
            goto label_164754;
        }
    }
    ctx->pc = 0x164740u;
    // 0x164740: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x164740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164744: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x164744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164748: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x164748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16474c: 0xc04d7c6  jal         func_135F18
    ctx->pc = 0x16474Cu;
    SET_GPR_U32(ctx, 31, 0x164754u);
    ctx->pc = 0x164750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16474Cu;
    // 0x164750: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135F18u, 0x16474Cu, 0x164754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x164754u;
label_164754:
    // 0x164754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x164754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_164758:
    // 0x164758: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x164758u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16475c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x16475cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164760: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x164760u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x164764: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x164764u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164768: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x164768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16476c: 0x3e00008  jr          $ra
    ctx->pc = 0x16476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16476Cu;
        // 0x164770: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164774u;
    // 0x164774: 0x0  nop
    ctx->pc = 0x164774u;
    // NOP
    ctx->pc = 0x164778u;
}
