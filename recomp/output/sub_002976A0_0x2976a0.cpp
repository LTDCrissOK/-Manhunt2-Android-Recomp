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

// Function: sub_002976A0
// Address: 0x2976a0 - 0x297c58
void sub_002976A0_0x2976a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002976A0_0x2976a0");
#endif

    switch (ctx->pc) {
        case 0x2976e0u: goto label_2976e0;
        case 0x29772cu: goto label_29772c;
        case 0x297740u: goto label_297740;
        case 0x2977acu: goto label_2977ac;
        case 0x2977bcu: goto label_2977bc;
        case 0x2977c4u: goto label_2977c4;
        case 0x2977f4u: goto label_2977f4;
        case 0x29780cu: goto label_29780c;
        case 0x297820u: goto label_297820;
        case 0x297834u: goto label_297834;
        case 0x297848u: goto label_297848;
        case 0x29785cu: goto label_29785c;
        case 0x2978a4u: goto label_2978a4;
        case 0x2978b8u: goto label_2978b8;
        case 0x2978d4u: goto label_2978d4;
        case 0x2978dcu: goto label_2978dc;
        case 0x2978e8u: goto label_2978e8;
        case 0x2978f0u: goto label_2978f0;
        case 0x297900u: goto label_297900;
        case 0x297918u: goto label_297918;
        case 0x29792cu: goto label_29792c;
        case 0x297938u: goto label_297938;
        case 0x297940u: goto label_297940;
        case 0x297964u: goto label_297964;
        case 0x297978u: goto label_297978;
        case 0x29798cu: goto label_29798c;
        case 0x297998u: goto label_297998;
        case 0x2979a0u: goto label_2979a0;
        case 0x2979a8u: goto label_2979a8;
        case 0x2979bcu: goto label_2979bc;
        case 0x2979e0u: goto label_2979e0;
        case 0x2979fcu: goto label_2979fc;
        case 0x297a14u: goto label_297a14;
        case 0x297a30u: goto label_297a30;
        case 0x297a38u: goto label_297a38;
        case 0x297a4cu: goto label_297a4c;
        case 0x297a5cu: goto label_297a5c;
        case 0x297a68u: goto label_297a68;
        case 0x297a70u: goto label_297a70;
        case 0x297a78u: goto label_297a78;
        case 0x297a8cu: goto label_297a8c;
        case 0x297aa0u: goto label_297aa0;
        case 0x297aa8u: goto label_297aa8;
        case 0x297ab4u: goto label_297ab4;
        case 0x297ac8u: goto label_297ac8;
        case 0x297ae0u: goto label_297ae0;
        case 0x297b00u: goto label_297b00;
        case 0x297b14u: goto label_297b14;
        case 0x297b24u: goto label_297b24;
        case 0x297b3cu: goto label_297b3c;
        case 0x297b50u: goto label_297b50;
        case 0x297b5cu: goto label_297b5c;
        case 0x297b7cu: goto label_297b7c;
        case 0x297ba0u: goto label_297ba0;
        case 0x297bc8u: goto label_297bc8;
        case 0x297bd0u: goto label_297bd0;
        case 0x297bdcu: goto label_297bdc;
        case 0x297bf0u: goto label_297bf0;
        case 0x297c04u: goto label_297c04;
        case 0x297c0cu: goto label_297c0c;
        case 0x297c14u: goto label_297c14;
        case 0x297c24u: goto label_297c24;
        case 0x297c2cu: goto label_297c2c;
        default: break;
    }

    ctx->pc = 0x2976a0u;

    // 0x2976a0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2976a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2976a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2976a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2976a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2976a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976ac: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2976acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2976b0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2976b0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976b4: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2976b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2976b8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2976b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2976bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2976bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2976c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2976c4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2976c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2976c8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2976c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2976cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2976ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2976d0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2976d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x2976d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2976d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2976d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2976D8u;
    SET_GPR_U32(ctx, 31, 0x2976E0u);
    ctx->pc = 0x2976DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2976D8u;
    // 0x2976dc: 0x24a5bb60  addiu       $a1, $a1, -0x44A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2976D8u, 0x2976E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2976E0u;
label_2976e0:
    // 0x2976e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2976e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2976e4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2976E4u;
    {
        const bool branch_taken_0x2976e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2976E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976E4u;
        // 0x2976e8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976e4) {
            ctx->pc = 0x2977FCu;
            goto label_2977fc;
        }
    }
    ctx->pc = 0x2976ECu;
    // 0x2976ec: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2976ecu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2976f0: 0x24532508  addiu       $s3, $v0, 0x2508
    ctx->pc = 0x2976f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x2976f4: 0x8e640094  lw          $a0, 0x94($s3)
    ctx->pc = 0x2976f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 148)));
    // 0x2976f8: 0x480001d  bltz        $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x2976F8u;
    {
        const bool branch_taken_0x2976f8 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x2976FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2976F8u;
        // 0x2976fc: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2976f8) {
            ctx->pc = 0x297770u;
            goto label_297770;
        }
    }
    ctx->pc = 0x297700u;
    // 0x297700: 0x8e750090  lw          $s5, 0x90($s3)
    ctx->pc = 0x297700u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x297704: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x297704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x297708: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x297708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x29770c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x29770cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297710: 0x2b08018  mult        $s0, $s5, $s0
    ctx->pc = 0x297710u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x297714: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x297714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x297718: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29771c: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x29771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x297720: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x297720u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x297724: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x297724u;
    SET_GPR_U32(ctx, 31, 0x29772Cu);
    ctx->pc = 0x297728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297724u;
    // 0x297728: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x297724u, 0x29772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29772Cu;
label_29772c:
    // 0x29772c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29772cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297730: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x297730u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x297734: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297738: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x297738u;
    SET_GPR_U32(ctx, 31, 0x297740u);
    ctx->pc = 0x29773Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297738u;
    // 0x29773c: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x297738u, 0x297740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297740u;
label_297740:
    // 0x297740: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x297740u;
    {
        const bool branch_taken_0x297740 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x297744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297740u;
        // 0x297744: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x297740) {
            ctx->pc = 0x297750u;
            goto label_297750;
        }
    }
    ctx->pc = 0x297748u;
    // 0x297748: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x297748u;
    {
        const bool branch_taken_0x297748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297748u;
        // 0x29774c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297748) {
            ctx->pc = 0x29779Cu;
            goto label_29779c;
        }
    }
    ctx->pc = 0x297750u;
label_297750:
    // 0x297750: 0x16550004  bne         $s2, $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x297750u;
    {
        const bool branch_taken_0x297750 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 21));
        ctx->pc = 0x297754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297750u;
        // 0x297754: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297750) {
            ctx->pc = 0x297764u;
            goto label_297764;
        }
    }
    ctx->pc = 0x297758u;
    // 0x297758: 0x926258ec  lbu         $v0, 0x58EC($s3)
    ctx->pc = 0x297758u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22764)));
    // 0x29775c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29775Cu;
    {
        const bool branch_taken_0x29775c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29775Cu;
        // 0x297760: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29775c) {
            ctx->pc = 0x297798u;
            goto label_297798;
        }
    }
    ctx->pc = 0x297764u;
label_297764:
    // 0x297764: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x297764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297768: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x297768u;
    {
        const bool branch_taken_0x297768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29776Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297768u;
        // 0x29776c: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297768) {
            ctx->pc = 0x297798u;
            goto label_297798;
        }
    }
    ctx->pc = 0x297770u;
label_297770:
    // 0x297770: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x297770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x297774: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297774u;
    {
        const bool branch_taken_0x297774 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x297778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297774u;
        // 0x297778: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297774) {
            ctx->pc = 0x297784u;
            goto label_297784;
        }
    }
    ctx->pc = 0x29777Cu;
    // 0x29777c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29777Cu;
    {
        const bool branch_taken_0x29777c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29777Cu;
        // 0x297780: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29777c) {
            ctx->pc = 0x29779Cu;
            goto label_29779c;
        }
    }
    ctx->pc = 0x297784u;
label_297784:
    // 0x297784: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x297784u;
    {
        const bool branch_taken_0x297784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x297784) {
            ctx->pc = 0x297788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x297784u;
            // 0x297788: 0x8e620090  lw          $v0, 0x90($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x297794u;
            goto label_297794;
        }
    }
    ctx->pc = 0x29778Cu;
    // 0x29778c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29778Cu;
    {
        const bool branch_taken_0x29778c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29778Cu;
        // 0x297790: 0x8e72008c  lw          $s2, 0x8C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29778c) {
            ctx->pc = 0x297798u;
            goto label_297798;
        }
    }
    ctx->pc = 0x297794u;
label_297794:
    // 0x297794: 0x24520001  addiu       $s2, $v0, 0x1
    ctx->pc = 0x297794u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_297798:
    // 0x297798: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x297798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29779c:
    // 0x29779c: 0x124200db  beq         $s2, $v0, . + 4 + (0xDB << 2)
    ctx->pc = 0x29779Cu;
    {
        const bool branch_taken_0x29779c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2977A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29779Cu;
        // 0x2977a0: 0x26f02508  addiu       $s0, $s7, 0x2508 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 9480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29779c) {
            ctx->pc = 0x297B0Cu;
            goto label_297b0c;
        }
    }
    ctx->pc = 0x2977A4u;
    // 0x2977a4: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x2977A4u;
    SET_GPR_U32(ctx, 31, 0x2977ACu);
    ctx->pc = 0x2977A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977A4u;
    // 0x2977a8: 0xa21658ec  sb          $s6, 0x58EC($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 22764), (uint8_t)GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D58u, 0x2977A4u, 0x2977ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977ACu;
label_2977ac:
    // 0x2977ac: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x2977acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x2977b0: 0x34842e40  ori         $a0, $a0, 0x2E40
    ctx->pc = 0x2977b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11840);
    // 0x2977b4: 0xc0acd50  jal         func_2B3540
    ctx->pc = 0x2977B4u;
    SET_GPR_U32(ctx, 31, 0x2977BCu);
    ctx->pc = 0x2977B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977B4u;
    // 0x2977b8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3540u, 0x2977B4u, 0x2977BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977BCu;
label_2977bc:
    // 0x2977bc: 0xc0a0512  jal         func_281448
    ctx->pc = 0x2977BCu;
    SET_GPR_U32(ctx, 31, 0x2977C4u);
    ctx->pc = 0x2977C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977BCu;
    // 0x2977c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281448u, 0x2977BCu, 0x2977C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977C4u;
label_2977c4:
    // 0x2977c4: 0x8e030094  lw          $v1, 0x94($s0)
    ctx->pc = 0x2977c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x2977c8: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x2977c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x2977cc: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2977CCu;
    {
        const bool branch_taken_0x2977cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x2977D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977CCu;
        // 0x2977d0: 0xa0402c0c  sb          $zero, 0x2C0C($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 11276), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977cc) {
            ctx->pc = 0x2977E4u;
            goto label_2977e4;
        }
    }
    ctx->pc = 0x2977D4u;
    // 0x2977d4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2977d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2977d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2977d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2977dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2977DCu;
    {
        const bool branch_taken_0x2977dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2977E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2977DCu;
        // 0x2977e0: 0xac62a324  sw          $v0, -0x5CDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2977dc) {
            ctx->pc = 0x2977ECu;
            goto label_2977ec;
        }
    }
    ctx->pc = 0x2977E4u;
label_2977e4:
    // 0x2977e4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2977e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2977e8: 0xac40a324  sw          $zero, -0x5CDC($v0)
    ctx->pc = 0x2977e8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA324u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA324u, _value); } while (0);
label_2977ec:
    // 0x2977ec: 0xc0a0512  jal         func_281448
    ctx->pc = 0x2977ECu;
    SET_GPR_U32(ctx, 31, 0x2977F4u);
    ctx->pc = 0x2977F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2977ECu;
    // 0x2977f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281448u, 0x2977ECu, 0x2977F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2977F4u;
label_2977f4:
    // 0x2977f4: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x2977F4u;
    {
        const bool branch_taken_0x2977f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2977f4) {
            ctx->pc = 0x297BC0u;
            goto label_297bc0;
        }
    }
    ctx->pc = 0x2977FCu;
label_2977fc:
    // 0x2977fc: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2977fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297804: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297804u;
    SET_GPR_U32(ctx, 31, 0x29780Cu);
    ctx->pc = 0x297808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297804u;
    // 0x297808: 0x24a5bb90  addiu       $a1, $a1, -0x4470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297804u, 0x29780Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29780Cu;
label_29780c:
    // 0x29780c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297810: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297810u;
    {
        const bool branch_taken_0x297810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297810u;
        // 0x297814: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297810) {
            ctx->pc = 0x297828u;
            goto label_297828;
        }
    }
    ctx->pc = 0x297818u;
    // 0x297818: 0xc0a21a6  jal         func_288698
    ctx->pc = 0x297818u;
    SET_GPR_U32(ctx, 31, 0x297820u);
    ctx->pc = 0x29781Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297818u;
    // 0x29781c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288698u, 0x297818u, 0x297820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297820u;
label_297820:
    // 0x297820: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x297820u;
    {
        const bool branch_taken_0x297820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297820) {
            ctx->pc = 0x297B0Cu;
            goto label_297b0c;
        }
    }
    ctx->pc = 0x297828u;
label_297828:
    // 0x297828: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29782c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x29782Cu;
    SET_GPR_U32(ctx, 31, 0x297834u);
    ctx->pc = 0x297830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29782Cu;
    // 0x297830: 0x24a5bbb0  addiu       $a1, $a1, -0x4450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x29782Cu, 0x297834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297834u;
label_297834:
    // 0x297834: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297838: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x297838u;
    {
        const bool branch_taken_0x297838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29783Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297838u;
        // 0x29783c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297838) {
            ctx->pc = 0x297850u;
            goto label_297850;
        }
    }
    ctx->pc = 0x297840u;
    // 0x297840: 0xc0a21a6  jal         func_288698
    ctx->pc = 0x297840u;
    SET_GPR_U32(ctx, 31, 0x297848u);
    ctx->pc = 0x297844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297840u;
    // 0x297844: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288698u, 0x297840u, 0x297848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297848u;
label_297848:
    // 0x297848: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x297848u;
    {
        const bool branch_taken_0x297848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297848) {
            ctx->pc = 0x297B0Cu;
            goto label_297b0c;
        }
    }
    ctx->pc = 0x297850u;
label_297850:
    // 0x297850: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297854: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297854u;
    SET_GPR_U32(ctx, 31, 0x29785Cu);
    ctx->pc = 0x297858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297854u;
    // 0x297858: 0x24a5bbd0  addiu       $a1, $a1, -0x4430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297854u, 0x29785Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29785Cu;
label_29785c:
    // 0x29785c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29785cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297860: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x297860u;
    {
        const bool branch_taken_0x297860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297860u;
        // 0x297864: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297860) {
            ctx->pc = 0x297908u;
            goto label_297908;
        }
    }
    ctx->pc = 0x297868u;
    // 0x297868: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x297868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x29786c: 0x24512508  addiu       $s1, $v0, 0x2508
    ctx->pc = 0x29786cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 9480));
    // 0x297870: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x297870u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
    // 0x297874: 0x8e230090  lw          $v1, 0x90($s1)
    ctx->pc = 0x297874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 144)));
    // 0x297878: 0x3c020067  lui         $v0, 0x67
    ctx->pc = 0x297878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)103 << 16));
    // 0x29787c: 0x8e649160  lw          $a0, -0x6EA0($s3)
    ctx->pc = 0x29787cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9160u));
    // 0x297880: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x297880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
    // 0x297884: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x297884u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x297888: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x297888u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x29788c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29788cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297890: 0xae449164  sw          $a0, -0x6E9C($s2)
    ctx->pc = 0x297890u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3F9164u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3F9164u, _value); } while (0);
    // 0x297894: 0x24a5bb70  addiu       $a1, $a1, -0x4490
    ctx->pc = 0x297894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949744));
    // 0x297898: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x297898u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29789c: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x29789Cu;
    SET_GPR_U32(ctx, 31, 0x2978A4u);
    ctx->pc = 0x2978A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29789Cu;
    // 0x2978a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x29789Cu, 0x2978A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978A4u;
label_2978a4:
    // 0x2978a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2978A4u;
    {
        const bool branch_taken_0x2978a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978A4u;
        // 0x2978a8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978a4) {
            ctx->pc = 0x2978CCu;
            goto label_2978cc;
        }
    }
    ctx->pc = 0x2978ACu;
    // 0x2978ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2978acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978b0: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x2978B0u;
    SET_GPR_U32(ctx, 31, 0x2978B8u);
    ctx->pc = 0x2978B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978B0u;
    // 0x2978b4: 0x24a5bb80  addiu       $a1, $a1, -0x4480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x2978B0u, 0x2978B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978B8u;
label_2978b8:
    // 0x2978b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2978B8u;
    {
        const bool branch_taken_0x2978b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2978BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2978B8u;
        // 0x2978bc: 0x8e629160  lw          $v0, -0x6EA0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2978b8) {
            ctx->pc = 0x2978CCu;
            goto label_2978cc;
        }
    }
    ctx->pc = 0x2978C0u;
    // 0x2978c0: 0x8e439164  lw          $v1, -0x6E9C($s2)
    ctx->pc = 0x2978c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938980)));
    // 0x2978c4: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x2978c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x2978c8: 0xae23008c  sw          $v1, 0x8C($s1)
    ctx->pc = 0x2978c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 3));
label_2978cc:
    // 0x2978cc: 0xc0a051c  jal         func_281470
    ctx->pc = 0x2978CCu;
    SET_GPR_U32(ctx, 31, 0x2978D4u);
    ctx->pc = 0x281470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281470u, 0x2978CCu, 0x2978D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978D4u;
label_2978d4:
    // 0x2978d4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2978D4u;
    SET_GPR_U32(ctx, 31, 0x2978DCu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2978D4u, 0x2978DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978DCu;
label_2978dc:
    // 0x2978dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2978dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978e0: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x2978E0u;
    SET_GPR_U32(ctx, 31, 0x2978E8u);
    ctx->pc = 0x2978E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978E0u;
    // 0x2978e4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x2978E0u, 0x2978E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978E8u;
label_2978e8:
    // 0x2978e8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2978E8u;
    SET_GPR_U32(ctx, 31, 0x2978F0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2978E8u, 0x2978F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2978F0u;
label_2978f0:
    // 0x2978f0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2978f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2978f4: 0x26850078  addiu       $a1, $s4, 0x78
    ctx->pc = 0x2978f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
    // 0x2978f8: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x2978F8u;
    SET_GPR_U32(ctx, 31, 0x297900u);
    ctx->pc = 0x2978FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2978F8u;
    // 0x2978fc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x2978F8u, 0x297900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297900u;
label_297900:
    // 0x297900: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x297900u;
    {
        const bool branch_taken_0x297900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x297900) {
            ctx->pc = 0x297AC0u;
            goto label_297ac0;
        }
    }
    ctx->pc = 0x297908u;
label_297908:
    // 0x297908: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297908u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x29790c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29790cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297910: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297910u;
    SET_GPR_U32(ctx, 31, 0x297918u);
    ctx->pc = 0x297914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297910u;
    // 0x297914: 0x24a5bbe0  addiu       $a1, $a1, -0x4420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297910u, 0x297918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297918u;
label_297918:
    // 0x297918: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29791c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x29791Cu;
    {
        const bool branch_taken_0x29791c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29791Cu;
        // 0x297920: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29791c) {
            ctx->pc = 0x29796Cu;
            goto label_29796c;
        }
    }
    ctx->pc = 0x297924u;
    // 0x297924: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297924u;
    SET_GPR_U32(ctx, 31, 0x29792Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297924u, 0x29792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29792Cu;
label_29792c:
    // 0x29792c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29792cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297930: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297930u;
    SET_GPR_U32(ctx, 31, 0x297938u);
    ctx->pc = 0x297934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297930u;
    // 0x297934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297930u, 0x297938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297938u;
label_297938:
    // 0x297938: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x297938u;
    SET_GPR_U32(ctx, 31, 0x297940u);
    ctx->pc = 0x29793Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297938u;
    // 0x29793c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x297938u, 0x297940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297940u;
label_297940:
    // 0x297940: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x297940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x297944: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x297944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x297948: 0x24632508  addiu       $v1, $v1, 0x2508
    ctx->pc = 0x297948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9480));
    // 0x29794c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x29794cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x297950: 0x8c620090  lw          $v0, 0x90($v1)
    ctx->pc = 0x297950u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C2598u));
    // 0x297954: 0xac640094  sw          $a0, 0x94($v1)
    ctx->pc = 0x297954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x4C259Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C259Cu, _value); } while (0);
    // 0x297958: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x297958u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x4C2594u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C2594u, _value); } while (0);
    // 0x29795c: 0xc0c6aca  jal         func_31AB28
    ctx->pc = 0x29795Cu;
    SET_GPR_U32(ctx, 31, 0x297964u);
    ctx->pc = 0x297960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29795Cu;
    // 0x297960: 0xaca0a324  sw          $zero, -0x5CDC($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943524), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31AB28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31AB28u, 0x29795Cu, 0x297964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297964u;
label_297964:
    // 0x297964: 0x100000b2  b           . + 4 + (0xB2 << 2)
    ctx->pc = 0x297964u;
    {
        const bool branch_taken_0x297964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297964u;
        // 0x297968: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297964) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x29796Cu;
label_29796c:
    // 0x29796c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29796cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297970: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297970u;
    SET_GPR_U32(ctx, 31, 0x297978u);
    ctx->pc = 0x297974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297970u;
    // 0x297974: 0x24a5bbf0  addiu       $a1, $a1, -0x4410 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297970u, 0x297978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297978u;
label_297978:
    // 0x297978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x29797c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x29797Cu;
    {
        const bool branch_taken_0x29797c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29797Cu;
        // 0x297980: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29797c) {
            ctx->pc = 0x2979B0u;
            goto label_2979b0;
        }
    }
    ctx->pc = 0x297984u;
    // 0x297984: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297984u;
    SET_GPR_U32(ctx, 31, 0x29798Cu);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297984u, 0x29798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29798Cu;
label_29798c:
    // 0x29798c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29798cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297990: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297990u;
    SET_GPR_U32(ctx, 31, 0x297998u);
    ctx->pc = 0x297994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297990u;
    // 0x297994: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297990u, 0x297998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297998u;
label_297998:
    // 0x297998: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x297998u;
    SET_GPR_U32(ctx, 31, 0x2979A0u);
    ctx->pc = 0x29799Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297998u;
    // 0x29799c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x297998u, 0x2979A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979A0u;
label_2979a0:
    // 0x2979a0: 0xc0c56f4  jal         func_315BD0
    ctx->pc = 0x2979A0u;
    SET_GPR_U32(ctx, 31, 0x2979A8u);
    ctx->pc = 0x2979A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979A0u;
    // 0x2979a4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315BD0u, 0x2979A0u, 0x2979A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979A8u;
label_2979a8:
    // 0x2979a8: 0x100000a1  b           . + 4 + (0xA1 << 2)
    ctx->pc = 0x2979A8u;
    {
        const bool branch_taken_0x2979a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979A8u;
        // 0x2979ac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979a8) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x2979B0u;
label_2979b0:
    // 0x2979b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2979b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2979B4u;
    SET_GPR_U32(ctx, 31, 0x2979BCu);
    ctx->pc = 0x2979B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979B4u;
    // 0x2979b8: 0x24a5bc00  addiu       $a1, $a1, -0x4400 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2979B4u, 0x2979BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979BCu;
label_2979bc:
    // 0x2979bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2979bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2979c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2979C0u;
    {
        const bool branch_taken_0x2979c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979C0u;
        // 0x2979c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979c0) {
            ctx->pc = 0x2979D0u;
            goto label_2979d0;
        }
    }
    ctx->pc = 0x2979C8u;
    // 0x2979c8: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x2979C8u;
    {
        const bool branch_taken_0x2979c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979C8u;
        // 0x2979cc: 0xa2820080  sb          $v0, 0x80($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979c8) {
            ctx->pc = 0x297C2Cu;
            goto label_297c2c;
        }
    }
    ctx->pc = 0x2979D0u;
label_2979d0:
    // 0x2979d0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2979d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2979d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2979d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2979d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2979D8u;
    SET_GPR_U32(ctx, 31, 0x2979E0u);
    ctx->pc = 0x2979DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979D8u;
    // 0x2979dc: 0x24a5bc10  addiu       $a1, $a1, -0x43F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2979D8u, 0x2979E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979E0u;
label_2979e0:
    // 0x2979e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2979e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2979e4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2979E4u;
    {
        const bool branch_taken_0x2979e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2979E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979E4u;
        // 0x2979e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979e4) {
            ctx->pc = 0x297A04u;
            goto label_297a04;
        }
    }
    ctx->pc = 0x2979ECu;
    // 0x2979ec: 0x3c040052  lui         $a0, 0x52
    ctx->pc = 0x2979ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
    // 0x2979f0: 0xa2820080  sb          $v0, 0x80($s4)
    ctx->pc = 0x2979f0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 128), (uint8_t)GPR_U32(ctx, 2));
    // 0x2979f4: 0xc0ae33c  jal         func_2B8CF0
    ctx->pc = 0x2979F4u;
    SET_GPR_U32(ctx, 31, 0x2979FCu);
    ctx->pc = 0x2979F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2979F4u;
    // 0x2979f8: 0x2484ac80  addiu       $a0, $a0, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CF0u, 0x2979F4u, 0x2979FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2979FCu;
label_2979fc:
    // 0x2979fc: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x2979FCu;
    {
        const bool branch_taken_0x2979fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2979FCu;
        // 0x297a00: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2979fc) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297A04u;
label_297a04:
    // 0x297a04: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297a04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297a08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a0c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297A0Cu;
    SET_GPR_U32(ctx, 31, 0x297A14u);
    ctx->pc = 0x297A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A0Cu;
    // 0x297a10: 0x24a5bc20  addiu       $a1, $a1, -0x43E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297A0Cu, 0x297A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A14u;
label_297a14:
    // 0x297a14: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297a18: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x297A18u;
    {
        const bool branch_taken_0x297a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A18u;
        // 0x297a1c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a18) {
            ctx->pc = 0x297A80u;
            goto label_297a80;
        }
    }
    ctx->pc = 0x297A20u;
    // 0x297a20: 0x3c100052  lui         $s0, 0x52
    ctx->pc = 0x297a20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)82 << 16));
    // 0x297a24: 0x2610ac80  addiu       $s0, $s0, -0x5380
    ctx->pc = 0x297a24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294945920));
    // 0x297a28: 0xc0ae33c  jal         func_2B8CF0
    ctx->pc = 0x297A28u;
    SET_GPR_U32(ctx, 31, 0x297A30u);
    ctx->pc = 0x297A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A28u;
    // 0x297a2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CF0u, 0x297A28u, 0x297A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A30u;
label_297a30:
    // 0x297a30: 0xc0ab184  jal         func_2AC610
    ctx->pc = 0x297A30u;
    SET_GPR_U32(ctx, 31, 0x297A38u);
    ctx->pc = 0x297A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A30u;
    // 0x297a34: 0xae005908  sw          $zero, 0x5908($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 22792), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AC610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AC610u, 0x297A30u, 0x297A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A38u;
label_297a38:
    // 0x297a38: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x297a38u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x297a3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x297a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a40: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x297a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x297a44: 0xc0acb76  jal         func_2B2DD8
    ctx->pc = 0x297A44u;
    SET_GPR_U32(ctx, 31, 0x297A4Cu);
    ctx->pc = 0x297A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A44u;
    // 0x297a48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2DD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B2DD8u, 0x297A44u, 0x297A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A4Cu;
label_297a4c:
    // 0x297a4c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x297a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x297a50: 0xae000090  sw          $zero, 0x90($s0)
    ctx->pc = 0x297a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 0));
    // 0x297a54: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297A54u;
    SET_GPR_U32(ctx, 31, 0x297A5Cu);
    ctx->pc = 0x297A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A54u;
    // 0x297a58: 0xae020094  sw          $v0, 0x94($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297A54u, 0x297A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A5Cu;
label_297a5c:
    // 0x297a5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a60: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297A60u;
    SET_GPR_U32(ctx, 31, 0x297A68u);
    ctx->pc = 0x297A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A60u;
    // 0x297a64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297A60u, 0x297A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A68u;
label_297a68:
    // 0x297a68: 0xc0a1a80  jal         func_286A00
    ctx->pc = 0x297A68u;
    SET_GPR_U32(ctx, 31, 0x297A70u);
    ctx->pc = 0x286A00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286A00u, 0x297A68u, 0x297A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A70u;
label_297a70:
    // 0x297a70: 0xc0a1988  jal         func_286620
    ctx->pc = 0x297A70u;
    SET_GPR_U32(ctx, 31, 0x297A78u);
    ctx->pc = 0x286620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286620u, 0x297A70u, 0x297A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A78u;
label_297a78:
    // 0x297a78: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x297A78u;
    {
        const bool branch_taken_0x297a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A78u;
        // 0x297a7c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a78) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297A80u;
label_297a80:
    // 0x297a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297a84: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297A84u;
    SET_GPR_U32(ctx, 31, 0x297A8Cu);
    ctx->pc = 0x297A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A84u;
    // 0x297a88: 0x24a5bc30  addiu       $a1, $a1, -0x43D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297A84u, 0x297A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297A8Cu;
label_297a8c:
    // 0x297a8c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297a90: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x297A90u;
    {
        const bool branch_taken_0x297a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297A90u;
        // 0x297a94: 0x3c040052  lui         $a0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297a90) {
            ctx->pc = 0x297AD0u;
            goto label_297ad0;
        }
    }
    ctx->pc = 0x297A98u;
    // 0x297a98: 0xc0ae33c  jal         func_2B8CF0
    ctx->pc = 0x297A98u;
    SET_GPR_U32(ctx, 31, 0x297AA0u);
    ctx->pc = 0x297A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297A98u;
    // 0x297a9c: 0x2484ac80  addiu       $a0, $a0, -0x5380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8CF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8CF0u, 0x297A98u, 0x297AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AA0u;
label_297aa0:
    // 0x297aa0: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297AA0u;
    SET_GPR_U32(ctx, 31, 0x297AA8u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297AA0u, 0x297AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AA8u;
label_297aa8:
    // 0x297aa8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297aac: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297AACu;
    SET_GPR_U32(ctx, 31, 0x297AB4u);
    ctx->pc = 0x297AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AACu;
    // 0x297ab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297AACu, 0x297AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AB4u;
label_297ab4:
    // 0x297ab4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x297ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x297ab8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297abc: 0xac62a438  sw          $v0, -0x5BC8($v1)
    ctx->pc = 0x297abcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3FA438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FA438u, _value); } while (0);
label_297ac0:
    // 0x297ac0: 0xc0c67d6  jal         func_319F58
    ctx->pc = 0x297AC0u;
    SET_GPR_U32(ctx, 31, 0x297AC8u);
    ctx->pc = 0x297AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AC0u;
    // 0x297ac4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x319F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319F58u, 0x297AC0u, 0x297AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AC8u;
label_297ac8:
    // 0x297ac8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x297AC8u;
    {
        const bool branch_taken_0x297ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AC8u;
        // 0x297acc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ac8) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297AD0u;
label_297ad0:
    // 0x297ad0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297ad4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297ad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297ad8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297AD8u;
    SET_GPR_U32(ctx, 31, 0x297AE0u);
    ctx->pc = 0x297ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297AD8u;
    // 0x297adc: 0x24a5bc40  addiu       $a1, $a1, -0x43C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297AD8u, 0x297AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297AE0u;
label_297ae0:
    // 0x297ae0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297ae4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x297AE4u;
    {
        const bool branch_taken_0x297ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297AE4u;
        // 0x297ae8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ae4) {
            ctx->pc = 0x297B2Cu;
            goto label_297b2c;
        }
    }
    ctx->pc = 0x297AECu;
    // 0x297aec: 0x8c43259c  lw          $v1, 0x259C($v0)
    ctx->pc = 0x297aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9628)));
    // 0x297af0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x297AF0u;
    {
        const bool branch_taken_0x297af0 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x297af0) {
            ctx->pc = 0x297B0Cu;
            goto label_297b0c;
        }
    }
    ctx->pc = 0x297AF8u;
    // 0x297af8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297AF8u;
    SET_GPR_U32(ctx, 31, 0x297B00u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297AF8u, 0x297B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B00u;
label_297b00:
    // 0x297b00: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b04: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x297B04u;
    {
        const bool branch_taken_0x297b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B04u;
        // 0x297b08: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b04) {
            ctx->pc = 0x297B1Cu;
            goto label_297b1c;
        }
    }
    ctx->pc = 0x297B0Cu;
label_297b0c:
    // 0x297b0c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297B0Cu;
    SET_GPR_U32(ctx, 31, 0x297B14u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297B0Cu, 0x297B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B14u;
label_297b14:
    // 0x297b14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b18: 0x26850078  addiu       $a1, $s4, 0x78
    ctx->pc = 0x297b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_297b1c:
    // 0x297b1c: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x297B1Cu;
    SET_GPR_U32(ctx, 31, 0x297B24u);
    ctx->pc = 0x297B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B1Cu;
    // 0x297b20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x297B1Cu, 0x297B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B24u;
label_297b24:
    // 0x297b24: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x297B24u;
    {
        const bool branch_taken_0x297b24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B24u;
        // 0x297b28: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b24) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297B2Cu;
label_297b2c:
    // 0x297b2c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x297b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x297b30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297B34u;
    SET_GPR_U32(ctx, 31, 0x297B3Cu);
    ctx->pc = 0x297B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B34u;
    // 0x297b38: 0x24a5bc58  addiu       $a1, $a1, -0x43A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297B34u, 0x297B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B3Cu;
label_297b3c:
    // 0x297b3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297b40: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x297B40u;
    {
        const bool branch_taken_0x297b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297B40u;
        // 0x297b44: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297b40) {
            ctx->pc = 0x297BE4u;
            goto label_297be4;
        }
    }
    ctx->pc = 0x297B48u;
    // 0x297b48: 0xc0a1b56  jal         func_286D58
    ctx->pc = 0x297B48u;
    SET_GPR_U32(ctx, 31, 0x297B50u);
    ctx->pc = 0x297B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B48u;
    // 0x297b4c: 0x3c10004c  lui         $s0, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x286D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286D58u, 0x297B48u, 0x297B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B50u;
label_297b50:
    // 0x297b50: 0x3c040047  lui         $a0, 0x47
    ctx->pc = 0x297b50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)71 << 16));
    // 0x297b54: 0xc075e34  jal         func_1D78D0
    ctx->pc = 0x297B54u;
    SET_GPR_U32(ctx, 31, 0x297B5Cu);
    ctx->pc = 0x297B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B54u;
    // 0x297b58: 0x2484bc68  addiu       $a0, $a0, -0x4398 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D78D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D78D0u, 0x297B54u, 0x297B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B5Cu;
label_297b5c:
    // 0x297b5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x297b5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b60: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x297b60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x297b64: 0x26102508  addiu       $s0, $s0, 0x2508
    ctx->pc = 0x297b64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 9480));
    // 0x297b68: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x297b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x297b6c: 0x34842e40  ori         $a0, $a0, 0x2E40
    ctx->pc = 0x297b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)11840);
    // 0x297b70: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x297b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x297b74: 0xc0acd50  jal         func_2B3540
    ctx->pc = 0x297B74u;
    SET_GPR_U32(ctx, 31, 0x297B7Cu);
    ctx->pc = 0x297B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B74u;
    // 0x297b78: 0xac519164  sw          $s1, -0x6E9C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294938980), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3540u, 0x297B74u, 0x297B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297B7Cu;
label_297b7c:
    // 0x297b7c: 0x240300b0  addiu       $v1, $zero, 0xB0
    ctx->pc = 0x297b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x297b80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x297b80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297b84: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x297b84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x297b88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x297b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297b8c: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x297b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x297b90: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x297b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x297b94: 0xa0402c0c  sb          $zero, 0x2C0C($v0)
    ctx->pc = 0x297b94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x482C0Cu, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x482C0Cu, _value); } while (0);
    // 0x297b98: 0xc0a0512  jal         func_281448
    ctx->pc = 0x297B98u;
    SET_GPR_U32(ctx, 31, 0x297BA0u);
    ctx->pc = 0x297B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297B98u;
    // 0x297b9c: 0xa06500ec  sb          $a1, 0xEC($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 236), (uint8_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281448u, 0x297B98u, 0x297BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BA0u;
label_297ba0:
    // 0x297ba0: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x297ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x297ba4: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x297BA4u;
    {
        const bool branch_taken_0x297ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x297BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BA4u;
        // 0x297ba8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297ba4) {
            ctx->pc = 0x297BBCu;
            goto label_297bbc;
        }
    }
    ctx->pc = 0x297BACu;
    // 0x297bac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x297bacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x297bb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x297bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x297bb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x297BB4u;
    {
        const bool branch_taken_0x297bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BB4u;
        // 0x297bb8: 0xac62a324  sw          $v0, -0x5CDC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294943524), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bb4) {
            ctx->pc = 0x297BC0u;
            goto label_297bc0;
        }
    }
    ctx->pc = 0x297BBCu;
label_297bbc:
    // 0x297bbc: 0xac40a324  sw          $zero, -0x5CDC($v0)
    ctx->pc = 0x297bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294943524), GPR_U32(ctx, 0));
label_297bc0:
    // 0x297bc0: 0xc0a04f0  jal         func_2813C0
    ctx->pc = 0x297BC0u;
    SET_GPR_U32(ctx, 31, 0x297BC8u);
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x297BC0u, 0x297BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BC8u;
label_297bc8:
    // 0x297bc8: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297BC8u;
    SET_GPR_U32(ctx, 31, 0x297BD0u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297BC8u, 0x297BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BD0u;
label_297bd0:
    // 0x297bd0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297bd4: 0xc0a7428  jal         func_29D0A0
    ctx->pc = 0x297BD4u;
    SET_GPR_U32(ctx, 31, 0x297BDCu);
    ctx->pc = 0x297BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BD4u;
    // 0x297bd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x297BD4u, 0x297BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BDCu;
label_297bdc:
    // 0x297bdc: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x297BDCu;
    {
        const bool branch_taken_0x297bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BDCu;
        // 0x297be0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bdc) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297BE4u;
label_297be4:
    // 0x297be4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x297be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297be8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x297BE8u;
    SET_GPR_U32(ctx, 31, 0x297BF0u);
    ctx->pc = 0x297BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297BE8u;
    // 0x297bec: 0x24a5bc80  addiu       $a1, $a1, -0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x297BE8u, 0x297BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297BF0u;
label_297bf0:
    // 0x297bf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x297bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x297bf4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x297BF4u;
    {
        const bool branch_taken_0x297bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x297BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297BF4u;
        // 0x297bf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x297bf4) {
            ctx->pc = 0x297C30u;
            goto label_297c30;
        }
    }
    ctx->pc = 0x297BFCu;
    // 0x297bfc: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297BFCu;
    SET_GPR_U32(ctx, 31, 0x297C04u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297BFCu, 0x297C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C04u;
label_297c04:
    // 0x297c04: 0xc0a722e  jal         func_29C8B8
    ctx->pc = 0x297C04u;
    SET_GPR_U32(ctx, 31, 0x297C0Cu);
    ctx->pc = 0x297C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C04u;
    // 0x297c08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C8B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C8B8u, 0x297C04u, 0x297C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C0Cu;
label_297c0c:
    // 0x297c0c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x297C0Cu;
    SET_GPR_U32(ctx, 31, 0x297C14u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x297C0Cu, 0x297C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C14u;
label_297c14:
    // 0x297c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x297c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x297c18: 0x26850078  addiu       $a1, $s4, 0x78
    ctx->pc = 0x297c18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
    // 0x297c1c: 0xc0a7096  jal         func_29C258
    ctx->pc = 0x297C1Cu;
    SET_GPR_U32(ctx, 31, 0x297C24u);
    ctx->pc = 0x297C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x297C1Cu;
    // 0x297c20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x297C1Cu, 0x297C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C24u;
label_297c24:
    // 0x297c24: 0xc0a221c  jal         func_288870
    ctx->pc = 0x297C24u;
    SET_GPR_U32(ctx, 31, 0x297C2Cu);
    ctx->pc = 0x288870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288870u, 0x297C24u, 0x297C2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x297C2Cu;
label_297c2c:
    // 0x297c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x297c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_297c30:
    // 0x297c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x297c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x297c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x297c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x297c38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x297c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x297c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x297c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x297c40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x297c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x297c44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x297c44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x297c48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x297c48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x297c4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x297c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x297c50: 0x3e00008  jr          $ra
    ctx->pc = 0x297C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x297C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x297C50u;
        // 0x297c54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x297C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x297C58u;
}
