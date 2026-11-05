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

// Function: sub_003345B8
// Address: 0x3345b8 - 0x334680
void sub_003345B8_0x3345b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003345B8_0x3345b8");
#endif

    switch (ctx->pc) {
        case 0x3345b8u: goto label_3345b8;
        case 0x3345bcu: goto label_3345bc;
        case 0x3345c0u: goto label_3345c0;
        case 0x3345c4u: goto label_3345c4;
        case 0x3345c8u: goto label_3345c8;
        case 0x3345ccu: goto label_3345cc;
        case 0x3345d0u: goto label_3345d0;
        case 0x3345d4u: goto label_3345d4;
        case 0x3345d8u: goto label_3345d8;
        case 0x3345dcu: goto label_3345dc;
        case 0x3345e0u: goto label_3345e0;
        case 0x3345e4u: goto label_3345e4;
        case 0x3345e8u: goto label_3345e8;
        case 0x3345ecu: goto label_3345ec;
        case 0x3345f0u: goto label_3345f0;
        case 0x3345f4u: goto label_3345f4;
        case 0x3345f8u: goto label_3345f8;
        case 0x3345fcu: goto label_3345fc;
        case 0x334600u: goto label_334600;
        case 0x334604u: goto label_334604;
        case 0x334608u: goto label_334608;
        case 0x33460cu: goto label_33460c;
        case 0x334610u: goto label_334610;
        case 0x334614u: goto label_334614;
        case 0x334618u: goto label_334618;
        case 0x33461cu: goto label_33461c;
        case 0x334620u: goto label_334620;
        case 0x334624u: goto label_334624;
        case 0x334628u: goto label_334628;
        case 0x33462cu: goto label_33462c;
        case 0x334630u: goto label_334630;
        case 0x334634u: goto label_334634;
        case 0x334638u: goto label_334638;
        case 0x33463cu: goto label_33463c;
        case 0x334640u: goto label_334640;
        case 0x334644u: goto label_334644;
        case 0x334648u: goto label_334648;
        case 0x33464cu: goto label_33464c;
        case 0x334650u: goto label_334650;
        case 0x334654u: goto label_334654;
        case 0x334658u: goto label_334658;
        case 0x33465cu: goto label_33465c;
        case 0x334660u: goto label_334660;
        case 0x334664u: goto label_334664;
        case 0x334668u: goto label_334668;
        case 0x33466cu: goto label_33466c;
        case 0x334670u: goto label_334670;
        case 0x334674u: goto label_334674;
        case 0x334678u: goto label_334678;
        case 0x33467cu: goto label_33467c;
        default: break;
    }

    ctx->pc = 0x3345b8u;

label_3345b8:
    // 0x3345b8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3345b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3345bc:
    // 0x3345bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3345bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3345c0:
    // 0x3345c0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x3345c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_3345c4:
    // 0x3345c4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3345c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3345c8:
    // 0x3345c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3345c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3345cc:
    // 0x3345cc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x3345ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_3345d0:
    // 0x3345d0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3345d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3345d4:
    // 0x3345d4: 0xc0efab3  jal         func_3BEACC
label_3345d8:
    if (ctx->pc == 0x3345D8u) {
        ctx->pc = 0x3345D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345D4u;
        // 0x3345d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345DCu;
        goto label_3345dc;
    }
    ctx->pc = 0x3345D4u;
    SET_GPR_U32(ctx, 31, 0x3345DCu);
    ctx->pc = 0x3345D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3345D4u;
    // 0x3345d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x3345D4u, 0x3345DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3345DCu;
label_3345dc:
    // 0x3345dc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3345e0:
    // 0x3345e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3345e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3345e4:
    // 0x3345e4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3345e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3345e8:
    // 0x3345e8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3345e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_3345ec:
    // 0x3345ec: 0x40f809  jalr        $v0
label_3345f0:
    if (ctx->pc == 0x3345F0u) {
        ctx->pc = 0x3345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345ECu;
        // 0x3345f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3345F4u;
        goto label_3345f4;
    }
    ctx->pc = 0x3345ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3345F4u);
        ctx->pc = 0x3345F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345ECu;
        // 0x3345f0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3345ECu, 0x3345F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3345F4u;
label_3345f4:
    // 0x3345f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3345f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3345f8:
    // 0x3345f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3345f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3345fc:
    // 0x3345fc: 0x16220009  bne         $s1, $v0, . + 4 + (0x9 << 2)
label_334600:
    if (ctx->pc == 0x334600u) {
        ctx->pc = 0x334600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345FCu;
        // 0x334600: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334604u;
        goto label_334604;
    }
    ctx->pc = 0x3345FCu;
    {
        const bool branch_taken_0x3345fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x334600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3345FCu;
        // 0x334600: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3345fc) {
            ctx->pc = 0x334624u;
            goto label_334624;
        }
    }
    ctx->pc = 0x334604u;
label_334604:
    // 0x334604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x334604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334608:
    // 0x334608: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x334608u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_33460c:
    // 0x33460c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_334610:
    // 0x334610: 0x40f809  jalr        $v0
label_334614:
    if (ctx->pc == 0x334614u) {
        ctx->pc = 0x334614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334610u;
        // 0x334614: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334618u;
        goto label_334618;
    }
    ctx->pc = 0x334610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334618u);
        ctx->pc = 0x334614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334610u;
        // 0x334614: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334610u, 0x334618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334618u;
label_334618:
    // 0x334618: 0x10510005  beq         $v0, $s1, . + 4 + (0x5 << 2)
label_33461c:
    if (ctx->pc == 0x33461Cu) {
        ctx->pc = 0x334620u;
        goto label_334620;
    }
    ctx->pc = 0x334618u;
    {
        const bool branch_taken_0x334618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x334618) {
            ctx->pc = 0x334630u;
            goto label_334630;
        }
    }
    ctx->pc = 0x334620u;
label_334620:
    // 0x334620: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x334620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_334624:
    // 0x334624: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x334624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_334628:
    // 0x334628: 0x40f809  jalr        $v0
label_33462c:
    if (ctx->pc == 0x33462Cu) {
        ctx->pc = 0x33462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334628u;
        // 0x33462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334630u;
        goto label_334630;
    }
    ctx->pc = 0x334628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x334630u);
        ctx->pc = 0x33462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334628u;
        // 0x33462c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334628u, 0x334630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x334630u;
label_334630:
    // 0x334630: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x334630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_334634:
    // 0x334634: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x334634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_334638:
    // 0x334638: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x334638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_33463c:
    // 0x33463c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x33463cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_334640:
    // 0x334640: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x334640u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_334644:
    // 0x334644: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x334644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_334648:
    // 0x334648: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x334648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_33464c:
    // 0x33464c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33464cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_334650:
    // 0x334650: 0x9fa50010  lwu         $a1, 0x10($sp)
    ctx->pc = 0x334650u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_334654:
    // 0x334654: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x334654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_334658:
    // 0x334658: 0x9fa30014  lwu         $v1, 0x14($sp)
    ctx->pc = 0x334658u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_33465c:
    // 0x33465c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x33465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_334660:
    // 0x334660: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x334660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_334664:
    // 0x334664: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x334664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_334668:
    // 0x334668: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x334668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_33466c:
    // 0x33466c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x33466cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_334670:
    // 0x334670: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x334670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_334674:
    // 0x334674: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x334674u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_334678:
    // 0x334678: 0x3e00008  jr          $ra
label_33467c:
    if (ctx->pc == 0x33467Cu) {
        ctx->pc = 0x33467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334678u;
        // 0x33467c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x334680u;
        goto label_fallthrough_0x334678;
    }
    ctx->pc = 0x334678u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33467Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334678u;
        // 0x33467c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334678u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x334678:
    ctx->pc = 0x334680u;
}
