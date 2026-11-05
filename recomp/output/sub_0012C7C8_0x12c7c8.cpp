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

// Function: sub_0012C7C8
// Address: 0x12c7c8 - 0x12c8a0
void sub_0012C7C8_0x12c7c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012C7C8_0x12c7c8");
#endif

    switch (ctx->pc) {
        case 0x12c7e8u: goto label_12c7e8;
        case 0x12c820u: goto label_12c820;
        default: break;
    }

    ctx->pc = 0x12c7c8u;

    // 0x12c7c8: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x12c7c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c7cc: 0x910904c8  lbu         $t1, 0x4C8($t0)
    ctx->pc = 0x12c7ccu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1224)));
    // 0x12c7d0: 0x11200031  beqz        $t1, . + 4 + (0x31 << 2)
    ctx->pc = 0x12C7D0u;
    {
        const bool branch_taken_0x12c7d0 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7D0u;
        // 0x12c7d4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7d0) {
            ctx->pc = 0x12C898u;
            goto label_12c898;
        }
    }
    ctx->pc = 0x12C7D8u;
    // 0x12c7d8: 0x250b00c8  addiu       $t3, $t0, 0xC8
    ctx->pc = 0x12c7d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), 200));
    // 0x12c7dc: 0x250c00cc  addiu       $t4, $t0, 0xCC
    ctx->pc = 0x12c7dcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 204));
    // 0x12c7e0: 0x720c0  sll         $a0, $a3, 3
    ctx->pc = 0x12c7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x12c7e4: 0x0  nop
    ctx->pc = 0x12c7e4u;
    // NOP
label_12c7e8:
    // 0x12c7e8: 0x1641021  addu        $v0, $t3, $a0
    ctx->pc = 0x12c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 4)));
    // 0x12c7ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x12c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x12c7f0: 0x14650024  bne         $v1, $a1, . + 4 + (0x24 << 2)
    ctx->pc = 0x12C7F0u;
    {
        const bool branch_taken_0x12c7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x12C7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C7F0u;
        // 0x12c7f4: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c7f0) {
            ctx->pc = 0x12C884u;
            goto label_12c884;
        }
    }
    ctx->pc = 0x12C7F8u;
    // 0x12c7f8: 0x1841821  addu        $v1, $t4, $a0
    ctx->pc = 0x12c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x12c7fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x12c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c800: 0x1446001f  bne         $v0, $a2, . + 4 + (0x1F << 2)
    ctx->pc = 0x12C800u;
    {
        const bool branch_taken_0x12c800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x12C804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C800u;
        // 0x12c804: 0x250a00cc  addiu       $t2, $t0, 0xCC (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 8), 204));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c800) {
            ctx->pc = 0x12C880u;
            goto label_12c880;
        }
    }
    ctx->pc = 0x12C808u;
    // 0x12c808: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x12c808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c80c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x12c80cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c810: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x12c810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x12c814: 0x89182b  sltu        $v1, $a0, $t1
    ctx->pc = 0x12c814u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12c818: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x12C818u;
    {
        const bool branch_taken_0x12c818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C818u;
        // 0x12c81c: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c818) {
            ctx->pc = 0x12C860u;
            goto label_12c860;
        }
    }
    ctx->pc = 0x12C820u;
label_12c820:
    // 0x12c820: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x12c820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x12c824: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x12c824u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x12c828: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x12c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x12c82c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x12c82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x12c830: 0x684600cf  ldl         $a2, 0xCF($v0)
    ctx->pc = 0x12c830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x12c834: 0x6c4600c8  ldr         $a2, 0xC8($v0)
    ctx->pc = 0x12c834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x12c838: 0xb06600cf  sdl         $a2, 0xCF($v1)
    ctx->pc = 0x12c838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 207); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12c83c: 0xb46600c8  sdr         $a2, 0xC8($v1)
    ctx->pc = 0x12c83cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 200); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12c840: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12c840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12c844: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x12c844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12c848: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x12c848u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x12c84c: 0x910204c8  lbu         $v0, 0x4C8($t0)
    ctx->pc = 0x12c84cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1224)));
    // 0x12c850: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x12c850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x12c854: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12C854u;
    {
        const bool branch_taken_0x12c854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C854u;
        // 0x12c858: 0x306500ff  andi        $a1, $v1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c854) {
            ctx->pc = 0x12C820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c820;
        }
    }
    ctx->pc = 0x12C85Cu;
    // 0x12c85c: 0x510c0  sll         $v0, $a1, 3
    ctx->pc = 0x12c85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_12c860:
    // 0x12c860: 0x1621821  addu        $v1, $t3, $v0
    ctx->pc = 0x12c860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x12c864: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x12c864u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x12c868: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x12c868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x12c86c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x12c86cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x12c870: 0x910304c8  lbu         $v1, 0x4C8($t0)
    ctx->pc = 0x12c870u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1224)));
    // 0x12c874: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12c874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12c878: 0x3e00008  jr          $ra
    ctx->pc = 0x12C878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C878u;
        // 0x12c87c: 0xa10304c8  sb          $v1, 0x4C8($t0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 8), 1224), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C880u;
label_12c880:
    // 0x12c880: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x12c880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_12c884:
    // 0x12c884: 0x910904c8  lbu         $t1, 0x4C8($t0)
    ctx->pc = 0x12c884u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 1224)));
    // 0x12c888: 0x306700ff  andi        $a3, $v1, 0xFF
    ctx->pc = 0x12c888u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x12c88c: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x12c88cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x12c890: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x12C890u;
    {
        const bool branch_taken_0x12c890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C890u;
        // 0x12c894: 0x720c0  sll         $a0, $a3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c890) {
            ctx->pc = 0x12C7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12c7e8;
        }
    }
    ctx->pc = 0x12C898u;
label_12c898:
    // 0x12c898: 0x3e00008  jr          $ra
    ctx->pc = 0x12C898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C8A0u;
}
