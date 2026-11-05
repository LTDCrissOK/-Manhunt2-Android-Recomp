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

// Function: sub_00170638
// Address: 0x170638 - 0x170878
void sub_00170638_0x170638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170638_0x170638");
#endif

    switch (ctx->pc) {
        case 0x170674u: goto label_170674;
        case 0x17069cu: goto label_17069c;
        case 0x1706b0u: goto label_1706b0;
        case 0x1706c8u: goto label_1706c8;
        case 0x1706d0u: goto label_1706d0;
        case 0x1706e8u: goto label_1706e8;
        case 0x1706f4u: goto label_1706f4;
        case 0x170708u: goto label_170708;
        case 0x170720u: goto label_170720;
        case 0x17075cu: goto label_17075c;
        case 0x170770u: goto label_170770;
        case 0x170784u: goto label_170784;
        case 0x170798u: goto label_170798;
        case 0x1707acu: goto label_1707ac;
        case 0x1707c0u: goto label_1707c0;
        case 0x1707d4u: goto label_1707d4;
        case 0x1707e8u: goto label_1707e8;
        case 0x1707fcu: goto label_1707fc;
        case 0x170804u: goto label_170804;
        case 0x170810u: goto label_170810;
        case 0x170818u: goto label_170818;
        case 0x17082cu: goto label_17082c;
        case 0x170848u: goto label_170848;
        default: break;
    }

    ctx->pc = 0x170638u;

    // 0x170638: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x170638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17063c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x17063cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170640: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170644: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x170644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x170648: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x170648u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17064c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x17064cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x170650: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x170650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x170654: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170658: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x170658u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x17065c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x17065cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x170660: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x170660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170664: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x170664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x170668: 0x8e44005c  lw          $a0, 0x5C($s2)
    ctx->pc = 0x170668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    // 0x17066c: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x17066Cu;
    SET_GPR_U32(ctx, 31, 0x170674u);
    ctx->pc = 0x170670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17066Cu;
    // 0x170670: 0x8c540010  lw          $s4, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x17066Cu, 0x170674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170674u;
label_170674:
    // 0x170674: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x170674u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170678: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x170678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x17067c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x17067cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x170680: 0x24768738  addiu       $s6, $v1, -0x78C8
    ctx->pc = 0x170680u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936376));
    // 0x170684: 0x2455b060  addiu       $s5, $v0, -0x4FA0
    ctx->pc = 0x170684u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x170688: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x170688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17068c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17068cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170690: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x170690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170694: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x170694u;
    SET_GPR_U32(ctx, 31, 0x17069Cu);
    ctx->pc = 0x170698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170694u;
    // 0x170698: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x170694u, 0x17069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17069Cu;
label_17069c:
    // 0x17069c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17069cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706a0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1706A0u;
    {
        const bool branch_taken_0x1706a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1706A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706A0u;
        // 0x1706a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706a0) {
            ctx->pc = 0x1706B8u;
            goto label_1706b8;
        }
    }
    ctx->pc = 0x1706A8u;
    // 0x1706a8: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x1706A8u;
    SET_GPR_U32(ctx, 31, 0x1706B0u);
    ctx->pc = 0x1706ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706A8u;
    // 0x1706ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x1706A8u, 0x1706B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706B0u;
label_1706b0:
    // 0x1706b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1706b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1706b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1706b8:
    // 0x1706b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1706b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706bc: 0x8e5000c4  lw          $s0, 0xC4($s2)
    ctx->pc = 0x1706bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x1706c0: 0xc05d226  jal         func_174898
    ctx->pc = 0x1706C0u;
    SET_GPR_U32(ctx, 31, 0x1706C8u);
    ctx->pc = 0x1706C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706C0u;
    // 0x1706c4: 0x3c170049  lui         $s7, 0x49 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)73 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174898u, 0x1706C0u, 0x1706C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706C8u;
label_1706c8:
    // 0x1706c8: 0xc05d262  jal         func_174988
    ctx->pc = 0x1706C8u;
    SET_GPR_U32(ctx, 31, 0x1706D0u);
    ctx->pc = 0x1706CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706C8u;
    // 0x1706cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174988u, 0x1706C8u, 0x1706D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706D0u;
label_1706d0:
    // 0x1706d0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1706D0u;
    {
        const bool branch_taken_0x1706d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1706D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1706D0u;
        // 0x1706d4: 0x8e4200c4  lw          $v0, 0xC4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1706d0) {
            ctx->pc = 0x170724u;
            goto label_170724;
        }
    }
    ctx->pc = 0x1706D8u;
    // 0x1706d8: 0x54400013  bnel        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1706D8u;
    {
        const bool branch_taken_0x1706d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1706d8) {
            ctx->pc = 0x1706DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1706D8u;
            // 0x1706dc: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170728u;
            goto label_170728;
        }
    }
    ctx->pc = 0x1706E0u;
    // 0x1706e0: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1706E0u;
    SET_GPR_U32(ctx, 31, 0x1706E8u);
    ctx->pc = 0x1706E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706E0u;
    // 0x1706e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1706E0u, 0x1706E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706E8u;
label_1706e8:
    // 0x1706e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1706e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706ec: 0xc042128  jal         func_1084A0
    ctx->pc = 0x1706ECu;
    SET_GPR_U32(ctx, 31, 0x1706F4u);
    ctx->pc = 0x1706F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1706ECu;
    // 0x1706f0: 0x26e48758  addiu       $a0, $s7, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x1706ECu, 0x1706F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1706F4u;
label_1706f4:
    // 0x1706f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1706f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706f8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1706f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1706fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1706fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170700: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x170700u;
    SET_GPR_U32(ctx, 31, 0x170708u);
    ctx->pc = 0x170704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170700u;
    // 0x170704: 0x2c0382d  daddu       $a3, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x170700u, 0x170708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170708u;
label_170708:
    // 0x170708: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17070c: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x17070Cu;
    {
        const bool branch_taken_0x17070c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x17070c) {
            ctx->pc = 0x170710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17070Cu;
            // 0x170710: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170728u;
            goto label_170728;
        }
    }
    ctx->pc = 0x170714u;
    // 0x170714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170718: 0xc04f90e  jal         func_13E438
    ctx->pc = 0x170718u;
    SET_GPR_U32(ctx, 31, 0x170720u);
    ctx->pc = 0x17071Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170718u;
    // 0x17071c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E438u, 0x170718u, 0x170720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170720u;
label_170720:
    // 0x170720: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x170720u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_170724:
    // 0x170724: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x170724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_170728:
    // 0x170728: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x170728u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x17072c: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x17072Cu;
    {
        const bool branch_taken_0x17072c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17072Cu;
        // 0x170730: 0x3802b  sltu        $s0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17072c) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x170734u;
    // 0x170734: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x170734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x170738: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x170738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17073c: 0x2442f290  addiu       $v0, $v0, -0xD70
    ctx->pc = 0x17073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963856));
    // 0x170740: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x170740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x170744: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x170744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x170748: 0x800008  jr          $a0
    ctx->pc = 0x170748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170750u: goto label_170750;
            case 0x170764u: goto label_170764;
            case 0x170778u: goto label_170778;
            case 0x17078Cu: goto label_17078c;
            case 0x1707A0u: goto label_1707a0;
            case 0x1707B4u: goto label_1707b4;
            case 0x1707C8u: goto label_1707c8;
            case 0x1707DCu: goto label_1707dc;
            case 0x1707F0u: goto label_1707f0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170748u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x170750u;
label_170750:
    // 0x170750: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170750u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170754: 0xc05c33a  jal         func_170CE8
    ctx->pc = 0x170754u;
    SET_GPR_U32(ctx, 31, 0x17075Cu);
    ctx->pc = 0x170758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170754u;
    // 0x170758: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170CE8u, 0x170754u, 0x17075Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17075Cu;
label_17075c:
    // 0x17075c: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17075Cu;
    {
        const bool branch_taken_0x17075c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17075c) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x170764u;
label_170764:
    // 0x170764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170768: 0xc05c3a2  jal         func_170E88
    ctx->pc = 0x170768u;
    SET_GPR_U32(ctx, 31, 0x170770u);
    ctx->pc = 0x17076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170768u;
    // 0x17076c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170E88u, 0x170768u, 0x170770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170770u;
label_170770:
    // 0x170770: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x170770u;
    {
        const bool branch_taken_0x170770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170770) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x170778u;
label_170778:
    // 0x170778: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x170778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17077c: 0xc05c3dc  jal         func_170F70
    ctx->pc = 0x17077Cu;
    SET_GPR_U32(ctx, 31, 0x170784u);
    ctx->pc = 0x170780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17077Cu;
    // 0x170780: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170F70u, 0x17077Cu, 0x170784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170784u;
label_170784:
    // 0x170784: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x170784u;
    {
        const bool branch_taken_0x170784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170784) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x17078Cu;
label_17078c:
    // 0x17078c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x17078cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170790: 0xc05c494  jal         func_171250
    ctx->pc = 0x170790u;
    SET_GPR_U32(ctx, 31, 0x170798u);
    ctx->pc = 0x170794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170790u;
    // 0x170794: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171250u, 0x170790u, 0x170798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170798u;
label_170798:
    // 0x170798: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x170798u;
    {
        const bool branch_taken_0x170798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x170798) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x1707A0u;
label_1707a0:
    // 0x1707a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707a4: 0xc05c4e4  jal         func_171390
    ctx->pc = 0x1707A4u;
    SET_GPR_U32(ctx, 31, 0x1707ACu);
    ctx->pc = 0x1707A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707A4u;
    // 0x1707a8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171390u, 0x1707A4u, 0x1707ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707ACu;
label_1707ac:
    // 0x1707ac: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1707ACu;
    {
        const bool branch_taken_0x1707ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1707ac) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x1707B4u;
label_1707b4:
    // 0x1707b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707b8: 0xc05c53a  jal         func_1714E8
    ctx->pc = 0x1707B8u;
    SET_GPR_U32(ctx, 31, 0x1707C0u);
    ctx->pc = 0x1707BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707B8u;
    // 0x1707bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1714E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1714E8u, 0x1707B8u, 0x1707C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707C0u;
label_1707c0:
    // 0x1707c0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1707C0u;
    {
        const bool branch_taken_0x1707c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1707c0) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x1707C8u;
label_1707c8:
    // 0x1707c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707cc: 0xc05c596  jal         func_171658
    ctx->pc = 0x1707CCu;
    SET_GPR_U32(ctx, 31, 0x1707D4u);
    ctx->pc = 0x1707D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707CCu;
    // 0x1707d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171658u, 0x1707CCu, 0x1707D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707D4u;
label_1707d4:
    // 0x1707d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1707D4u;
    {
        const bool branch_taken_0x1707d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1707d4) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x1707DCu;
label_1707dc:
    // 0x1707dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707e0: 0xc05c6e8  jal         func_171BA0
    ctx->pc = 0x1707E0u;
    SET_GPR_U32(ctx, 31, 0x1707E8u);
    ctx->pc = 0x1707E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707E0u;
    // 0x1707e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171BA0u, 0x1707E0u, 0x1707E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707E8u;
label_1707e8:
    // 0x1707e8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1707E8u;
    {
        const bool branch_taken_0x1707e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1707e8) {
            ctx->pc = 0x1707FCu;
            goto label_1707fc;
        }
    }
    ctx->pc = 0x1707F0u;
label_1707f0:
    // 0x1707f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1707f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1707f4: 0xc05c2c4  jal         func_170B10
    ctx->pc = 0x1707F4u;
    SET_GPR_U32(ctx, 31, 0x1707FCu);
    ctx->pc = 0x1707F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707F4u;
    // 0x1707f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x170B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x170B10u, 0x1707F4u, 0x1707FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1707FCu;
label_1707fc:
    // 0x1707fc: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x1707FCu;
    SET_GPR_U32(ctx, 31, 0x170804u);
    ctx->pc = 0x170800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1707FCu;
    // 0x170800: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x1707FCu, 0x170804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170804u;
label_170804:
    // 0x170804: 0x26e48758  addiu       $a0, $s7, -0x78A8
    ctx->pc = 0x170804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294936408));
    // 0x170808: 0xc042128  jal         func_1084A0
    ctx->pc = 0x170808u;
    SET_GPR_U32(ctx, 31, 0x170810u);
    ctx->pc = 0x17080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170808u;
    // 0x17080c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x170808u, 0x170810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170810u;
label_170810:
    // 0x170810: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170810u;
    SET_GPR_U32(ctx, 31, 0x170818u);
    ctx->pc = 0x170814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170810u;
    // 0x170814: 0x8e44005c  lw          $a0, 0x5C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170810u, 0x170818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170818u;
label_170818:
    // 0x170818: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x170818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17081c: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x17081Cu;
    {
        const bool branch_taken_0x17081c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x17081c) {
            ctx->pc = 0x170820u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17081Cu;
            // 0x170820: 0x8e4200b4  lw          $v0, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x170830u;
            goto label_170830;
        }
    }
    ctx->pc = 0x170824u;
    // 0x170824: 0xc05cb26  jal         func_172C98
    ctx->pc = 0x170824u;
    SET_GPR_U32(ctx, 31, 0x17082Cu);
    ctx->pc = 0x170828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170824u;
    // 0x170828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172C98u, 0x170824u, 0x17082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17082Cu;
label_17082c:
    // 0x17082c: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x17082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_170830:
    // 0x170830: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x170830u;
    {
        const bool branch_taken_0x170830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170830) {
            ctx->pc = 0x170834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x170830u;
            // 0x170834: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17084Cu;
            goto label_17084c;
        }
    }
    ctx->pc = 0x170838u;
    // 0x170838: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x170838u;
    {
        const bool branch_taken_0x170838 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170838u;
        // 0x17083c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170838) {
            ctx->pc = 0x17084Cu;
            goto label_17084c;
        }
    }
    ctx->pc = 0x170840u;
    // 0x170840: 0xc05d3f4  jal         func_174FD0
    ctx->pc = 0x170840u;
    SET_GPR_U32(ctx, 31, 0x170848u);
    ctx->pc = 0x170844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170840u;
    // 0x170844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174FD0u, 0x170840u, 0x170848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170848u;
label_170848:
    // 0x170848: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x170848u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17084c:
    // 0x17084c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17084cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x170850: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x170850u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170854: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x170854u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x170858: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x170858u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17085c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x17085cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x170860: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x170860u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170864: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x170864u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x170868: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x170868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17086c: 0x3e00008  jr          $ra
    ctx->pc = 0x17086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17086Cu;
        // 0x170870: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17086Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170874u;
    // 0x170874: 0x0  nop
    ctx->pc = 0x170874u;
    // NOP
    ctx->pc = 0x170878u;
}
