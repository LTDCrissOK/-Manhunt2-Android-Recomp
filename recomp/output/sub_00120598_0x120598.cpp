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

// Function: sub_00120598
// Address: 0x120598 - 0x120718
void sub_00120598_0x120598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00120598_0x120598");
#endif

    switch (ctx->pc) {
        case 0x1205ccu: goto label_1205cc;
        case 0x1205e8u: goto label_1205e8;
        case 0x120600u: goto label_120600;
        case 0x120640u: goto label_120640;
        case 0x1206c8u: goto label_1206c8;
        case 0x1206d0u: goto label_1206d0;
        case 0x1206f8u: goto label_1206f8;
        default: break;
    }

    ctx->pc = 0x120598u;

    // 0x120598: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x120598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12059c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x12059cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1205a0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1205a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1205a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1205a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1205a8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1205a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1205ac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1205acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1205b0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1205b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1205b4: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1205b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x1205b8: 0x92420214  lbu         $v0, 0x214($s2)
    ctx->pc = 0x1205b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x1205bc: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x1205BCu;
    {
        const bool branch_taken_0x1205bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1205C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205BCu;
        // 0x1205c0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205bc) {
            ctx->pc = 0x1206F8u;
            goto label_1206f8;
        }
    }
    ctx->pc = 0x1205C4u;
    // 0x1205c4: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1205C4u;
    SET_GPR_U32(ctx, 31, 0x1205CCu);
    ctx->pc = 0x1205C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205C4u;
    // 0x1205c8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1205C4u, 0x1205CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1205CCu;
label_1205cc:
    // 0x1205cc: 0x92430214  lbu         $v1, 0x214($s2)
    ctx->pc = 0x1205ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x1205d0: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1205D0u;
    {
        const bool branch_taken_0x1205d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1205d0) {
            ctx->pc = 0x1205D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1205D0u;
            // 0x1205d4: 0x92420214  lbu         $v0, 0x214($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x120628u;
            goto label_120628;
        }
    }
    ctx->pc = 0x1205D8u;
    // 0x1205d8: 0x2654011c  addiu       $s4, $s2, 0x11C
    ctx->pc = 0x1205d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 284));
    // 0x1205dc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1205dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1205e0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1205e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
    // 0x1205e4: 0x0  nop
    ctx->pc = 0x1205e4u;
    // NOP
label_1205e8:
    // 0x1205e8: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x1205e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x1205ec: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1205ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1205f0: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1205F0u;
    {
        const bool branch_taken_0x1205f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1205F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1205F0u;
        // 0x1205f4: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1205f0) {
            ctx->pc = 0x120608u;
            goto label_120608;
        }
    }
    ctx->pc = 0x1205F8u;
    // 0x1205f8: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x1205F8u;
    SET_GPR_U32(ctx, 31, 0x120600u);
    ctx->pc = 0x1205FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1205F8u;
    // 0x1205fc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x1205F8u, 0x120600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x120600u;
label_120600:
    // 0x120600: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x120600u;
    {
        const bool branch_taken_0x120600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120600u;
        // 0x120604: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120600) {
            ctx->pc = 0x12060Cu;
            goto label_12060c;
        }
    }
    ctx->pc = 0x120608u;
label_120608:
    // 0x120608: 0xac530120  sw          $s3, 0x120($v0)
    ctx->pc = 0x120608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 19));
label_12060c:
    // 0x12060c: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x12060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x120610: 0x92420214  lbu         $v0, 0x214($s2)
    ctx->pc = 0x120610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x120614: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x120614u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x120618: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x120618u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12061c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12061Cu;
    {
        const bool branch_taken_0x12061c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x120620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12061Cu;
        // 0x120620: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12061c) {
            ctx->pc = 0x1205E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1205e8;
        }
    }
    ctx->pc = 0x120624u;
    // 0x120624: 0x92420214  lbu         $v0, 0x214($s2)
    ctx->pc = 0x120624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
label_120628:
    // 0x120628: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x120628u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12062c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12062cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120630: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x120630u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120634: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x120634u;
    {
        const bool branch_taken_0x120634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x120638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120634u;
        // 0x120638: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120634) {
            ctx->pc = 0x1206B0u;
            goto label_1206b0;
        }
    }
    ctx->pc = 0x12063Cu;
    // 0x12063c: 0x62100  sll         $a0, $a2, 4
    ctx->pc = 0x12063cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_120640:
    // 0x120640: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x120640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x120644: 0x8c430120  lw          $v1, 0x120($v0)
    ctx->pc = 0x120644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 288)));
    // 0x120648: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x120648u;
    {
        const bool branch_taken_0x120648 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120648u;
        // 0x12064c: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120648) {
            ctx->pc = 0x1206A0u;
            goto label_1206a0;
        }
    }
    ctx->pc = 0x120650u;
    // 0x120650: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x120650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x120654: 0x10a6000c  beq         $a1, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x120654u;
    {
        const bool branch_taken_0x120654 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x120658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120654u;
        // 0x120658: 0x305000ff  andi        $s0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x120654) {
            ctx->pc = 0x120688u;
            goto label_120688;
        }
    }
    ctx->pc = 0x12065Cu;
    // 0x12065c: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x12065cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x120660: 0x921821  addu        $v1, $a0, $s2
    ctx->pc = 0x120660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x120664: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x120664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x120668: 0x6864011b  ldl         $a0, 0x11B($v1)
    ctx->pc = 0x120668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x12066c: 0x6c640114  ldr         $a0, 0x114($v1)
    ctx->pc = 0x12066cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x120670: 0x68670123  ldl         $a3, 0x123($v1)
    ctx->pc = 0x120670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x120674: 0x6c67011c  ldr         $a3, 0x11C($v1)
    ctx->pc = 0x120674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x120678: 0xb044011b  sdl         $a0, 0x11B($v0)
    ctx->pc = 0x120678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12067c: 0xb4440114  sdr         $a0, 0x114($v0)
    ctx->pc = 0x12067cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120680: 0xb0470123  sdl         $a3, 0x123($v0)
    ctx->pc = 0x120680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x120684: 0xb447011c  sdr         $a3, 0x11C($v0)
    ctx->pc = 0x120684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_120688:
    // 0x120688: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x120688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12068c: 0x24c30001  addiu       $v1, $a2, 0x1
    ctx->pc = 0x12068cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x120690: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x120690u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x120694: 0x306600ff  andi        $a2, $v1, 0xFF
    ctx->pc = 0x120694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x120698: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x120698u;
    {
        const bool branch_taken_0x120698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120698u;
        // 0x12069c: 0x92470214  lbu         $a3, 0x214($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120698) {
            ctx->pc = 0x1206A4u;
            goto label_1206a4;
        }
    }
    ctx->pc = 0x1206A0u;
label_1206a0:
    // 0x1206a0: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x1206a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1206a4:
    // 0x1206a4: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x1206a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1206a8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1206A8u;
    {
        const bool branch_taken_0x1206a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1206ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206A8u;
        // 0x1206ac: 0x62100  sll         $a0, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206a8) {
            ctx->pc = 0x120640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_120640;
        }
    }
    ctx->pc = 0x1206B0u;
label_1206b0:
    // 0x1206b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1206b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206b4: 0x227102b  sltu        $v0, $s1, $a3
    ctx->pc = 0x1206b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1206b8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1206B8u;
    {
        const bool branch_taken_0x1206b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1206b8) {
            ctx->pc = 0x1206BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1206B8u;
            // 0x1206bc: 0xa2500214  sb          $s0, 0x214($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 532), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1206ECu;
            goto label_1206ec;
        }
    }
    ctx->pc = 0x1206C0u;
    // 0x1206c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1206c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206c4: 0x0  nop
    ctx->pc = 0x1206c4u;
    // NOP
label_1206c8:
    // 0x1206c8: 0xc048156  jal         func_120558
    ctx->pc = 0x1206C8u;
    SET_GPR_U32(ctx, 31, 0x1206D0u);
    ctx->pc = 0x1206CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206C8u;
    // 0x1206cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x120558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x120558u, 0x1206C8u, 0x1206D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206D0u;
label_1206d0:
    // 0x1206d0: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x1206d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1206d4: 0x92420214  lbu         $v0, 0x214($s2)
    ctx->pc = 0x1206d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 532)));
    // 0x1206d8: 0x307100ff  andi        $s1, $v1, 0xFF
    ctx->pc = 0x1206d8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1206dc: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1206dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1206e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1206E0u;
    {
        const bool branch_taken_0x1206e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1206E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1206E0u;
        // 0x1206e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1206e0) {
            ctx->pc = 0x1206C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1206c8;
        }
    }
    ctx->pc = 0x1206E8u;
    // 0x1206e8: 0xa2500214  sb          $s0, 0x214($s2)
    ctx->pc = 0x1206e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 532), (uint8_t)GPR_U32(ctx, 16));
label_1206ec:
    // 0x1206ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1206ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1206f0: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x1206F0u;
    SET_GPR_U32(ctx, 31, 0x1206F8u);
    ctx->pc = 0x1206F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1206F0u;
    // 0x1206f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x1206F0u, 0x1206F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1206F8u;
label_1206f8:
    // 0x1206f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1206f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1206fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1206fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x120700: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x120700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x120704: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x120704u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x120708: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x120708u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12070c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x12070cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x120710: 0x3e00008  jr          $ra
    ctx->pc = 0x120710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x120714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x120710u;
        // 0x120714: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x120710u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x120718u;
}
