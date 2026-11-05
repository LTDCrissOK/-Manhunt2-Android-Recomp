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

// Function: sub_0021EB78
// Address: 0x21eb78 - 0x21f9f0
void sub_0021EB78_0x21eb78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021EB78_0x21eb78");
#endif

    switch (ctx->pc) {
        case 0x21ebacu: goto label_21ebac;
        case 0x21ebc8u: goto label_21ebc8;
        case 0x21ebe0u: goto label_21ebe0;
        case 0x21ebf4u: goto label_21ebf4;
        case 0x21ec0cu: goto label_21ec0c;
        case 0x21ec24u: goto label_21ec24;
        case 0x21ec3cu: goto label_21ec3c;
        case 0x21ec50u: goto label_21ec50;
        case 0x21ec68u: goto label_21ec68;
        case 0x21ec80u: goto label_21ec80;
        case 0x21ec98u: goto label_21ec98;
        case 0x21ecacu: goto label_21ecac;
        case 0x21ecc4u: goto label_21ecc4;
        case 0x21ecd8u: goto label_21ecd8;
        case 0x21ecf0u: goto label_21ecf0;
        case 0x21ed04u: goto label_21ed04;
        case 0x21ed1cu: goto label_21ed1c;
        case 0x21ed30u: goto label_21ed30;
        case 0x21ed48u: goto label_21ed48;
        case 0x21ed5cu: goto label_21ed5c;
        case 0x21ed74u: goto label_21ed74;
        case 0x21ed88u: goto label_21ed88;
        case 0x21eda0u: goto label_21eda0;
        case 0x21edb4u: goto label_21edb4;
        case 0x21edccu: goto label_21edcc;
        case 0x21ede0u: goto label_21ede0;
        case 0x21edf8u: goto label_21edf8;
        case 0x21ee0cu: goto label_21ee0c;
        case 0x21ee24u: goto label_21ee24;
        case 0x21ee38u: goto label_21ee38;
        case 0x21ee50u: goto label_21ee50;
        case 0x21ee64u: goto label_21ee64;
        case 0x21ee7cu: goto label_21ee7c;
        case 0x21ee90u: goto label_21ee90;
        case 0x21eea8u: goto label_21eea8;
        case 0x21eebcu: goto label_21eebc;
        case 0x21eed4u: goto label_21eed4;
        case 0x21eee8u: goto label_21eee8;
        case 0x21ef00u: goto label_21ef00;
        case 0x21ef14u: goto label_21ef14;
        case 0x21ef2cu: goto label_21ef2c;
        case 0x21ef40u: goto label_21ef40;
        case 0x21ef58u: goto label_21ef58;
        case 0x21ef6cu: goto label_21ef6c;
        case 0x21ef84u: goto label_21ef84;
        case 0x21ef98u: goto label_21ef98;
        case 0x21efb0u: goto label_21efb0;
        case 0x21efc4u: goto label_21efc4;
        case 0x21efdcu: goto label_21efdc;
        case 0x21eff0u: goto label_21eff0;
        case 0x21f008u: goto label_21f008;
        case 0x21f01cu: goto label_21f01c;
        case 0x21f034u: goto label_21f034;
        case 0x21f048u: goto label_21f048;
        case 0x21f060u: goto label_21f060;
        case 0x21f074u: goto label_21f074;
        case 0x21f08cu: goto label_21f08c;
        case 0x21f0a0u: goto label_21f0a0;
        case 0x21f0b8u: goto label_21f0b8;
        case 0x21f0ccu: goto label_21f0cc;
        case 0x21f0e4u: goto label_21f0e4;
        case 0x21f0f8u: goto label_21f0f8;
        case 0x21f110u: goto label_21f110;
        case 0x21f124u: goto label_21f124;
        case 0x21f13cu: goto label_21f13c;
        case 0x21f150u: goto label_21f150;
        case 0x21f168u: goto label_21f168;
        case 0x21f17cu: goto label_21f17c;
        case 0x21f194u: goto label_21f194;
        case 0x21f1a8u: goto label_21f1a8;
        case 0x21f1c0u: goto label_21f1c0;
        case 0x21f1d4u: goto label_21f1d4;
        case 0x21f1ecu: goto label_21f1ec;
        case 0x21f200u: goto label_21f200;
        case 0x21f218u: goto label_21f218;
        case 0x21f22cu: goto label_21f22c;
        case 0x21f244u: goto label_21f244;
        case 0x21f258u: goto label_21f258;
        case 0x21f270u: goto label_21f270;
        case 0x21f284u: goto label_21f284;
        case 0x21f29cu: goto label_21f29c;
        case 0x21f2b0u: goto label_21f2b0;
        case 0x21f2c8u: goto label_21f2c8;
        case 0x21f2dcu: goto label_21f2dc;
        case 0x21f2f4u: goto label_21f2f4;
        case 0x21f308u: goto label_21f308;
        case 0x21f320u: goto label_21f320;
        case 0x21f334u: goto label_21f334;
        case 0x21f34cu: goto label_21f34c;
        case 0x21f360u: goto label_21f360;
        case 0x21f378u: goto label_21f378;
        case 0x21f38cu: goto label_21f38c;
        case 0x21f3a4u: goto label_21f3a4;
        case 0x21f3b8u: goto label_21f3b8;
        case 0x21f3d0u: goto label_21f3d0;
        case 0x21f3e4u: goto label_21f3e4;
        case 0x21f3fcu: goto label_21f3fc;
        case 0x21f414u: goto label_21f414;
        case 0x21f42cu: goto label_21f42c;
        case 0x21f440u: goto label_21f440;
        case 0x21f458u: goto label_21f458;
        case 0x21f470u: goto label_21f470;
        case 0x21f488u: goto label_21f488;
        case 0x21f4a0u: goto label_21f4a0;
        case 0x21f4b8u: goto label_21f4b8;
        case 0x21f4d4u: goto label_21f4d4;
        case 0x21f4ecu: goto label_21f4ec;
        case 0x21f500u: goto label_21f500;
        case 0x21f518u: goto label_21f518;
        case 0x21f52cu: goto label_21f52c;
        case 0x21f544u: goto label_21f544;
        case 0x21f560u: goto label_21f560;
        case 0x21f578u: goto label_21f578;
        case 0x21f594u: goto label_21f594;
        case 0x21f5acu: goto label_21f5ac;
        case 0x21f5c0u: goto label_21f5c0;
        case 0x21f5d8u: goto label_21f5d8;
        case 0x21f5ecu: goto label_21f5ec;
        case 0x21f604u: goto label_21f604;
        case 0x21f618u: goto label_21f618;
        case 0x21f630u: goto label_21f630;
        case 0x21f644u: goto label_21f644;
        case 0x21f65cu: goto label_21f65c;
        case 0x21f670u: goto label_21f670;
        case 0x21f688u: goto label_21f688;
        case 0x21f69cu: goto label_21f69c;
        case 0x21f6b4u: goto label_21f6b4;
        case 0x21f6c8u: goto label_21f6c8;
        case 0x21f6e0u: goto label_21f6e0;
        case 0x21f6f8u: goto label_21f6f8;
        case 0x21f710u: goto label_21f710;
        case 0x21f724u: goto label_21f724;
        case 0x21f73cu: goto label_21f73c;
        case 0x21f750u: goto label_21f750;
        case 0x21f768u: goto label_21f768;
        case 0x21f77cu: goto label_21f77c;
        case 0x21f794u: goto label_21f794;
        case 0x21f7a8u: goto label_21f7a8;
        case 0x21f7c0u: goto label_21f7c0;
        case 0x21f7d4u: goto label_21f7d4;
        case 0x21f7ecu: goto label_21f7ec;
        case 0x21f800u: goto label_21f800;
        case 0x21f818u: goto label_21f818;
        case 0x21f82cu: goto label_21f82c;
        case 0x21f844u: goto label_21f844;
        case 0x21f858u: goto label_21f858;
        case 0x21f870u: goto label_21f870;
        case 0x21f888u: goto label_21f888;
        case 0x21f8a0u: goto label_21f8a0;
        case 0x21f8b4u: goto label_21f8b4;
        case 0x21f8ccu: goto label_21f8cc;
        case 0x21f8e0u: goto label_21f8e0;
        case 0x21f8f8u: goto label_21f8f8;
        case 0x21f90cu: goto label_21f90c;
        case 0x21f924u: goto label_21f924;
        case 0x21f938u: goto label_21f938;
        case 0x21f950u: goto label_21f950;
        case 0x21f964u: goto label_21f964;
        case 0x21f97cu: goto label_21f97c;
        case 0x21f990u: goto label_21f990;
        case 0x21f9a8u: goto label_21f9a8;
        case 0x21f9c0u: goto label_21f9c0;
        case 0x21f9d0u: goto label_21f9d0;
        default: break;
    }

    ctx->pc = 0x21eb78u;

    // 0x21eb78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x21eb78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x21eb7c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x21eb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x21eb80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x21eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x21eb84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21eb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x21eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x21eb8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x21eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x21eb90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21eb90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eb94: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21eb98: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x21eb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x21eb9c: 0x2452fe40  addiu       $s2, $v0, -0x1C0
    ctx->pc = 0x21eb9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
    // 0x21eba0: 0x24a51ea0  addiu       $a1, $a1, 0x1EA0
    ctx->pc = 0x21eba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7840));
    // 0x21eba4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EBA4u;
    SET_GPR_U32(ctx, 31, 0x21EBACu);
    ctx->pc = 0x21EBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBA4u;
    // 0x21eba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EBA4u, 0x21EBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBACu;
label_21ebac:
    // 0x21ebac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ebb0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21EBB0u;
    {
        const bool branch_taken_0x21ebb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBB0u;
        // 0x21ebb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebb0) {
            ctx->pc = 0x21EBD0u;
            goto label_21ebd0;
        }
    }
    ctx->pc = 0x21EBB8u;
    // 0x21ebb8: 0x26271418  addiu       $a3, $s1, 0x1418
    ctx->pc = 0x21ebb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5144));
    // 0x21ebbc: 0x26251410  addiu       $a1, $s1, 0x1410
    ctx->pc = 0x21ebbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5136));
    // 0x21ebc0: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21EBC0u;
    SET_GPR_U32(ctx, 31, 0x21EBC8u);
    ctx->pc = 0x21EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBC0u;
    // 0x21ebc4: 0x26261414  addiu       $a2, $s1, 0x1414 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21EBC0u, 0x21EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBC8u;
label_21ebc8:
    // 0x21ebc8: 0x10000382  b           . + 4 + (0x382 << 2)
    ctx->pc = 0x21EBC8u;
    {
        const bool branch_taken_0x21ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBC8u;
        // 0x21ebcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebc8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EBD0u;
label_21ebd0:
    // 0x21ebd0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ebd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ebd8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EBD8u;
    SET_GPR_U32(ctx, 31, 0x21EBE0u);
    ctx->pc = 0x21EBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBD8u;
    // 0x21ebdc: 0x24a51eb0  addiu       $a1, $a1, 0x1EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EBD8u, 0x21EBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBE0u;
label_21ebe0:
    // 0x21ebe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ebe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ebe4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EBE4u;
    {
        const bool branch_taken_0x21ebe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBE4u;
        // 0x21ebe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebe4) {
            ctx->pc = 0x21EBFCu;
            goto label_21ebfc;
        }
    }
    ctx->pc = 0x21EBECu;
    // 0x21ebec: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EBECu;
    SET_GPR_U32(ctx, 31, 0x21EBF4u);
    ctx->pc = 0x21EBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EBECu;
    // 0x21ebf0: 0x26251420  addiu       $a1, $s1, 0x1420 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EBECu, 0x21EBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EBF4u;
label_21ebf4:
    // 0x21ebf4: 0x10000377  b           . + 4 + (0x377 << 2)
    ctx->pc = 0x21EBF4u;
    {
        const bool branch_taken_0x21ebf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EBF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EBF4u;
        // 0x21ebf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ebf4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EBFCu;
label_21ebfc:
    // 0x21ebfc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ec00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ec00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec04: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EC04u;
    SET_GPR_U32(ctx, 31, 0x21EC0Cu);
    ctx->pc = 0x21EC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC04u;
    // 0x21ec08: 0x24a51ec8  addiu       $a1, $a1, 0x1EC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EC04u, 0x21EC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC0Cu;
label_21ec0c:
    // 0x21ec0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ec0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ec10: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EC10u;
    {
        const bool branch_taken_0x21ec10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC10u;
        // 0x21ec14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec10) {
            ctx->pc = 0x21EC2Cu;
            goto label_21ec2c;
        }
    }
    ctx->pc = 0x21EC18u;
    // 0x21ec18: 0x26261428  addiu       $a2, $s1, 0x1428
    ctx->pc = 0x21ec18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5160));
    // 0x21ec1c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21EC1Cu;
    SET_GPR_U32(ctx, 31, 0x21EC24u);
    ctx->pc = 0x21EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC1Cu;
    // 0x21ec20: 0x26251424  addiu       $a1, $s1, 0x1424 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21EC1Cu, 0x21EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC24u;
label_21ec24:
    // 0x21ec24: 0x1000036b  b           . + 4 + (0x36B << 2)
    ctx->pc = 0x21EC24u;
    {
        const bool branch_taken_0x21ec24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC24u;
        // 0x21ec28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec24) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EC2Cu;
label_21ec2c:
    // 0x21ec2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ec30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ec30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec34: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EC34u;
    SET_GPR_U32(ctx, 31, 0x21EC3Cu);
    ctx->pc = 0x21EC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC34u;
    // 0x21ec38: 0x24a51ed8  addiu       $a1, $a1, 0x1ED8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EC34u, 0x21EC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC3Cu;
label_21ec3c:
    // 0x21ec3c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ec3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ec40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EC40u;
    {
        const bool branch_taken_0x21ec40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC40u;
        // 0x21ec44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec40) {
            ctx->pc = 0x21EC58u;
            goto label_21ec58;
        }
    }
    ctx->pc = 0x21EC48u;
    // 0x21ec48: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EC48u;
    SET_GPR_U32(ctx, 31, 0x21EC50u);
    ctx->pc = 0x21EC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC48u;
    // 0x21ec4c: 0x2625142c  addiu       $a1, $s1, 0x142C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EC48u, 0x21EC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC50u;
label_21ec50:
    // 0x21ec50: 0x10000360  b           . + 4 + (0x360 << 2)
    ctx->pc = 0x21EC50u;
    {
        const bool branch_taken_0x21ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC50u;
        // 0x21ec54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec50) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EC58u;
label_21ec58:
    // 0x21ec58: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ec58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ec5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ec5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec60: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EC60u;
    SET_GPR_U32(ctx, 31, 0x21EC68u);
    ctx->pc = 0x21EC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC60u;
    // 0x21ec64: 0x24a51ef0  addiu       $a1, $a1, 0x1EF0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EC60u, 0x21EC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC68u;
label_21ec68:
    // 0x21ec68: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ec68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ec6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21EC6Cu;
    {
        const bool branch_taken_0x21ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC6Cu;
        // 0x21ec70: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec6c) {
            ctx->pc = 0x21EC88u;
            goto label_21ec88;
        }
    }
    ctx->pc = 0x21EC74u;
    // 0x21ec74: 0x26261434  addiu       $a2, $s1, 0x1434
    ctx->pc = 0x21ec74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5172));
    // 0x21ec78: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21EC78u;
    SET_GPR_U32(ctx, 31, 0x21EC80u);
    ctx->pc = 0x21EC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC78u;
    // 0x21ec7c: 0x26251430  addiu       $a1, $s1, 0x1430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21EC78u, 0x21EC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC80u;
label_21ec80:
    // 0x21ec80: 0x10000354  b           . + 4 + (0x354 << 2)
    ctx->pc = 0x21EC80u;
    {
        const bool branch_taken_0x21ec80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC80u;
        // 0x21ec84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec80) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EC88u;
label_21ec88:
    // 0x21ec88: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ec8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ec8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ec90: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EC90u;
    SET_GPR_U32(ctx, 31, 0x21EC98u);
    ctx->pc = 0x21EC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EC90u;
    // 0x21ec94: 0x24a51f00  addiu       $a1, $a1, 0x1F00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EC90u, 0x21EC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EC98u;
label_21ec98:
    // 0x21ec98: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ec98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ec9c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EC9Cu;
    {
        const bool branch_taken_0x21ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EC9Cu;
        // 0x21eca0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ec9c) {
            ctx->pc = 0x21ECB4u;
            goto label_21ecb4;
        }
    }
    ctx->pc = 0x21ECA4u;
    // 0x21eca4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ECA4u;
    SET_GPR_U32(ctx, 31, 0x21ECACu);
    ctx->pc = 0x21ECA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECA4u;
    // 0x21eca8: 0x26251438  addiu       $a1, $s1, 0x1438 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ECA4u, 0x21ECACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECACu;
label_21ecac:
    // 0x21ecac: 0x10000349  b           . + 4 + (0x349 << 2)
    ctx->pc = 0x21ECACu;
    {
        const bool branch_taken_0x21ecac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECACu;
        // 0x21ecb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecac) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ECB4u;
label_21ecb4:
    // 0x21ecb4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ecb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ecb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ecb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ecbc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ECBCu;
    SET_GPR_U32(ctx, 31, 0x21ECC4u);
    ctx->pc = 0x21ECC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECBCu;
    // 0x21ecc0: 0x24a51f10  addiu       $a1, $a1, 0x1F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ECBCu, 0x21ECC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECC4u;
label_21ecc4:
    // 0x21ecc4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ecc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ecc8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ECC8u;
    {
        const bool branch_taken_0x21ecc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECC8u;
        // 0x21eccc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecc8) {
            ctx->pc = 0x21ECE0u;
            goto label_21ece0;
        }
    }
    ctx->pc = 0x21ECD0u;
    // 0x21ecd0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ECD0u;
    SET_GPR_U32(ctx, 31, 0x21ECD8u);
    ctx->pc = 0x21ECD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECD0u;
    // 0x21ecd4: 0x2625143c  addiu       $a1, $s1, 0x143C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5180));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ECD0u, 0x21ECD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECD8u;
label_21ecd8:
    // 0x21ecd8: 0x1000033e  b           . + 4 + (0x33E << 2)
    ctx->pc = 0x21ECD8u;
    {
        const bool branch_taken_0x21ecd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECD8u;
        // 0x21ecdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecd8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ECE0u;
label_21ece0:
    // 0x21ece0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ece0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ece4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ece4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ece8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ECE8u;
    SET_GPR_U32(ctx, 31, 0x21ECF0u);
    ctx->pc = 0x21ECECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECE8u;
    // 0x21ecec: 0x24a51f28  addiu       $a1, $a1, 0x1F28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ECE8u, 0x21ECF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ECF0u;
label_21ecf0:
    // 0x21ecf0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ecf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ecf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ECF4u;
    {
        const bool branch_taken_0x21ecf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ECF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ECF4u;
        // 0x21ecf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ecf4) {
            ctx->pc = 0x21ED0Cu;
            goto label_21ed0c;
        }
    }
    ctx->pc = 0x21ECFCu;
    // 0x21ecfc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ECFCu;
    SET_GPR_U32(ctx, 31, 0x21ED04u);
    ctx->pc = 0x21ED00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ECFCu;
    // 0x21ed00: 0x26251440  addiu       $a1, $s1, 0x1440 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ECFCu, 0x21ED04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED04u;
label_21ed04:
    // 0x21ed04: 0x10000333  b           . + 4 + (0x333 << 2)
    ctx->pc = 0x21ED04u;
    {
        const bool branch_taken_0x21ed04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED04u;
        // 0x21ed08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed04) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ED0Cu;
label_21ed0c:
    // 0x21ed0c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ed10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ed10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed14: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ED14u;
    SET_GPR_U32(ctx, 31, 0x21ED1Cu);
    ctx->pc = 0x21ED18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED14u;
    // 0x21ed18: 0x24a51f40  addiu       $a1, $a1, 0x1F40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ED14u, 0x21ED1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED1Cu;
label_21ed1c:
    // 0x21ed1c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ed1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ed20: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ED20u;
    {
        const bool branch_taken_0x21ed20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED20u;
        // 0x21ed24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed20) {
            ctx->pc = 0x21ED38u;
            goto label_21ed38;
        }
    }
    ctx->pc = 0x21ED28u;
    // 0x21ed28: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ED28u;
    SET_GPR_U32(ctx, 31, 0x21ED30u);
    ctx->pc = 0x21ED2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED28u;
    // 0x21ed2c: 0x26251444  addiu       $a1, $s1, 0x1444 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5188));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ED28u, 0x21ED30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED30u;
label_21ed30:
    // 0x21ed30: 0x10000328  b           . + 4 + (0x328 << 2)
    ctx->pc = 0x21ED30u;
    {
        const bool branch_taken_0x21ed30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED30u;
        // 0x21ed34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed30) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ED38u;
label_21ed38:
    // 0x21ed38: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ed38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ed3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ed3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed40: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ED40u;
    SET_GPR_U32(ctx, 31, 0x21ED48u);
    ctx->pc = 0x21ED44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED40u;
    // 0x21ed44: 0x24a51f58  addiu       $a1, $a1, 0x1F58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ED40u, 0x21ED48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED48u;
label_21ed48:
    // 0x21ed48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ed48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ed4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ED4Cu;
    {
        const bool branch_taken_0x21ed4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED4Cu;
        // 0x21ed50: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed4c) {
            ctx->pc = 0x21ED64u;
            goto label_21ed64;
        }
    }
    ctx->pc = 0x21ED54u;
    // 0x21ed54: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ED54u;
    SET_GPR_U32(ctx, 31, 0x21ED5Cu);
    ctx->pc = 0x21ED58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED54u;
    // 0x21ed58: 0x26251448  addiu       $a1, $s1, 0x1448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ED54u, 0x21ED5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED5Cu;
label_21ed5c:
    // 0x21ed5c: 0x1000031d  b           . + 4 + (0x31D << 2)
    ctx->pc = 0x21ED5Cu;
    {
        const bool branch_taken_0x21ed5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED5Cu;
        // 0x21ed60: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed5c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ED64u;
label_21ed64:
    // 0x21ed64: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ed64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ed68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ed68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed6c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ED6Cu;
    SET_GPR_U32(ctx, 31, 0x21ED74u);
    ctx->pc = 0x21ED70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED6Cu;
    // 0x21ed70: 0x24a51f68  addiu       $a1, $a1, 0x1F68 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ED6Cu, 0x21ED74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED74u;
label_21ed74:
    // 0x21ed74: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ed74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ed78: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21ED78u;
    {
        const bool branch_taken_0x21ed78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED78u;
        // 0x21ed7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed78) {
            ctx->pc = 0x21ED90u;
            goto label_21ed90;
        }
    }
    ctx->pc = 0x21ED80u;
    // 0x21ed80: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21ED80u;
    SET_GPR_U32(ctx, 31, 0x21ED88u);
    ctx->pc = 0x21ED84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED80u;
    // 0x21ed84: 0x2625144c  addiu       $a1, $s1, 0x144C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21ED80u, 0x21ED88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21ED88u;
label_21ed88:
    // 0x21ed88: 0x10000312  b           . + 4 + (0x312 << 2)
    ctx->pc = 0x21ED88u;
    {
        const bool branch_taken_0x21ed88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21ED88u;
        // 0x21ed8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ed88) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21ED90u;
label_21ed90:
    // 0x21ed90: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ed90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ed94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ed94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ed98: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21ED98u;
    SET_GPR_U32(ctx, 31, 0x21EDA0u);
    ctx->pc = 0x21ED9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21ED98u;
    // 0x21ed9c: 0x24a51f78  addiu       $a1, $a1, 0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21ED98u, 0x21EDA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDA0u;
label_21eda0:
    // 0x21eda0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21eda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21eda4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDA4u;
    {
        const bool branch_taken_0x21eda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDA4u;
        // 0x21eda8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eda4) {
            ctx->pc = 0x21EDBCu;
            goto label_21edbc;
        }
    }
    ctx->pc = 0x21EDACu;
    // 0x21edac: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EDACu;
    SET_GPR_U32(ctx, 31, 0x21EDB4u);
    ctx->pc = 0x21EDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDACu;
    // 0x21edb0: 0x26251450  addiu       $a1, $s1, 0x1450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EDACu, 0x21EDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDB4u;
label_21edb4:
    // 0x21edb4: 0x10000307  b           . + 4 + (0x307 << 2)
    ctx->pc = 0x21EDB4u;
    {
        const bool branch_taken_0x21edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDB4u;
        // 0x21edb8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edb4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EDBCu;
label_21edbc:
    // 0x21edbc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21edbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21edc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21edc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edc4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EDC4u;
    SET_GPR_U32(ctx, 31, 0x21EDCCu);
    ctx->pc = 0x21EDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDC4u;
    // 0x21edc8: 0x24a51f88  addiu       $a1, $a1, 0x1F88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EDC4u, 0x21EDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDCCu;
label_21edcc:
    // 0x21edcc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21edccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21edd0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDD0u;
    {
        const bool branch_taken_0x21edd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDD0u;
        // 0x21edd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edd0) {
            ctx->pc = 0x21EDE8u;
            goto label_21ede8;
        }
    }
    ctx->pc = 0x21EDD8u;
    // 0x21edd8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EDD8u;
    SET_GPR_U32(ctx, 31, 0x21EDE0u);
    ctx->pc = 0x21EDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDD8u;
    // 0x21eddc: 0x26251454  addiu       $a1, $s1, 0x1454 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EDD8u, 0x21EDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDE0u;
label_21ede0:
    // 0x21ede0: 0x100002fc  b           . + 4 + (0x2FC << 2)
    ctx->pc = 0x21EDE0u;
    {
        const bool branch_taken_0x21ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDE0u;
        // 0x21ede4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ede0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EDE8u;
label_21ede8:
    // 0x21ede8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ede8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21edec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21edecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21edf0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EDF0u;
    SET_GPR_U32(ctx, 31, 0x21EDF8u);
    ctx->pc = 0x21EDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EDF0u;
    // 0x21edf4: 0x24a51f98  addiu       $a1, $a1, 0x1F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EDF0u, 0x21EDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EDF8u;
label_21edf8:
    // 0x21edf8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21edf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21edfc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EDFCu;
    {
        const bool branch_taken_0x21edfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EDFCu;
        // 0x21ee00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21edfc) {
            ctx->pc = 0x21EE14u;
            goto label_21ee14;
        }
    }
    ctx->pc = 0x21EE04u;
    // 0x21ee04: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EE04u;
    SET_GPR_U32(ctx, 31, 0x21EE0Cu);
    ctx->pc = 0x21EE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE04u;
    // 0x21ee08: 0x26251458  addiu       $a1, $s1, 0x1458 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EE04u, 0x21EE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE0Cu;
label_21ee0c:
    // 0x21ee0c: 0x100002f1  b           . + 4 + (0x2F1 << 2)
    ctx->pc = 0x21EE0Cu;
    {
        const bool branch_taken_0x21ee0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE0Cu;
        // 0x21ee10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee0c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EE14u;
label_21ee14:
    // 0x21ee14: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ee14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ee18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ee18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee1c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EE1Cu;
    SET_GPR_U32(ctx, 31, 0x21EE24u);
    ctx->pc = 0x21EE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE1Cu;
    // 0x21ee20: 0x24a51fa8  addiu       $a1, $a1, 0x1FA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EE1Cu, 0x21EE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE24u;
label_21ee24:
    // 0x21ee24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ee24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ee28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE28u;
    {
        const bool branch_taken_0x21ee28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE28u;
        // 0x21ee2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee28) {
            ctx->pc = 0x21EE40u;
            goto label_21ee40;
        }
    }
    ctx->pc = 0x21EE30u;
    // 0x21ee30: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EE30u;
    SET_GPR_U32(ctx, 31, 0x21EE38u);
    ctx->pc = 0x21EE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE30u;
    // 0x21ee34: 0x2625145c  addiu       $a1, $s1, 0x145C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5212));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EE30u, 0x21EE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE38u;
label_21ee38:
    // 0x21ee38: 0x100002e6  b           . + 4 + (0x2E6 << 2)
    ctx->pc = 0x21EE38u;
    {
        const bool branch_taken_0x21ee38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE38u;
        // 0x21ee3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee38) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EE40u;
label_21ee40:
    // 0x21ee40: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ee40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ee44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ee44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee48: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EE48u;
    SET_GPR_U32(ctx, 31, 0x21EE50u);
    ctx->pc = 0x21EE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE48u;
    // 0x21ee4c: 0x24a51fb8  addiu       $a1, $a1, 0x1FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EE48u, 0x21EE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE50u;
label_21ee50:
    // 0x21ee50: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ee50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ee54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE54u;
    {
        const bool branch_taken_0x21ee54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE54u;
        // 0x21ee58: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee54) {
            ctx->pc = 0x21EE6Cu;
            goto label_21ee6c;
        }
    }
    ctx->pc = 0x21EE5Cu;
    // 0x21ee5c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EE5Cu;
    SET_GPR_U32(ctx, 31, 0x21EE64u);
    ctx->pc = 0x21EE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE5Cu;
    // 0x21ee60: 0x26251460  addiu       $a1, $s1, 0x1460 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EE5Cu, 0x21EE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE64u;
label_21ee64:
    // 0x21ee64: 0x100002db  b           . + 4 + (0x2DB << 2)
    ctx->pc = 0x21EE64u;
    {
        const bool branch_taken_0x21ee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE64u;
        // 0x21ee68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee64) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EE6Cu;
label_21ee6c:
    // 0x21ee6c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ee6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ee70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ee70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ee74: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EE74u;
    SET_GPR_U32(ctx, 31, 0x21EE7Cu);
    ctx->pc = 0x21EE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE74u;
    // 0x21ee78: 0x24a51fc8  addiu       $a1, $a1, 0x1FC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EE74u, 0x21EE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE7Cu;
label_21ee7c:
    // 0x21ee7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ee7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ee80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EE80u;
    {
        const bool branch_taken_0x21ee80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE80u;
        // 0x21ee84: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee80) {
            ctx->pc = 0x21EE98u;
            goto label_21ee98;
        }
    }
    ctx->pc = 0x21EE88u;
    // 0x21ee88: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EE88u;
    SET_GPR_U32(ctx, 31, 0x21EE90u);
    ctx->pc = 0x21EE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EE88u;
    // 0x21ee8c: 0x26251464  addiu       $a1, $s1, 0x1464 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EE88u, 0x21EE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EE90u;
label_21ee90:
    // 0x21ee90: 0x100002d0  b           . + 4 + (0x2D0 << 2)
    ctx->pc = 0x21EE90u;
    {
        const bool branch_taken_0x21ee90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EE90u;
        // 0x21ee94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ee90) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EE98u;
label_21ee98:
    // 0x21ee98: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ee98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ee9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eea0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EEA0u;
    SET_GPR_U32(ctx, 31, 0x21EEA8u);
    ctx->pc = 0x21EEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEA0u;
    // 0x21eea4: 0x24a51fd8  addiu       $a1, $a1, 0x1FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EEA0u, 0x21EEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEA8u;
label_21eea8:
    // 0x21eea8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21eea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21eeac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EEACu;
    {
        const bool branch_taken_0x21eeac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEACu;
        // 0x21eeb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eeac) {
            ctx->pc = 0x21EEC4u;
            goto label_21eec4;
        }
    }
    ctx->pc = 0x21EEB4u;
    // 0x21eeb4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EEB4u;
    SET_GPR_U32(ctx, 31, 0x21EEBCu);
    ctx->pc = 0x21EEB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEB4u;
    // 0x21eeb8: 0x26251468  addiu       $a1, $s1, 0x1468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EEB4u, 0x21EEBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEBCu;
label_21eebc:
    // 0x21eebc: 0x100002c5  b           . + 4 + (0x2C5 << 2)
    ctx->pc = 0x21EEBCu;
    {
        const bool branch_taken_0x21eebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEBCu;
        // 0x21eec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eebc) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EEC4u;
label_21eec4:
    // 0x21eec4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21eec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21eec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21eec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eecc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EECCu;
    SET_GPR_U32(ctx, 31, 0x21EED4u);
    ctx->pc = 0x21EED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EECCu;
    // 0x21eed0: 0x24a51fe8  addiu       $a1, $a1, 0x1FE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EECCu, 0x21EED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EED4u;
label_21eed4:
    // 0x21eed4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21eed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21eed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EED8u;
    {
        const bool branch_taken_0x21eed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EED8u;
        // 0x21eedc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eed8) {
            ctx->pc = 0x21EEF0u;
            goto label_21eef0;
        }
    }
    ctx->pc = 0x21EEE0u;
    // 0x21eee0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EEE0u;
    SET_GPR_U32(ctx, 31, 0x21EEE8u);
    ctx->pc = 0x21EEE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEE0u;
    // 0x21eee4: 0x2625146c  addiu       $a1, $s1, 0x146C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5228));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EEE0u, 0x21EEE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EEE8u;
label_21eee8:
    // 0x21eee8: 0x100002ba  b           . + 4 + (0x2BA << 2)
    ctx->pc = 0x21EEE8u;
    {
        const bool branch_taken_0x21eee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EEE8u;
        // 0x21eeec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eee8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EEF0u;
label_21eef0:
    // 0x21eef0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21eef0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21eef4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21eef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21eef8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EEF8u;
    SET_GPR_U32(ctx, 31, 0x21EF00u);
    ctx->pc = 0x21EEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EEF8u;
    // 0x21eefc: 0x24a51ff8  addiu       $a1, $a1, 0x1FF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EEF8u, 0x21EF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF00u;
label_21ef00:
    // 0x21ef00: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ef00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ef04: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF04u;
    {
        const bool branch_taken_0x21ef04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF04u;
        // 0x21ef08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef04) {
            ctx->pc = 0x21EF1Cu;
            goto label_21ef1c;
        }
    }
    ctx->pc = 0x21EF0Cu;
    // 0x21ef0c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EF0Cu;
    SET_GPR_U32(ctx, 31, 0x21EF14u);
    ctx->pc = 0x21EF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF0Cu;
    // 0x21ef10: 0x26251470  addiu       $a1, $s1, 0x1470 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EF0Cu, 0x21EF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF14u;
label_21ef14:
    // 0x21ef14: 0x100002af  b           . + 4 + (0x2AF << 2)
    ctx->pc = 0x21EF14u;
    {
        const bool branch_taken_0x21ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF14u;
        // 0x21ef18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef14) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EF1Cu;
label_21ef1c:
    // 0x21ef1c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ef1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ef20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef24: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EF24u;
    SET_GPR_U32(ctx, 31, 0x21EF2Cu);
    ctx->pc = 0x21EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF24u;
    // 0x21ef28: 0x24a52010  addiu       $a1, $a1, 0x2010 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EF24u, 0x21EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF2Cu;
label_21ef2c:
    // 0x21ef2c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ef2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ef30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF30u;
    {
        const bool branch_taken_0x21ef30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF30u;
        // 0x21ef34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef30) {
            ctx->pc = 0x21EF48u;
            goto label_21ef48;
        }
    }
    ctx->pc = 0x21EF38u;
    // 0x21ef38: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EF38u;
    SET_GPR_U32(ctx, 31, 0x21EF40u);
    ctx->pc = 0x21EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF38u;
    // 0x21ef3c: 0x26251474  addiu       $a1, $s1, 0x1474 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5236));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EF38u, 0x21EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF40u;
label_21ef40:
    // 0x21ef40: 0x100002a4  b           . + 4 + (0x2A4 << 2)
    ctx->pc = 0x21EF40u;
    {
        const bool branch_taken_0x21ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF40u;
        // 0x21ef44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef40) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EF48u;
label_21ef48:
    // 0x21ef48: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ef48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ef4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef50: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EF50u;
    SET_GPR_U32(ctx, 31, 0x21EF58u);
    ctx->pc = 0x21EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF50u;
    // 0x21ef54: 0x24a52028  addiu       $a1, $a1, 0x2028 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EF50u, 0x21EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF58u;
label_21ef58:
    // 0x21ef58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ef5c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF5Cu;
    {
        const bool branch_taken_0x21ef5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF5Cu;
        // 0x21ef60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef5c) {
            ctx->pc = 0x21EF74u;
            goto label_21ef74;
        }
    }
    ctx->pc = 0x21EF64u;
    // 0x21ef64: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EF64u;
    SET_GPR_U32(ctx, 31, 0x21EF6Cu);
    ctx->pc = 0x21EF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF64u;
    // 0x21ef68: 0x26251478  addiu       $a1, $s1, 0x1478 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EF64u, 0x21EF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF6Cu;
label_21ef6c:
    // 0x21ef6c: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x21EF6Cu;
    {
        const bool branch_taken_0x21ef6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF6Cu;
        // 0x21ef70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef6c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EF74u;
label_21ef74:
    // 0x21ef74: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21ef74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21ef78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21ef78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ef7c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EF7Cu;
    SET_GPR_U32(ctx, 31, 0x21EF84u);
    ctx->pc = 0x21EF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF7Cu;
    // 0x21ef80: 0x24a52040  addiu       $a1, $a1, 0x2040 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EF7Cu, 0x21EF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF84u;
label_21ef84:
    // 0x21ef84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21ef84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21ef88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EF88u;
    {
        const bool branch_taken_0x21ef88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF88u;
        // 0x21ef8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef88) {
            ctx->pc = 0x21EFA0u;
            goto label_21efa0;
        }
    }
    ctx->pc = 0x21EF90u;
    // 0x21ef90: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EF90u;
    SET_GPR_U32(ctx, 31, 0x21EF98u);
    ctx->pc = 0x21EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EF90u;
    // 0x21ef94: 0x2625147c  addiu       $a1, $s1, 0x147C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5244));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EF90u, 0x21EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EF98u;
label_21ef98:
    // 0x21ef98: 0x1000028e  b           . + 4 + (0x28E << 2)
    ctx->pc = 0x21EF98u;
    {
        const bool branch_taken_0x21ef98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EF98u;
        // 0x21ef9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ef98) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EFA0u;
label_21efa0:
    // 0x21efa0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21efa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21efa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21efa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efa8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EFA8u;
    SET_GPR_U32(ctx, 31, 0x21EFB0u);
    ctx->pc = 0x21EFACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFA8u;
    // 0x21efac: 0x24a52058  addiu       $a1, $a1, 0x2058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EFA8u, 0x21EFB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFB0u;
label_21efb0:
    // 0x21efb0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21efb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21efb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EFB4u;
    {
        const bool branch_taken_0x21efb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFB4u;
        // 0x21efb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efb4) {
            ctx->pc = 0x21EFCCu;
            goto label_21efcc;
        }
    }
    ctx->pc = 0x21EFBCu;
    // 0x21efbc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EFBCu;
    SET_GPR_U32(ctx, 31, 0x21EFC4u);
    ctx->pc = 0x21EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFBCu;
    // 0x21efc0: 0x26251480  addiu       $a1, $s1, 0x1480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EFBCu, 0x21EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFC4u;
label_21efc4:
    // 0x21efc4: 0x10000283  b           . + 4 + (0x283 << 2)
    ctx->pc = 0x21EFC4u;
    {
        const bool branch_taken_0x21efc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFC4u;
        // 0x21efc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efc4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EFCCu;
label_21efcc:
    // 0x21efcc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21efccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21efd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21efd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21efd4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21EFD4u;
    SET_GPR_U32(ctx, 31, 0x21EFDCu);
    ctx->pc = 0x21EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFD4u;
    // 0x21efd8: 0x24a52070  addiu       $a1, $a1, 0x2070 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21EFD4u, 0x21EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFDCu;
label_21efdc:
    // 0x21efdc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21efdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21efe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21EFE0u;
    {
        const bool branch_taken_0x21efe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFE0u;
        // 0x21efe4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21efe0) {
            ctx->pc = 0x21EFF8u;
            goto label_21eff8;
        }
    }
    ctx->pc = 0x21EFE8u;
    // 0x21efe8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21EFE8u;
    SET_GPR_U32(ctx, 31, 0x21EFF0u);
    ctx->pc = 0x21EFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21EFE8u;
    // 0x21efec: 0x26251484  addiu       $a1, $s1, 0x1484 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21EFE8u, 0x21EFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21EFF0u;
label_21eff0:
    // 0x21eff0: 0x10000278  b           . + 4 + (0x278 << 2)
    ctx->pc = 0x21EFF0u;
    {
        const bool branch_taken_0x21eff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EFF0u;
        // 0x21eff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21eff0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21EFF8u;
label_21eff8:
    // 0x21eff8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21eff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21effc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21effcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f000: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F000u;
    SET_GPR_U32(ctx, 31, 0x21F008u);
    ctx->pc = 0x21F004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F000u;
    // 0x21f004: 0x24a52088  addiu       $a1, $a1, 0x2088 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F000u, 0x21F008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F008u;
label_21f008:
    // 0x21f008: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f00c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F00Cu;
    {
        const bool branch_taken_0x21f00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F00Cu;
        // 0x21f010: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f00c) {
            ctx->pc = 0x21F024u;
            goto label_21f024;
        }
    }
    ctx->pc = 0x21F014u;
    // 0x21f014: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F014u;
    SET_GPR_U32(ctx, 31, 0x21F01Cu);
    ctx->pc = 0x21F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F014u;
    // 0x21f018: 0x26251488  addiu       $a1, $s1, 0x1488 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F014u, 0x21F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F01Cu;
label_21f01c:
    // 0x21f01c: 0x1000026d  b           . + 4 + (0x26D << 2)
    ctx->pc = 0x21F01Cu;
    {
        const bool branch_taken_0x21f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F01Cu;
        // 0x21f020: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f01c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F024u;
label_21f024:
    // 0x21f024: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f02c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F02Cu;
    SET_GPR_U32(ctx, 31, 0x21F034u);
    ctx->pc = 0x21F030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F02Cu;
    // 0x21f030: 0x24a520a0  addiu       $a1, $a1, 0x20A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F02Cu, 0x21F034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F034u;
label_21f034:
    // 0x21f034: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f038: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F038u;
    {
        const bool branch_taken_0x21f038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F038u;
        // 0x21f03c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f038) {
            ctx->pc = 0x21F050u;
            goto label_21f050;
        }
    }
    ctx->pc = 0x21F040u;
    // 0x21f040: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F040u;
    SET_GPR_U32(ctx, 31, 0x21F048u);
    ctx->pc = 0x21F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F040u;
    // 0x21f044: 0x2625148c  addiu       $a1, $s1, 0x148C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5260));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F040u, 0x21F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F048u;
label_21f048:
    // 0x21f048: 0x10000262  b           . + 4 + (0x262 << 2)
    ctx->pc = 0x21F048u;
    {
        const bool branch_taken_0x21f048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F048u;
        // 0x21f04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f048) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F050u;
label_21f050:
    // 0x21f050: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f050u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f054: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f058: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F058u;
    SET_GPR_U32(ctx, 31, 0x21F060u);
    ctx->pc = 0x21F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F058u;
    // 0x21f05c: 0x24a520b8  addiu       $a1, $a1, 0x20B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F058u, 0x21F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F060u;
label_21f060:
    // 0x21f060: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f064: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F064u;
    {
        const bool branch_taken_0x21f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F064u;
        // 0x21f068: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f064) {
            ctx->pc = 0x21F07Cu;
            goto label_21f07c;
        }
    }
    ctx->pc = 0x21F06Cu;
    // 0x21f06c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F06Cu;
    SET_GPR_U32(ctx, 31, 0x21F074u);
    ctx->pc = 0x21F070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F06Cu;
    // 0x21f070: 0x26251490  addiu       $a1, $s1, 0x1490 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F06Cu, 0x21F074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F074u;
label_21f074:
    // 0x21f074: 0x10000257  b           . + 4 + (0x257 << 2)
    ctx->pc = 0x21F074u;
    {
        const bool branch_taken_0x21f074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F074u;
        // 0x21f078: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f074) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F07Cu;
label_21f07c:
    // 0x21f07c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f07cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f080: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f084: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F084u;
    SET_GPR_U32(ctx, 31, 0x21F08Cu);
    ctx->pc = 0x21F088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F084u;
    // 0x21f088: 0x24a520d0  addiu       $a1, $a1, 0x20D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F084u, 0x21F08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F08Cu;
label_21f08c:
    // 0x21f08c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f090: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F090u;
    {
        const bool branch_taken_0x21f090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F090u;
        // 0x21f094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f090) {
            ctx->pc = 0x21F0A8u;
            goto label_21f0a8;
        }
    }
    ctx->pc = 0x21F098u;
    // 0x21f098: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F098u;
    SET_GPR_U32(ctx, 31, 0x21F0A0u);
    ctx->pc = 0x21F09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F098u;
    // 0x21f09c: 0x26251494  addiu       $a1, $s1, 0x1494 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F098u, 0x21F0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0A0u;
label_21f0a0:
    // 0x21f0a0: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x21F0A0u;
    {
        const bool branch_taken_0x21f0a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0A0u;
        // 0x21f0a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0a0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F0A8u;
label_21f0a8:
    // 0x21f0a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f0ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f0acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F0B0u;
    SET_GPR_U32(ctx, 31, 0x21F0B8u);
    ctx->pc = 0x21F0B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0B0u;
    // 0x21f0b4: 0x24a520e8  addiu       $a1, $a1, 0x20E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F0B0u, 0x21F0B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0B8u;
label_21f0b8:
    // 0x21f0b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f0b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f0bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F0BCu;
    {
        const bool branch_taken_0x21f0bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0BCu;
        // 0x21f0c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0bc) {
            ctx->pc = 0x21F0D4u;
            goto label_21f0d4;
        }
    }
    ctx->pc = 0x21F0C4u;
    // 0x21f0c4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F0C4u;
    SET_GPR_U32(ctx, 31, 0x21F0CCu);
    ctx->pc = 0x21F0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0C4u;
    // 0x21f0c8: 0x26251498  addiu       $a1, $s1, 0x1498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F0C4u, 0x21F0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0CCu;
label_21f0cc:
    // 0x21f0cc: 0x10000241  b           . + 4 + (0x241 << 2)
    ctx->pc = 0x21F0CCu;
    {
        const bool branch_taken_0x21f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0CCu;
        // 0x21f0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0cc) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F0D4u;
label_21f0d4:
    // 0x21f0d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f0d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f0d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f0dc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F0DCu;
    SET_GPR_U32(ctx, 31, 0x21F0E4u);
    ctx->pc = 0x21F0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0DCu;
    // 0x21f0e0: 0x24a520f8  addiu       $a1, $a1, 0x20F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F0DCu, 0x21F0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0E4u;
label_21f0e4:
    // 0x21f0e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f0e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f0e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F0E8u;
    {
        const bool branch_taken_0x21f0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0E8u;
        // 0x21f0ec: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0e8) {
            ctx->pc = 0x21F100u;
            goto label_21f100;
        }
    }
    ctx->pc = 0x21F0F0u;
    // 0x21f0f0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F0F0u;
    SET_GPR_U32(ctx, 31, 0x21F0F8u);
    ctx->pc = 0x21F0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F0F0u;
    // 0x21f0f4: 0x2625149c  addiu       $a1, $s1, 0x149C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5276));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F0F0u, 0x21F0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F0F8u;
label_21f0f8:
    // 0x21f0f8: 0x10000236  b           . + 4 + (0x236 << 2)
    ctx->pc = 0x21F0F8u;
    {
        const bool branch_taken_0x21f0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F0F8u;
        // 0x21f0fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f0f8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F100u;
label_21f100:
    // 0x21f100: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f100u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f108: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F108u;
    SET_GPR_U32(ctx, 31, 0x21F110u);
    ctx->pc = 0x21F10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F108u;
    // 0x21f10c: 0x24a52108  addiu       $a1, $a1, 0x2108 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F108u, 0x21F110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F110u;
label_21f110:
    // 0x21f110: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f114: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F114u;
    {
        const bool branch_taken_0x21f114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F114u;
        // 0x21f118: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f114) {
            ctx->pc = 0x21F12Cu;
            goto label_21f12c;
        }
    }
    ctx->pc = 0x21F11Cu;
    // 0x21f11c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F11Cu;
    SET_GPR_U32(ctx, 31, 0x21F124u);
    ctx->pc = 0x21F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F11Cu;
    // 0x21f120: 0x262514a0  addiu       $a1, $s1, 0x14A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F11Cu, 0x21F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F124u;
label_21f124:
    // 0x21f124: 0x1000022b  b           . + 4 + (0x22B << 2)
    ctx->pc = 0x21F124u;
    {
        const bool branch_taken_0x21f124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F124u;
        // 0x21f128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f124) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F12Cu;
label_21f12c:
    // 0x21f12c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f12cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f134: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F134u;
    SET_GPR_U32(ctx, 31, 0x21F13Cu);
    ctx->pc = 0x21F138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F134u;
    // 0x21f138: 0x24a52120  addiu       $a1, $a1, 0x2120 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F134u, 0x21F13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F13Cu;
label_21f13c:
    // 0x21f13c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f13cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f140: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F140u;
    {
        const bool branch_taken_0x21f140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F140u;
        // 0x21f144: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f140) {
            ctx->pc = 0x21F158u;
            goto label_21f158;
        }
    }
    ctx->pc = 0x21F148u;
    // 0x21f148: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F148u;
    SET_GPR_U32(ctx, 31, 0x21F150u);
    ctx->pc = 0x21F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F148u;
    // 0x21f14c: 0x262514bc  addiu       $a1, $s1, 0x14BC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5308));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F148u, 0x21F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F150u;
label_21f150:
    // 0x21f150: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x21F150u;
    {
        const bool branch_taken_0x21f150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F150u;
        // 0x21f154: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f150) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F158u;
label_21f158:
    // 0x21f158: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f160: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F160u;
    SET_GPR_U32(ctx, 31, 0x21F168u);
    ctx->pc = 0x21F164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F160u;
    // 0x21f164: 0x24a52138  addiu       $a1, $a1, 0x2138 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F160u, 0x21F168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F168u;
label_21f168:
    // 0x21f168: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f16c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F16Cu;
    {
        const bool branch_taken_0x21f16c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F16Cu;
        // 0x21f170: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f16c) {
            ctx->pc = 0x21F184u;
            goto label_21f184;
        }
    }
    ctx->pc = 0x21F174u;
    // 0x21f174: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F174u;
    SET_GPR_U32(ctx, 31, 0x21F17Cu);
    ctx->pc = 0x21F178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F174u;
    // 0x21f178: 0x262514a4  addiu       $a1, $s1, 0x14A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5284));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F174u, 0x21F17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F17Cu;
label_21f17c:
    // 0x21f17c: 0x10000215  b           . + 4 + (0x215 << 2)
    ctx->pc = 0x21F17Cu;
    {
        const bool branch_taken_0x21f17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F17Cu;
        // 0x21f180: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f17c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F184u;
label_21f184:
    // 0x21f184: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f18c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F18Cu;
    SET_GPR_U32(ctx, 31, 0x21F194u);
    ctx->pc = 0x21F190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F18Cu;
    // 0x21f190: 0x24a52148  addiu       $a1, $a1, 0x2148 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F18Cu, 0x21F194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F194u;
label_21f194:
    // 0x21f194: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F198u;
    {
        const bool branch_taken_0x21f198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F198u;
        // 0x21f19c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f198) {
            ctx->pc = 0x21F1B0u;
            goto label_21f1b0;
        }
    }
    ctx->pc = 0x21F1A0u;
    // 0x21f1a0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F1A0u;
    SET_GPR_U32(ctx, 31, 0x21F1A8u);
    ctx->pc = 0x21F1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1A0u;
    // 0x21f1a4: 0x262514a8  addiu       $a1, $s1, 0x14A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F1A0u, 0x21F1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1A8u;
label_21f1a8:
    // 0x21f1a8: 0x1000020a  b           . + 4 + (0x20A << 2)
    ctx->pc = 0x21F1A8u;
    {
        const bool branch_taken_0x21f1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1A8u;
        // 0x21f1ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1a8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F1B0u;
label_21f1b0:
    // 0x21f1b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F1B8u;
    SET_GPR_U32(ctx, 31, 0x21F1C0u);
    ctx->pc = 0x21F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1B8u;
    // 0x21f1bc: 0x24a52160  addiu       $a1, $a1, 0x2160 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F1B8u, 0x21F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1C0u;
label_21f1c0:
    // 0x21f1c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f1c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F1C4u;
    {
        const bool branch_taken_0x21f1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1C4u;
        // 0x21f1c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1c4) {
            ctx->pc = 0x21F1DCu;
            goto label_21f1dc;
        }
    }
    ctx->pc = 0x21F1CCu;
    // 0x21f1cc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F1CCu;
    SET_GPR_U32(ctx, 31, 0x21F1D4u);
    ctx->pc = 0x21F1D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1CCu;
    // 0x21f1d0: 0x262514ac  addiu       $a1, $s1, 0x14AC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F1CCu, 0x21F1D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1D4u;
label_21f1d4:
    // 0x21f1d4: 0x100001ff  b           . + 4 + (0x1FF << 2)
    ctx->pc = 0x21F1D4u;
    {
        const bool branch_taken_0x21f1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1D4u;
        // 0x21f1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1d4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F1DCu;
label_21f1dc:
    // 0x21f1dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f1e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f1e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F1E4u;
    SET_GPR_U32(ctx, 31, 0x21F1ECu);
    ctx->pc = 0x21F1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1E4u;
    // 0x21f1e8: 0x24a52178  addiu       $a1, $a1, 0x2178 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F1E4u, 0x21F1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F1ECu;
label_21f1ec:
    // 0x21f1ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f1f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F1F0u;
    {
        const bool branch_taken_0x21f1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F1F0u;
        // 0x21f1f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f1f0) {
            ctx->pc = 0x21F208u;
            goto label_21f208;
        }
    }
    ctx->pc = 0x21F1F8u;
    // 0x21f1f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F1F8u;
    SET_GPR_U32(ctx, 31, 0x21F200u);
    ctx->pc = 0x21F1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F1F8u;
    // 0x21f1fc: 0x262514b0  addiu       $a1, $s1, 0x14B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F1F8u, 0x21F200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F200u;
label_21f200:
    // 0x21f200: 0x100001f4  b           . + 4 + (0x1F4 << 2)
    ctx->pc = 0x21F200u;
    {
        const bool branch_taken_0x21f200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F200u;
        // 0x21f204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f200) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F208u;
label_21f208:
    // 0x21f208: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f20c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f210: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F210u;
    SET_GPR_U32(ctx, 31, 0x21F218u);
    ctx->pc = 0x21F214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F210u;
    // 0x21f214: 0x24a52190  addiu       $a1, $a1, 0x2190 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F210u, 0x21F218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F218u;
label_21f218:
    // 0x21f218: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f21c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F21Cu;
    {
        const bool branch_taken_0x21f21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F21Cu;
        // 0x21f220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f21c) {
            ctx->pc = 0x21F234u;
            goto label_21f234;
        }
    }
    ctx->pc = 0x21F224u;
    // 0x21f224: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F224u;
    SET_GPR_U32(ctx, 31, 0x21F22Cu);
    ctx->pc = 0x21F228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F224u;
    // 0x21f228: 0x262514b4  addiu       $a1, $s1, 0x14B4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5300));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F224u, 0x21F22Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F22Cu;
label_21f22c:
    // 0x21f22c: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x21F22Cu;
    {
        const bool branch_taken_0x21f22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F22Cu;
        // 0x21f230: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f22c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F234u;
label_21f234:
    // 0x21f234: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f23c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F23Cu;
    SET_GPR_U32(ctx, 31, 0x21F244u);
    ctx->pc = 0x21F240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F23Cu;
    // 0x21f240: 0x24a521b0  addiu       $a1, $a1, 0x21B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F23Cu, 0x21F244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F244u;
label_21f244:
    // 0x21f244: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f248: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F248u;
    {
        const bool branch_taken_0x21f248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F248u;
        // 0x21f24c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f248) {
            ctx->pc = 0x21F260u;
            goto label_21f260;
        }
    }
    ctx->pc = 0x21F250u;
    // 0x21f250: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F250u;
    SET_GPR_U32(ctx, 31, 0x21F258u);
    ctx->pc = 0x21F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F250u;
    // 0x21f254: 0x262514b8  addiu       $a1, $s1, 0x14B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F250u, 0x21F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F258u;
label_21f258:
    // 0x21f258: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x21F258u;
    {
        const bool branch_taken_0x21f258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F258u;
        // 0x21f25c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f258) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F260u;
label_21f260:
    // 0x21f260: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f260u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f264: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f264u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f268: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F268u;
    SET_GPR_U32(ctx, 31, 0x21F270u);
    ctx->pc = 0x21F26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F268u;
    // 0x21f26c: 0x24a521c8  addiu       $a1, $a1, 0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F268u, 0x21F270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F270u;
label_21f270:
    // 0x21f270: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f274: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F274u;
    {
        const bool branch_taken_0x21f274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F274u;
        // 0x21f278: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f274) {
            ctx->pc = 0x21F28Cu;
            goto label_21f28c;
        }
    }
    ctx->pc = 0x21F27Cu;
    // 0x21f27c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F27Cu;
    SET_GPR_U32(ctx, 31, 0x21F284u);
    ctx->pc = 0x21F280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F27Cu;
    // 0x21f280: 0x262514c0  addiu       $a1, $s1, 0x14C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F27Cu, 0x21F284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F284u;
label_21f284:
    // 0x21f284: 0x100001d3  b           . + 4 + (0x1D3 << 2)
    ctx->pc = 0x21F284u;
    {
        const bool branch_taken_0x21f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F284u;
        // 0x21f288: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f284) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F28Cu;
label_21f28c:
    // 0x21f28c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f28cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f290: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f294: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F294u;
    SET_GPR_U32(ctx, 31, 0x21F29Cu);
    ctx->pc = 0x21F298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F294u;
    // 0x21f298: 0x24a521e0  addiu       $a1, $a1, 0x21E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F294u, 0x21F29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F29Cu;
label_21f29c:
    // 0x21f29c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f2a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F2A0u;
    {
        const bool branch_taken_0x21f2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2A0u;
        // 0x21f2a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2a0) {
            ctx->pc = 0x21F2B8u;
            goto label_21f2b8;
        }
    }
    ctx->pc = 0x21F2A8u;
    // 0x21f2a8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F2A8u;
    SET_GPR_U32(ctx, 31, 0x21F2B0u);
    ctx->pc = 0x21F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2A8u;
    // 0x21f2ac: 0x262514c4  addiu       $a1, $s1, 0x14C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5316));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F2A8u, 0x21F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2B0u;
label_21f2b0:
    // 0x21f2b0: 0x100001c8  b           . + 4 + (0x1C8 << 2)
    ctx->pc = 0x21F2B0u;
    {
        const bool branch_taken_0x21f2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2B0u;
        // 0x21f2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2b0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F2B8u;
label_21f2b8:
    // 0x21f2b8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f2bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2c0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F2C0u;
    SET_GPR_U32(ctx, 31, 0x21F2C8u);
    ctx->pc = 0x21F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2C0u;
    // 0x21f2c4: 0x24a521f8  addiu       $a1, $a1, 0x21F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F2C0u, 0x21F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2C8u;
label_21f2c8:
    // 0x21f2c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F2CCu;
    {
        const bool branch_taken_0x21f2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2CCu;
        // 0x21f2d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2cc) {
            ctx->pc = 0x21F2E4u;
            goto label_21f2e4;
        }
    }
    ctx->pc = 0x21F2D4u;
    // 0x21f2d4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F2D4u;
    SET_GPR_U32(ctx, 31, 0x21F2DCu);
    ctx->pc = 0x21F2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2D4u;
    // 0x21f2d8: 0x262514c8  addiu       $a1, $s1, 0x14C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F2D4u, 0x21F2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2DCu;
label_21f2dc:
    // 0x21f2dc: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x21F2DCu;
    {
        const bool branch_taken_0x21f2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2DCu;
        // 0x21f2e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2dc) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F2E4u;
label_21f2e4:
    // 0x21f2e4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f2e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f2ec: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F2ECu;
    SET_GPR_U32(ctx, 31, 0x21F2F4u);
    ctx->pc = 0x21F2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F2ECu;
    // 0x21f2f0: 0x24a52210  addiu       $a1, $a1, 0x2210 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F2ECu, 0x21F2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F2F4u;
label_21f2f4:
    // 0x21f2f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f2f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F2F8u;
    {
        const bool branch_taken_0x21f2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F2F8u;
        // 0x21f2fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f2f8) {
            ctx->pc = 0x21F310u;
            goto label_21f310;
        }
    }
    ctx->pc = 0x21F300u;
    // 0x21f300: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F300u;
    SET_GPR_U32(ctx, 31, 0x21F308u);
    ctx->pc = 0x21F304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F300u;
    // 0x21f304: 0x262514cc  addiu       $a1, $s1, 0x14CC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F300u, 0x21F308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F308u;
label_21f308:
    // 0x21f308: 0x100001b2  b           . + 4 + (0x1B2 << 2)
    ctx->pc = 0x21F308u;
    {
        const bool branch_taken_0x21f308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F308u;
        // 0x21f30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f308) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F310u;
label_21f310:
    // 0x21f310: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f314: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f318: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F318u;
    SET_GPR_U32(ctx, 31, 0x21F320u);
    ctx->pc = 0x21F31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F318u;
    // 0x21f31c: 0x24a52230  addiu       $a1, $a1, 0x2230 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F318u, 0x21F320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F320u;
label_21f320:
    // 0x21f320: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f324: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F324u;
    {
        const bool branch_taken_0x21f324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F324u;
        // 0x21f328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f324) {
            ctx->pc = 0x21F33Cu;
            goto label_21f33c;
        }
    }
    ctx->pc = 0x21F32Cu;
    // 0x21f32c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F32Cu;
    SET_GPR_U32(ctx, 31, 0x21F334u);
    ctx->pc = 0x21F330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F32Cu;
    // 0x21f330: 0x262514d0  addiu       $a1, $s1, 0x14D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F32Cu, 0x21F334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F334u;
label_21f334:
    // 0x21f334: 0x100001a7  b           . + 4 + (0x1A7 << 2)
    ctx->pc = 0x21F334u;
    {
        const bool branch_taken_0x21f334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F334u;
        // 0x21f338: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f334) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F33Cu;
label_21f33c:
    // 0x21f33c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f33cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f344: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F344u;
    SET_GPR_U32(ctx, 31, 0x21F34Cu);
    ctx->pc = 0x21F348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F344u;
    // 0x21f348: 0x24a52240  addiu       $a1, $a1, 0x2240 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F344u, 0x21F34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F34Cu;
label_21f34c:
    // 0x21f34c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f350: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F350u;
    {
        const bool branch_taken_0x21f350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F350u;
        // 0x21f354: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f350) {
            ctx->pc = 0x21F368u;
            goto label_21f368;
        }
    }
    ctx->pc = 0x21F358u;
    // 0x21f358: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F358u;
    SET_GPR_U32(ctx, 31, 0x21F360u);
    ctx->pc = 0x21F35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F358u;
    // 0x21f35c: 0x262514d4  addiu       $a1, $s1, 0x14D4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5332));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F358u, 0x21F360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F360u;
label_21f360:
    // 0x21f360: 0x1000019c  b           . + 4 + (0x19C << 2)
    ctx->pc = 0x21F360u;
    {
        const bool branch_taken_0x21f360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F360u;
        // 0x21f364: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f360) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F368u;
label_21f368:
    // 0x21f368: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f36c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f36cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f370: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F370u;
    SET_GPR_U32(ctx, 31, 0x21F378u);
    ctx->pc = 0x21F374u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F370u;
    // 0x21f374: 0x24a52258  addiu       $a1, $a1, 0x2258 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F370u, 0x21F378u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F378u;
label_21f378:
    // 0x21f378: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f37c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F37Cu;
    {
        const bool branch_taken_0x21f37c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F37Cu;
        // 0x21f380: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f37c) {
            ctx->pc = 0x21F394u;
            goto label_21f394;
        }
    }
    ctx->pc = 0x21F384u;
    // 0x21f384: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F384u;
    SET_GPR_U32(ctx, 31, 0x21F38Cu);
    ctx->pc = 0x21F388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F384u;
    // 0x21f388: 0x262514d8  addiu       $a1, $s1, 0x14D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F384u, 0x21F38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F38Cu;
label_21f38c:
    // 0x21f38c: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x21F38Cu;
    {
        const bool branch_taken_0x21f38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F38Cu;
        // 0x21f390: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f38c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F394u;
label_21f394:
    // 0x21f394: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f39c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F39Cu;
    SET_GPR_U32(ctx, 31, 0x21F3A4u);
    ctx->pc = 0x21F3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F39Cu;
    // 0x21f3a0: 0x24a52268  addiu       $a1, $a1, 0x2268 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F39Cu, 0x21F3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3A4u;
label_21f3a4:
    // 0x21f3a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f3a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f3a8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F3A8u;
    {
        const bool branch_taken_0x21f3a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3A8u;
        // 0x21f3ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3a8) {
            ctx->pc = 0x21F3C0u;
            goto label_21f3c0;
        }
    }
    ctx->pc = 0x21F3B0u;
    // 0x21f3b0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F3B0u;
    SET_GPR_U32(ctx, 31, 0x21F3B8u);
    ctx->pc = 0x21F3B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3B0u;
    // 0x21f3b4: 0x262514dc  addiu       $a1, $s1, 0x14DC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5340));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F3B0u, 0x21F3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3B8u;
label_21f3b8:
    // 0x21f3b8: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x21F3B8u;
    {
        const bool branch_taken_0x21f3b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3B8u;
        // 0x21f3bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3b8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F3C0u;
label_21f3c0:
    // 0x21f3c0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f3c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f3c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3c8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F3C8u;
    SET_GPR_U32(ctx, 31, 0x21F3D0u);
    ctx->pc = 0x21F3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3C8u;
    // 0x21f3cc: 0x24a52278  addiu       $a1, $a1, 0x2278 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F3C8u, 0x21F3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3D0u;
label_21f3d0:
    // 0x21f3d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f3d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f3d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F3D4u;
    {
        const bool branch_taken_0x21f3d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3D4u;
        // 0x21f3d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3d4) {
            ctx->pc = 0x21F3ECu;
            goto label_21f3ec;
        }
    }
    ctx->pc = 0x21F3DCu;
    // 0x21f3dc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F3DCu;
    SET_GPR_U32(ctx, 31, 0x21F3E4u);
    ctx->pc = 0x21F3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3DCu;
    // 0x21f3e0: 0x262514e0  addiu       $a1, $s1, 0x14E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F3DCu, 0x21F3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3E4u;
label_21f3e4:
    // 0x21f3e4: 0x1000017b  b           . + 4 + (0x17B << 2)
    ctx->pc = 0x21F3E4u;
    {
        const bool branch_taken_0x21f3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F3E4u;
        // 0x21f3e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f3e4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F3ECu;
label_21f3ec:
    // 0x21f3ec: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f3f4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F3F4u;
    SET_GPR_U32(ctx, 31, 0x21F3FCu);
    ctx->pc = 0x21F3F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F3F4u;
    // 0x21f3f8: 0x24a52290  addiu       $a1, $a1, 0x2290 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F3F4u, 0x21F3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F3FCu;
label_21f3fc:
    // 0x21f3fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f3fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F400u;
    {
        const bool branch_taken_0x21f400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F400u;
        // 0x21f404: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f400) {
            ctx->pc = 0x21F41Cu;
            goto label_21f41c;
        }
    }
    ctx->pc = 0x21F408u;
    // 0x21f408: 0x262614e8  addiu       $a2, $s1, 0x14E8
    ctx->pc = 0x21f408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5352));
    // 0x21f40c: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21F40Cu;
    SET_GPR_U32(ctx, 31, 0x21F414u);
    ctx->pc = 0x21F410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F40Cu;
    // 0x21f410: 0x262514e4  addiu       $a1, $s1, 0x14E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5348));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21F40Cu, 0x21F414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F414u;
label_21f414:
    // 0x21f414: 0x1000016f  b           . + 4 + (0x16F << 2)
    ctx->pc = 0x21F414u;
    {
        const bool branch_taken_0x21f414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F414u;
        // 0x21f418: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f414) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F41Cu;
label_21f41c:
    // 0x21f41c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f41cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f424: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F424u;
    SET_GPR_U32(ctx, 31, 0x21F42Cu);
    ctx->pc = 0x21F428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F424u;
    // 0x21f428: 0x24a522a0  addiu       $a1, $a1, 0x22A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F424u, 0x21F42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F42Cu;
label_21f42c:
    // 0x21f42c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f42cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f430: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F430u;
    {
        const bool branch_taken_0x21f430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F430u;
        // 0x21f434: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f430) {
            ctx->pc = 0x21F448u;
            goto label_21f448;
        }
    }
    ctx->pc = 0x21F438u;
    // 0x21f438: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F438u;
    SET_GPR_U32(ctx, 31, 0x21F440u);
    ctx->pc = 0x21F43Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F438u;
    // 0x21f43c: 0x262514ec  addiu       $a1, $s1, 0x14EC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5356));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F438u, 0x21F440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F440u;
label_21f440:
    // 0x21f440: 0x10000164  b           . + 4 + (0x164 << 2)
    ctx->pc = 0x21F440u;
    {
        const bool branch_taken_0x21f440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F440u;
        // 0x21f444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f440) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F448u;
label_21f448:
    // 0x21f448: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f44c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f450: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F450u;
    SET_GPR_U32(ctx, 31, 0x21F458u);
    ctx->pc = 0x21F454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F450u;
    // 0x21f454: 0x24a522b0  addiu       $a1, $a1, 0x22B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F450u, 0x21F458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F458u;
label_21f458:
    // 0x21f458: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f45c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F45Cu;
    {
        const bool branch_taken_0x21f45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F45Cu;
        // 0x21f460: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f45c) {
            ctx->pc = 0x21F478u;
            goto label_21f478;
        }
    }
    ctx->pc = 0x21F464u;
    // 0x21f464: 0x262614f4  addiu       $a2, $s1, 0x14F4
    ctx->pc = 0x21f464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5364));
    // 0x21f468: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21F468u;
    SET_GPR_U32(ctx, 31, 0x21F470u);
    ctx->pc = 0x21F46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F468u;
    // 0x21f46c: 0x262514f0  addiu       $a1, $s1, 0x14F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21F468u, 0x21F470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F470u;
label_21f470:
    // 0x21f470: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x21F470u;
    {
        const bool branch_taken_0x21f470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F470u;
        // 0x21f474: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f470) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F478u;
label_21f478:
    // 0x21f478: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f478u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f47c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f47cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f480: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F480u;
    SET_GPR_U32(ctx, 31, 0x21F488u);
    ctx->pc = 0x21F484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F480u;
    // 0x21f484: 0x24a522c8  addiu       $a1, $a1, 0x22C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F480u, 0x21F488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F488u;
label_21f488:
    // 0x21f488: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f48c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F48Cu;
    {
        const bool branch_taken_0x21f48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F48Cu;
        // 0x21f490: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f48c) {
            ctx->pc = 0x21F4A8u;
            goto label_21f4a8;
        }
    }
    ctx->pc = 0x21F494u;
    // 0x21f494: 0x262614fc  addiu       $a2, $s1, 0x14FC
    ctx->pc = 0x21f494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5372));
    // 0x21f498: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21F498u;
    SET_GPR_U32(ctx, 31, 0x21F4A0u);
    ctx->pc = 0x21F49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F498u;
    // 0x21f49c: 0x262514f8  addiu       $a1, $s1, 0x14F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21F498u, 0x21F4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4A0u;
label_21f4a0:
    // 0x21f4a0: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x21F4A0u;
    {
        const bool branch_taken_0x21f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4A0u;
        // 0x21f4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4a0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F4A8u;
label_21f4a8:
    // 0x21f4a8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f4a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f4ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4b0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F4B0u;
    SET_GPR_U32(ctx, 31, 0x21F4B8u);
    ctx->pc = 0x21F4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4B0u;
    // 0x21f4b4: 0x24a522d8  addiu       $a1, $a1, 0x22D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F4B0u, 0x21F4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4B8u;
label_21f4b8:
    // 0x21f4b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f4b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f4bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F4BCu;
    {
        const bool branch_taken_0x21f4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4BCu;
        // 0x21f4c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4bc) {
            ctx->pc = 0x21F4DCu;
            goto label_21f4dc;
        }
    }
    ctx->pc = 0x21F4C4u;
    // 0x21f4c4: 0x26271508  addiu       $a3, $s1, 0x1508
    ctx->pc = 0x21f4c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5384));
    // 0x21f4c8: 0x26251500  addiu       $a1, $s1, 0x1500
    ctx->pc = 0x21f4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5376));
    // 0x21f4cc: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21F4CCu;
    SET_GPR_U32(ctx, 31, 0x21F4D4u);
    ctx->pc = 0x21F4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4CCu;
    // 0x21f4d0: 0x26261504  addiu       $a2, $s1, 0x1504 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21F4CCu, 0x21F4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4D4u;
label_21f4d4:
    // 0x21f4d4: 0x1000013f  b           . + 4 + (0x13F << 2)
    ctx->pc = 0x21F4D4u;
    {
        const bool branch_taken_0x21f4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4D4u;
        // 0x21f4d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4d4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F4DCu;
label_21f4dc:
    // 0x21f4dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f4e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f4e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f4e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F4E4u;
    SET_GPR_U32(ctx, 31, 0x21F4ECu);
    ctx->pc = 0x21F4E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4E4u;
    // 0x21f4e8: 0x24a522e8  addiu       $a1, $a1, 0x22E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F4E4u, 0x21F4ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F4ECu;
label_21f4ec:
    // 0x21f4ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f4f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F4F0u;
    {
        const bool branch_taken_0x21f4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F4F0u;
        // 0x21f4f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f4f0) {
            ctx->pc = 0x21F508u;
            goto label_21f508;
        }
    }
    ctx->pc = 0x21F4F8u;
    // 0x21f4f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F4F8u;
    SET_GPR_U32(ctx, 31, 0x21F500u);
    ctx->pc = 0x21F4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F4F8u;
    // 0x21f4fc: 0x26251510  addiu       $a1, $s1, 0x1510 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F4F8u, 0x21F500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F500u;
label_21f500:
    // 0x21f500: 0x10000134  b           . + 4 + (0x134 << 2)
    ctx->pc = 0x21F500u;
    {
        const bool branch_taken_0x21f500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F500u;
        // 0x21f504: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f500) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F508u;
label_21f508:
    // 0x21f508: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f50c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f510: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F510u;
    SET_GPR_U32(ctx, 31, 0x21F518u);
    ctx->pc = 0x21F514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F510u;
    // 0x21f514: 0x24a52300  addiu       $a1, $a1, 0x2300 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F510u, 0x21F518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F518u;
label_21f518:
    // 0x21f518: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f51c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F51Cu;
    {
        const bool branch_taken_0x21f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F51Cu;
        // 0x21f520: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f51c) {
            ctx->pc = 0x21F534u;
            goto label_21f534;
        }
    }
    ctx->pc = 0x21F524u;
    // 0x21f524: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F524u;
    SET_GPR_U32(ctx, 31, 0x21F52Cu);
    ctx->pc = 0x21F528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F524u;
    // 0x21f528: 0x26251514  addiu       $a1, $s1, 0x1514 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5396));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F524u, 0x21F52Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F52Cu;
label_21f52c:
    // 0x21f52c: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x21F52Cu;
    {
        const bool branch_taken_0x21f52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F52Cu;
        // 0x21f530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f52c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F534u;
label_21f534:
    // 0x21f534: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f534u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f53c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F53Cu;
    SET_GPR_U32(ctx, 31, 0x21F544u);
    ctx->pc = 0x21F540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F53Cu;
    // 0x21f540: 0x24a52318  addiu       $a1, $a1, 0x2318 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F53Cu, 0x21F544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F544u;
label_21f544:
    // 0x21f544: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f544u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f548: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F548u;
    {
        const bool branch_taken_0x21f548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F548u;
        // 0x21f54c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f548) {
            ctx->pc = 0x21F568u;
            goto label_21f568;
        }
    }
    ctx->pc = 0x21F550u;
    // 0x21f550: 0x26271528  addiu       $a3, $s1, 0x1528
    ctx->pc = 0x21f550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5416));
    // 0x21f554: 0x26251520  addiu       $a1, $s1, 0x1520
    ctx->pc = 0x21f554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5408));
    // 0x21f558: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21F558u;
    SET_GPR_U32(ctx, 31, 0x21F560u);
    ctx->pc = 0x21F55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F558u;
    // 0x21f55c: 0x26261524  addiu       $a2, $s1, 0x1524 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21F558u, 0x21F560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F560u;
label_21f560:
    // 0x21f560: 0x1000011c  b           . + 4 + (0x11C << 2)
    ctx->pc = 0x21F560u;
    {
        const bool branch_taken_0x21f560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F560u;
        // 0x21f564: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f560) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F568u;
label_21f568:
    // 0x21f568: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f568u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f56c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f56cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f570: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F570u;
    SET_GPR_U32(ctx, 31, 0x21F578u);
    ctx->pc = 0x21F574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F570u;
    // 0x21f574: 0x24a52330  addiu       $a1, $a1, 0x2330 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F570u, 0x21F578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F578u;
label_21f578:
    // 0x21f578: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f57c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21F57Cu;
    {
        const bool branch_taken_0x21f57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F57Cu;
        // 0x21f580: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f57c) {
            ctx->pc = 0x21F59Cu;
            goto label_21f59c;
        }
    }
    ctx->pc = 0x21F584u;
    // 0x21f584: 0x26271538  addiu       $a3, $s1, 0x1538
    ctx->pc = 0x21f584u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 5432));
    // 0x21f588: 0x26251530  addiu       $a1, $s1, 0x1530
    ctx->pc = 0x21f588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5424));
    // 0x21f58c: 0xc09df62  jal         func_277D88
    ctx->pc = 0x21F58Cu;
    SET_GPR_U32(ctx, 31, 0x21F594u);
    ctx->pc = 0x21F590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F58Cu;
    // 0x21f590: 0x26261534  addiu       $a2, $s1, 0x1534 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5428));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277D88u, 0x21F58Cu, 0x21F594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F594u;
label_21f594:
    // 0x21f594: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x21F594u;
    {
        const bool branch_taken_0x21f594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F594u;
        // 0x21f598: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f594) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F59Cu;
label_21f59c:
    // 0x21f59c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f59cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f5a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5a4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F5A4u;
    SET_GPR_U32(ctx, 31, 0x21F5ACu);
    ctx->pc = 0x21F5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5A4u;
    // 0x21f5a8: 0x24a52348  addiu       $a1, $a1, 0x2348 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F5A4u, 0x21F5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5ACu;
label_21f5ac:
    // 0x21f5ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f5acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f5b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F5B0u;
    {
        const bool branch_taken_0x21f5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5B0u;
        // 0x21f5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5b0) {
            ctx->pc = 0x21F5C8u;
            goto label_21f5c8;
        }
    }
    ctx->pc = 0x21F5B8u;
    // 0x21f5b8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F5B8u;
    SET_GPR_U32(ctx, 31, 0x21F5C0u);
    ctx->pc = 0x21F5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5B8u;
    // 0x21f5bc: 0x26251540  addiu       $a1, $s1, 0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F5B8u, 0x21F5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5C0u;
label_21f5c0:
    // 0x21f5c0: 0x10000104  b           . + 4 + (0x104 << 2)
    ctx->pc = 0x21F5C0u;
    {
        const bool branch_taken_0x21f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5C0u;
        // 0x21f5c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5c0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F5C8u;
label_21f5c8:
    // 0x21f5c8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f5cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5d0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F5D0u;
    SET_GPR_U32(ctx, 31, 0x21F5D8u);
    ctx->pc = 0x21F5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5D0u;
    // 0x21f5d4: 0x24a52358  addiu       $a1, $a1, 0x2358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F5D0u, 0x21F5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5D8u;
label_21f5d8:
    // 0x21f5d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f5d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f5dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F5DCu;
    {
        const bool branch_taken_0x21f5dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5DCu;
        // 0x21f5e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5dc) {
            ctx->pc = 0x21F5F4u;
            goto label_21f5f4;
        }
    }
    ctx->pc = 0x21F5E4u;
    // 0x21f5e4: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F5E4u;
    SET_GPR_U32(ctx, 31, 0x21F5ECu);
    ctx->pc = 0x21F5E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5E4u;
    // 0x21f5e8: 0x26251544  addiu       $a1, $s1, 0x1544 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5444));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F5E4u, 0x21F5ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F5ECu;
label_21f5ec:
    // 0x21f5ec: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x21F5ECu;
    {
        const bool branch_taken_0x21f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F5ECu;
        // 0x21f5f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f5ec) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F5F4u;
label_21f5f4:
    // 0x21f5f4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f5f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f5f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f5fc: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F5FCu;
    SET_GPR_U32(ctx, 31, 0x21F604u);
    ctx->pc = 0x21F600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F5FCu;
    // 0x21f600: 0x24a52368  addiu       $a1, $a1, 0x2368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F5FCu, 0x21F604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F604u;
label_21f604:
    // 0x21f604: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f608: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F608u;
    {
        const bool branch_taken_0x21f608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F608u;
        // 0x21f60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f608) {
            ctx->pc = 0x21F620u;
            goto label_21f620;
        }
    }
    ctx->pc = 0x21F610u;
    // 0x21f610: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F610u;
    SET_GPR_U32(ctx, 31, 0x21F618u);
    ctx->pc = 0x21F614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F610u;
    // 0x21f614: 0x26251548  addiu       $a1, $s1, 0x1548 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F610u, 0x21F618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F618u;
label_21f618:
    // 0x21f618: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x21F618u;
    {
        const bool branch_taken_0x21f618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F618u;
        // 0x21f61c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f618) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F620u;
label_21f620:
    // 0x21f620: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f624: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f628: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F628u;
    SET_GPR_U32(ctx, 31, 0x21F630u);
    ctx->pc = 0x21F62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F628u;
    // 0x21f62c: 0x24a52380  addiu       $a1, $a1, 0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F628u, 0x21F630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F630u;
label_21f630:
    // 0x21f630: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f634: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F634u;
    {
        const bool branch_taken_0x21f634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F634u;
        // 0x21f638: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f634) {
            ctx->pc = 0x21F64Cu;
            goto label_21f64c;
        }
    }
    ctx->pc = 0x21F63Cu;
    // 0x21f63c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F63Cu;
    SET_GPR_U32(ctx, 31, 0x21F644u);
    ctx->pc = 0x21F640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F63Cu;
    // 0x21f640: 0x2625154c  addiu       $a1, $s1, 0x154C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5452));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F63Cu, 0x21F644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F644u;
label_21f644:
    // 0x21f644: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x21F644u;
    {
        const bool branch_taken_0x21f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F644u;
        // 0x21f648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f644) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F64Cu;
label_21f64c:
    // 0x21f64c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f64cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f654: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F654u;
    SET_GPR_U32(ctx, 31, 0x21F65Cu);
    ctx->pc = 0x21F658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F654u;
    // 0x21f658: 0x24a52398  addiu       $a1, $a1, 0x2398 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F654u, 0x21F65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F65Cu;
label_21f65c:
    // 0x21f65c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f660: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F660u;
    {
        const bool branch_taken_0x21f660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F660u;
        // 0x21f664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f660) {
            ctx->pc = 0x21F678u;
            goto label_21f678;
        }
    }
    ctx->pc = 0x21F668u;
    // 0x21f668: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F668u;
    SET_GPR_U32(ctx, 31, 0x21F670u);
    ctx->pc = 0x21F66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F668u;
    // 0x21f66c: 0x26251550  addiu       $a1, $s1, 0x1550 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F668u, 0x21F670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F670u;
label_21f670:
    // 0x21f670: 0x100000d8  b           . + 4 + (0xD8 << 2)
    ctx->pc = 0x21F670u;
    {
        const bool branch_taken_0x21f670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F670u;
        // 0x21f674: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f670) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F678u;
label_21f678:
    // 0x21f678: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f67c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f680: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F680u;
    SET_GPR_U32(ctx, 31, 0x21F688u);
    ctx->pc = 0x21F684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F680u;
    // 0x21f684: 0x24a523b0  addiu       $a1, $a1, 0x23B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F680u, 0x21F688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F688u;
label_21f688:
    // 0x21f688: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f68c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F68Cu;
    {
        const bool branch_taken_0x21f68c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F68Cu;
        // 0x21f690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f68c) {
            ctx->pc = 0x21F6A4u;
            goto label_21f6a4;
        }
    }
    ctx->pc = 0x21F694u;
    // 0x21f694: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F694u;
    SET_GPR_U32(ctx, 31, 0x21F69Cu);
    ctx->pc = 0x21F698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F694u;
    // 0x21f698: 0x26251554  addiu       $a1, $s1, 0x1554 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F694u, 0x21F69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F69Cu;
label_21f69c:
    // 0x21f69c: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x21F69Cu;
    {
        const bool branch_taken_0x21f69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F69Cu;
        // 0x21f6a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f69c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F6A4u;
label_21f6a4:
    // 0x21f6a4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f6a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f6a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6ac: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F6ACu;
    SET_GPR_U32(ctx, 31, 0x21F6B4u);
    ctx->pc = 0x21F6B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6ACu;
    // 0x21f6b0: 0x24a523c0  addiu       $a1, $a1, 0x23C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F6ACu, 0x21F6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6B4u;
label_21f6b4:
    // 0x21f6b4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f6b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F6B8u;
    {
        const bool branch_taken_0x21f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6B8u;
        // 0x21f6bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6b8) {
            ctx->pc = 0x21F6D0u;
            goto label_21f6d0;
        }
    }
    ctx->pc = 0x21F6C0u;
    // 0x21f6c0: 0xc09e056  jal         func_278158
    ctx->pc = 0x21F6C0u;
    SET_GPR_U32(ctx, 31, 0x21F6C8u);
    ctx->pc = 0x21F6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6C0u;
    // 0x21f6c4: 0x26251558  addiu       $a1, $s1, 0x1558 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21F6C0u, 0x21F6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6C8u;
label_21f6c8:
    // 0x21f6c8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x21F6C8u;
    {
        const bool branch_taken_0x21f6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6C8u;
        // 0x21f6cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6c8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F6D0u;
label_21f6d0:
    // 0x21f6d0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f6d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f6d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f6d8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F6D8u;
    SET_GPR_U32(ctx, 31, 0x21F6E0u);
    ctx->pc = 0x21F6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6D8u;
    // 0x21f6dc: 0x24a523d0  addiu       $a1, $a1, 0x23D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F6D8u, 0x21F6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6E0u;
label_21f6e0:
    // 0x21f6e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f6e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F6E4u;
    {
        const bool branch_taken_0x21f6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6E4u;
        // 0x21f6e8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6e4) {
            ctx->pc = 0x21F700u;
            goto label_21f700;
        }
    }
    ctx->pc = 0x21F6ECu;
    // 0x21f6ec: 0x26261560  addiu       $a2, $s1, 0x1560
    ctx->pc = 0x21f6ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5472));
    // 0x21f6f0: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21F6F0u;
    SET_GPR_U32(ctx, 31, 0x21F6F8u);
    ctx->pc = 0x21F6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F6F0u;
    // 0x21f6f4: 0x2625155c  addiu       $a1, $s1, 0x155C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5468));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21F6F0u, 0x21F6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F6F8u;
label_21f6f8:
    // 0x21f6f8: 0x100000b6  b           . + 4 + (0xB6 << 2)
    ctx->pc = 0x21F6F8u;
    {
        const bool branch_taken_0x21f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F6F8u;
        // 0x21f6fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f6f8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F700u;
label_21f700:
    // 0x21f700: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f708: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F708u;
    SET_GPR_U32(ctx, 31, 0x21F710u);
    ctx->pc = 0x21F70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F708u;
    // 0x21f70c: 0x24a523e8  addiu       $a1, $a1, 0x23E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F708u, 0x21F710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F710u;
label_21f710:
    // 0x21f710: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f714: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F714u;
    {
        const bool branch_taken_0x21f714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F714u;
        // 0x21f718: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f714) {
            ctx->pc = 0x21F72Cu;
            goto label_21f72c;
        }
    }
    ctx->pc = 0x21F71Cu;
    // 0x21f71c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F71Cu;
    SET_GPR_U32(ctx, 31, 0x21F724u);
    ctx->pc = 0x21F720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F71Cu;
    // 0x21f720: 0x26251564  addiu       $a1, $s1, 0x1564 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5476));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F71Cu, 0x21F724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F724u;
label_21f724:
    // 0x21f724: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x21F724u;
    {
        const bool branch_taken_0x21f724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F724u;
        // 0x21f728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f724) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F72Cu;
label_21f72c:
    // 0x21f72c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f734: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F734u;
    SET_GPR_U32(ctx, 31, 0x21F73Cu);
    ctx->pc = 0x21F738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F734u;
    // 0x21f738: 0x24a523f8  addiu       $a1, $a1, 0x23F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F734u, 0x21F73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F73Cu;
label_21f73c:
    // 0x21f73c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F740u;
    {
        const bool branch_taken_0x21f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F740u;
        // 0x21f744: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f740) {
            ctx->pc = 0x21F758u;
            goto label_21f758;
        }
    }
    ctx->pc = 0x21F748u;
    // 0x21f748: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F748u;
    SET_GPR_U32(ctx, 31, 0x21F750u);
    ctx->pc = 0x21F74Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F748u;
    // 0x21f74c: 0x2625156c  addiu       $a1, $s1, 0x156C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5484));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F748u, 0x21F750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F750u;
label_21f750:
    // 0x21f750: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x21F750u;
    {
        const bool branch_taken_0x21f750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F750u;
        // 0x21f754: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f750) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F758u;
label_21f758:
    // 0x21f758: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f75c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f760: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F760u;
    SET_GPR_U32(ctx, 31, 0x21F768u);
    ctx->pc = 0x21F764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F760u;
    // 0x21f764: 0x24a52418  addiu       $a1, $a1, 0x2418 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F760u, 0x21F768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F768u;
label_21f768:
    // 0x21f768: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f76c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F76Cu;
    {
        const bool branch_taken_0x21f76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F76Cu;
        // 0x21f770: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f76c) {
            ctx->pc = 0x21F784u;
            goto label_21f784;
        }
    }
    ctx->pc = 0x21F774u;
    // 0x21f774: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F774u;
    SET_GPR_U32(ctx, 31, 0x21F77Cu);
    ctx->pc = 0x21F778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F774u;
    // 0x21f778: 0x26251570  addiu       $a1, $s1, 0x1570 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F774u, 0x21F77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F77Cu;
label_21f77c:
    // 0x21f77c: 0x10000095  b           . + 4 + (0x95 << 2)
    ctx->pc = 0x21F77Cu;
    {
        const bool branch_taken_0x21f77c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F77Cu;
        // 0x21f780: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f77c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F784u;
label_21f784:
    // 0x21f784: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f784u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f788: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f78c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F78Cu;
    SET_GPR_U32(ctx, 31, 0x21F794u);
    ctx->pc = 0x21F790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F78Cu;
    // 0x21f790: 0x24a52430  addiu       $a1, $a1, 0x2430 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F78Cu, 0x21F794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F794u;
label_21f794:
    // 0x21f794: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f798: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F798u;
    {
        const bool branch_taken_0x21f798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F798u;
        // 0x21f79c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f798) {
            ctx->pc = 0x21F7B0u;
            goto label_21f7b0;
        }
    }
    ctx->pc = 0x21F7A0u;
    // 0x21f7a0: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F7A0u;
    SET_GPR_U32(ctx, 31, 0x21F7A8u);
    ctx->pc = 0x21F7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7A0u;
    // 0x21f7a4: 0x26251574  addiu       $a1, $s1, 0x1574 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F7A0u, 0x21F7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7A8u;
label_21f7a8:
    // 0x21f7a8: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x21F7A8u;
    {
        const bool branch_taken_0x21f7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7A8u;
        // 0x21f7ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7a8) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F7B0u;
label_21f7b0:
    // 0x21f7b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f7b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f7b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7b8: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F7B8u;
    SET_GPR_U32(ctx, 31, 0x21F7C0u);
    ctx->pc = 0x21F7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7B8u;
    // 0x21f7bc: 0x24a52450  addiu       $a1, $a1, 0x2450 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F7B8u, 0x21F7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7C0u;
label_21f7c0:
    // 0x21f7c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f7c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f7c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F7C4u;
    {
        const bool branch_taken_0x21f7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7C4u;
        // 0x21f7c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7c4) {
            ctx->pc = 0x21F7DCu;
            goto label_21f7dc;
        }
    }
    ctx->pc = 0x21F7CCu;
    // 0x21f7cc: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F7CCu;
    SET_GPR_U32(ctx, 31, 0x21F7D4u);
    ctx->pc = 0x21F7D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7CCu;
    // 0x21f7d0: 0x26251578  addiu       $a1, $s1, 0x1578 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F7CCu, 0x21F7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7D4u;
label_21f7d4:
    // 0x21f7d4: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x21F7D4u;
    {
        const bool branch_taken_0x21f7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7D4u;
        // 0x21f7d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7d4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F7DCu;
label_21f7dc:
    // 0x21f7dc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f7e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f7e4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F7E4u;
    SET_GPR_U32(ctx, 31, 0x21F7ECu);
    ctx->pc = 0x21F7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7E4u;
    // 0x21f7e8: 0x24a52468  addiu       $a1, $a1, 0x2468 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9320));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F7E4u, 0x21F7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F7ECu;
label_21f7ec:
    // 0x21f7ec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f7f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F7F0u;
    {
        const bool branch_taken_0x21f7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F7F0u;
        // 0x21f7f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f7f0) {
            ctx->pc = 0x21F808u;
            goto label_21f808;
        }
    }
    ctx->pc = 0x21F7F8u;
    // 0x21f7f8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F7F8u;
    SET_GPR_U32(ctx, 31, 0x21F800u);
    ctx->pc = 0x21F7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F7F8u;
    // 0x21f7fc: 0x2625157c  addiu       $a1, $s1, 0x157C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5500));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F7F8u, 0x21F800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F800u;
label_21f800:
    // 0x21f800: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x21F800u;
    {
        const bool branch_taken_0x21f800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F800u;
        // 0x21f804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f800) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F808u;
label_21f808:
    // 0x21f808: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f808u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f80c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f810: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F810u;
    SET_GPR_U32(ctx, 31, 0x21F818u);
    ctx->pc = 0x21F814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F810u;
    // 0x21f814: 0x24a52480  addiu       $a1, $a1, 0x2480 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9344));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F810u, 0x21F818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F818u;
label_21f818:
    // 0x21f818: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f81c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F81Cu;
    {
        const bool branch_taken_0x21f81c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F81Cu;
        // 0x21f820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f81c) {
            ctx->pc = 0x21F834u;
            goto label_21f834;
        }
    }
    ctx->pc = 0x21F824u;
    // 0x21f824: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F824u;
    SET_GPR_U32(ctx, 31, 0x21F82Cu);
    ctx->pc = 0x21F828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F824u;
    // 0x21f828: 0x26251580  addiu       $a1, $s1, 0x1580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F824u, 0x21F82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F82Cu;
label_21f82c:
    // 0x21f82c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x21F82Cu;
    {
        const bool branch_taken_0x21f82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F82Cu;
        // 0x21f830: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f82c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F834u;
label_21f834:
    // 0x21f834: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f834u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f83c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F83Cu;
    SET_GPR_U32(ctx, 31, 0x21F844u);
    ctx->pc = 0x21F840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F83Cu;
    // 0x21f840: 0x24a52498  addiu       $a1, $a1, 0x2498 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F83Cu, 0x21F844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F844u;
label_21f844:
    // 0x21f844: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f848: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F848u;
    {
        const bool branch_taken_0x21f848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F848u;
        // 0x21f84c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f848) {
            ctx->pc = 0x21F860u;
            goto label_21f860;
        }
    }
    ctx->pc = 0x21F850u;
    // 0x21f850: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F850u;
    SET_GPR_U32(ctx, 31, 0x21F858u);
    ctx->pc = 0x21F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F850u;
    // 0x21f854: 0x26251584  addiu       $a1, $s1, 0x1584 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5508));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F850u, 0x21F858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F858u;
label_21f858:
    // 0x21f858: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x21F858u;
    {
        const bool branch_taken_0x21f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F858u;
        // 0x21f85c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f858) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F860u;
label_21f860:
    // 0x21f860: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f864: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f868: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F868u;
    SET_GPR_U32(ctx, 31, 0x21F870u);
    ctx->pc = 0x21F86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F868u;
    // 0x21f86c: 0x24a524b0  addiu       $a1, $a1, 0x24B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F868u, 0x21F870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F870u;
label_21f870:
    // 0x21f870: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f874: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F874u;
    {
        const bool branch_taken_0x21f874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F874u;
        // 0x21f878: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f874) {
            ctx->pc = 0x21F890u;
            goto label_21f890;
        }
    }
    ctx->pc = 0x21F87Cu;
    // 0x21f87c: 0x2626158c  addiu       $a2, $s1, 0x158C
    ctx->pc = 0x21f87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 5516));
    // 0x21f880: 0xc09df74  jal         func_277DD0
    ctx->pc = 0x21F880u;
    SET_GPR_U32(ctx, 31, 0x21F888u);
    ctx->pc = 0x21F884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F880u;
    // 0x21f884: 0x26251588  addiu       $a1, $s1, 0x1588 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x21F880u, 0x21F888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F888u;
label_21f888:
    // 0x21f888: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x21F888u;
    {
        const bool branch_taken_0x21f888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F888u;
        // 0x21f88c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f888) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F890u;
label_21f890:
    // 0x21f890: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f898: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F898u;
    SET_GPR_U32(ctx, 31, 0x21F8A0u);
    ctx->pc = 0x21F89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F898u;
    // 0x21f89c: 0x24a524c8  addiu       $a1, $a1, 0x24C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9416));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F898u, 0x21F8A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8A0u;
label_21f8a0:
    // 0x21f8a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f8a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f8a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8A4u;
    {
        const bool branch_taken_0x21f8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8A4u;
        // 0x21f8a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8a4) {
            ctx->pc = 0x21F8BCu;
            goto label_21f8bc;
        }
    }
    ctx->pc = 0x21F8ACu;
    // 0x21f8ac: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F8ACu;
    SET_GPR_U32(ctx, 31, 0x21F8B4u);
    ctx->pc = 0x21F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8ACu;
    // 0x21f8b0: 0x26251590  addiu       $a1, $s1, 0x1590 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F8ACu, 0x21F8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8B4u;
label_21f8b4:
    // 0x21f8b4: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x21F8B4u;
    {
        const bool branch_taken_0x21f8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8B4u;
        // 0x21f8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8b4) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F8BCu;
label_21f8bc:
    // 0x21f8bc: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f8c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8c4: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F8C4u;
    SET_GPR_U32(ctx, 31, 0x21F8CCu);
    ctx->pc = 0x21F8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8C4u;
    // 0x21f8c8: 0x24a524d8  addiu       $a1, $a1, 0x24D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F8C4u, 0x21F8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8CCu;
label_21f8cc:
    // 0x21f8cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f8ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f8d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8D0u;
    {
        const bool branch_taken_0x21f8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8D0u;
        // 0x21f8d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8d0) {
            ctx->pc = 0x21F8E8u;
            goto label_21f8e8;
        }
    }
    ctx->pc = 0x21F8D8u;
    // 0x21f8d8: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F8D8u;
    SET_GPR_U32(ctx, 31, 0x21F8E0u);
    ctx->pc = 0x21F8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8D8u;
    // 0x21f8dc: 0x26251594  addiu       $a1, $s1, 0x1594 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5524));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F8D8u, 0x21F8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8E0u;
label_21f8e0:
    // 0x21f8e0: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x21F8E0u;
    {
        const bool branch_taken_0x21f8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8E0u;
        // 0x21f8e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8e0) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F8E8u;
label_21f8e8:
    // 0x21f8e8: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f8f0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F8F0u;
    SET_GPR_U32(ctx, 31, 0x21F8F8u);
    ctx->pc = 0x21F8F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F8F0u;
    // 0x21f8f4: 0x24a524f0  addiu       $a1, $a1, 0x24F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F8F0u, 0x21F8F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F8F8u;
label_21f8f8:
    // 0x21f8f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f8fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F8FCu;
    {
        const bool branch_taken_0x21f8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F8FCu;
        // 0x21f900: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f8fc) {
            ctx->pc = 0x21F914u;
            goto label_21f914;
        }
    }
    ctx->pc = 0x21F904u;
    // 0x21f904: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F904u;
    SET_GPR_U32(ctx, 31, 0x21F90Cu);
    ctx->pc = 0x21F908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F904u;
    // 0x21f908: 0x26251598  addiu       $a1, $s1, 0x1598 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F904u, 0x21F90Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F90Cu;
label_21f90c:
    // 0x21f90c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x21F90Cu;
    {
        const bool branch_taken_0x21f90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F90Cu;
        // 0x21f910: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f90c) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F914u;
label_21f914:
    // 0x21f914: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f918: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f91c: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F91Cu;
    SET_GPR_U32(ctx, 31, 0x21F924u);
    ctx->pc = 0x21F920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F91Cu;
    // 0x21f920: 0x24a52518  addiu       $a1, $a1, 0x2518 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F91Cu, 0x21F924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F924u;
label_21f924:
    // 0x21f924: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f928: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F928u;
    {
        const bool branch_taken_0x21f928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F928u;
        // 0x21f92c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f928) {
            ctx->pc = 0x21F940u;
            goto label_21f940;
        }
    }
    ctx->pc = 0x21F930u;
    // 0x21f930: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F930u;
    SET_GPR_U32(ctx, 31, 0x21F938u);
    ctx->pc = 0x21F934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F930u;
    // 0x21f934: 0x2625159c  addiu       $a1, $s1, 0x159C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5532));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F930u, 0x21F938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F938u;
label_21f938:
    // 0x21f938: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x21F938u;
    {
        const bool branch_taken_0x21f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F938u;
        // 0x21f93c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f938) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F940u;
label_21f940:
    // 0x21f940: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f944: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f948: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F948u;
    SET_GPR_U32(ctx, 31, 0x21F950u);
    ctx->pc = 0x21F94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F948u;
    // 0x21f94c: 0x24a52540  addiu       $a1, $a1, 0x2540 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F948u, 0x21F950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F950u;
label_21f950:
    // 0x21f950: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f954: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F954u;
    {
        const bool branch_taken_0x21f954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F954u;
        // 0x21f958: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f954) {
            ctx->pc = 0x21F96Cu;
            goto label_21f96c;
        }
    }
    ctx->pc = 0x21F95Cu;
    // 0x21f95c: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F95Cu;
    SET_GPR_U32(ctx, 31, 0x21F964u);
    ctx->pc = 0x21F960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F95Cu;
    // 0x21f960: 0x262515a0  addiu       $a1, $s1, 0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F95Cu, 0x21F964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F964u;
label_21f964:
    // 0x21f964: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x21F964u;
    {
        const bool branch_taken_0x21f964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F964u;
        // 0x21f968: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f964) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F96Cu;
label_21f96c:
    // 0x21f96c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f974: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F974u;
    SET_GPR_U32(ctx, 31, 0x21F97Cu);
    ctx->pc = 0x21F978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F974u;
    // 0x21f978: 0x24a52560  addiu       $a1, $a1, 0x2560 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F974u, 0x21F97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F97Cu;
label_21f97c:
    // 0x21f97c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f97cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f980: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21F980u;
    {
        const bool branch_taken_0x21f980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F980u;
        // 0x21f984: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f980) {
            ctx->pc = 0x21F998u;
            goto label_21f998;
        }
    }
    ctx->pc = 0x21F988u;
    // 0x21f988: 0xc09debe  jal         func_277AF8
    ctx->pc = 0x21F988u;
    SET_GPR_U32(ctx, 31, 0x21F990u);
    ctx->pc = 0x21F98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F988u;
    // 0x21f98c: 0x262515a4  addiu       $a1, $s1, 0x15A4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5540));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x21F988u, 0x21F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F990u;
label_21f990:
    // 0x21f990: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x21F990u;
    {
        const bool branch_taken_0x21f990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F990u;
        // 0x21f994: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f990) {
            ctx->pc = 0x21F9D4u;
            goto label_21f9d4;
        }
    }
    ctx->pc = 0x21F998u;
label_21f998:
    // 0x21f998: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x21f998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x21f99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9a0: 0xc0d73cc  jal         func_35CF30
    ctx->pc = 0x21F9A0u;
    SET_GPR_U32(ctx, 31, 0x21F9A8u);
    ctx->pc = 0x21F9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9A0u;
    // 0x21f9a4: 0x24a52580  addiu       $a1, $a1, 0x2580 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x21F9A0u, 0x21F9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9A8u;
label_21f9a8:
    // 0x21f9a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21f9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21f9ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21F9ACu;
    {
        const bool branch_taken_0x21f9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21F9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9ACu;
        // 0x21f9b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9ac) {
            ctx->pc = 0x21F9C8u;
            goto label_21f9c8;
        }
    }
    ctx->pc = 0x21F9B4u;
    // 0x21f9b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21f9b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21f9b8: 0xc087ef6  jal         func_21FBD8
    ctx->pc = 0x21F9B8u;
    SET_GPR_U32(ctx, 31, 0x21F9C0u);
    ctx->pc = 0x21F9BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9B8u;
    // 0x21f9bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21FBD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21FBD8u, 0x21F9B8u, 0x21F9C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9C0u;
label_21f9c0:
    // 0x21f9c0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x21F9C0u;
    {
        const bool branch_taken_0x21f9c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21F9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9C0u;
        // 0x21f9c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21f9c0) {
            ctx->pc = 0x21F9D8u;
            goto label_21f9d8;
        }
    }
    ctx->pc = 0x21F9C8u;
label_21f9c8:
    // 0x21f9c8: 0xc09e056  jal         func_278158
    ctx->pc = 0x21F9C8u;
    SET_GPR_U32(ctx, 31, 0x21F9D0u);
    ctx->pc = 0x21F9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21F9C8u;
    // 0x21f9cc: 0x262515a8  addiu       $a1, $s1, 0x15A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 5544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x21F9C8u, 0x21F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21F9D0u;
label_21f9d0:
    // 0x21f9d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21f9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21f9d4:
    // 0x21f9d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x21f9d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21f9d8:
    // 0x21f9d8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x21f9d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x21f9dc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x21f9dcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21f9e0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x21f9e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x21f9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x21F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21F9E4u;
        // 0x21f9e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21F9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21F9ECu;
    // 0x21f9ec: 0x0  nop
    ctx->pc = 0x21f9ecu;
    // NOP
    ctx->pc = 0x21f9f0u;
}
