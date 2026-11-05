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

// Function: sub_00324848
// Address: 0x324848 - 0x324900
void sub_00324848_0x324848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324848_0x324848");
#endif

    switch (ctx->pc) {
        case 0x324898u: goto label_324898;
        case 0x3248acu: goto label_3248ac;
        case 0x3248dcu: goto label_3248dc;
        default: break;
    }

    ctx->pc = 0x324848u;

    // 0x324848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x324848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x32484c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x32484cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324850: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x324850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x324854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x324854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x324858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x324858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32485c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x32485cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x324860: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324860u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324864: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x324864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x324868: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x324868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x32486c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x32486cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324870: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x324870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x324874: 0x8e250038  lw          $a1, 0x38($s1)
    ctx->pc = 0x324874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x324878: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x324878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32487c: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x32487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x324880: 0xa2180a  movz        $v1, $a1, $v0
    ctx->pc = 0x324880u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x324884: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x324884u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324888: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x324888u;
    {
        const bool branch_taken_0x324888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x324888u;
        // 0x32488c: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x324888) {
            ctx->pc = 0x3248C8u;
            goto label_3248c8;
        }
    }
    ctx->pc = 0x324890u;
    // 0x324890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x324890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324894: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x324894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_324898:
    // 0x324898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x324898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32489c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x32489cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3248a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248a4: 0xc0c91b4  jal         func_3246D0
    ctx->pc = 0x3248A4u;
    SET_GPR_U32(ctx, 31, 0x3248ACu);
    ctx->pc = 0x3248A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248A4u;
    // 0x3248a8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246D0u, 0x3248A4u, 0x3248ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248ACu;
label_3248ac:
    // 0x3248ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3248ACu;
    {
        const bool branch_taken_0x3248ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3248B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248ACu;
        // 0x3248b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248ac) {
            ctx->pc = 0x3248DCu;
            goto label_3248dc;
        }
    }
    ctx->pc = 0x3248B4u;
    // 0x3248b4: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x3248b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3248b8: 0x5600fff7  bnel        $s0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3248B8u;
    {
        const bool branch_taken_0x3248b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3248b8) {
            ctx->pc = 0x3248BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3248B8u;
            // 0x3248bc: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x324898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_324898;
        }
    }
    ctx->pc = 0x3248C0u;
    // 0x3248c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3248C0u;
    {
        const bool branch_taken_0x3248c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3248C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248C0u;
        // 0x3248c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3248c0) {
            ctx->pc = 0x3248DCu;
            goto label_3248dc;
        }
    }
    ctx->pc = 0x3248C8u;
label_3248c8:
    // 0x3248c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3248c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248cc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3248ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248d0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3248d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3248d4: 0xc0c91b4  jal         func_3246D0
    ctx->pc = 0x3248D4u;
    SET_GPR_U32(ctx, 31, 0x3248DCu);
    ctx->pc = 0x3248D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3248D4u;
    // 0x3248d8: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3246D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3246D0u, 0x3248D4u, 0x3248DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3248DCu;
label_3248dc:
    // 0x3248dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3248dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3248e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3248e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3248e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3248e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3248e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3248e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3248ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3248ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3248f0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x3248f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3248f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3248F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3248F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3248F4u;
        // 0x3248f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3248F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3248FCu;
    // 0x3248fc: 0x0  nop
    ctx->pc = 0x3248fcu;
    // NOP
    ctx->pc = 0x324900u;
}
