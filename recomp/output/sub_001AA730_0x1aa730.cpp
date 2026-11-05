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

// Function: sub_001AA730
// Address: 0x1aa730 - 0x1aabb8
void sub_001AA730_0x1aa730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA730_0x1aa730");
#endif

    switch (ctx->pc) {
        case 0x1aa770u: goto label_1aa770;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aaa78u: goto label_1aaa78;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab60u: goto label_1aab60;
        case 0x1aab6cu: goto label_1aab6c;
        case 0x1aab88u: goto label_1aab88;
        case 0x1aab94u: goto label_1aab94;
        default: break;
    }

    ctx->pc = 0x1aa730u;

    // 0x1aa730: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1aa734: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x1aa734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x1aa738: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x1aa738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x1aa73c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aa73cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa740: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x1aa740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x1aa744: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x1aa744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x1aa748: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x1aa748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x1aa74c: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x1aa74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x1aa750: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1aa750u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1aa754: 0x8e220150  lw          $v0, 0x150($s1)
    ctx->pc = 0x1aa754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1aa758: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1aa758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1aa75c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa75cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1aa760: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aa760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1aa764: 0x8c730110  lw          $s3, 0x110($v1)
    ctx->pc = 0x1aa764u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aa768: 0xc06a81e  jal         func_1AA078
    ctx->pc = 0x1AA768u;
    SET_GPR_U32(ctx, 31, 0x1AA770u);
    ctx->pc = 0x1AA76Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA768u;
    // 0x1aa76c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AA078u, 0x1AA768u, 0x1AA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA770u;
label_1aa770:
    // 0x1aa770: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1aa770u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa774: 0x8e340148  lw          $s4, 0x148($s1)
    ctx->pc = 0x1aa774u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1aa778: 0xc06a4c0  jal         func_1A9300
    ctx->pc = 0x1AA778u;
    SET_GPR_U32(ctx, 31, 0x1AA780u);
    ctx->pc = 0x1AA77Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA778u;
    // 0x1aa77c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9300u, 0x1AA778u, 0x1AA780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA780u;
label_1aa780:
    // 0x1aa780: 0x8e220160  lw          $v0, 0x160($s1)
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1aa784: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1AA784u;
    {
        const bool branch_taken_0x1aa784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA784u;
        // 0x1aa788: 0x8e2301e4  lw          $v1, 0x1E4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa784) {
            ctx->pc = 0x1AA830u;
            goto label_1aa830;
        }
    }
    ctx->pc = 0x1AA78Cu;
    // 0x1aa78c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1aa78cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1aa790: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1aa790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1aa794: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
    ctx->pc = 0x1AA794u;
    {
        const bool branch_taken_0x1aa794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa794) {
            ctx->pc = 0x1AA798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA794u;
            // 0x1aa798: 0x9462002a  lhu         $v0, 0x2A($v1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA834u;
            goto label_1aa834;
        }
    }
    ctx->pc = 0x1AA79Cu;
    // 0x1aa79c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aa79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7a0: 0xc075774  jal         func_1D5DD0
    ctx->pc = 0x1AA7A0u;
    SET_GPR_U32(ctx, 31, 0x1AA7A8u);
    ctx->pc = 0x1AA7A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7A0u;
    // 0x1aa7a4: 0x263201ec  addiu       $s2, $s1, 0x1EC (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 492));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5DD0u, 0x1AA7A0u, 0x1AA7A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7A8u;
label_1aa7a8:
    // 0x1aa7a8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1aa7a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7ac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1aa7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7b0: 0x8e2501e4  lw          $a1, 0x1E4($s1)
    ctx->pc = 0x1aa7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aa7b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aa7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aa7b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aa7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aa7bc: 0xc07574a  jal         func_1D5D28
    ctx->pc = 0x1AA7BCu;
    SET_GPR_U32(ctx, 31, 0x1AA7C4u);
    ctx->pc = 0x1AA7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7BCu;
    // 0x1aa7c0: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D5D28u, 0x1AA7BCu, 0x1AA7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7C4u;
label_1aa7c4:
    // 0x1aa7c4: 0x0  nop
    ctx->pc = 0x1aa7c4u;
    // NOP
label_1aa7c8:
    // 0x1aa7c8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1aa7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1aa7cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AA7CCu;
    {
        const bool branch_taken_0x1aa7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7CCu;
        // 0x1aa7d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7cc) {
            ctx->pc = 0x1AA7E0u;
            goto label_1aa7e0;
        }
    }
    ctx->pc = 0x1AA7D4u;
    // 0x1aa7d4: 0xc06a1b0  jal         func_1A86C0
    ctx->pc = 0x1AA7D4u;
    SET_GPR_U32(ctx, 31, 0x1AA7DCu);
    ctx->pc = 0x1AA7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7D4u;
    // 0x1aa7d8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A86C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A86C0u, 0x1AA7D4u, 0x1AA7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7DCu;
label_1aa7dc:
    // 0x1aa7dc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1aa7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1aa7e0:
    // 0x1aa7e0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1aa7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1aa7e4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x1aa7e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x1aa7e8: 0x661fff7  bgez        $s3, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1AA7E8u;
    {
        const bool branch_taken_0x1aa7e8 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1AA7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA7E8u;
        // 0x1aa7ec: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa7e8) {
            ctx->pc = 0x1AA7C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa7c8;
        }
    }
    ctx->pc = 0x1AA7F0u;
    // 0x1aa7f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1aa7f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa7f4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1AA7F4u;
    SET_GPR_U32(ctx, 31, 0x1AA7FCu);
    ctx->pc = 0x1AA7F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA7F4u;
    // 0x1aa7f8: 0x240503e8  addiu       $a1, $zero, 0x3E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1AA7F4u, 0x1AA7FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA7FCu;
label_1aa7fc:
    // 0x1aa7fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa7fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa800: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1AA800u;
    SET_GPR_U32(ctx, 31, 0x1AA808u);
    ctx->pc = 0x1AA804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA800u;
    // 0x1aa804: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1AA800u, 0x1AA808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA808u;
label_1aa808:
    // 0x1aa808: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA808u;
    {
        const bool branch_taken_0x1aa808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa808) {
            ctx->pc = 0x1AA818u;
            goto label_1aa818;
        }
    }
    ctx->pc = 0x1AA810u;
    // 0x1aa810: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1AA810u;
    SET_GPR_U32(ctx, 31, 0x1AA818u);
    ctx->pc = 0x1AA814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA810u;
    // 0x1aa814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1AA810u, 0x1AA818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA818u;
label_1aa818:
    // 0x1aa818: 0xc0b138a  jal         func_2C4E28
    ctx->pc = 0x1AA818u;
    SET_GPR_U32(ctx, 31, 0x1AA820u);
    ctx->pc = 0x1AA81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA818u;
    // 0x1aa81c: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4E28u, 0x1AA818u, 0x1AA820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA820u;
label_1aa820:
    // 0x1aa820: 0xe62001c0  swc1        $f0, 0x1C0($s1)
    ctx->pc = 0x1aa820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 448), bits); }
    // 0x1aa824: 0xae2001c4  sw          $zero, 0x1C4($s1)
    ctx->pc = 0x1aa824u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 0));
    // 0x1aa828: 0xa22001dc  sb          $zero, 0x1DC($s1)
    ctx->pc = 0x1aa828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 476), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aa82c: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
label_1aa830:
    // 0x1aa830: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1aa830u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
label_1aa834:
    // 0x1aa834: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1aa834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1aa838: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA838u;
    {
        const bool branch_taken_0x1aa838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA838u;
        // 0x1aa83c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa838) {
            ctx->pc = 0x1AA844u;
            goto label_1aa844;
        }
    }
    ctx->pc = 0x1AA840u;
    // 0x1aa840: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1aa840u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
label_1aa844:
    // 0x1aa844: 0xc06b640  jal         func_1AD900
    ctx->pc = 0x1AA844u;
    SET_GPR_U32(ctx, 31, 0x1AA84Cu);
    ctx->pc = 0x1AA848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA844u;
    // 0x1aa848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x1AA844u, 0x1AA84Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA84Cu;
label_1aa84c:
    // 0x1aa84c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AA84Cu;
    {
        const bool branch_taken_0x1aa84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa84c) {
            ctx->pc = 0x1AA850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA84Cu;
            // 0x1aa850: 0x2622016c  addiu       $v0, $s1, 0x16C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 364));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA874u;
            goto label_1aa874;
        }
    }
    ctx->pc = 0x1AA854u;
    // 0x1aa854: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aa854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aa858: 0x9482002a  lhu         $v0, 0x2A($a0)
    ctx->pc = 0x1aa858u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 42)));
    // 0x1aa85c: 0x3042ff7f  andi        $v0, $v0, 0xFF7F
    ctx->pc = 0x1aa85cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65407);
    // 0x1aa860: 0xa482002a  sh          $v0, 0x2A($a0)
    ctx->pc = 0x1aa860u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aa864: 0x8e230148  lw          $v1, 0x148($s1)
    ctx->pc = 0x1aa864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1aa868: 0x8c620110  lw          $v0, 0x110($v1)
    ctx->pc = 0x1aa868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 272)));
    // 0x1aa86c: 0xa0400030  sb          $zero, 0x30($v0)
    ctx->pc = 0x1aa86cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x1aa870: 0x2622016c  addiu       $v0, $s1, 0x16C
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 364));
label_1aa874:
    // 0x1aa874: 0xc624016c  lwc1        $f4, 0x16C($s1)
    ctx->pc = 0x1aa874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1aa878: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x1aa878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1aa87c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa87cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa880: 0x46042002  mul.s       $f0, $f4, $f4
    ctx->pc = 0x1aa880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1aa884: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1aa884u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1aa888: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1aa888u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1aa88c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa890: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1aa890u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1aa894: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa894u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa898: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aa898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa89c: 0x0  nop
    ctx->pc = 0x1aa89cu;
    // NOP
    // 0x1aa8a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AA8A0u;
    {
        const bool branch_taken_0x1aa8a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8A0u;
        // 0x1aa8a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8a0) {
            ctx->pc = 0x1AA8D0u;
            goto label_1aa8d0;
        }
    }
    ctx->pc = 0x1AA8A8u;
    // 0x1aa8a8: 0xc6200174  lwc1        $f0, 0x174($s1)
    ctx->pc = 0x1aa8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa8ac: 0xc6210178  lwc1        $f1, 0x178($s1)
    ctx->pc = 0x1aa8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa8b0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1aa8b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1aa8b4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1aa8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1aa8b8: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1aa8b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa8bc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa8bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa8c0: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1aa8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa8c4: 0x0  nop
    ctx->pc = 0x1aa8c4u;
    // NOP
    // 0x1aa8c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1AA8C8u;
    {
        const bool branch_taken_0x1aa8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aa8c8) {
            ctx->pc = 0x1AA8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA8C8u;
            // 0x1aa8cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA8D0u;
            goto label_1aa8d0;
        }
    }
    ctx->pc = 0x1AA8D0u;
label_1aa8d0:
    // 0x1aa8d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA8D0u;
    {
        const bool branch_taken_0x1aa8d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8D0u;
        // 0x1aa8d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8d0) {
            ctx->pc = 0x1AA8E0u;
            goto label_1aa8e0;
        }
    }
    ctx->pc = 0x1AA8D8u;
    // 0x1aa8d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA8D8u;
    {
        const bool branch_taken_0x1aa8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA8D8u;
        // 0x1aa8dc: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8d8) {
            ctx->pc = 0x1AA8E8u;
            goto label_1aa8e8;
        }
    }
    ctx->pc = 0x1AA8E0u;
label_1aa8e0:
    // 0x1aa8e0: 0xc06a3b8  jal         func_1A8EE0
    ctx->pc = 0x1AA8E0u;
    SET_GPR_U32(ctx, 31, 0x1AA8E8u);
    ctx->pc = 0x1AA8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA8E0u;
    // 0x1aa8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8EE0u, 0x1AA8E0u, 0x1AA8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA8E8u;
label_1aa8e8:
    // 0x1aa8e8: 0xc620016c  lwc1        $f0, 0x16C($s1)
    ctx->pc = 0x1aa8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa8ec: 0x2622017c  addiu       $v0, $s1, 0x17C
    ctx->pc = 0x1aa8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 380));
    // 0x1aa8f0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x1aa8f4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1aa8f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1aa8f8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1aa8f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1aa8fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aa8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa900: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1aa900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1aa904: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x1aa904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa908: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1aa908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x1aa90c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1aa90cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1aa910: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x1aa910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa914: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1aa914u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1aa918: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1aa918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1aa91c: 0x0  nop
    ctx->pc = 0x1aa91cu;
    // NOP
    // 0x1aa920: 0x0  nop
    ctx->pc = 0x1aa920u;
    // NOP
    // 0x1aa924: 0x46000004  c1          0x4
    ctx->pc = 0x1aa924u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x1aa928: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x1aa928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa92c: 0x0  nop
    ctx->pc = 0x1aa92cu;
    // NOP
    // 0x1aa930: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA930u;
    {
        const bool branch_taken_0x1aa930 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA930u;
        // 0x1aa934: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa930) {
            ctx->pc = 0x1AA93Cu;
            goto label_1aa93c;
        }
    }
    ctx->pc = 0x1AA938u;
    // 0x1aa938: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa93c:
    // 0x1aa93c: 0x8e2201e4  lw          $v0, 0x1E4($s1)
    ctx->pc = 0x1aa93cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aa940: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x1aa940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa944: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1aa944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa948: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1aa948u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aa94c: 0x0  nop
    ctx->pc = 0x1aa94cu;
    // NOP
    // 0x1aa950: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AA950u;
    {
        const bool branch_taken_0x1aa950 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AA954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA950u;
        // 0x1aa954: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa950) {
            ctx->pc = 0x1AA95Cu;
            goto label_1aa95c;
        }
    }
    ctx->pc = 0x1AA958u;
    // 0x1aa958: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa95c:
    // 0x1aa95c: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
    // 0x1aa960: 0x14600076  bnez        $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x1AA960u;
    {
        const bool branch_taken_0x1aa960 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA960u;
        // 0x1aa964: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa960) {
            ctx->pc = 0x1AAB3Cu;
            goto label_1aab3c;
        }
    }
    ctx->pc = 0x1AA968u;
    // 0x1aa968: 0x922201dc  lbu         $v0, 0x1DC($s1)
    ctx->pc = 0x1aa968u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1aa96c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1AA96Cu;
    {
        const bool branch_taken_0x1aa96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa96c) {
            ctx->pc = 0x1AA970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA96Cu;
            // 0x1aa970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA984u;
            goto label_1aa984;
        }
    }
    ctx->pc = 0x1AA974u;
    // 0x1aa974: 0x10a00069  beqz        $a1, . + 4 + (0x69 << 2)
    ctx->pc = 0x1AA974u;
    {
        const bool branch_taken_0x1aa974 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa974) {
            ctx->pc = 0x1AAB1Cu;
            goto label_1aab1c;
        }
    }
    ctx->pc = 0x1AA97Cu;
    // 0x1aa97c: 0x10800067  beqz        $a0, . + 4 + (0x67 << 2)
    ctx->pc = 0x1AA97Cu;
    {
        const bool branch_taken_0x1aa97c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA97Cu;
        // 0x1aa980: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa97c) {
            ctx->pc = 0x1AAB1Cu;
            goto label_1aab1c;
        }
    }
    ctx->pc = 0x1AA984u;
label_1aa984:
    // 0x1aa984: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1aa984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa988: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x1AA988u;
    SET_GPR_U32(ctx, 31, 0x1AA990u);
    ctx->pc = 0x1AA98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA988u;
    // 0x1aa98c: 0xa22201dc  sb          $v0, 0x1DC($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 476), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x1AA988u, 0x1AA990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA990u;
label_1aa990:
    // 0x1aa990: 0xc621017c  lwc1        $f1, 0x17C($s1)
    ctx->pc = 0x1aa990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aa994: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1aa994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa998: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x1aa998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa99c: 0x240503e8  addiu       $a1, $zero, 0x3E8
    ctx->pc = 0x1aa99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
    // 0x1aa9a0: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1aa9a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1aa9a4: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1aa9a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1aa9a8: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x1AA9A8u;
    SET_GPR_U32(ctx, 31, 0x1AA9B0u);
    ctx->pc = 0x1AA9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9A8u;
    // 0x1aa9ac: 0xafa00044  sw          $zero, 0x44($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x1AA9A8u, 0x1AA9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9B0u;
label_1aa9b0:
    // 0x1aa9b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa9b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa9b4: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x1AA9B4u;
    SET_GPR_U32(ctx, 31, 0x1AA9BCu);
    ctx->pc = 0x1AA9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9B4u;
    // 0x1aa9b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x1AA9B4u, 0x1AA9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9BCu;
label_1aa9bc:
    // 0x1aa9bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA9BCu;
    {
        const bool branch_taken_0x1aa9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa9bc) {
            ctx->pc = 0x1AA9CCu;
            goto label_1aa9cc;
        }
    }
    ctx->pc = 0x1AA9C4u;
    // 0x1aa9c4: 0xc0c4900  jal         func_312400
    ctx->pc = 0x1AA9C4u;
    SET_GPR_U32(ctx, 31, 0x1AA9CCu);
    ctx->pc = 0x1AA9C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9C4u;
    // 0x1aa9c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x1AA9C4u, 0x1AA9CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9CCu;
label_1aa9cc:
    // 0x1aa9cc: 0xc0b138a  jal         func_2C4E28
    ctx->pc = 0x1AA9CCu;
    SET_GPR_U32(ctx, 31, 0x1AA9D4u);
    ctx->pc = 0x1AA9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9CCu;
    // 0x1aa9d0: 0x26040080  addiu       $a0, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4E28u, 0x1AA9CCu, 0x1AA9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9D4u;
label_1aa9d4:
    // 0x1aa9d4: 0xc62c01c0  lwc1        $f12, 0x1C0($s1)
    ctx->pc = 0x1aa9d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1aa9d8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x1aa9d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x1aa9dc: 0xe62001c4  swc1        $f0, 0x1C4($s1)
    ctx->pc = 0x1aa9dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 452), bits); }
    // 0x1aa9e0: 0x24a55b40  addiu       $a1, $a1, 0x5B40
    ctx->pc = 0x1aa9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    // 0x1aa9e4: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x1aa9e4u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x1aa9e8: 0xc0b1574  jal         func_2C55D0
    ctx->pc = 0x1AA9E8u;
    SET_GPR_U32(ctx, 31, 0x1AA9F0u);
    ctx->pc = 0x1AA9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA9E8u;
    // 0x1aa9ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C55D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C55D0u, 0x1AA9E8u, 0x1AA9F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA9F0u;
label_1aa9f0:
    // 0x1aa9f0: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1aa9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1aa9f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1aa9f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1aa9f8: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x1aa9f8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa9fc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x1aa9fcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aaa00: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1aaa00u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aaa04: 0xdba50030  lqc2        $vf5, 0x30($sp)
    ctx->pc = 0x1aaa04u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1aaa08: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x1aaa08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1aaa0c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x1aaa0cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x1aaa10: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x1aaa10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x1aaa14: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x1aaa14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1aaa18: 0xc622018c  lwc1        $f2, 0x18C($s1)
    ctx->pc = 0x1aaa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1aaa1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaa20: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1aaa20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1aaa24: 0x0  nop
    ctx->pc = 0x1aaa24u;
    // NOP
    // 0x1aaa28: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x1aaa28u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaa2c: 0x0  nop
    ctx->pc = 0x1aaa2cu;
    // NOP
    // 0x1aaa30: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1AAA30u;
    {
        const bool branch_taken_0x1aaa30 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA30u;
        // 0x1aaa34: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa30) {
            ctx->pc = 0x1AAA60u;
            goto label_1aaa60;
        }
    }
    ctx->pc = 0x1AAA38u;
    // 0x1aaa38: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1aaa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x1aaa3c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aaa3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aaa40: 0xc4402b30  lwc1        $f0, 0x2B30($v0)
    ctx->pc = 0x1aaa40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaa44: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1aaa44u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1aaa48: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x1aaa48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1aaa4c: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1aaa4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaa50: 0x0  nop
    ctx->pc = 0x1aaa50u;
    // NOP
    // 0x1aaa54: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1AAA54u;
    {
        const bool branch_taken_0x1aaa54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1AAA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA54u;
        // 0x1aaa58: 0xe620018c  swc1        $f0, 0x18C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa54) {
            ctx->pc = 0x1AAA60u;
            goto label_1aaa60;
        }
    }
    ctx->pc = 0x1AAA5Cu;
    // 0x1aaa5c: 0xe623018c  swc1        $f3, 0x18C($s1)
    ctx->pc = 0x1aaa5cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
label_1aaa60:
    // 0x1aaa60: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x1aaa60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaa64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaa68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aaa68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aaa6c: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aaa6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aaa70: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AAA70u;
    SET_GPR_U32(ctx, 31, 0x1AAA78u);
    ctx->pc = 0x1AAA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAA70u;
    // 0x1aaa74: 0x46006301  sub.s       $f12, $f12, $f0 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AAA70u, 0x1AAA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAA78u;
label_1aaa78:
    // 0x1aaa78: 0x8e83041c  lw          $v1, 0x41C($s4)
    ctx->pc = 0x1aaa78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1052)));
    // 0x1aaa7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aaa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aaa80: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AAA80u;
    {
        const bool branch_taken_0x1aaa80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA80u;
        // 0x1aaa84: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa80) {
            ctx->pc = 0x1AAA90u;
            goto label_1aaa90;
        }
    }
    ctx->pc = 0x1AAA88u;
    // 0x1aaa88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AAA88u;
    {
        const bool branch_taken_0x1aaa88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA88u;
        // 0x1aaa8c: 0x24060045  addiu       $a2, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa88) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AAA90u;
label_1aaa90:
    // 0x1aaa90: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AAA90u;
    {
        const bool branch_taken_0x1aaa90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AAA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAA90u;
        // 0x1aaa94: 0x24060049  addiu       $a2, $zero, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaa90) {
            ctx->pc = 0x1AAAA4u;
            goto label_1aaaa4;
        }
    }
    ctx->pc = 0x1AAA98u;
    // 0x1aaa98: 0x8e8305a0  lw          $v1, 0x5A0($s4)
    ctx->pc = 0x1aaa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1440)));
    // 0x1aaa9c: 0x2402003d  addiu       $v0, $zero, 0x3D
    ctx->pc = 0x1aaa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x1aaaa0: 0x43300b  movn        $a2, $v0, $v1
    ctx->pc = 0x1aaaa0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
label_1aaaa4:
    // 0x1aaaa4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1aaaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaaa8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1aaaa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaaac: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1aaaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aaab0: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x1aaab0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaab4: 0xae2601e0  sw          $a2, 0x1E0($s1)
    ctx->pc = 0x1aaab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 480), GPR_U32(ctx, 6));
    // 0x1aaab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaabc: 0xe620017c  swc1        $f0, 0x17C($s1)
    ctx->pc = 0x1aaabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 380), bits); }
    // 0x1aaac0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1aaac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aaac4: 0xe6210180  swc1        $f1, 0x180($s1)
    ctx->pc = 0x1aaac4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 384), bits); }
    // 0x1aaac8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x1aaac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1aaacc: 0xc06a72e  jal         func_1A9CB8
    ctx->pc = 0x1AAACCu;
    SET_GPR_U32(ctx, 31, 0x1AAAD4u);
    ctx->pc = 0x1AAAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAACCu;
    // 0x1aaad0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9CB8u, 0x1AAACCu, 0x1AAAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAAD4u;
label_1aaad4:
    // 0x1aaad4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aaad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aaad8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1aaad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aaadc: 0xc620018c  lwc1        $f0, 0x18C($s1)
    ctx->pc = 0x1aaadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aaae0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1aaae0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aaae4: 0x0  nop
    ctx->pc = 0x1aaae4u;
    // NOP
    // 0x1aaae8: 0x4502000c  bc1fl       . + 4 + (0xC << 2)
    ctx->pc = 0x1AAAE8u;
    {
        const bool branch_taken_0x1aaae8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1aaae8) {
            ctx->pc = 0x1AAAECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AAAE8u;
            // 0x1aaaec: 0x8e230160  lw          $v1, 0x160($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AAB1Cu;
            goto label_1aab1c;
        }
    }
    ctx->pc = 0x1AAAF0u;
    // 0x1aaaf0: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aaaf4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aaaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aaaf8: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AAAF8u;
    SET_GPR_U32(ctx, 31, 0x1AAB00u);
    ctx->pc = 0x1AAAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAAF8u;
    // 0x1aaafc: 0xe621018c  swc1        $f1, 0x18C($s1) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AAAF8u, 0x1AAB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB00u;
label_1aab00:
    // 0x1aab00: 0xc620017c  lwc1        $f0, 0x17C($s1)
    ctx->pc = 0x1aab00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aab04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aab04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aab08: 0xe6200184  swc1        $f0, 0x184($s1)
    ctx->pc = 0x1aab08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 388), bits); }
    // 0x1aab0c: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1aab0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1aab10: 0xae220160  sw          $v0, 0x160($s1)
    ctx->pc = 0x1aab10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
    // 0x1aab14: 0xe6210188  swc1        $f1, 0x188($s1)
    ctx->pc = 0x1aab14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 392), bits); }
    // 0x1aab18: 0x8e230160  lw          $v1, 0x160($s1)
    ctx->pc = 0x1aab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 352)));
label_1aab1c:
    // 0x1aab1c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAB1Cu;
    {
        const bool branch_taken_0x1aab1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB1Cu;
        // 0x1aab20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab1c) {
            ctx->pc = 0x1AAB3Cu;
            goto label_1aab3c;
        }
    }
    ctx->pc = 0x1AAB24u;
    // 0x1aab24: 0x8e2301e4  lw          $v1, 0x1E4($s1)
    ctx->pc = 0x1aab24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aab28: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1aab28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1aab2c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1aab2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1aab30: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1AAB30u;
    {
        const bool branch_taken_0x1aab30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB30u;
        // 0x1aab34: 0xdfb00050  ld          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab30) {
            ctx->pc = 0x1AAB98u;
            goto label_1aab98;
        }
    }
    ctx->pc = 0x1AAB38u;
    // 0x1aab38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aab3c:
    // 0x1aab3c: 0x922301dc  lbu         $v1, 0x1DC($s1)
    ctx->pc = 0x1aab3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 476)));
    // 0x1aab40: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x1AAB40u;
    {
        const bool branch_taken_0x1aab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB40u;
        // 0x1aab44: 0xae220160  sw          $v0, 0x160($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab40) {
            ctx->pc = 0x1AAB74u;
            goto label_1aab74;
        }
    }
    ctx->pc = 0x1AAB48u;
    // 0x1aab48: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aab4c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1aab4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1aab50: 0x8e2401e4  lw          $a0, 0x1E4($s1)
    ctx->pc = 0x1aab50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    // 0x1aab54: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aab54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aab58: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AAB58u;
    SET_GPR_U32(ctx, 31, 0x1AAB60u);
    ctx->pc = 0x1AAB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB58u;
    // 0x1aab5c: 0xe620018c  swc1        $f0, 0x18C($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 396), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AAB58u, 0x1AAB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB60u;
label_1aab60:
    // 0x1aab60: 0x8e2501e0  lw          $a1, 0x1E0($s1)
    ctx->pc = 0x1aab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 480)));
    // 0x1aab64: 0xc069832  jal         func_1A60C8
    ctx->pc = 0x1AAB64u;
    SET_GPR_U32(ctx, 31, 0x1AAB6Cu);
    ctx->pc = 0x1AAB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB64u;
    // 0x1aab68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A60C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A60C8u, 0x1AAB64u, 0x1AAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB6Cu;
label_1aab6c:
    // 0x1aab6c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1AAB6Cu;
    {
        const bool branch_taken_0x1aab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AAB6Cu;
        // 0x1aab70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab6c) {
            ctx->pc = 0x1AAB8Cu;
            goto label_1aab8c;
        }
    }
    ctx->pc = 0x1AAB74u;
label_1aab74:
    // 0x1aab74: 0xae20018c  sw          $zero, 0x18C($s1)
    ctx->pc = 0x1aab74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 396), GPR_U32(ctx, 0));
    // 0x1aab78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1aab78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1aab7c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aab7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aab80: 0xc073f06  jal         func_1CFC18
    ctx->pc = 0x1AAB80u;
    SET_GPR_U32(ctx, 31, 0x1AAB88u);
    ctx->pc = 0x1AAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB80u;
    // 0x1aab84: 0x8e2401e4  lw          $a0, 0x1E4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC18u, 0x1AAB80u, 0x1AAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB88u;
label_1aab88:
    // 0x1aab88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aab88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aab8c:
    // 0x1aab8c: 0xc06a23e  jal         func_1A88F8
    ctx->pc = 0x1AAB8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB94u);
    ctx->pc = 0x1AAB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AAB8Cu;
    // 0x1aab90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x1AAB8Cu, 0x1AAB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AAB94u;
label_1aab94:
    // 0x1aab94: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x1aab94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aab98:
    // 0x1aab98: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x1aab98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1aab9c: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x1aab9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1aaba0: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x1aaba0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aaba4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x1aaba4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1aaba8: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x1aaba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1aabac: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1aabacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1aabb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AABB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AABB0u;
        // 0x1aabb4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AABB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AABB8u;
}
