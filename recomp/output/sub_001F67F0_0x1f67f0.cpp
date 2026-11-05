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

// Function: sub_001F67F0
// Address: 0x1f67f0 - 0x1f6928
void sub_001F67F0_0x1f67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F67F0_0x1f67f0");
#endif

    switch (ctx->pc) {
        case 0x1f6838u: goto label_1f6838;
        case 0x1f686cu: goto label_1f686c;
        case 0x1f6878u: goto label_1f6878;
        case 0x1f6888u: goto label_1f6888;
        case 0x1f6894u: goto label_1f6894;
        case 0x1f68a4u: goto label_1f68a4;
        case 0x1f68b0u: goto label_1f68b0;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68d4u: goto label_1f68d4;
        case 0x1f68f0u: goto label_1f68f0;
        case 0x1f68f8u: goto label_1f68f8;
        case 0x1f6900u: goto label_1f6900;
        default: break;
    }

    ctx->pc = 0x1f67f0u;

    // 0x1f67f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f67f4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f67f8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1f67f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1f67fc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f67fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6800: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1f6800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1f6804: 0x3c140049  lui         $s4, 0x49
    ctx->pc = 0x1f6804u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)73 << 16));
    // 0x1f6808: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f680c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f680cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f6810: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f6810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f6814: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f6818: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f6818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f681c: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1F681Cu;
    {
        const bool branch_taken_0x1f681c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F681Cu;
        // 0x1f6820: 0x3c150049  lui         $s5, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f681c) {
            ctx->pc = 0x1F68F0u;
            goto label_1f68f0;
        }
    }
    ctx->pc = 0x1F6824u;
    // 0x1f6824: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f6824u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6828: 0x240600e6  addiu       $a2, $zero, 0xE6
    ctx->pc = 0x1f6828u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 230));
    // 0x1f682c: 0x26657ab4  addiu       $a1, $s3, 0x7AB4
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 31412));
    // 0x1f6830: 0x26647718  addiu       $a0, $s3, 0x7718
    ctx->pc = 0x1f6830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 30488));
    // 0x1f6834: 0x26634f98  addiu       $v1, $s3, 0x4F98
    ctx->pc = 0x1f6834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 20376));
label_1f6838:
    // 0x1f6838: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1f6838u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1f683c: 0xb11021  addu        $v0, $a1, $s1
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x1f6840: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x1f6840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
    // 0x1f6844: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f6844u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f6848: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1f6848u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f684c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f684cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f6850: 0x2e2200e6  sltiu       $v0, $s1, 0xE6
    ctx->pc = 0x1f6850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)230) ? 1 : 0);
    // 0x1f6854: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F6854u;
    {
        const bool branch_taken_0x1f6854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F6858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6854u;
        // 0x1f6858: 0x2463002c  addiu       $v1, $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6854) {
            ctx->pc = 0x1F6838u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6838;
        }
    }
    ctx->pc = 0x1F685Cu;
    // 0x1f685c: 0xae607ab0  sw          $zero, 0x7AB0($s3)
    ctx->pc = 0x1f685cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 31408), GPR_U32(ctx, 0));
    // 0x1f6860: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f6860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6864: 0xc07bb9c  jal         func_1EEE70
    ctx->pc = 0x1F6864u;
    SET_GPR_U32(ctx, 31, 0x1F686Cu);
    ctx->pc = 0x1F6868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6864u;
    // 0x1f6868: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEE70u, 0x1F6864u, 0x1F686Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F686Cu;
label_1f686c:
    // 0x1f686c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1f686cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1f6870: 0xc07f7e8  jal         func_1FDFA0
    ctx->pc = 0x1F6870u;
    SET_GPR_U32(ctx, 31, 0x1F6878u);
    ctx->pc = 0x1F6874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F6870u;
    // 0x1f6874: 0x24849b28  addiu       $a0, $a0, -0x64D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFA0u, 0x1F6870u, 0x1F6878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6878u;
label_1f6878:
    // 0x1f6878: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x1f6878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x1f687c: 0x24529c38  addiu       $s2, $v0, -0x63C8
    ctx->pc = 0x1f687cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941752));
    // 0x1f6880: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x1f6880u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x1f6884: 0x0  nop
    ctx->pc = 0x1f6884u;
    // NOP
label_1f6888:
    // 0x1f6888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f688c: 0xc080a12  jal         func_202848
    ctx->pc = 0x1F688Cu;
    SET_GPR_U32(ctx, 31, 0x1F6894u);
    ctx->pc = 0x1F6890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F688Cu;
    // 0x1f6890: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202848u, 0x1F688Cu, 0x1F6894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6894u;
label_1f6894:
    // 0x1f6894: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6894u;
    {
        const bool branch_taken_0x1f6894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F6898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F6894u;
        // 0x1f6898: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f6894) {
            ctx->pc = 0x1F68B0u;
            goto label_1f68b0;
        }
    }
    ctx->pc = 0x1F689Cu;
    // 0x1f689c: 0xc0809e4  jal         func_202790
    ctx->pc = 0x1F689Cu;
    SET_GPR_U32(ctx, 31, 0x1F68A4u);
    ctx->pc = 0x1F68A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F689Cu;
    // 0x1f68a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202790u, 0x1F689Cu, 0x1F68A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68A4u;
label_1f68a4:
    // 0x1f68a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f68a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68a8: 0xc0809fa  jal         func_2027E8
    ctx->pc = 0x1F68A8u;
    SET_GPR_U32(ctx, 31, 0x1F68B0u);
    ctx->pc = 0x1F68ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68A8u;
    // 0x1f68ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027E8u, 0x1F68A8u, 0x1F68B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68B0u;
label_1f68b0:
    // 0x1f68b0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1f68b4: 0x2e220009  sltiu       $v0, $s1, 0x9
    ctx->pc = 0x1f68b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1f68b8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1F68B8u;
    {
        const bool branch_taken_0x1f68b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F68BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68B8u;
        // 0x1f68bc: 0x323000ff  andi        $s0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68b8) {
            ctx->pc = 0x1F6888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f6888;
        }
    }
    ctx->pc = 0x1F68C0u;
    // 0x1f68c0: 0xc0808ec  jal         func_2023B0
    ctx->pc = 0x1F68C0u;
    SET_GPR_U32(ctx, 31, 0x1F68C8u);
    ctx->pc = 0x1F68C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68C0u;
    // 0x1f68c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2023B0u, 0x1F68C0u, 0x1F68C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68C8u;
label_1f68c8:
    // 0x1f68c8: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1f68c8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1f68cc: 0xc07bbd2  jal         func_1EEF48
    ctx->pc = 0x1F68CCu;
    SET_GPR_U32(ctx, 31, 0x1F68D4u);
    ctx->pc = 0x1F68D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68CCu;
    // 0x1f68d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EEF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EEF48u, 0x1F68CCu, 0x1F68D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68D4u;
label_1f68d4:
    // 0x1f68d4: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f68d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f68d8: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x1f68d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1f68dc: 0x8c4515c8  lw          $a1, 0x15C8($v0)
    ctx->pc = 0x1f68dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5576)));
    // 0x1f68e0: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F68E0u;
    {
        const bool branch_taken_0x1f68e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F68E0u;
        // 0x1f68e4: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68e0) {
            ctx->pc = 0x1F68F0u;
            goto label_1f68f0;
        }
    }
    ctx->pc = 0x1F68E8u;
    // 0x1f68e8: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x1F68E8u;
    SET_GPR_U32(ctx, 31, 0x1F68F0u);
    ctx->pc = 0x1F68ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68E8u;
    // 0x1f68ec: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x1F68E8u, 0x1F68F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68F0u;
label_1f68f0:
    // 0x1f68f0: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1F68F0u;
    SET_GPR_U32(ctx, 31, 0x1F68F8u);
    ctx->pc = 0x1F68F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68F0u;
    // 0x1f68f4: 0x26840460  addiu       $a0, $s4, 0x460 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1F68F0u, 0x1F68F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F68F8u;
label_1f68f8:
    // 0x1f68f8: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1F68F8u;
    SET_GPR_U32(ctx, 31, 0x1F6900u);
    ctx->pc = 0x1F68FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F68F8u;
    // 0x1f68fc: 0x26a40468  addiu       $a0, $s5, 0x468 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 1128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1F68F8u, 0x1F6900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F6900u;
label_1f6900:
    // 0x1f6900: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f6900u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6904: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6904u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6908: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6908u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f690c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f690cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f6910: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1f6910u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6914: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1f6914u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6918: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f6918u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f691c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F691Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F691Cu;
        // 0x1f6920: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F691Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F6924u;
    // 0x1f6924: 0x0  nop
    ctx->pc = 0x1f6924u;
    // NOP
    ctx->pc = 0x1f6928u;
}
