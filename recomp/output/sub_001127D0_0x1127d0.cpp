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

// Function: sub_001127D0
// Address: 0x1127d0 - 0x1128c0
void sub_001127D0_0x1127d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001127D0_0x1127d0");
#endif

    switch (ctx->pc) {
        case 0x112810u: goto label_112810;
        case 0x112818u: goto label_112818;
        case 0x112824u: goto label_112824;
        case 0x112830u: goto label_112830;
        case 0x112844u: goto label_112844;
        case 0x11284cu: goto label_11284c;
        case 0x112858u: goto label_112858;
        case 0x112864u: goto label_112864;
        case 0x112874u: goto label_112874;
        case 0x112880u: goto label_112880;
        default: break;
    }

    ctx->pc = 0x1127d0u;

    // 0x1127d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1127d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1127d4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1127d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1127d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1127d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1127dc: 0x30b500ff  andi        $s5, $a1, 0xFF
    ctx->pc = 0x1127dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1127e0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1127e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1127e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1127e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1127e8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1127e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1127ec: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1127ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x1127f0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1127f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1127f4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1127f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1127f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1127f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1127fc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1127fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112800: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x112800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x112804: 0x8c530024  lw          $s3, 0x24($v0)
    ctx->pc = 0x112804u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x112808: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x112808u;
    {
        const bool branch_taken_0x112808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112808u;
        // 0x11280c: 0x3c140049  lui         $s4, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112808) {
            ctx->pc = 0x112858u;
            goto label_112858;
        }
    }
    ctx->pc = 0x112810u;
label_112810:
    // 0x112810: 0xc04244c  jal         func_109130
    ctx->pc = 0x112810u;
    SET_GPR_U32(ctx, 31, 0x112818u);
    ctx->pc = 0x112814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112810u;
    // 0x112814: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x112810u, 0x112818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112818u;
label_112818:
    // 0x112818: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x112818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11281c: 0xc042442  jal         func_109108
    ctx->pc = 0x11281Cu;
    SET_GPR_U32(ctx, 31, 0x112824u);
    ctx->pc = 0x112820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11281Cu;
    // 0x112820: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109108u, 0x11281Cu, 0x112824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112824u;
label_112824:
    // 0x112824: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x112824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112828: 0xc04244e  jal         func_109138
    ctx->pc = 0x112828u;
    SET_GPR_U32(ctx, 31, 0x112830u);
    ctx->pc = 0x11282Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112828u;
    // 0x11282c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109138u, 0x112828u, 0x112830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112830u;
label_112830:
    // 0x112830: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x112830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112834: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x112834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112838: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x112838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11283c: 0xc043b9e  jal         func_10EE78
    ctx->pc = 0x11283Cu;
    SET_GPR_U32(ctx, 31, 0x112844u);
    ctx->pc = 0x112840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11283Cu;
    // 0x112840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EE78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EE78u, 0x11283Cu, 0x112844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112844u;
label_112844:
    // 0x112844: 0xc042426  jal         func_109098
    ctx->pc = 0x112844u;
    SET_GPR_U32(ctx, 31, 0x11284Cu);
    ctx->pc = 0x112848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112844u;
    // 0x112848: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109098u, 0x112844u, 0x11284Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11284Cu;
label_11284c:
    // 0x11284c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x112850: 0xc041eca  jal         func_107B28
    ctx->pc = 0x112850u;
    SET_GPR_U32(ctx, 31, 0x112858u);
    ctx->pc = 0x112854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112850u;
    // 0x112854: 0x26848758  addiu       $a0, $s4, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107B28u, 0x112850u, 0x112858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112858u;
label_112858:
    // 0x112858: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x112858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11285c: 0xc045632  jal         func_1158C8
    ctx->pc = 0x11285Cu;
    SET_GPR_U32(ctx, 31, 0x112864u);
    ctx->pc = 0x112860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11285Cu;
    // 0x112860: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1158C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1158C8u, 0x11285Cu, 0x112864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112864u;
label_112864:
    // 0x112864: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x112864u;
    {
        const bool branch_taken_0x112864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112864) {
            ctx->pc = 0x112810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112810;
        }
    }
    ctx->pc = 0x11286Cu;
    // 0x11286c: 0xc0455fe  jal         func_1157F8
    ctx->pc = 0x11286Cu;
    SET_GPR_U32(ctx, 31, 0x112874u);
    ctx->pc = 0x112870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11286Cu;
    // 0x112870: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1157F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1157F8u, 0x11286Cu, 0x112874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112874u;
label_112874:
    // 0x112874: 0x26848758  addiu       $a0, $s4, -0x78A8
    ctx->pc = 0x112874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294936408));
    // 0x112878: 0xc041ef2  jal         func_107BC8
    ctx->pc = 0x112878u;
    SET_GPR_U32(ctx, 31, 0x112880u);
    ctx->pc = 0x11287Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112878u;
    // 0x11287c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107BC8u, 0x112878u, 0x112880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x112880u;
label_112880:
    // 0x112880: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x112880u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x112884: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x112884u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x112888: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11288c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x11288cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x112890: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x112890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
    // 0x112894: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x112894u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x112898: 0x924300a4  lbu         $v1, 0xA4($s2)
    ctx->pc = 0x112898u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 164)));
    // 0x11289c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x11289cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1128a0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1128a4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1128a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1128a8: 0xa24300a4  sb          $v1, 0xA4($s2)
    ctx->pc = 0x1128a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 164), (uint8_t)GPR_U32(ctx, 3));
    // 0x1128ac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1128acu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1128b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1128b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1128b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1128B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1128B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128B4u;
        // 0x1128b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1128BCu;
    // 0x1128bc: 0x0  nop
    ctx->pc = 0x1128bcu;
    // NOP
    ctx->pc = 0x1128c0u;
}
