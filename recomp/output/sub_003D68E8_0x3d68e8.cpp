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

// Function: sub_003D68E8
// Address: 0x3d68e8 - 0x3d69f0
void sub_003D68E8_0x3d68e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D68E8_0x3d68e8");
#endif

    switch (ctx->pc) {
        case 0x3d6924u: goto label_3d6924;
        case 0x3d6938u: goto label_3d6938;
        case 0x3d6958u: goto label_3d6958;
        case 0x3d696cu: goto label_3d696c;
        case 0x3d6990u: goto label_3d6990;
        case 0x3d699cu: goto label_3d699c;
        case 0x3d69c8u: goto label_3d69c8;
        default: break;
    }

    ctx->pc = 0x3d68e8u;

    // 0x3d68e8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3d68e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3d68ec: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3d68ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d68f0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3d68f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x3d68f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d68f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d68f8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3d68f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d68fc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3d68fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x3d6900: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x3d6900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x3d6904: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3d6904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x3d6908: 0x24a524b0  addiu       $a1, $a1, 0x24B0
    ctx->pc = 0x3d6908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9392));
    // 0x3d690c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x3d690cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x3d6910: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d6910u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d6914: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x3d6914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x3d6918: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d691c: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D691Cu;
    SET_GPR_U32(ctx, 31, 0x3D6924u);
    ctx->pc = 0x3D6920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D691Cu;
    // 0x3d6920: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D691Cu, 0x3D6924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6924u;
label_3d6924:
    // 0x3d6924: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D6924u;
    {
        const bool branch_taken_0x3d6924 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D6928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6924u;
        // 0x3d6928: 0x3c100048  lui         $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6924) {
            ctx->pc = 0x3D6950u;
            goto label_3d6950;
        }
    }
    ctx->pc = 0x3D692Cu;
    // 0x3d692c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d692cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d6930: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D6930u;
    SET_GPR_U32(ctx, 31, 0x3D6938u);
    ctx->pc = 0x3D6934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6930u;
    // 0x3d6934: 0x260524b8  addiu       $a1, $s0, 0x24B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D6930u, 0x3D6938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6938u;
label_3d6938:
    // 0x3d6938: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D6938u;
    {
        const bool branch_taken_0x3d6938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6938u;
        // 0x3d693c: 0x2404007a  addiu       $a0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6938) {
            ctx->pc = 0x3D6950u;
            goto label_3d6950;
        }
    }
    ctx->pc = 0x3D6940u;
    // 0x3d6940: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3d6940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d6944: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3d6944u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d6948: 0x14640022  bne         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3D6948u;
    {
        const bool branch_taken_0x3d6948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D694Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D6948u;
        // 0x3d694c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d6948) {
            ctx->pc = 0x3D69D4u;
            goto label_3d69d4;
        }
    }
    ctx->pc = 0x3D6950u;
label_3d6950:
    // 0x3d6950: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3D6950u;
    SET_GPR_U32(ctx, 31, 0x3D6958u);
    ctx->pc = 0x3D6954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6950u;
    // 0x3d6954: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3D6950u, 0x3D6958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6958u;
label_3d6958:
    // 0x3d6958: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3d6958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d695c: 0x260524b8  addiu       $a1, $s0, 0x24B8
    ctx->pc = 0x3d695cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 9400));
    // 0x3d6960: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x3d6960u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d6964: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x3D6964u;
    SET_GPR_U32(ctx, 31, 0x3D696Cu);
    ctx->pc = 0x3D6968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6964u;
    // 0x3d6968: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x3D6964u, 0x3D696Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D696Cu;
label_3d696c:
    // 0x3d696c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D696Cu;
    {
        const bool branch_taken_0x3d696c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d696c) {
            ctx->pc = 0x3D6970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D696Cu;
            // 0x3d6970: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D6984u;
            goto label_3d6984;
        }
    }
    ctx->pc = 0x3D6974u;
    // 0x3d6974: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3d6974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3d6978: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3d6978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3d697c: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x3d697cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x3d6980: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x3d6980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_3d6984:
    // 0x3d6984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d6984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6988: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D6988u;
    SET_GPR_U32(ctx, 31, 0x3D6990u);
    ctx->pc = 0x3D698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6988u;
    // 0x3d698c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D6988u, 0x3D6990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D6990u;
label_3d6990:
    // 0x3d6990: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3d6990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d6994: 0xc0f588e  jal         func_3D6238
    ctx->pc = 0x3D6994u;
    SET_GPR_U32(ctx, 31, 0x3D699Cu);
    ctx->pc = 0x3D6998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D6994u;
    // 0x3d6998: 0x2625000c  addiu       $a1, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D6238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D6238u, 0x3D6994u, 0x3D699Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D699Cu;
label_3d699c:
    // 0x3d699c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3d699cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d69a0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x3d69a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3d69a4: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3d69a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d69a8: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x3d69a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x3d69ac: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x3d69acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x3d69b0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x3d69b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3d69b4: 0x14440006  bne         $v0, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D69B4u;
    {
        const bool branch_taken_0x3d69b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x3D69B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69B4u;
        // 0x3d69b8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d69b4) {
            ctx->pc = 0x3D69D0u;
            goto label_3d69d0;
        }
    }
    ctx->pc = 0x3D69BCu;
    // 0x3d69bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d69bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d69c0: 0xc0f587c  jal         func_3D61F0
    ctx->pc = 0x3D69C0u;
    SET_GPR_U32(ctx, 31, 0x3D69C8u);
    ctx->pc = 0x3D69C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D69C0u;
    // 0x3d69c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D61F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D61F0u, 0x3D69C0u, 0x3D69C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D69C8u;
label_3d69c8:
    // 0x3d69c8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3d69c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d69cc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x3d69ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3d69d0:
    // 0x3d69d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3d69d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d69d4:
    // 0x3d69d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d69d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d69d8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3d69d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d69dc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3d69dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3d69e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3d69e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d69e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3D69E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D69E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D69E4u;
        // 0x3d69e8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D69E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D69ECu;
    // 0x3d69ec: 0x0  nop
    ctx->pc = 0x3d69ecu;
    // NOP
    ctx->pc = 0x3d69f0u;
}
