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

// Function: sub_001876E8
// Address: 0x1876e8 - 0x187798
void sub_001876E8_0x1876e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001876E8_0x1876e8");
#endif

    switch (ctx->pc) {
        case 0x1876e8u: goto label_1876e8;
        case 0x1876ecu: goto label_1876ec;
        case 0x1876f0u: goto label_1876f0;
        case 0x1876f4u: goto label_1876f4;
        case 0x1876f8u: goto label_1876f8;
        case 0x1876fcu: goto label_1876fc;
        case 0x187700u: goto label_187700;
        case 0x187704u: goto label_187704;
        case 0x187708u: goto label_187708;
        case 0x18770cu: goto label_18770c;
        case 0x187710u: goto label_187710;
        case 0x187714u: goto label_187714;
        case 0x187718u: goto label_187718;
        case 0x18771cu: goto label_18771c;
        case 0x187720u: goto label_187720;
        case 0x187724u: goto label_187724;
        case 0x187728u: goto label_187728;
        case 0x18772cu: goto label_18772c;
        case 0x187730u: goto label_187730;
        case 0x187734u: goto label_187734;
        case 0x187738u: goto label_187738;
        case 0x18773cu: goto label_18773c;
        case 0x187740u: goto label_187740;
        case 0x187744u: goto label_187744;
        case 0x187748u: goto label_187748;
        case 0x18774cu: goto label_18774c;
        case 0x187750u: goto label_187750;
        case 0x187754u: goto label_187754;
        case 0x187758u: goto label_187758;
        case 0x18775cu: goto label_18775c;
        case 0x187760u: goto label_187760;
        case 0x187764u: goto label_187764;
        case 0x187768u: goto label_187768;
        case 0x18776cu: goto label_18776c;
        case 0x187770u: goto label_187770;
        case 0x187774u: goto label_187774;
        case 0x187778u: goto label_187778;
        case 0x18777cu: goto label_18777c;
        case 0x187780u: goto label_187780;
        case 0x187784u: goto label_187784;
        case 0x187788u: goto label_187788;
        case 0x18778cu: goto label_18778c;
        case 0x187790u: goto label_187790;
        case 0x187794u: goto label_187794;
        default: break;
    }

    ctx->pc = 0x1876e8u;

label_1876e8:
    // 0x1876e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1876e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1876ec:
    // 0x1876ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1876ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1876f0:
    // 0x1876f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1876f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1876f4:
    // 0x1876f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1876f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1876f8:
    // 0x1876f8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1876f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1876fc:
    // 0x1876fc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1876fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_187700:
    // 0x187700: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x187700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_187704:
    // 0x187704: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x187704u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_187708:
    // 0x187708: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x187708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_18770c:
    // 0x18770c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x18770cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_187710:
    // 0x187710: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_187714:
    if (ctx->pc == 0x187714u) {
        ctx->pc = 0x187714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187710u;
        // 0x187714: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187718u;
        goto label_187718;
    }
    ctx->pc = 0x187710u;
    {
        const bool branch_taken_0x187710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x187714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187710u;
        // 0x187714: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x187710) {
            ctx->pc = 0x187728u;
            goto label_187728;
        }
    }
    ctx->pc = 0x187718u;
label_187718:
    // 0x187718: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_18771c:
    // 0x18771c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18771cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_187720:
    // 0x187720: 0x40f809  jalr        $v0
label_187724:
    if (ctx->pc == 0x187724u) {
        ctx->pc = 0x187728u;
        goto label_187728;
    }
    ctx->pc = 0x187720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x187728u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187720u, 0x187728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187728u;
label_187728:
    // 0x187728: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x187728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_18772c:
    // 0x18772c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_187730:
    if (ctx->pc == 0x187730u) {
        ctx->pc = 0x187730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18772Cu;
        // 0x187730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187734u;
        goto label_187734;
    }
    ctx->pc = 0x18772Cu;
    {
        const bool branch_taken_0x18772c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x187730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18772Cu;
        // 0x187730: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18772c) {
            ctx->pc = 0x187754u;
            goto label_187754;
        }
    }
    ctx->pc = 0x187734u;
label_187734:
    // 0x187734: 0xc0f5240  jal         func_3D4900
label_187738:
    if (ctx->pc == 0x187738u) {
        ctx->pc = 0x187738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187734u;
        // 0x187738: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18773Cu;
        goto label_18773c;
    }
    ctx->pc = 0x187734u;
    SET_GPR_U32(ctx, 31, 0x18773Cu);
    ctx->pc = 0x187738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187734u;
    // 0x187738: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x187734u, 0x18773Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18773Cu;
label_18773c:
    // 0x18773c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x18773cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_187740:
    // 0x187740: 0xc06569c  jal         func_195A70
label_187744:
    if (ctx->pc == 0x187744u) {
        ctx->pc = 0x187744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187740u;
        // 0x187744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187748u;
        goto label_187748;
    }
    ctx->pc = 0x187740u;
    SET_GPR_U32(ctx, 31, 0x187748u);
    ctx->pc = 0x187744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x187740u;
    // 0x187744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x195A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195A70u, 0x187740u, 0x187748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x187748u;
label_187748:
    // 0x187748: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x187748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_18774c:
    // 0x18774c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x18774cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_187750:
    // 0x187750: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x187750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_187754:
    // 0x187754: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x187754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_187758:
    // 0x187758: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x187758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_18775c:
    // 0x18775c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x18775cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_187760:
    // 0x187760: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x187760u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_187764:
    // 0x187764: 0x8c680020  lw          $t0, 0x20($v1)
    ctx->pc = 0x187764u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_187768:
    // 0x187768: 0x100f809  jalr        $t0
label_18776c:
    if (ctx->pc == 0x18776Cu) {
        ctx->pc = 0x18776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187768u;
        // 0x18776c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x187770u;
        goto label_187770;
    }
    ctx->pc = 0x187768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x187770u);
        ctx->pc = 0x18776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187768u;
        // 0x18776c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187768u, 0x187770u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x187770u;
label_187770:
    // 0x187770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x187770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_187774:
    // 0x187774: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187774u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_187778:
    // 0x187778: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x187778u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_18777c:
    // 0x18777c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x18777cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_187780:
    // 0x187780: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x187780u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_187784:
    // 0x187784: 0x3e00008  jr          $ra
label_187788:
    if (ctx->pc == 0x187788u) {
        ctx->pc = 0x187788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187784u;
        // 0x187788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18778Cu;
        goto label_18778c;
    }
    ctx->pc = 0x187784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x187784u;
        // 0x187788: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x187784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18778Cu;
label_18778c:
    // 0x18778c: 0x0  nop
    ctx->pc = 0x18778cu;
    // NOP
label_187790:
    // 0x187790: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x187790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_187794:
    // 0x187794: 0x0  nop
    ctx->pc = 0x187794u;
    // NOP
    ctx->pc = 0x187798u;
}
