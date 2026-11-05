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

// Function: sub_001097E8
// Address: 0x1097e8 - 0x1098c8
void sub_001097E8_0x1097e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001097E8_0x1097e8");
#endif

    switch (ctx->pc) {
        case 0x10981cu: goto label_10981c;
        case 0x109850u: goto label_109850;
        case 0x109860u: goto label_109860;
        case 0x109898u: goto label_109898;
        default: break;
    }

    ctx->pc = 0x1097e8u;

    // 0x1097e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1097e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1097ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1097ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1097f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1097f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1097f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1097f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1097f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1097f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1097fc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1097fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109800: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x109800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x109804: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x109804u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109808: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x109808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10980c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x10980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x109810: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x109810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x109814: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109814u;
    SET_GPR_U32(ctx, 31, 0x10981Cu);
    ctx->pc = 0x109818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109814u;
    // 0x109818: 0x24150030  addiu       $s5, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109814u, 0x10981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10981Cu;
label_10981c:
    // 0x10981c: 0x10550020  beq         $v0, $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x10981Cu;
    {
        const bool branch_taken_0x10981c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x109820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10981Cu;
        // 0x109820: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10981c) {
            ctx->pc = 0x1098A0u;
            goto label_1098a0;
        }
    }
    ctx->pc = 0x109824u;
    // 0x109824: 0x2611000c  addiu       $s1, $s0, 0xC
    ctx->pc = 0x109824u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x109828: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10982c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109830: 0x8c72001c  lw          $s2, 0x1C($v1)
    ctx->pc = 0x109830u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109834: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x109834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
    // 0x109838: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x109838u;
    {
        const bool branch_taken_0x109838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109838u;
        // 0x10983c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109838) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x109840u;
    // 0x109840: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x109840u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x109844: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x109844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109848: 0xc04786e  jal         func_11E1B8
    ctx->pc = 0x109848u;
    SET_GPR_U32(ctx, 31, 0x109850u);
    ctx->pc = 0x10984Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109848u;
    // 0x10984c: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E1B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E1B8u, 0x109848u, 0x109850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109850u;
label_109850:
    // 0x109850: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x109850u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109854: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x109854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109858: 0xc043366  jal         func_10CD98
    ctx->pc = 0x109858u;
    SET_GPR_U32(ctx, 31, 0x109860u);
    ctx->pc = 0x10985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109858u;
    // 0x10985c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x109858u, 0x109860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109860u;
label_109860:
    // 0x109860: 0x1055000f  beq         $v0, $s5, . + 4 + (0xF << 2)
    ctx->pc = 0x109860u;
    {
        const bool branch_taken_0x109860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x109864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109860u;
        // 0x109864: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109860) {
            ctx->pc = 0x1098A0u;
            goto label_1098a0;
        }
    }
    ctx->pc = 0x109868u;
    // 0x109868: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x109868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x10986c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10986cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x109870: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x109870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x109874: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x109874u;
    {
        const bool branch_taken_0x109874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x109878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109874u;
        // 0x109878: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109874) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x10987Cu;
    // 0x10987c: 0x8c6200d0  lw          $v0, 0xD0($v1)
    ctx->pc = 0x10987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 208)));
    // 0x109880: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x109880u;
    {
        const bool branch_taken_0x109880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x109884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109880u;
        // 0x109884: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109880) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x109888u;
    // 0x109888: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x109888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x10988c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x10988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109890: 0xc0440aa  jal         func_1102A8
    ctx->pc = 0x109890u;
    SET_GPR_U32(ctx, 31, 0x109898u);
    ctx->pc = 0x109894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109890u;
    // 0x109894: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1102A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1102A8u, 0x109890u, 0x109898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109898u;
label_109898:
    // 0x109898: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x109898u;
    {
        const bool branch_taken_0x109898 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109898u;
        // 0x10989c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109898) {
            ctx->pc = 0x1098A4u;
            goto label_1098a4;
        }
    }
    ctx->pc = 0x1098A0u;
label_1098a0:
    // 0x1098a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1098a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1098a4:
    // 0x1098a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1098a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1098a8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1098a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1098ac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1098acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1098b0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1098b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1098b4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1098b4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1098b8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1098b8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1098bc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1098bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1098c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1098C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1098C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1098C0u;
        // 0x1098c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1098C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1098C8u;
}
