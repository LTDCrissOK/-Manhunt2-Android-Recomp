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

// Function: sub_002207D0
// Address: 0x2207d0 - 0x220eb8
void sub_002207D0_0x2207d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002207D0_0x2207d0");
#endif

    switch (ctx->pc) {
        case 0x220808u: goto label_220808;
        case 0x22081cu: goto label_22081c;
        case 0x220828u: goto label_220828;
        case 0x220830u: goto label_220830;
        case 0x220844u: goto label_220844;
        case 0x220858u: goto label_220858;
        case 0x220864u: goto label_220864;
        case 0x220874u: goto label_220874;
        case 0x220898u: goto label_220898;
        case 0x2208bcu: goto label_2208bc;
        case 0x2208e0u: goto label_2208e0;
        case 0x220904u: goto label_220904;
        case 0x22092cu: goto label_22092c;
        case 0x220938u: goto label_220938;
        case 0x22094cu: goto label_22094c;
        case 0x220960u: goto label_220960;
        case 0x220978u: goto label_220978;
        case 0x22098cu: goto label_22098c;
        case 0x2209a8u: goto label_2209a8;
        case 0x2209bcu: goto label_2209bc;
        case 0x2209d4u: goto label_2209d4;
        case 0x2209e8u: goto label_2209e8;
        case 0x220a00u: goto label_220a00;
        case 0x220a14u: goto label_220a14;
        case 0x220a2cu: goto label_220a2c;
        case 0x220a40u: goto label_220a40;
        case 0x220a58u: goto label_220a58;
        case 0x220a6cu: goto label_220a6c;
        case 0x220a80u: goto label_220a80;
        case 0x220aa4u: goto label_220aa4;
        case 0x220ab8u: goto label_220ab8;
        case 0x220ad0u: goto label_220ad0;
        case 0x220ae4u: goto label_220ae4;
        case 0x220afcu: goto label_220afc;
        case 0x220b1cu: goto label_220b1c;
        case 0x220b58u: goto label_220b58;
        case 0x220b7cu: goto label_220b7c;
        case 0x220bccu: goto label_220bcc;
        case 0x220be8u: goto label_220be8;
        case 0x220c00u: goto label_220c00;
        case 0x220c20u: goto label_220c20;
        case 0x220c38u: goto label_220c38;
        case 0x220c54u: goto label_220c54;
        case 0x220c6cu: goto label_220c6c;
        case 0x220c88u: goto label_220c88;
        case 0x220ca0u: goto label_220ca0;
        case 0x220cbcu: goto label_220cbc;
        case 0x220cd4u: goto label_220cd4;
        case 0x220cf4u: goto label_220cf4;
        case 0x220d0cu: goto label_220d0c;
        case 0x220d28u: goto label_220d28;
        case 0x220d40u: goto label_220d40;
        case 0x220d60u: goto label_220d60;
        case 0x220d78u: goto label_220d78;
        case 0x220d9cu: goto label_220d9c;
        case 0x220db0u: goto label_220db0;
        case 0x220dc4u: goto label_220dc4;
        case 0x220df0u: goto label_220df0;
        case 0x220e04u: goto label_220e04;
        case 0x220e18u: goto label_220e18;
        case 0x220e44u: goto label_220e44;
        case 0x220e58u: goto label_220e58;
        case 0x220e70u: goto label_220e70;
        case 0x220e88u: goto label_220e88;
        case 0x220e98u: goto label_220e98;
        default: break;
    }

    ctx->pc = 0x2207d0u;

    // 0x2207d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2207d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2207d4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x2207d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x2207d8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2207d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x2207dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2207dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207e0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2207e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x2207e4: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2207e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x2207e8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2207e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2207ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2207ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2207f0: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2207f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x2207f4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2207f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2207f8: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x2207f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x2207fc: 0x24a528c8  addiu       $a1, $a1, 0x28C8
    ctx->pc = 0x2207fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10440));
    // 0x220800: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220800u;
    SET_GPR_U32(ctx, 31, 0x220808u);
    ctx->pc = 0x220804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220800u;
    // 0x220804: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220800u, 0x220808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220808u;
label_220808:
    // 0x220808: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22080c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x22080Cu;
    {
        const bool branch_taken_0x22080c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22080Cu;
        // 0x220810: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22080c) {
            ctx->pc = 0x220838u;
            goto label_220838;
        }
    }
    ctx->pc = 0x220814u;
    // 0x220814: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220814u;
    SET_GPR_U32(ctx, 31, 0x22081Cu);
    ctx->pc = 0x220818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220814u;
    // 0x220818: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220814u, 0x22081Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22081Cu;
label_22081c:
    // 0x22081c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x22081cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220820: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220820u;
    SET_GPR_U32(ctx, 31, 0x220828u);
    ctx->pc = 0x220824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220820u;
    // 0x220824: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220820u, 0x220828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220828u;
label_220828:
    // 0x220828: 0xc097844  jal         func_25E110
    ctx->pc = 0x220828u;
    SET_GPR_U32(ctx, 31, 0x220830u);
    ctx->pc = 0x22082Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220828u;
    // 0x22082c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E110u, 0x220828u, 0x220830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220830u;
label_220830:
    // 0x220830: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x220830u;
    {
        const bool branch_taken_0x220830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220830u;
        // 0x220834: 0xae020220  sw          $v0, 0x220($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220830) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x220838u;
label_220838:
    // 0x220838: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22083c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22083Cu;
    SET_GPR_U32(ctx, 31, 0x220844u);
    ctx->pc = 0x220840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22083Cu;
    // 0x220840: 0x24a528e0  addiu       $a1, $a1, 0x28E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22083Cu, 0x220844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220844u;
label_220844:
    // 0x220844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220848: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x220848u;
    {
        const bool branch_taken_0x220848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220848) {
            ctx->pc = 0x22084Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220848u;
            // 0x22084c: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220940u;
            goto label_220940;
        }
    }
    ctx->pc = 0x220850u;
    // 0x220850: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x220850u;
    SET_GPR_U32(ctx, 31, 0x220858u);
    ctx->pc = 0x220854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220850u;
    // 0x220854: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x220850u, 0x220858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220858u;
label_220858:
    // 0x220858: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22085c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x22085Cu;
    SET_GPR_U32(ctx, 31, 0x220864u);
    ctx->pc = 0x220860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22085Cu;
    // 0x220860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x22085Cu, 0x220864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220864u;
label_220864:
    // 0x220864: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220868: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x220868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22086c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x22086Cu;
    SET_GPR_U32(ctx, 31, 0x220874u);
    ctx->pc = 0x220870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22086Cu;
    // 0x220870: 0x24a528f0  addiu       $a1, $a1, 0x28F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x22086Cu, 0x220874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220874u;
label_220874:
    // 0x220874: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220878: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220878u;
    {
        const bool branch_taken_0x220878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220878u;
        // 0x22087c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220878) {
            ctx->pc = 0x220888u;
            goto label_220888;
        }
    }
    ctx->pc = 0x220880u;
    // 0x220880: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x220880u;
    {
        const bool branch_taken_0x220880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220880u;
        // 0x220884: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220880) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x220888u;
label_220888:
    // 0x220888: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22088c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22088cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220890: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220890u;
    SET_GPR_U32(ctx, 31, 0x220898u);
    ctx->pc = 0x220894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220890u;
    // 0x220894: 0x24a528f8  addiu       $a1, $a1, 0x28F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220890u, 0x220898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220898u;
label_220898:
    // 0x220898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22089c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22089Cu;
    {
        const bool branch_taken_0x22089c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22089Cu;
        // 0x2208a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22089c) {
            ctx->pc = 0x2208ACu;
            goto label_2208ac;
        }
    }
    ctx->pc = 0x2208A4u;
    // 0x2208a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2208A4u;
    {
        const bool branch_taken_0x2208a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208A4u;
        // 0x2208a8: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208a4) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x2208ACu;
label_2208ac:
    // 0x2208ac: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2208acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2208b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2208b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208b4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2208B4u;
    SET_GPR_U32(ctx, 31, 0x2208BCu);
    ctx->pc = 0x2208B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208B4u;
    // 0x2208b8: 0x24a52908  addiu       $a1, $a1, 0x2908 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2208B4u, 0x2208BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208BCu;
label_2208bc:
    // 0x2208bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2208bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2208c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2208C0u;
    {
        const bool branch_taken_0x2208c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208C0u;
        // 0x2208c4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208c0) {
            ctx->pc = 0x2208D0u;
            goto label_2208d0;
        }
    }
    ctx->pc = 0x2208C8u;
    // 0x2208c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x2208C8u;
    {
        const bool branch_taken_0x2208c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208C8u;
        // 0x2208cc: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208c8) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x2208D0u;
label_2208d0:
    // 0x2208d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2208d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2208d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2208d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2208D8u;
    SET_GPR_U32(ctx, 31, 0x2208E0u);
    ctx->pc = 0x2208DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208D8u;
    // 0x2208dc: 0x24a52918  addiu       $a1, $a1, 0x2918 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2208D8u, 0x2208E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2208E0u;
label_2208e0:
    // 0x2208e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2208e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2208e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2208E4u;
    {
        const bool branch_taken_0x2208e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208E4u;
        // 0x2208e8: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208e4) {
            ctx->pc = 0x2208F4u;
            goto label_2208f4;
        }
    }
    ctx->pc = 0x2208ECu;
    // 0x2208ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2208ECu;
    {
        const bool branch_taken_0x2208ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2208F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2208ECu;
        // 0x2208f0: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2208ec) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x2208F4u;
label_2208f4:
    // 0x2208f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2208f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2208f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2208f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2208fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2208FCu;
    SET_GPR_U32(ctx, 31, 0x220904u);
    ctx->pc = 0x220900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2208FCu;
    // 0x220900: 0x24a52928  addiu       $a1, $a1, 0x2928 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2208FCu, 0x220904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220904u;
label_220904:
    // 0x220904: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220908: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220908u;
    {
        const bool branch_taken_0x220908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220908u;
        // 0x22090c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220908) {
            ctx->pc = 0x220918u;
            goto label_220918;
        }
    }
    ctx->pc = 0x220910u;
    // 0x220910: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x220910u;
    {
        const bool branch_taken_0x220910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220910u;
        // 0x220914: 0xae020224  sw          $v0, 0x224($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220910) {
            ctx->pc = 0x22092Cu;
            goto label_22092c;
        }
    }
    ctx->pc = 0x220918u;
label_220918:
    // 0x220918: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22091c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x22091cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x220920: 0x24a52930  addiu       $a1, $a1, 0x2930
    ctx->pc = 0x220920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10544));
    // 0x220924: 0xc0efefa  jal         func_3BFBE8
    ctx->pc = 0x220924u;
    SET_GPR_U32(ctx, 31, 0x22092Cu);
    ctx->pc = 0x220928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220924u;
    // 0x220928: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BFBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BFBE8u, 0x220924u, 0x22092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22092Cu;
label_22092c:
    // 0x22092c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22092cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220930: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x220930u;
    SET_GPR_U32(ctx, 31, 0x220938u);
    ctx->pc = 0x220934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220930u;
    // 0x220934: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x220930u, 0x220938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220938u;
label_220938:
    // 0x220938: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x220938u;
    {
        const bool branch_taken_0x220938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220938u;
        // 0x22093c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220938) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220940u;
label_220940:
    // 0x220940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220944: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220944u;
    SET_GPR_U32(ctx, 31, 0x22094Cu);
    ctx->pc = 0x220948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220944u;
    // 0x220948: 0x24a52958  addiu       $a1, $a1, 0x2958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220944u, 0x22094Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22094Cu;
label_22094c:
    // 0x22094c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x22094cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220950: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220950u;
    {
        const bool branch_taken_0x220950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220950u;
        // 0x220954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220950) {
            ctx->pc = 0x220968u;
            goto label_220968;
        }
    }
    ctx->pc = 0x220958u;
    // 0x220958: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220958u;
    SET_GPR_U32(ctx, 31, 0x220960u);
    ctx->pc = 0x22095Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220958u;
    // 0x22095c: 0x26050228  addiu       $a1, $s0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220958u, 0x220960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220960u;
label_220960:
    // 0x220960: 0x1000014e  b           . + 4 + (0x14E << 2)
    ctx->pc = 0x220960u;
    {
        const bool branch_taken_0x220960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220960u;
        // 0x220964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220960) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220968u;
label_220968:
    // 0x220968: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x22096c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22096cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220970: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220970u;
    SET_GPR_U32(ctx, 31, 0x220978u);
    ctx->pc = 0x220974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220970u;
    // 0x220974: 0x24a52968  addiu       $a1, $a1, 0x2968 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220970u, 0x220978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220978u;
label_220978:
    // 0x220978: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x22097c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22097Cu;
    {
        const bool branch_taken_0x22097c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22097Cu;
        // 0x220980: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22097c) {
            ctx->pc = 0x220994u;
            goto label_220994;
        }
    }
    ctx->pc = 0x220984u;
    // 0x220984: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220984u;
    SET_GPR_U32(ctx, 31, 0x22098Cu);
    ctx->pc = 0x220988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220984u;
    // 0x220988: 0x260502e4  addiu       $a1, $s0, 0x2E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 740));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220984u, 0x22098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22098Cu;
label_22098c:
    // 0x22098c: 0x10000143  b           . + 4 + (0x143 << 2)
    ctx->pc = 0x22098Cu;
    {
        const bool branch_taken_0x22098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22098Cu;
        // 0x220990: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22098c) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220994u;
label_220994:
    // 0x220994: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x220994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x220998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22099c: 0x24532978  addiu       $s3, $v0, 0x2978
    ctx->pc = 0x22099cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 10616));
    // 0x2209a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2209A0u;
    SET_GPR_U32(ctx, 31, 0x2209A8u);
    ctx->pc = 0x2209A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209A0u;
    // 0x2209a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2209A0u, 0x2209A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209A8u;
label_2209a8:
    // 0x2209a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2209a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2209ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2209ACu;
    {
        const bool branch_taken_0x2209ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209ACu;
        // 0x2209b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209ac) {
            ctx->pc = 0x2209C4u;
            goto label_2209c4;
        }
    }
    ctx->pc = 0x2209B4u;
    // 0x2209b4: 0xc09e056  jal         func_278158
    ctx->pc = 0x2209B4u;
    SET_GPR_U32(ctx, 31, 0x2209BCu);
    ctx->pc = 0x2209B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209B4u;
    // 0x2209b8: 0x26050244  addiu       $a1, $s0, 0x244 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 580));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x2209B4u, 0x2209BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209BCu;
label_2209bc:
    // 0x2209bc: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x2209BCu;
    {
        const bool branch_taken_0x2209bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209BCu;
        // 0x2209c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209bc) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x2209C4u;
label_2209c4:
    // 0x2209c4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2209c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2209c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2209c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209cc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2209CCu;
    SET_GPR_U32(ctx, 31, 0x2209D4u);
    ctx->pc = 0x2209D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209CCu;
    // 0x2209d0: 0x24a52988  addiu       $a1, $a1, 0x2988 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2209CCu, 0x2209D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209D4u;
label_2209d4:
    // 0x2209d4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2209d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2209d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2209D8u;
    {
        const bool branch_taken_0x2209d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209D8u;
        // 0x2209dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209d8) {
            ctx->pc = 0x2209F0u;
            goto label_2209f0;
        }
    }
    ctx->pc = 0x2209E0u;
    // 0x2209e0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x2209E0u;
    SET_GPR_U32(ctx, 31, 0x2209E8u);
    ctx->pc = 0x2209E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209E0u;
    // 0x2209e4: 0x26050248  addiu       $a1, $s0, 0x248 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x2209E0u, 0x2209E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2209E8u;
label_2209e8:
    // 0x2209e8: 0x1000012c  b           . + 4 + (0x12C << 2)
    ctx->pc = 0x2209E8u;
    {
        const bool branch_taken_0x2209e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2209ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2209E8u;
        // 0x2209ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2209e8) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x2209F0u;
label_2209f0:
    // 0x2209f0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2209f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x2209f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2209f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2209f8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x2209F8u;
    SET_GPR_U32(ctx, 31, 0x220A00u);
    ctx->pc = 0x2209FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2209F8u;
    // 0x2209fc: 0x24a52998  addiu       $a1, $a1, 0x2998 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2209F8u, 0x220A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A00u;
label_220a00:
    // 0x220a00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220a04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A04u;
    {
        const bool branch_taken_0x220a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A04u;
        // 0x220a08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a04) {
            ctx->pc = 0x220A1Cu;
            goto label_220a1c;
        }
    }
    ctx->pc = 0x220A0Cu;
    // 0x220a0c: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220A0Cu;
    SET_GPR_U32(ctx, 31, 0x220A14u);
    ctx->pc = 0x220A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A0Cu;
    // 0x220a10: 0x26050234  addiu       $a1, $s0, 0x234 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220A0Cu, 0x220A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A14u;
label_220a14:
    // 0x220a14: 0x10000121  b           . + 4 + (0x121 << 2)
    ctx->pc = 0x220A14u;
    {
        const bool branch_taken_0x220a14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A14u;
        // 0x220a18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a14) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220A1Cu;
label_220a1c:
    // 0x220a1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220a20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220A24u;
    SET_GPR_U32(ctx, 31, 0x220A2Cu);
    ctx->pc = 0x220A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A24u;
    // 0x220a28: 0x24a529a8  addiu       $a1, $a1, 0x29A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220A24u, 0x220A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A2Cu;
label_220a2c:
    // 0x220a2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220a30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A30u;
    {
        const bool branch_taken_0x220a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A30u;
        // 0x220a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a30) {
            ctx->pc = 0x220A48u;
            goto label_220a48;
        }
    }
    ctx->pc = 0x220A38u;
    // 0x220a38: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220A38u;
    SET_GPR_U32(ctx, 31, 0x220A40u);
    ctx->pc = 0x220A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A38u;
    // 0x220a3c: 0x2605023c  addiu       $a1, $s0, 0x23C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 572));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220A38u, 0x220A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A40u;
label_220a40:
    // 0x220a40: 0x10000116  b           . + 4 + (0x116 << 2)
    ctx->pc = 0x220A40u;
    {
        const bool branch_taken_0x220a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A40u;
        // 0x220a44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a40) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220A48u;
label_220a48:
    // 0x220a48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220a4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220A50u;
    SET_GPR_U32(ctx, 31, 0x220A58u);
    ctx->pc = 0x220A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A50u;
    // 0x220a54: 0x24a529b8  addiu       $a1, $a1, 0x29B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220A50u, 0x220A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A58u;
label_220a58:
    // 0x220a58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220a5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220A5Cu;
    {
        const bool branch_taken_0x220a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A5Cu;
        // 0x220a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a5c) {
            ctx->pc = 0x220A74u;
            goto label_220a74;
        }
    }
    ctx->pc = 0x220A64u;
    // 0x220a64: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220A64u;
    SET_GPR_U32(ctx, 31, 0x220A6Cu);
    ctx->pc = 0x220A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A64u;
    // 0x220a68: 0x26050250  addiu       $a1, $s0, 0x250 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220A64u, 0x220A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A6Cu;
label_220a6c:
    // 0x220a6c: 0x1000010b  b           . + 4 + (0x10B << 2)
    ctx->pc = 0x220A6Cu;
    {
        const bool branch_taken_0x220a6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A6Cu;
        // 0x220a70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a6c) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220A74u;
label_220a74:
    // 0x220a74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x220a74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a78: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220A78u;
    SET_GPR_U32(ctx, 31, 0x220A80u);
    ctx->pc = 0x220A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A78u;
    // 0x220a7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220A78u, 0x220A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220A80u;
label_220a80:
    // 0x220a80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220a84: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220A84u;
    {
        const bool branch_taken_0x220a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A84u;
        // 0x220a88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a84) {
            ctx->pc = 0x220A94u;
            goto label_220a94;
        }
    }
    ctx->pc = 0x220A8Cu;
    // 0x220a8c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x220A8Cu;
    {
        const bool branch_taken_0x220a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220A8Cu;
        // 0x220a90: 0xae020244  sw          $v0, 0x244($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 580), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220a8c) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220A94u;
label_220a94:
    // 0x220a94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220a98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220a9c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220A9Cu;
    SET_GPR_U32(ctx, 31, 0x220AA4u);
    ctx->pc = 0x220AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220A9Cu;
    // 0x220aa0: 0x24a529c8  addiu       $a1, $a1, 0x29C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220A9Cu, 0x220AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AA4u;
label_220aa4:
    // 0x220aa4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220aa8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220AA8u;
    {
        const bool branch_taken_0x220aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AA8u;
        // 0x220aac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220aa8) {
            ctx->pc = 0x220AC0u;
            goto label_220ac0;
        }
    }
    ctx->pc = 0x220AB0u;
    // 0x220ab0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220AB0u;
    SET_GPR_U32(ctx, 31, 0x220AB8u);
    ctx->pc = 0x220AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220AB0u;
    // 0x220ab4: 0x2605024c  addiu       $a1, $s0, 0x24C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 588));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220AB0u, 0x220AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AB8u;
label_220ab8:
    // 0x220ab8: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x220AB8u;
    {
        const bool branch_taken_0x220ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AB8u;
        // 0x220abc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ab8) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220AC0u;
label_220ac0:
    // 0x220ac0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220ac0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220ac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220ac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ac8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220AC8u;
    SET_GPR_U32(ctx, 31, 0x220AD0u);
    ctx->pc = 0x220ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220AC8u;
    // 0x220acc: 0x24a529d8  addiu       $a1, $a1, 0x29D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220AC8u, 0x220AD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AD0u;
label_220ad0:
    // 0x220ad0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220ad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220ad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220AD4u;
    {
        const bool branch_taken_0x220ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AD4u;
        // 0x220ad8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ad4) {
            ctx->pc = 0x220AECu;
            goto label_220aec;
        }
    }
    ctx->pc = 0x220ADCu;
    // 0x220adc: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220ADCu;
    SET_GPR_U32(ctx, 31, 0x220AE4u);
    ctx->pc = 0x220AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220ADCu;
    // 0x220ae0: 0x26050254  addiu       $a1, $s0, 0x254 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 596));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220ADCu, 0x220AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AE4u;
label_220ae4:
    // 0x220ae4: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x220AE4u;
    {
        const bool branch_taken_0x220ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220AE4u;
        // 0x220ae8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ae4) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220AECu;
label_220aec:
    // 0x220aec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220aecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220af0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220af4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220AF4u;
    SET_GPR_U32(ctx, 31, 0x220AFCu);
    ctx->pc = 0x220AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220AF4u;
    // 0x220af8: 0x24a529f0  addiu       $a1, $a1, 0x29F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220AF4u, 0x220AFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220AFCu;
label_220afc:
    // 0x220afc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220b00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x220B00u;
    {
        const bool branch_taken_0x220b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B00u;
        // 0x220b04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b00) {
            ctx->pc = 0x220B48u;
            goto label_220b48;
        }
    }
    ctx->pc = 0x220B08u;
    // 0x220b08: 0x26110270  addiu       $s1, $s0, 0x270
    ctx->pc = 0x220b08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x220b0c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b10: 0x26060274  addiu       $a2, $s0, 0x274
    ctx->pc = 0x220b10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 628));
    // 0x220b14: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220B14u;
    SET_GPR_U32(ctx, 31, 0x220B1Cu);
    ctx->pc = 0x220B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B14u;
    // 0x220b18: 0x26070278  addiu       $a3, $s0, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220B14u, 0x220B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B1Cu;
label_220b1c:
    // 0x220b1c: 0x3c030046  lui         $v1, 0x46
    ctx->pc = 0x220b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
    // 0x220b20: 0xc6010290  lwc1        $f1, 0x290($s0)
    ctx->pc = 0x220b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220b24: 0xc4602b34  lwc1        $f0, 0x2B34($v1)
    ctx->pc = 0x220b24u;
    { uint32_t bits = FAST_READ32(0x462B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220b28: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x220b28u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220b2c: 0x0  nop
    ctx->pc = 0x220b2cu;
    // NOP
    // 0x220b30: 0x450000da  bc1f        . + 4 + (0xDA << 2)
    ctx->pc = 0x220B30u;
    {
        const bool branch_taken_0x220b30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B30u;
        // 0x220b34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b30) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220B38u;
    // 0x220b38: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x220b38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x220b3c: 0xfa010290  sqc2        $vf1, 0x290($s0)
    ctx->pc = 0x220b3cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 656), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x220b40: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x220B40u;
    {
        const bool branch_taken_0x220b40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B40u;
        // 0x220b44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b40) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220B48u;
label_220b48:
    // 0x220b48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220b4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220B50u;
    SET_GPR_U32(ctx, 31, 0x220B58u);
    ctx->pc = 0x220B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B50u;
    // 0x220b54: 0x24a52a08  addiu       $a1, $a1, 0x2A08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220B50u, 0x220B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B58u;
label_220b58:
    // 0x220b58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220b5c: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x220B5Cu;
    {
        const bool branch_taken_0x220b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B5Cu;
        // 0x220b60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b5c) {
            ctx->pc = 0x220BBCu;
            goto label_220bbc;
        }
    }
    ctx->pc = 0x220B64u;
    // 0x220b64: 0x26110260  addiu       $s1, $s0, 0x260
    ctx->pc = 0x220b64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 608));
    // 0x220b68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x220b68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220b6c: 0x26060264  addiu       $a2, $s0, 0x264
    ctx->pc = 0x220b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 612));
    // 0x220b70: 0x26070268  addiu       $a3, $s0, 0x268
    ctx->pc = 0x220b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 616));
    // 0x220b74: 0xc09df8e  jal         func_277E38
    ctx->pc = 0x220B74u;
    SET_GPR_U32(ctx, 31, 0x220B7Cu);
    ctx->pc = 0x220B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220B74u;
    // 0x220b78: 0x2608026c  addiu       $t0, $s0, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x220B74u, 0x220B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220B7Cu;
label_220b7c:
    // 0x220b7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x220b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x220b80: 0xc6010280  lwc1        $f1, 0x280($s0)
    ctx->pc = 0x220b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220b84: 0xc4402b34  lwc1        $f0, 0x2B34($v0)
    ctx->pc = 0x220b84u;
    { uint32_t bits = FAST_READ32(0x462B34u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220b88: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x220b88u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x220b8c: 0x0  nop
    ctx->pc = 0x220b8cu;
    // NOP
    // 0x220b90: 0x450000c1  bc1f        . + 4 + (0xC1 << 2)
    ctx->pc = 0x220B90u;
    {
        const bool branch_taken_0x220b90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x220B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220B90u;
        // 0x220b94: 0x26020280  addiu       $v0, $s0, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220b90) {
            ctx->pc = 0x220E98u;
            goto label_220e98;
        }
    }
    ctx->pc = 0x220B98u;
    // 0x220b98: 0xc6010260  lwc1        $f1, 0x260($s0)
    ctx->pc = 0x220b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220b9c: 0xe6010280  swc1        $f1, 0x280($s0)
    ctx->pc = 0x220b9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 640), bits); }
    // 0x220ba0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x220ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220ba4: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x220ba4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x220ba8: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x220ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220bac: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x220bacu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x220bb0: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x220bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220bb4: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x220BB4u;
    {
        const bool branch_taken_0x220bb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BB4u;
        // 0x220bb8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bb4) {
            ctx->pc = 0x220E98u;
            goto label_220e98;
        }
    }
    ctx->pc = 0x220BBCu;
label_220bbc:
    // 0x220bbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220bc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220BC4u;
    SET_GPR_U32(ctx, 31, 0x220BCCu);
    ctx->pc = 0x220BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BC4u;
    // 0x220bc8: 0x24a52a20  addiu       $a1, $a1, 0x2A20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220BC4u, 0x220BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BCCu;
label_220bcc:
    // 0x220bcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220bd0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220BD0u;
    {
        const bool branch_taken_0x220bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BD0u;
        // 0x220bd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220bd0) {
            ctx->pc = 0x220BF0u;
            goto label_220bf0;
        }
    }
    ctx->pc = 0x220BD8u;
    // 0x220bd8: 0x26070298  addiu       $a3, $s0, 0x298
    ctx->pc = 0x220bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 664));
    // 0x220bdc: 0x26050290  addiu       $a1, $s0, 0x290
    ctx->pc = 0x220bdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 656));
    // 0x220be0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220BE0u;
    SET_GPR_U32(ctx, 31, 0x220BE8u);
    ctx->pc = 0x220BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BE0u;
    // 0x220be4: 0x26060294  addiu       $a2, $s0, 0x294 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 660));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220BE0u, 0x220BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220BE8u;
label_220be8:
    // 0x220be8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x220BE8u;
    {
        const bool branch_taken_0x220be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220BE8u;
        // 0x220bec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220be8) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220BF0u;
label_220bf0:
    // 0x220bf0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220bf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220bf8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220BF8u;
    SET_GPR_U32(ctx, 31, 0x220C00u);
    ctx->pc = 0x220BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220BF8u;
    // 0x220bfc: 0x24a52a40  addiu       $a1, $a1, 0x2A40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220BF8u, 0x220C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C00u;
label_220c00:
    // 0x220c00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220c04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220C04u;
    {
        const bool branch_taken_0x220c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C04u;
        // 0x220c08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c04) {
            ctx->pc = 0x220C28u;
            goto label_220c28;
        }
    }
    ctx->pc = 0x220C0Cu;
    // 0x220c0c: 0x2608028c  addiu       $t0, $s0, 0x28C
    ctx->pc = 0x220c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 652));
    // 0x220c10: 0x26050280  addiu       $a1, $s0, 0x280
    ctx->pc = 0x220c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    // 0x220c14: 0x26060284  addiu       $a2, $s0, 0x284
    ctx->pc = 0x220c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 644));
    // 0x220c18: 0xc09df8e  jal         func_277E38
    ctx->pc = 0x220C18u;
    SET_GPR_U32(ctx, 31, 0x220C20u);
    ctx->pc = 0x220C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C18u;
    // 0x220c1c: 0x26070288  addiu       $a3, $s0, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x220C18u, 0x220C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C20u;
label_220c20:
    // 0x220c20: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x220C20u;
    {
        const bool branch_taken_0x220c20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C20u;
        // 0x220c24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c20) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220C28u;
label_220c28:
    // 0x220c28: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220c28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220c2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c30: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220C30u;
    SET_GPR_U32(ctx, 31, 0x220C38u);
    ctx->pc = 0x220C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C30u;
    // 0x220c34: 0x24a52a58  addiu       $a1, $a1, 0x2A58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220C30u, 0x220C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C38u;
label_220c38:
    // 0x220c38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220c3c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220C3Cu;
    {
        const bool branch_taken_0x220c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C3Cu;
        // 0x220c40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c3c) {
            ctx->pc = 0x220C5Cu;
            goto label_220c5c;
        }
    }
    ctx->pc = 0x220C44u;
    // 0x220c44: 0x26070338  addiu       $a3, $s0, 0x338
    ctx->pc = 0x220c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 824));
    // 0x220c48: 0x26050330  addiu       $a1, $s0, 0x330
    ctx->pc = 0x220c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 816));
    // 0x220c4c: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220C4Cu;
    SET_GPR_U32(ctx, 31, 0x220C54u);
    ctx->pc = 0x220C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C4Cu;
    // 0x220c50: 0x26060334  addiu       $a2, $s0, 0x334 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 820));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220C4Cu, 0x220C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C54u;
label_220c54:
    // 0x220c54: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x220C54u;
    {
        const bool branch_taken_0x220c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C54u;
        // 0x220c58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c54) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220C5Cu;
label_220c5c:
    // 0x220c5c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220c60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220c60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c64: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220C64u;
    SET_GPR_U32(ctx, 31, 0x220C6Cu);
    ctx->pc = 0x220C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C64u;
    // 0x220c68: 0x24a52a70  addiu       $a1, $a1, 0x2A70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220C64u, 0x220C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C6Cu;
label_220c6c:
    // 0x220c6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220c70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220C70u;
    {
        const bool branch_taken_0x220c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C70u;
        // 0x220c74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c70) {
            ctx->pc = 0x220C90u;
            goto label_220c90;
        }
    }
    ctx->pc = 0x220C78u;
    // 0x220c78: 0x26070328  addiu       $a3, $s0, 0x328
    ctx->pc = 0x220c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 808));
    // 0x220c7c: 0x26050320  addiu       $a1, $s0, 0x320
    ctx->pc = 0x220c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x220c80: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220C80u;
    SET_GPR_U32(ctx, 31, 0x220C88u);
    ctx->pc = 0x220C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C80u;
    // 0x220c84: 0x26060324  addiu       $a2, $s0, 0x324 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220C80u, 0x220C88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220C88u;
label_220c88:
    // 0x220c88: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x220C88u;
    {
        const bool branch_taken_0x220c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220C88u;
        // 0x220c8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220c88) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220C90u;
label_220c90:
    // 0x220c90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220c90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220c94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220c98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220C98u;
    SET_GPR_U32(ctx, 31, 0x220CA0u);
    ctx->pc = 0x220C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220C98u;
    // 0x220c9c: 0x24a52a88  addiu       $a1, $a1, 0x2A88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10888));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220C98u, 0x220CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CA0u;
label_220ca0:
    // 0x220ca0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220ca4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220CA4u;
    {
        const bool branch_taken_0x220ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CA4u;
        // 0x220ca8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ca4) {
            ctx->pc = 0x220CC4u;
            goto label_220cc4;
        }
    }
    ctx->pc = 0x220CACu;
    // 0x220cac: 0x260702b8  addiu       $a3, $s0, 0x2B8
    ctx->pc = 0x220cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 696));
    // 0x220cb0: 0x260502b0  addiu       $a1, $s0, 0x2B0
    ctx->pc = 0x220cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x220cb4: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220CB4u;
    SET_GPR_U32(ctx, 31, 0x220CBCu);
    ctx->pc = 0x220CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CB4u;
    // 0x220cb8: 0x260602b4  addiu       $a2, $s0, 0x2B4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 692));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220CB4u, 0x220CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CBCu;
label_220cbc:
    // 0x220cbc: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x220CBCu;
    {
        const bool branch_taken_0x220cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CBCu;
        // 0x220cc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cbc) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220CC4u;
label_220cc4:
    // 0x220cc4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220cc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220cc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220cc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220ccc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220CCCu;
    SET_GPR_U32(ctx, 31, 0x220CD4u);
    ctx->pc = 0x220CD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CCCu;
    // 0x220cd0: 0x24a52aa0  addiu       $a1, $a1, 0x2AA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220CCCu, 0x220CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CD4u;
label_220cd4:
    // 0x220cd4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220cd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220cd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220CD8u;
    {
        const bool branch_taken_0x220cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CD8u;
        // 0x220cdc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cd8) {
            ctx->pc = 0x220CFCu;
            goto label_220cfc;
        }
    }
    ctx->pc = 0x220CE0u;
    // 0x220ce0: 0x260802ac  addiu       $t0, $s0, 0x2AC
    ctx->pc = 0x220ce0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 684));
    // 0x220ce4: 0x260502a0  addiu       $a1, $s0, 0x2A0
    ctx->pc = 0x220ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 672));
    // 0x220ce8: 0x260602a4  addiu       $a2, $s0, 0x2A4
    ctx->pc = 0x220ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 676));
    // 0x220cec: 0xc09df8e  jal         func_277E38
    ctx->pc = 0x220CECu;
    SET_GPR_U32(ctx, 31, 0x220CF4u);
    ctx->pc = 0x220CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220CECu;
    // 0x220cf0: 0x260702a8  addiu       $a3, $s0, 0x2A8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x220CECu, 0x220CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220CF4u;
label_220cf4:
    // 0x220cf4: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x220CF4u;
    {
        const bool branch_taken_0x220cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220CF4u;
        // 0x220cf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220cf4) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220CFCu;
label_220cfc:
    // 0x220cfc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220cfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220d00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220D04u;
    SET_GPR_U32(ctx, 31, 0x220D0Cu);
    ctx->pc = 0x220D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D04u;
    // 0x220d08: 0x24a52ab0  addiu       $a1, $a1, 0x2AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220D04u, 0x220D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D0Cu;
label_220d0c:
    // 0x220d0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220d10: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x220D10u;
    {
        const bool branch_taken_0x220d10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D10u;
        // 0x220d14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d10) {
            ctx->pc = 0x220D30u;
            goto label_220d30;
        }
    }
    ctx->pc = 0x220D18u;
    // 0x220d18: 0x260702d8  addiu       $a3, $s0, 0x2D8
    ctx->pc = 0x220d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 728));
    // 0x220d1c: 0x260502d0  addiu       $a1, $s0, 0x2D0
    ctx->pc = 0x220d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x220d20: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220D20u;
    SET_GPR_U32(ctx, 31, 0x220D28u);
    ctx->pc = 0x220D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D20u;
    // 0x220d24: 0x260602d4  addiu       $a2, $s0, 0x2D4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 724));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220D20u, 0x220D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D28u;
label_220d28:
    // 0x220d28: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x220D28u;
    {
        const bool branch_taken_0x220d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D28u;
        // 0x220d2c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d28) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220D30u;
label_220d30:
    // 0x220d30: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220d30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220d34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d38: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220D38u;
    SET_GPR_U32(ctx, 31, 0x220D40u);
    ctx->pc = 0x220D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D38u;
    // 0x220d3c: 0x24a52ac8  addiu       $a1, $a1, 0x2AC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220D38u, 0x220D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D40u;
label_220d40:
    // 0x220d40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220d44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x220D44u;
    {
        const bool branch_taken_0x220d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D44u;
        // 0x220d48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d44) {
            ctx->pc = 0x220D68u;
            goto label_220d68;
        }
    }
    ctx->pc = 0x220D4Cu;
    // 0x220d4c: 0x260802cc  addiu       $t0, $s0, 0x2CC
    ctx->pc = 0x220d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x220d50: 0x260502c0  addiu       $a1, $s0, 0x2C0
    ctx->pc = 0x220d50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x220d54: 0x260602c4  addiu       $a2, $s0, 0x2C4
    ctx->pc = 0x220d54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x220d58: 0xc09df8e  jal         func_277E38
    ctx->pc = 0x220D58u;
    SET_GPR_U32(ctx, 31, 0x220D60u);
    ctx->pc = 0x220D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D58u;
    // 0x220d5c: 0x260702c8  addiu       $a3, $s0, 0x2C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 712));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x220D58u, 0x220D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D60u;
label_220d60:
    // 0x220d60: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x220D60u;
    {
        const bool branch_taken_0x220d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D60u;
        // 0x220d64: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d60) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220D68u;
label_220d68:
    // 0x220d68: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d70: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220D70u;
    SET_GPR_U32(ctx, 31, 0x220D78u);
    ctx->pc = 0x220D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D70u;
    // 0x220d74: 0x24a52ad8  addiu       $a1, $a1, 0x2AD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10968));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220D70u, 0x220D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D78u;
label_220d78:
    // 0x220d78: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220d7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x220D7Cu;
    {
        const bool branch_taken_0x220d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D7Cu;
        // 0x220d80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d7c) {
            ctx->pc = 0x220D8Cu;
            goto label_220d8c;
        }
    }
    ctx->pc = 0x220D84u;
    // 0x220d84: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x220D84u;
    {
        const bool branch_taken_0x220d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220D84u;
        // 0x220d88: 0xae0202e0  sw          $v0, 0x2E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220d84) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220D8Cu;
label_220d8c:
    // 0x220d8c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220d90: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220d94: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220D94u;
    SET_GPR_U32(ctx, 31, 0x220D9Cu);
    ctx->pc = 0x220D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220D94u;
    // 0x220d98: 0x24a52ae8  addiu       $a1, $a1, 0x2AE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 10984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220D94u, 0x220D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220D9Cu;
label_220d9c:
    // 0x220d9c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220da0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x220DA0u;
    {
        const bool branch_taken_0x220da0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DA0u;
        // 0x220da4: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220da0) {
            ctx->pc = 0x220DE4u;
            goto label_220de4;
        }
    }
    ctx->pc = 0x220DA8u;
    // 0x220da8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x220DA8u;
    SET_GPR_U32(ctx, 31, 0x220DB0u);
    ctx->pc = 0x220DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DA8u;
    // 0x220dac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x220DA8u, 0x220DB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DB0u;
label_220db0:
    // 0x220db0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220db4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220db8: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x220db8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x220dbc: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220DBCu;
    SET_GPR_U32(ctx, 31, 0x220DC4u);
    ctx->pc = 0x220DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DBCu;
    // 0x220dc0: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220DBCu, 0x220DC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DC4u;
label_220dc4:
    // 0x220dc4: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x220dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220dc8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x220dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220dcc: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x220dccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x220dd0: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x220dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220dd4: 0xe60202f0  swc1        $f2, 0x2F0($s0)
    ctx->pc = 0x220dd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 752), bits); }
    // 0x220dd8: 0xe60102f4  swc1        $f1, 0x2F4($s0)
    ctx->pc = 0x220dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 756), bits); }
    // 0x220ddc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x220DDCu;
    {
        const bool branch_taken_0x220ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DDCu;
        // 0x220de0: 0xe60002f8  swc1        $f0, 0x2F8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220ddc) {
            ctx->pc = 0x220E98u;
            goto label_220e98;
        }
    }
    ctx->pc = 0x220DE4u;
label_220de4:
    // 0x220de4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220de8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220DE8u;
    SET_GPR_U32(ctx, 31, 0x220DF0u);
    ctx->pc = 0x220DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DE8u;
    // 0x220dec: 0x24a52af8  addiu       $a1, $a1, 0x2AF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220DE8u, 0x220DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220DF0u;
label_220df0:
    // 0x220df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220df4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x220DF4u;
    {
        const bool branch_taken_0x220df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220DF4u;
        // 0x220df8: 0x3c050046  lui         $a1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220df4) {
            ctx->pc = 0x220E38u;
            goto label_220e38;
        }
    }
    ctx->pc = 0x220DFCu;
    // 0x220dfc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x220DFCu;
    SET_GPR_U32(ctx, 31, 0x220E04u);
    ctx->pc = 0x220E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220DFCu;
    // 0x220e00: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x220DFCu, 0x220E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E04u;
label_220e04:
    // 0x220e04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220e04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x220e08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e0c: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x220e0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x220e10: 0xc09df62  jal         func_277D88
    ctx->pc = 0x220E10u;
    SET_GPR_U32(ctx, 31, 0x220E18u);
    ctx->pc = 0x220E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E10u;
    // 0x220e14: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x220E10u, 0x220E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E18u;
label_220e18:
    // 0x220e18: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x220e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x220e1c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x220e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x220e20: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x220e20u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x220e24: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x220e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x220e28: 0xe6020300  swc1        $f2, 0x300($s0)
    ctx->pc = 0x220e28u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 768), bits); }
    // 0x220e2c: 0xe6010304  swc1        $f1, 0x304($s0)
    ctx->pc = 0x220e2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 772), bits); }
    // 0x220e30: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x220E30u;
    {
        const bool branch_taken_0x220e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E30u;
        // 0x220e34: 0xe6000308  swc1        $f0, 0x308($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 776), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e30) {
            ctx->pc = 0x220E98u;
            goto label_220e98;
        }
    }
    ctx->pc = 0x220E38u;
label_220e38:
    // 0x220e38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e3c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220E3Cu;
    SET_GPR_U32(ctx, 31, 0x220E44u);
    ctx->pc = 0x220E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E3Cu;
    // 0x220e40: 0x24a52b10  addiu       $a1, $a1, 0x2B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220E3Cu, 0x220E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E44u;
label_220e44:
    // 0x220e44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220e48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x220E48u;
    {
        const bool branch_taken_0x220e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E48u;
        // 0x220e4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e48) {
            ctx->pc = 0x220E60u;
            goto label_220e60;
        }
    }
    ctx->pc = 0x220E50u;
    // 0x220e50: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x220E50u;
    SET_GPR_U32(ctx, 31, 0x220E58u);
    ctx->pc = 0x220E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E50u;
    // 0x220e54: 0x26050310  addiu       $a1, $s0, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x220E50u, 0x220E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E58u;
label_220e58:
    // 0x220e58: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x220E58u;
    {
        const bool branch_taken_0x220e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E58u;
        // 0x220e5c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e58) {
            ctx->pc = 0x220E9Cu;
            goto label_220e9c;
        }
    }
    ctx->pc = 0x220E60u;
label_220e60:
    // 0x220e60: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x220e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x220e64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x220e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e68: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x220E68u;
    SET_GPR_U32(ctx, 31, 0x220E70u);
    ctx->pc = 0x220E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E68u;
    // 0x220e6c: 0x24a52b20  addiu       $a1, $a1, 0x2B20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x220E68u, 0x220E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E70u;
label_220e70:
    // 0x220e70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x220e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x220e74: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x220E74u;
    {
        const bool branch_taken_0x220e74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E74u;
        // 0x220e78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e74) {
            ctx->pc = 0x220E90u;
            goto label_220e90;
        }
    }
    ctx->pc = 0x220E7Cu;
    // 0x220e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x220e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x220e80: 0xc0889bc  jal         func_2226F0
    ctx->pc = 0x220E80u;
    SET_GPR_U32(ctx, 31, 0x220E88u);
    ctx->pc = 0x220E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E80u;
    // 0x220e84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2226F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2226F0u, 0x220E80u, 0x220E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E88u;
label_220e88:
    // 0x220e88: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x220E88u;
    {
        const bool branch_taken_0x220e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x220E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220E88u;
        // 0x220e8c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220e88) {
            ctx->pc = 0x220EA0u;
            goto label_220ea0;
        }
    }
    ctx->pc = 0x220E90u;
label_220e90:
    // 0x220e90: 0xc09e1e8  jal         func_2787A0
    ctx->pc = 0x220E90u;
    SET_GPR_U32(ctx, 31, 0x220E98u);
    ctx->pc = 0x220E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x220E90u;
    // 0x220e94: 0x26050314  addiu       $a1, $s0, 0x314 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 788));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x220E90u, 0x220E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x220E98u;
label_220e98:
    // 0x220e98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x220e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220e9c:
    // 0x220e9c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x220e9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_220ea0:
    // 0x220ea0: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x220ea0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x220ea4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x220ea4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x220ea8: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x220ea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x220eac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x220eacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x220eb0: 0x3e00008  jr          $ra
    ctx->pc = 0x220EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220EB0u;
        // 0x220eb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x220EB8u;
}
