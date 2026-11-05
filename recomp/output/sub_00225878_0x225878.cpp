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

// Function: sub_00225878
// Address: 0x225878 - 0x225940
void sub_00225878_0x225878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225878_0x225878");
#endif

    switch (ctx->pc) {
        case 0x225878u: goto label_225878;
        case 0x22587cu: goto label_22587c;
        case 0x225880u: goto label_225880;
        case 0x225884u: goto label_225884;
        case 0x225888u: goto label_225888;
        case 0x22588cu: goto label_22588c;
        case 0x225890u: goto label_225890;
        case 0x225894u: goto label_225894;
        case 0x225898u: goto label_225898;
        case 0x22589cu: goto label_22589c;
        case 0x2258a0u: goto label_2258a0;
        case 0x2258a4u: goto label_2258a4;
        case 0x2258a8u: goto label_2258a8;
        case 0x2258acu: goto label_2258ac;
        case 0x2258b0u: goto label_2258b0;
        case 0x2258b4u: goto label_2258b4;
        case 0x2258b8u: goto label_2258b8;
        case 0x2258bcu: goto label_2258bc;
        case 0x2258c0u: goto label_2258c0;
        case 0x2258c4u: goto label_2258c4;
        case 0x2258c8u: goto label_2258c8;
        case 0x2258ccu: goto label_2258cc;
        case 0x2258d0u: goto label_2258d0;
        case 0x2258d4u: goto label_2258d4;
        case 0x2258d8u: goto label_2258d8;
        case 0x2258dcu: goto label_2258dc;
        case 0x2258e0u: goto label_2258e0;
        case 0x2258e4u: goto label_2258e4;
        case 0x2258e8u: goto label_2258e8;
        case 0x2258ecu: goto label_2258ec;
        case 0x2258f0u: goto label_2258f0;
        case 0x2258f4u: goto label_2258f4;
        case 0x2258f8u: goto label_2258f8;
        case 0x2258fcu: goto label_2258fc;
        case 0x225900u: goto label_225900;
        case 0x225904u: goto label_225904;
        case 0x225908u: goto label_225908;
        case 0x22590cu: goto label_22590c;
        case 0x225910u: goto label_225910;
        case 0x225914u: goto label_225914;
        case 0x225918u: goto label_225918;
        case 0x22591cu: goto label_22591c;
        case 0x225920u: goto label_225920;
        case 0x225924u: goto label_225924;
        case 0x225928u: goto label_225928;
        case 0x22592cu: goto label_22592c;
        case 0x225930u: goto label_225930;
        case 0x225934u: goto label_225934;
        case 0x225938u: goto label_225938;
        case 0x22593cu: goto label_22593c;
        default: break;
    }

    ctx->pc = 0x225878u;

label_225878:
    // 0x225878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x225878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_22587c:
    // 0x22587c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x22587cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_225880:
    // 0x225880: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x225880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_225884:
    // 0x225884: 0x8c43bd50  lw          $v1, -0x42B0($v0)
    ctx->pc = 0x225884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_225888:
    // 0x225888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x225888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22588c:
    // 0x22588c: 0x16030025  bne         $s0, $v1, . + 4 + (0x25 << 2)
label_225890:
    if (ctx->pc == 0x225890u) {
        ctx->pc = 0x225890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22588Cu;
        // 0x225890: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225894u;
        goto label_225894;
    }
    ctx->pc = 0x22588Cu;
    {
        const bool branch_taken_0x22588c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x225890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22588Cu;
        // 0x225890: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22588c) {
            ctx->pc = 0x225924u;
            goto label_225924;
        }
    }
    ctx->pc = 0x225894u;
label_225894:
    // 0x225894: 0x54a00006  bnel        $a1, $zero, . + 4 + (0x6 << 2)
label_225898:
    if (ctx->pc == 0x225898u) {
        ctx->pc = 0x225898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225894u;
        // 0x225898: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22589Cu;
        goto label_22589c;
    }
    ctx->pc = 0x225894u;
    {
        const bool branch_taken_0x225894 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x225894) {
            ctx->pc = 0x225898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x225894u;
            // 0x225898: 0x8e020258  lw          $v0, 0x258($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2258B0u;
            goto label_2258b0;
        }
    }
    ctx->pc = 0x22589Cu;
label_22589c:
    // 0x22589c: 0x8e02010c  lw          $v0, 0x10C($s0)
    ctx->pc = 0x22589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2258a0:
    // 0x2258a0: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x2258a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_2258a4:
    // 0x2258a4: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_2258a8:
    if (ctx->pc == 0x2258A8u) {
        ctx->pc = 0x2258ACu;
        goto label_2258ac;
    }
    ctx->pc = 0x2258A4u;
    {
        const bool branch_taken_0x2258a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2258a4) {
            ctx->pc = 0x225924u;
            goto label_225924;
        }
    }
    ctx->pc = 0x2258ACu;
label_2258ac:
    // 0x2258ac: 0x8e020258  lw          $v0, 0x258($s0)
    ctx->pc = 0x2258acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 600)));
label_2258b0:
    // 0x2258b0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2258b4:
    if (ctx->pc == 0x2258B4u) {
        ctx->pc = 0x2258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B0u;
        // 0x2258b4: 0x8e030254  lw          $v1, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258B8u;
        goto label_2258b8;
    }
    ctx->pc = 0x2258B0u;
    {
        const bool branch_taken_0x2258b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258B0u;
        // 0x2258b4: 0x8e030254  lw          $v1, 0x254($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258b0) {
            ctx->pc = 0x22592Cu;
            goto label_22592c;
        }
    }
    ctx->pc = 0x2258B8u;
label_2258b8:
    // 0x2258b8: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
label_2258bc:
    if (ctx->pc == 0x2258BCu) {
        ctx->pc = 0x2258C0u;
        goto label_2258c0;
    }
    ctx->pc = 0x2258B8u;
    {
        const bool branch_taken_0x2258b8 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x2258b8) {
            ctx->pc = 0x225924u;
            goto label_225924;
        }
    }
    ctx->pc = 0x2258C0u;
label_2258c0:
    // 0x2258c0: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2258c4:
    // 0x2258c4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2258c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2258c8:
    // 0x2258c8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2258cc:
    if (ctx->pc == 0x2258CCu) {
        ctx->pc = 0x2258CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258C8u;
        // 0x2258cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258D0u;
        goto label_2258d0;
    }
    ctx->pc = 0x2258C8u;
    {
        const bool branch_taken_0x2258c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2258CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258C8u;
        // 0x2258cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2258c8) {
            ctx->pc = 0x225924u;
            goto label_225924;
        }
    }
    ctx->pc = 0x2258D0u;
label_2258d0:
    // 0x2258d0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x2258d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_2258d4:
    // 0x2258d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2258d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2258d8:
    // 0x2258d8: 0x8e030218  lw          $v1, 0x218($s0)
    ctx->pc = 0x2258d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_2258dc:
    // 0x2258dc: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x2258dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_2258e0:
    // 0x2258e0: 0x40f809  jalr        $v0
label_2258e4:
    if (ctx->pc == 0x2258E4u) {
        ctx->pc = 0x2258E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258E0u;
        // 0x2258e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2258E8u;
        goto label_2258e8;
    }
    ctx->pc = 0x2258E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2258E8u);
        ctx->pc = 0x2258E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258E0u;
        // 0x2258e4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2258E0u, 0x2258E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2258E8u;
label_2258e8:
    // 0x2258e8: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2258e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2258ec:
    // 0x2258ec: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2258ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2258f0:
    // 0x2258f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2258f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2258f4:
    // 0x2258f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2258f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2258f8:
    // 0x2258f8: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2258f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2258fc:
    // 0x2258fc: 0xc0c4b92  jal         func_312E48
label_225900:
    if (ctx->pc == 0x225900u) {
        ctx->pc = 0x225900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2258FCu;
        // 0x225900: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x225904u;
        goto label_225904;
    }
    ctx->pc = 0x2258FCu;
    SET_GPR_U32(ctx, 31, 0x225904u);
    ctx->pc = 0x225900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2258FCu;
    // 0x225900: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312E48u, 0x2258FCu, 0x225904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225904u;
label_225904:
    // 0x225904: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x225904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_225908:
    // 0x225908: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x225908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_22590c:
    // 0x22590c: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x22590cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_225910:
    // 0x225910: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x225910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_225914:
    // 0x225914: 0xb202024b  sdl         $v0, 0x24B($s0)
    ctx->pc = 0x225914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225918:
    // 0x225918: 0xb6020244  sdr         $v0, 0x244($s0)
    ctx->pc = 0x225918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_22591c:
    // 0x22591c: 0xb2030253  sdl         $v1, 0x253($s0)
    ctx->pc = 0x22591cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_225920:
    // 0x225920: 0xb603024c  sdr         $v1, 0x24C($s0)
    ctx->pc = 0x225920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_225924:
    // 0x225924: 0xc089650  jal         func_225940
label_225928:
    if (ctx->pc == 0x225928u) {
        ctx->pc = 0x225928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225924u;
        // 0x225928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22592Cu;
        goto label_22592c;
    }
    ctx->pc = 0x225924u;
    SET_GPR_U32(ctx, 31, 0x22592Cu);
    ctx->pc = 0x225928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x225924u;
    // 0x225928: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225940u, 0x225924u, 0x22592Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22592Cu;
label_22592c:
    // 0x22592c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x22592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_225930:
    // 0x225930: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x225930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_225934:
    // 0x225934: 0x3e00008  jr          $ra
label_225938:
    if (ctx->pc == 0x225938u) {
        ctx->pc = 0x225938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225934u;
        // 0x225938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22593Cu;
        goto label_22593c;
    }
    ctx->pc = 0x225934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225934u;
        // 0x225938: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22593Cu;
label_22593c:
    // 0x22593c: 0x0  nop
    ctx->pc = 0x22593cu;
    // NOP
    ctx->pc = 0x225940u;
}
