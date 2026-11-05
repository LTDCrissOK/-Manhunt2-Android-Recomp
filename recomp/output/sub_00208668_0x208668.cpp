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

// Function: sub_00208668
// Address: 0x208668 - 0x208708
void sub_00208668_0x208668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00208668_0x208668");
#endif

    switch (ctx->pc) {
        case 0x2086a0u: goto label_2086a0;
        case 0x2086b0u: goto label_2086b0;
        case 0x2086c4u: goto label_2086c4;
        default: break;
    }

    ctx->pc = 0x208668u;

    // 0x208668: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x208668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20866c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20866cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x208670: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x208670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x208674: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x208674u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208678: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x208678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20867c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20867cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x208680: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x208680u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x208684: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x208684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208688: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x208688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x20868c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x20868cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x208690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x208690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x208694: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x208694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x208698: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x208698u;
    SET_GPR_U32(ctx, 31, 0x2086A0u);
    ctx->pc = 0x20869Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208698u;
    // 0x20869c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x208698u, 0x2086A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086A0u;
label_2086a0:
    // 0x2086a0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2086a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086a4: 0x8e42175c  lw          $v0, 0x175C($s2)
    ctx->pc = 0x2086a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5980)));
    // 0x2086a8: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2086A8u;
    {
        const bool branch_taken_0x2086a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2086ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086A8u;
        // 0x2086ac: 0x2651001c  addiu       $s1, $s2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086a8) {
            ctx->pc = 0x2086DCu;
            goto label_2086dc;
        }
    }
    ctx->pc = 0x2086B0u;
label_2086b0:
    // 0x2086b0: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2086b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2086b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2086b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086b8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2086b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086bc: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x2086BCu;
    SET_GPR_U32(ctx, 31, 0x2086C4u);
    ctx->pc = 0x2086C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2086BCu;
    // 0x2086c0: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x2086BCu, 0x2086C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2086C4u;
label_2086c4:
    // 0x2086c4: 0x263100f8  addiu       $s1, $s1, 0xF8
    ctx->pc = 0x2086c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 248));
    // 0x2086c8: 0x8e44175c  lw          $a0, 0x175C($s2)
    ctx->pc = 0x2086c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5980)));
    // 0x2086cc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x2086ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2086d0: 0x284202a  slt         $a0, $s4, $a0
    ctx->pc = 0x2086d0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2086d4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x2086D4u;
    {
        const bool branch_taken_0x2086d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2086D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086D4u;
        // 0x2086d8: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2086d4) {
            ctx->pc = 0x2086B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2086b0;
        }
    }
    ctx->pc = 0x2086DCu;
label_2086dc:
    // 0x2086dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2086dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2086e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2086e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2086e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2086e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2086e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2086e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2086ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2086ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2086f0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2086f0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2086f4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2086f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2086f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2086f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2086fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2086FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x208700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2086FCu;
        // 0x208700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2086FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x208704u;
    // 0x208704: 0x0  nop
    ctx->pc = 0x208704u;
    // NOP
    ctx->pc = 0x208708u;
}
