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

// Function: sub_00130710
// Address: 0x130710 - 0x130810
void sub_00130710_0x130710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00130710_0x130710");
#endif

    switch (ctx->pc) {
        case 0x130754u: goto label_130754;
        case 0x130760u: goto label_130760;
        case 0x13076cu: goto label_13076c;
        case 0x130784u: goto label_130784;
        case 0x1307bcu: goto label_1307bc;
        case 0x1307d0u: goto label_1307d0;
        case 0x1307e0u: goto label_1307e0;
        case 0x1307e8u: goto label_1307e8;
        default: break;
    }

    ctx->pc = 0x130710u;

    // 0x130710: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130714: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x130714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x130718: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x130718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x13071c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13071cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x130720: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x130720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130724: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x130724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x130728: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x130728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x13072c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x13072cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x130730: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x130730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130734: 0x8c430258  lw          $v1, 0x258($v0)
    ctx->pc = 0x130734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 600)));
    // 0x130738: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x130738u;
    {
        const bool branch_taken_0x130738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130738u;
        // 0x13073c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130738) {
            ctx->pc = 0x130748u;
            goto label_130748;
        }
    }
    ctx->pc = 0x130740u;
    // 0x130740: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x130740u;
    {
        const bool branch_taken_0x130740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x130744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130740u;
        // 0x130744: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130740) {
            ctx->pc = 0x1307F0u;
            goto label_1307f0;
        }
    }
    ctx->pc = 0x130748u;
label_130748:
    // 0x130748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13074c: 0xc046044  jal         func_118110
    ctx->pc = 0x13074Cu;
    SET_GPR_U32(ctx, 31, 0x130754u);
    ctx->pc = 0x130750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13074Cu;
    // 0x130750: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x118110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x118110u, 0x13074Cu, 0x130754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130754u;
label_130754:
    // 0x130754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x130754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130758: 0xc046272  jal         func_1189C8
    ctx->pc = 0x130758u;
    SET_GPR_U32(ctx, 31, 0x130760u);
    ctx->pc = 0x13075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130758u;
    // 0x13075c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1189C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1189C8u, 0x130758u, 0x130760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130760u;
label_130760:
    // 0x130760: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x130760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x130764: 0xc043920  jal         func_10E480
    ctx->pc = 0x130764u;
    SET_GPR_U32(ctx, 31, 0x13076Cu);
    ctx->pc = 0x130768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x130764u;
    // 0x130768: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E480u, 0x130764u, 0x13076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13076Cu;
label_13076c:
    // 0x13076c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13076cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130770: 0x1220001f  beqz        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x130770u;
    {
        const bool branch_taken_0x130770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x130774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130770u;
        // 0x130774: 0x2e820001  sltiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130770) {
            ctx->pc = 0x1307F0u;
            goto label_1307f0;
        }
    }
    ctx->pc = 0x130778u;
    // 0x130778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x130778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13077c: 0xc04c5ca  jal         func_131728
    ctx->pc = 0x13077Cu;
    SET_GPR_U32(ctx, 31, 0x130784u);
    ctx->pc = 0x130780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13077Cu;
    // 0x130780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131728u, 0x13077Cu, 0x130784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x130784u;
label_130784:
    // 0x130784: 0x1214000f  beq         $s0, $s4, . + 4 + (0xF << 2)
    ctx->pc = 0x130784u;
    {
        const bool branch_taken_0x130784 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x130788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130784u;
        // 0x130788: 0x2a020002  slti        $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x130784) {
            ctx->pc = 0x1307C4u;
            goto label_1307c4;
        }
    }
    ctx->pc = 0x13078Cu;
    // 0x13078c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13078Cu;
    {
        const bool branch_taken_0x13078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x130790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13078Cu;
        // 0x130790: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13078c) {
            ctx->pc = 0x1307A4u;
            goto label_1307a4;
        }
    }
    ctx->pc = 0x130794u;
    // 0x130794: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x130794u;
    {
        const bool branch_taken_0x130794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x130798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130794u;
        // 0x130798: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x130794) {
            ctx->pc = 0x1307B4u;
            goto label_1307b4;
        }
    }
    ctx->pc = 0x13079Cu;
    // 0x13079c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x13079Cu;
    {
        const bool branch_taken_0x13079c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13079c) {
            ctx->pc = 0x1307E0u;
            goto label_1307e0;
        }
    }
    ctx->pc = 0x1307A4u;
label_1307a4:
    // 0x1307a4: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1307A4u;
    {
        const bool branch_taken_0x1307a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1307A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1307A4u;
        // 0x1307a8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1307a4) {
            ctx->pc = 0x1307D8u;
            goto label_1307d8;
        }
    }
    ctx->pc = 0x1307ACu;
    // 0x1307ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1307ACu;
    {
        const bool branch_taken_0x1307ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307ac) {
            ctx->pc = 0x1307E0u;
            goto label_1307e0;
        }
    }
    ctx->pc = 0x1307B4u;
label_1307b4:
    // 0x1307b4: 0xc094fce  jal         func_253F38
    ctx->pc = 0x1307B4u;
    SET_GPR_U32(ctx, 31, 0x1307BCu);
    ctx->pc = 0x1307B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307B4u;
    // 0x1307b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253F38u, 0x1307B4u, 0x1307BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307BCu;
label_1307bc:
    // 0x1307bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1307BCu;
    {
        const bool branch_taken_0x1307bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307bc) {
            ctx->pc = 0x1307E0u;
            goto label_1307e0;
        }
    }
    ctx->pc = 0x1307C4u;
label_1307c4:
    // 0x1307c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1307c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1307c8: 0xc094fea  jal         func_253FA8
    ctx->pc = 0x1307C8u;
    SET_GPR_U32(ctx, 31, 0x1307D0u);
    ctx->pc = 0x1307CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307C8u;
    // 0x1307cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253FA8u, 0x1307C8u, 0x1307D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307D0u;
label_1307d0:
    // 0x1307d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1307D0u;
    {
        const bool branch_taken_0x1307d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1307d0) {
            ctx->pc = 0x1307E0u;
            goto label_1307e0;
        }
    }
    ctx->pc = 0x1307D8u;
label_1307d8:
    // 0x1307d8: 0xc095006  jal         func_254018
    ctx->pc = 0x1307D8u;
    SET_GPR_U32(ctx, 31, 0x1307E0u);
    ctx->pc = 0x1307DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307D8u;
    // 0x1307dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254018u, 0x1307D8u, 0x1307E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307E0u;
label_1307e0:
    // 0x1307e0: 0xc095216  jal         func_254858
    ctx->pc = 0x1307E0u;
    SET_GPR_U32(ctx, 31, 0x1307E8u);
    ctx->pc = 0x1307E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1307E0u;
    // 0x1307e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254858u, 0x1307E0u, 0x1307E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1307E8u;
label_1307e8:
    // 0x1307e8: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x1307e8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x1307ec: 0x2e820001  sltiu       $v0, $s4, 0x1
    ctx->pc = 0x1307ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1307f0:
    // 0x1307f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1307f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1307f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1307f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1307f8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1307f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1307fc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1307fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x130800: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x130800u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130804: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x130804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x130808: 0x3e00008  jr          $ra
    ctx->pc = 0x130808u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x130808u;
        // 0x13080c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x130808u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x130810u;
}
