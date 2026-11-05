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

// Function: sub_00170F70
// Address: 0x170f70 - 0x171250
void sub_00170F70_0x170f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00170F70_0x170f70");
#endif

    switch (ctx->pc) {
        case 0x170f9cu: goto label_170f9c;
        case 0x170fb4u: goto label_170fb4;
        case 0x170fc8u: goto label_170fc8;
        case 0x170fd8u: goto label_170fd8;
        case 0x170fe0u: goto label_170fe0;
        case 0x170fe8u: goto label_170fe8;
        case 0x170ff8u: goto label_170ff8;
        case 0x171008u: goto label_171008;
        case 0x171010u: goto label_171010;
        case 0x171018u: goto label_171018;
        case 0x171020u: goto label_171020;
        case 0x171030u: goto label_171030;
        case 0x171048u: goto label_171048;
        case 0x171058u: goto label_171058;
        case 0x171060u: goto label_171060;
        case 0x171068u: goto label_171068;
        case 0x171070u: goto label_171070;
        case 0x171080u: goto label_171080;
        case 0x171090u: goto label_171090;
        case 0x171098u: goto label_171098;
        case 0x1710a0u: goto label_1710a0;
        case 0x1710a8u: goto label_1710a8;
        case 0x1710b8u: goto label_1710b8;
        case 0x1710c8u: goto label_1710c8;
        case 0x1710e4u: goto label_1710e4;
        case 0x1710f4u: goto label_1710f4;
        case 0x1710fcu: goto label_1710fc;
        case 0x171104u: goto label_171104;
        case 0x171110u: goto label_171110;
        case 0x171144u: goto label_171144;
        case 0x171154u: goto label_171154;
        case 0x171168u: goto label_171168;
        case 0x171178u: goto label_171178;
        case 0x171188u: goto label_171188;
        case 0x171198u: goto label_171198;
        case 0x1711a0u: goto label_1711a0;
        case 0x1711a8u: goto label_1711a8;
        case 0x1711b0u: goto label_1711b0;
        case 0x1711d4u: goto label_1711d4;
        case 0x1711e4u: goto label_1711e4;
        case 0x1711f4u: goto label_1711f4;
        case 0x171210u: goto label_171210;
        case 0x171228u: goto label_171228;
        case 0x171238u: goto label_171238;
        default: break;
    }

    ctx->pc = 0x170f70u;

    // 0x170f70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x170f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x170f74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x170f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x170f78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x170f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x170f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x170f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170f80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x170f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170f84: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x170f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x170f88: 0x92220009  lbu         $v0, 0x9($s1)
    ctx->pc = 0x170f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 9)));
    // 0x170f8c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x170F8Cu;
    {
        const bool branch_taken_0x170f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x170F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170F8Cu;
        // 0x170f90: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170f8c) {
            ctx->pc = 0x170FA4u;
            goto label_170fa4;
        }
    }
    ctx->pc = 0x170F94u;
    // 0x170f94: 0xc05d3a2  jal         func_174E88
    ctx->pc = 0x170F94u;
    SET_GPR_U32(ctx, 31, 0x170F9Cu);
    ctx->pc = 0x174E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174E88u, 0x170F94u, 0x170F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170F9Cu;
label_170f9c:
    // 0x170f9c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x170F9Cu;
    {
        const bool branch_taken_0x170f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170f9c) {
            ctx->pc = 0x170FD0u;
            goto label_170fd0;
        }
    }
    ctx->pc = 0x170FA4u;
label_170fa4:
    // 0x170fa4: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x170fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x170fa8: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x170fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    // 0x170fac: 0xc05a5fe  jal         func_1697F8
    ctx->pc = 0x170FACu;
    SET_GPR_U32(ctx, 31, 0x170FB4u);
    ctx->pc = 0x170FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FACu;
    // 0x170fb0: 0x8c500010  lw          $s0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1697F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1697F8u, 0x170FACu, 0x170FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FB4u;
label_170fb4:
    // 0x170fb4: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x170fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x170fb8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x170fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170fbc: 0x2484b060  addiu       $a0, $a0, -0x4FA0
    ctx->pc = 0x170fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946912));
    // 0x170fc0: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x170FC0u;
    SET_GPR_U32(ctx, 31, 0x170FC8u);
    ctx->pc = 0x170FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FC0u;
    // 0x170fc4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x170FC0u, 0x170FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FC8u;
label_170fc8:
    // 0x170fc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x170FC8u;
    {
        const bool branch_taken_0x170fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x170fc8) {
            ctx->pc = 0x170FF0u;
            goto label_170ff0;
        }
    }
    ctx->pc = 0x170FD0u;
label_170fd0:
    // 0x170fd0: 0xc05ca06  jal         func_172818
    ctx->pc = 0x170FD0u;
    SET_GPR_U32(ctx, 31, 0x170FD8u);
    ctx->pc = 0x170FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FD0u;
    // 0x170fd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x170FD0u, 0x170FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FD8u;
label_170fd8:
    // 0x170fd8: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x170FD8u;
    SET_GPR_U32(ctx, 31, 0x170FE0u);
    ctx->pc = 0x170FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FD8u;
    // 0x170fdc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x170FD8u, 0x170FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FE0u;
label_170fe0:
    // 0x170fe0: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x170FE0u;
    SET_GPR_U32(ctx, 31, 0x170FE8u);
    ctx->pc = 0x170FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FE0u;
    // 0x170fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x170FE0u, 0x170FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FE8u;
label_170fe8:
    // 0x170fe8: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x170FE8u;
    {
        const bool branch_taken_0x170fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FE8u;
        // 0x170fec: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170fe8) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x170FF0u;
label_170ff0:
    // 0x170ff0: 0xc05c9b8  jal         func_1726E0
    ctx->pc = 0x170FF0u;
    SET_GPR_U32(ctx, 31, 0x170FF8u);
    ctx->pc = 0x170FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x170FF0u;
    // 0x170ff4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1726E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1726E0u, 0x170FF0u, 0x170FF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x170FF8u;
label_170ff8:
    // 0x170ff8: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x170FF8u;
    {
        const bool branch_taken_0x170ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x170FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170FF8u;
        // 0x170ffc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170ff8) {
            ctx->pc = 0x171038u;
            goto label_171038;
        }
    }
    ctx->pc = 0x171000u;
    // 0x171000: 0xc05c914  jal         func_172450
    ctx->pc = 0x171000u;
    SET_GPR_U32(ctx, 31, 0x171008u);
    ctx->pc = 0x171004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171000u;
    // 0x171004: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172450u, 0x171000u, 0x171008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171008u;
label_171008:
    // 0x171008: 0xc05d3be  jal         func_174EF8
    ctx->pc = 0x171008u;
    SET_GPR_U32(ctx, 31, 0x171010u);
    ctx->pc = 0x17100Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171008u;
    // 0x17100c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EF8u, 0x171008u, 0x171010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171010u;
label_171010:
    // 0x171010: 0xc05ca06  jal         func_172818
    ctx->pc = 0x171010u;
    SET_GPR_U32(ctx, 31, 0x171018u);
    ctx->pc = 0x171014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171010u;
    // 0x171014: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x171010u, 0x171018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171018u;
label_171018:
    // 0x171018: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x171018u;
    SET_GPR_U32(ctx, 31, 0x171020u);
    ctx->pc = 0x17101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171018u;
    // 0x17101c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x171018u, 0x171020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171020u;
label_171020:
    // 0x171020: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171024: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x171024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171028: 0xc05c720  jal         func_171C80
    ctx->pc = 0x171028u;
    SET_GPR_U32(ctx, 31, 0x171030u);
    ctx->pc = 0x17102Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171028u;
    // 0x17102c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x171028u, 0x171030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171030u;
label_171030:
    // 0x171030: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x171030u;
    {
        const bool branch_taken_0x171030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171030u;
        // 0x171034: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171030) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x171038u;
label_171038:
    // 0x171038: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x171038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17103c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17103cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171040: 0xc05ca20  jal         func_172880
    ctx->pc = 0x171040u;
    SET_GPR_U32(ctx, 31, 0x171048u);
    ctx->pc = 0x171044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171040u;
    // 0x171044: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x171040u, 0x171048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171048u;
label_171048:
    // 0x171048: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x171048u;
    {
        const bool branch_taken_0x171048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171048u;
        // 0x17104c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171048) {
            ctx->pc = 0x171078u;
            goto label_171078;
        }
    }
    ctx->pc = 0x171050u;
    // 0x171050: 0xc05c914  jal         func_172450
    ctx->pc = 0x171050u;
    SET_GPR_U32(ctx, 31, 0x171058u);
    ctx->pc = 0x171054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171050u;
    // 0x171054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172450u, 0x171050u, 0x171058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171058u;
label_171058:
    // 0x171058: 0xc05d3be  jal         func_174EF8
    ctx->pc = 0x171058u;
    SET_GPR_U32(ctx, 31, 0x171060u);
    ctx->pc = 0x17105Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171058u;
    // 0x17105c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EF8u, 0x171058u, 0x171060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171060u;
label_171060:
    // 0x171060: 0xc05ca06  jal         func_172818
    ctx->pc = 0x171060u;
    SET_GPR_U32(ctx, 31, 0x171068u);
    ctx->pc = 0x171064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171060u;
    // 0x171064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x171060u, 0x171068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171068u;
label_171068:
    // 0x171068: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x171068u;
    SET_GPR_U32(ctx, 31, 0x171070u);
    ctx->pc = 0x17106Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171068u;
    // 0x17106c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x171068u, 0x171070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171070u;
label_171070:
    // 0x171070: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x171070u;
    {
        const bool branch_taken_0x171070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171070u;
        // 0x171074: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171070) {
            ctx->pc = 0x1711D8u;
            goto label_1711d8;
        }
    }
    ctx->pc = 0x171078u;
label_171078:
    // 0x171078: 0xc05cab6  jal         func_172AD8
    ctx->pc = 0x171078u;
    SET_GPR_U32(ctx, 31, 0x171080u);
    ctx->pc = 0x17107Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171078u;
    // 0x17107c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172AD8u, 0x171078u, 0x171080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171080u;
label_171080:
    // 0x171080: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x171080u;
    {
        const bool branch_taken_0x171080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171080) {
            ctx->pc = 0x1710B0u;
            goto label_1710b0;
        }
    }
    ctx->pc = 0x171088u;
    // 0x171088: 0xc05c914  jal         func_172450
    ctx->pc = 0x171088u;
    SET_GPR_U32(ctx, 31, 0x171090u);
    ctx->pc = 0x17108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171088u;
    // 0x17108c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172450u, 0x171088u, 0x171090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171090u;
label_171090:
    // 0x171090: 0xc05d3be  jal         func_174EF8
    ctx->pc = 0x171090u;
    SET_GPR_U32(ctx, 31, 0x171098u);
    ctx->pc = 0x171094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171090u;
    // 0x171094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EF8u, 0x171090u, 0x171098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171098u;
label_171098:
    // 0x171098: 0xc05ca06  jal         func_172818
    ctx->pc = 0x171098u;
    SET_GPR_U32(ctx, 31, 0x1710A0u);
    ctx->pc = 0x17109Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171098u;
    // 0x17109c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x171098u, 0x1710A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710A0u;
label_1710a0:
    // 0x1710a0: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x1710A0u;
    SET_GPR_U32(ctx, 31, 0x1710A8u);
    ctx->pc = 0x1710A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710A0u;
    // 0x1710a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x1710A0u, 0x1710A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710A8u;
label_1710a8:
    // 0x1710a8: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1710A8u;
    {
        const bool branch_taken_0x1710a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710A8u;
        // 0x1710ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710a8) {
            ctx->pc = 0x1711D8u;
            goto label_1711d8;
        }
    }
    ctx->pc = 0x1710B0u;
label_1710b0:
    // 0x1710b0: 0xc05d0bc  jal         func_1742F0
    ctx->pc = 0x1710B0u;
    SET_GPR_U32(ctx, 31, 0x1710B8u);
    ctx->pc = 0x1710B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710B0u;
    // 0x1710b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1742F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1742F0u, 0x1710B0u, 0x1710B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710B8u;
label_1710b8:
    // 0x1710b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1710B8u;
    {
        const bool branch_taken_0x1710b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710B8u;
        // 0x1710bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710b8) {
            ctx->pc = 0x1710D0u;
            goto label_1710d0;
        }
    }
    ctx->pc = 0x1710C0u;
    // 0x1710c0: 0xc05c9c6  jal         func_172718
    ctx->pc = 0x1710C0u;
    SET_GPR_U32(ctx, 31, 0x1710C8u);
    ctx->pc = 0x1710C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710C0u;
    // 0x1710c4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172718u, 0x1710C0u, 0x1710C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710C8u;
label_1710c8:
    // 0x1710c8: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x1710C8u;
    {
        const bool branch_taken_0x1710c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1710CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1710C8u;
        // 0x1710cc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1710c8) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x1710D0u;
label_1710d0:
    // 0x1710d0: 0x8e2202b0  lw          $v0, 0x2B0($s1)
    ctx->pc = 0x1710d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x1710d4: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1710D4u;
    {
        const bool branch_taken_0x1710d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1710d4) {
            ctx->pc = 0x1710D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1710D4u;
            // 0x1710d8: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171118u;
            goto label_171118;
        }
    }
    ctx->pc = 0x1710DCu;
    // 0x1710dc: 0xc05c940  jal         func_172500
    ctx->pc = 0x1710DCu;
    SET_GPR_U32(ctx, 31, 0x1710E4u);
    ctx->pc = 0x1710E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710DCu;
    // 0x1710e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172500u, 0x1710DCu, 0x1710E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710E4u;
label_1710e4:
    // 0x1710e4: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1710E4u;
    {
        const bool branch_taken_0x1710e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1710e4) {
            ctx->pc = 0x1710E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1710E4u;
            // 0x1710e8: 0x8e500018  lw          $s0, 0x18($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x171118u;
            goto label_171118;
        }
    }
    ctx->pc = 0x1710ECu;
    // 0x1710ec: 0xc05c914  jal         func_172450
    ctx->pc = 0x1710ECu;
    SET_GPR_U32(ctx, 31, 0x1710F4u);
    ctx->pc = 0x1710F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710ECu;
    // 0x1710f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172450u, 0x1710ECu, 0x1710F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710F4u;
label_1710f4:
    // 0x1710f4: 0xc05ca06  jal         func_172818
    ctx->pc = 0x1710F4u;
    SET_GPR_U32(ctx, 31, 0x1710FCu);
    ctx->pc = 0x1710F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710F4u;
    // 0x1710f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x1710F4u, 0x1710FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1710FCu;
label_1710fc:
    // 0x1710fc: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x1710FCu;
    SET_GPR_U32(ctx, 31, 0x171104u);
    ctx->pc = 0x171100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1710FCu;
    // 0x171100: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x1710FCu, 0x171104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171104u;
label_171104:
    // 0x171104: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171108: 0xc05c7f2  jal         func_171FC8
    ctx->pc = 0x171108u;
    SET_GPR_U32(ctx, 31, 0x171110u);
    ctx->pc = 0x17110Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171108u;
    // 0x17110c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171FC8u, 0x171108u, 0x171110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171110u;
label_171110:
    // 0x171110: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x171110u;
    {
        const bool branch_taken_0x171110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x171114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171110u;
        // 0x171114: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171110) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x171118u;
label_171118:
    // 0x171118: 0x56000004  bnel        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x171118u;
    {
        const bool branch_taken_0x171118 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x171118) {
            ctx->pc = 0x17111Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x171118u;
            // 0x17111c: 0x8e22025c  lw          $v0, 0x25C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17112Cu;
            goto label_17112c;
        }
    }
    ctx->pc = 0x171120u;
    // 0x171120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x171120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x171124: 0xae22025c  sw          $v0, 0x25C($s1)
    ctx->pc = 0x171124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 604), GPR_U32(ctx, 2));
    // 0x171128: 0x8e22025c  lw          $v0, 0x25C($s1)
    ctx->pc = 0x171128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 604)));
label_17112c:
    // 0x17112c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17112Cu;
    {
        const bool branch_taken_0x17112c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x171130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17112Cu;
        // 0x171130: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17112c) {
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x171134u;
    // 0x171134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x171134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171138: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x171138u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17113c: 0xc05ca20  jal         func_172880
    ctx->pc = 0x17113Cu;
    SET_GPR_U32(ctx, 31, 0x171144u);
    ctx->pc = 0x171140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17113Cu;
    // 0x171140: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172880u, 0x17113Cu, 0x171144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171144u;
label_171144:
    // 0x171144: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x171144u;
    {
        const bool branch_taken_0x171144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171144) {
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x17114Cu;
    // 0x17114c: 0xc05d08c  jal         func_174230
    ctx->pc = 0x17114Cu;
    SET_GPR_U32(ctx, 31, 0x171154u);
    ctx->pc = 0x171150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17114Cu;
    // 0x171150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174230u, 0x17114Cu, 0x171154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171154u;
label_171154:
    // 0x171154: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x171154u;
    {
        const bool branch_taken_0x171154 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x171154) {
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x17115Cu;
    // 0x17115c: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x17115cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x171160: 0xc05e3f6  jal         func_178FD8
    ctx->pc = 0x171160u;
    SET_GPR_U32(ctx, 31, 0x171168u);
    ctx->pc = 0x171164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171160u;
    // 0x171164: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178FD8u, 0x171160u, 0x171168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171168u;
label_171168:
    // 0x171168: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x171168u;
    {
        const bool branch_taken_0x171168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x171168) {
            ctx->pc = 0x171180u;
            goto label_171180;
        }
    }
    ctx->pc = 0x171170u;
    // 0x171170: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x171170u;
    SET_GPR_U32(ctx, 31, 0x171178u);
    ctx->pc = 0x171174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171170u;
    // 0x171174: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x171170u, 0x171178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171178u;
label_171178:
    // 0x171178: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x171178u;
    {
        const bool branch_taken_0x171178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17117Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171178u;
        // 0x17117c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171178) {
            ctx->pc = 0x1711D8u;
            goto label_1711d8;
        }
    }
    ctx->pc = 0x171180u;
label_171180:
    // 0x171180: 0xc04f9cc  jal         func_13E730
    ctx->pc = 0x171180u;
    SET_GPR_U32(ctx, 31, 0x171188u);
    ctx->pc = 0x171184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171180u;
    // 0x171184: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E730u, 0x171180u, 0x171188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171188u;
label_171188:
    // 0x171188: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x171188u;
    {
        const bool branch_taken_0x171188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17118Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171188u;
        // 0x17118c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171188) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x171190u;
    // 0x171190: 0xc05c880  jal         func_172200
    ctx->pc = 0x171190u;
    SET_GPR_U32(ctx, 31, 0x171198u);
    ctx->pc = 0x171194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171190u;
    // 0x171194: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172200u, 0x171190u, 0x171198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171198u;
label_171198:
    // 0x171198: 0xc05ca06  jal         func_172818
    ctx->pc = 0x171198u;
    SET_GPR_U32(ctx, 31, 0x1711A0u);
    ctx->pc = 0x17119Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171198u;
    // 0x17119c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x172818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172818u, 0x171198u, 0x1711A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711A0u;
label_1711a0:
    // 0x1711a0: 0xc05c7e6  jal         func_171F98
    ctx->pc = 0x1711A0u;
    SET_GPR_U32(ctx, 31, 0x1711A8u);
    ctx->pc = 0x1711A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711A0u;
    // 0x1711a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171F98u, 0x1711A0u, 0x1711A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711A8u;
label_1711a8:
    // 0x1711a8: 0xc05c0e8  jal         func_1703A0
    ctx->pc = 0x1711A8u;
    SET_GPR_U32(ctx, 31, 0x1711B0u);
    ctx->pc = 0x1711ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711A8u;
    // 0x1711ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1703A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1703A0u, 0x1711A8u, 0x1711B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711B0u;
label_1711b0:
    // 0x1711b0: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x1711b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
    // 0x1711b4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1711B4u;
    {
        const bool branch_taken_0x1711b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1711b4) {
            ctx->pc = 0x1711B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1711B4u;
            // 0x1711b8: 0x8e220230  lw          $v0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1711FCu;
            goto label_1711fc;
        }
    }
    ctx->pc = 0x1711BCu;
    // 0x1711bc: 0x8e220254  lw          $v0, 0x254($s1)
    ctx->pc = 0x1711bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 596)));
    // 0x1711c0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1711C0u;
    {
        const bool branch_taken_0x1711c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711C0u;
        // 0x1711c4: 0xae200234  sw          $zero, 0x234($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711c0) {
            ctx->pc = 0x1711ECu;
            goto label_1711ec;
        }
    }
    ctx->pc = 0x1711C8u;
    // 0x1711c8: 0xae200254  sw          $zero, 0x254($s1)
    ctx->pc = 0x1711c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 0));
    // 0x1711cc: 0xc05d3be  jal         func_174EF8
    ctx->pc = 0x1711CCu;
    SET_GPR_U32(ctx, 31, 0x1711D4u);
    ctx->pc = 0x1711D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711CCu;
    // 0x1711d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x174EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x174EF8u, 0x1711CCu, 0x1711D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711D4u;
label_1711d4:
    // 0x1711d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1711d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1711d8:
    // 0x1711d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1711d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1711dc: 0xc05c720  jal         func_171C80
    ctx->pc = 0x1711DCu;
    SET_GPR_U32(ctx, 31, 0x1711E4u);
    ctx->pc = 0x1711E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711DCu;
    // 0x1711e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171C80u, 0x1711DCu, 0x1711E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711E4u;
label_1711e4:
    // 0x1711e4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1711E4u;
    {
        const bool branch_taken_0x1711e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711E4u;
        // 0x1711e8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711e4) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x1711ECu;
label_1711ec:
    // 0x1711ec: 0xc05e440  jal         func_179100
    ctx->pc = 0x1711ECu;
    SET_GPR_U32(ctx, 31, 0x1711F4u);
    ctx->pc = 0x1711F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1711ECu;
    // 0x1711f0: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179100u, 0x1711ECu, 0x1711F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1711F4u;
label_1711f4:
    // 0x1711f4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1711F4u;
    {
        const bool branch_taken_0x1711f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1711F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1711F4u;
        // 0x1711f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1711f4) {
            ctx->pc = 0x171214u;
            goto label_171214;
        }
    }
    ctx->pc = 0x1711FCu;
label_1711fc:
    // 0x1711fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1711FCu;
    {
        const bool branch_taken_0x1711fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1711fc) {
            ctx->pc = 0x171230u;
            goto label_171230;
        }
    }
    ctx->pc = 0x171204u;
    // 0x171204: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x171204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x171208: 0xc05e442  jal         func_179108
    ctx->pc = 0x171208u;
    SET_GPR_U32(ctx, 31, 0x171210u);
    ctx->pc = 0x17120Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171208u;
    // 0x17120c: 0xae200230  sw          $zero, 0x230($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179108u, 0x171208u, 0x171210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171210u;
label_171210:
    // 0x171210: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x171210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_171214:
    // 0x171214: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x171214u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171218: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x171218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17121c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17121cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171220: 0xc05c734  jal         func_171CD0
    ctx->pc = 0x171220u;
    SET_GPR_U32(ctx, 31, 0x171228u);
    ctx->pc = 0x171224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171220u;
    // 0x171224: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x171CD0u, 0x171220u, 0x171228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171228u;
label_171228:
    // 0x171228: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x171228u;
    {
        const bool branch_taken_0x171228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171228u;
        // 0x17122c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x171228) {
            ctx->pc = 0x17123Cu;
            goto label_17123c;
        }
    }
    ctx->pc = 0x171230u;
label_171230:
    // 0x171230: 0xc05c86a  jal         func_1721A8
    ctx->pc = 0x171230u;
    SET_GPR_U32(ctx, 31, 0x171238u);
    ctx->pc = 0x171234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171230u;
    // 0x171234: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1721A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1721A8u, 0x171230u, 0x171238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x171238u;
label_171238:
    // 0x171238: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x171238u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17123c:
    // 0x17123c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x17123cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x171240: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x171240u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x171244: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x171244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x171248: 0x3e00008  jr          $ra
    ctx->pc = 0x171248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17124Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171248u;
        // 0x17124c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171250u;
}
