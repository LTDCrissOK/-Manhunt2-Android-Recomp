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

// Function: sub_00116708
// Address: 0x116708 - 0x1168a8
void sub_00116708_0x116708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116708_0x116708");
#endif

    switch (ctx->pc) {
        case 0x11676cu: goto label_11676c;
        case 0x116774u: goto label_116774;
        case 0x11677cu: goto label_11677c;
        case 0x11678cu: goto label_11678c;
        case 0x116798u: goto label_116798;
        case 0x1167a8u: goto label_1167a8;
        case 0x1167d8u: goto label_1167d8;
        case 0x1167e0u: goto label_1167e0;
        case 0x116804u: goto label_116804;
        case 0x116810u: goto label_116810;
        case 0x116820u: goto label_116820;
        case 0x116864u: goto label_116864;
        default: break;
    }

    ctx->pc = 0x116708u;

    // 0x116708: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x116708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11670c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x11670cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x116710: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x116710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x116714: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x116714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x116718: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x116718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x11671c: 0x24700338  addiu       $s0, $v1, 0x338
    ctx->pc = 0x11671cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 824));
    // 0x116720: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x116720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x116724: 0x24510328  addiu       $s1, $v0, 0x328
    ctx->pc = 0x116724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 808));
    // 0x116728: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x116728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x11672c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11672cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116730: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x116730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x116734: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x116734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x116738: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x116738u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11673c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x11673cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x116740: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x116740u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116744: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x116744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x116748: 0x27a20014  addiu       $v0, $sp, 0x14
    ctx->pc = 0x116748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x11674c: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x11674cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
    // 0x116750: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x116750u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116754: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x116754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x116758: 0x8c94000c  lw          $s4, 0xC($a0)
    ctx->pc = 0x116758u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x11675c: 0xafb10030  sw          $s1, 0x30($sp)
    ctx->pc = 0x11675cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
    // 0x116760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116764: 0xc072666  jal         func_1C9998
    ctx->pc = 0x116764u;
    SET_GPR_U32(ctx, 31, 0x11676Cu);
    ctx->pc = 0x116768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116764u;
    // 0x116768: 0xac500018  sw          $s0, 0x18($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9998u, 0x116764u, 0x11676Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11676Cu;
label_11676c:
    // 0x11676c: 0xc072812  jal         func_1CA048
    ctx->pc = 0x11676Cu;
    SET_GPR_U32(ctx, 31, 0x116774u);
    ctx->pc = 0x116770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11676Cu;
    // 0x116770: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA048u, 0x11676Cu, 0x116774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116774u;
label_116774:
    // 0x116774: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x116774u;
    SET_GPR_U32(ctx, 31, 0x11677Cu);
    ctx->pc = 0x116778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116774u;
    // 0x116778: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x116774u, 0x11677Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11677Cu;
label_11677c:
    // 0x11677c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x11677Cu;
    {
        const bool branch_taken_0x11677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11677Cu;
        // 0x116780: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11677c) {
            ctx->pc = 0x1167C0u;
            goto label_1167c0;
        }
    }
    ctx->pc = 0x116784u;
    // 0x116784: 0xc072818  jal         func_1CA060
    ctx->pc = 0x116784u;
    SET_GPR_U32(ctx, 31, 0x11678Cu);
    ctx->pc = 0x116788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116784u;
    // 0x116788: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x116784u, 0x11678Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11678Cu;
label_11678c:
    // 0x11678c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11678cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116790: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x116790u;
    SET_GPR_U32(ctx, 31, 0x116798u);
    ctx->pc = 0x116794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116790u;
    // 0x116794: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x116790u, 0x116798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116798u;
label_116798:
    // 0x116798: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x116798u;
    {
        const bool branch_taken_0x116798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116798) {
            ctx->pc = 0x11679Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116798u;
            // 0x11679c: 0x8e910224  lw          $s1, 0x224($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x1167A0u;
    // 0x1167a0: 0xc072894  jal         func_1CA250
    ctx->pc = 0x1167A0u;
    SET_GPR_U32(ctx, 31, 0x1167A8u);
    ctx->pc = 0x1167A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167A0u;
    // 0x1167a4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA250u, 0x1167A0u, 0x1167A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167A8u;
label_1167a8:
    // 0x1167a8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1167a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167ac: 0x56a00005  bnel        $s5, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1167ACu;
    {
        const bool branch_taken_0x1167ac = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1167ac) {
            ctx->pc = 0x1167B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1167ACu;
            // 0x1167b0: 0x8e910224  lw          $s1, 0x224($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1167C4u;
            goto label_1167c4;
        }
    }
    ctx->pc = 0x1167B4u;
    // 0x1167b4: 0xaed00018  sw          $s0, 0x18($s6)
    ctx->pc = 0x1167b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 16));
    // 0x1167b8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1167B8u;
    {
        const bool branch_taken_0x1167b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167B8u;
        // 0x1167bc: 0xafb10030  sw          $s1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167b8) {
            ctx->pc = 0x116874u;
            goto label_116874;
        }
    }
    ctx->pc = 0x1167C0u;
label_1167c0:
    // 0x1167c0: 0x8e910224  lw          $s1, 0x224($s4)
    ctx->pc = 0x1167c0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 548)));
label_1167c4:
    // 0x1167c4: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x1167C4u;
    {
        const bool branch_taken_0x1167c4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1167C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167C4u;
        // 0x1167c8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167c4) {
            ctx->pc = 0x116864u;
            goto label_116864;
        }
    }
    ctx->pc = 0x1167CCu;
    // 0x1167cc: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1167ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1167d0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1167d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1167d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1167d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1167d8:
    // 0x1167d8: 0xc0ac932  jal         func_2B24C8
    ctx->pc = 0x1167D8u;
    SET_GPR_U32(ctx, 31, 0x1167E0u);
    ctx->pc = 0x1167DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167D8u;
    // 0x1167dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B24C8u, 0x1167D8u, 0x1167E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1167E0u;
label_1167e0:
    // 0x1167e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1167e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1167e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1167e8: 0x12020011  beq         $s0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1167E8u;
    {
        const bool branch_taken_0x1167e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1167ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1167E8u;
        // 0x1167ec: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1167e8) {
            ctx->pc = 0x116830u;
            goto label_116830;
        }
    }
    ctx->pc = 0x1167F0u;
    // 0x1167f0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1167f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1167f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1167f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1167f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1167f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1167fc: 0xc072818  jal         func_1CA060
    ctx->pc = 0x1167FCu;
    SET_GPR_U32(ctx, 31, 0x116804u);
    ctx->pc = 0x116800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1167FCu;
    // 0x116800: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA060u, 0x1167FCu, 0x116804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116804u;
label_116804:
    // 0x116804: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x116804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116808: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x116808u;
    SET_GPR_U32(ctx, 31, 0x116810u);
    ctx->pc = 0x11680Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116808u;
    // 0x11680c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x116808u, 0x116810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116810u;
label_116810:
    // 0x116810: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x116810u;
    {
        const bool branch_taken_0x116810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116810) {
            ctx->pc = 0x116834u;
            goto label_116834;
        }
    }
    ctx->pc = 0x116818u;
    // 0x116818: 0xc072894  jal         func_1CA250
    ctx->pc = 0x116818u;
    SET_GPR_U32(ctx, 31, 0x116820u);
    ctx->pc = 0x11681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116818u;
    // 0x11681c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA250u, 0x116818u, 0x116820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116820u;
label_116820:
    // 0x116820: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x116820u;
    {
        const bool branch_taken_0x116820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x116820) {
            ctx->pc = 0x116824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116820u;
            // 0x116824: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116834u;
            goto label_116834;
        }
    }
    ctx->pc = 0x116828u;
    // 0x116828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x116828u;
    {
        const bool branch_taken_0x116828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11682Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116828u;
        // 0x11682c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116828) {
            ctx->pc = 0x116834u;
            goto label_116834;
        }
    }
    ctx->pc = 0x116830u;
label_116830:
    // 0x116830: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x116830u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116834:
    // 0x116834: 0x1640ffe8  bnez        $s2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x116834u;
    {
        const bool branch_taken_0x116834 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x116838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116834u;
        // 0x116838: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116834) {
            ctx->pc = 0x1167D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1167d8;
        }
    }
    ctx->pc = 0x11683Cu;
    // 0x11683c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x116840: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x116840u;
    {
        const bool branch_taken_0x116840 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x116844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116840u;
        // 0x116844: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116840) {
            ctx->pc = 0x11685Cu;
            goto label_11685c;
        }
    }
    ctx->pc = 0x116848u;
    // 0x116848: 0x16a00007  bnez        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x116848u;
    {
        const bool branch_taken_0x116848 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x11684Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116848u;
        // 0x11684c: 0x26e20338  addiu       $v0, $s7, 0x338 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116848) {
            ctx->pc = 0x116868u;
            goto label_116868;
        }
    }
    ctx->pc = 0x116850u;
    // 0x116850: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x116850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116854: 0x10b00005  beq         $a1, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x116854u;
    {
        const bool branch_taken_0x116854 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x116858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116854u;
        // 0x116858: 0x27c30328  addiu       $v1, $fp, 0x328 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 808));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116854) {
            ctx->pc = 0x11686Cu;
            goto label_11686c;
        }
    }
    ctx->pc = 0x11685Cu;
label_11685c:
    // 0x11685c: 0xc08db1e  jal         func_236C78
    ctx->pc = 0x11685Cu;
    SET_GPR_U32(ctx, 31, 0x116864u);
    ctx->pc = 0x116860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11685Cu;
    // 0x116860: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236C78u, 0x11685Cu, 0x116864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116864u;
label_116864:
    // 0x116864: 0x26e20338  addiu       $v0, $s7, 0x338
    ctx->pc = 0x116864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 824));
label_116868:
    // 0x116868: 0x27c30328  addiu       $v1, $fp, 0x328
    ctx->pc = 0x116868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 808));
label_11686c:
    // 0x11686c: 0xaec20018  sw          $v0, 0x18($s6)
    ctx->pc = 0x11686cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
    // 0x116870: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x116870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_116874:
    // 0x116874: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x116874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x116878: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x116878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x11687c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x11687cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x116880: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x116880u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x116884: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x116884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x116888: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x116888u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11688c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x11688cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x116890: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x116890u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x116894: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x116894u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x116898: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x116898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x11689c: 0x3e00008  jr          $ra
    ctx->pc = 0x11689Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1168A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11689Cu;
        // 0x1168a0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11689Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1168A4u;
    // 0x1168a4: 0x0  nop
    ctx->pc = 0x1168a4u;
    // NOP
    ctx->pc = 0x1168a8u;
}
