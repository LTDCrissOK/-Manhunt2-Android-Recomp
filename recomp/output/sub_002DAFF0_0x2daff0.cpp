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

// Function: sub_002DAFF0
// Address: 0x2daff0 - 0x2db140
void sub_002DAFF0_0x2daff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DAFF0_0x2daff0");
#endif

    switch (ctx->pc) {
        case 0x2db010u: goto label_2db010;
        case 0x2db040u: goto label_2db040;
        case 0x2db070u: goto label_2db070;
        case 0x2db0c8u: goto label_2db0c8;
        default: break;
    }

    ctx->pc = 0x2daff0u;

    // 0x2daff0: 0x8c8363a8  lw          $v1, 0x63A8($a0)
    ctx->pc = 0x2daff0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25512)));
    // 0x2daff4: 0x8c8263a4  lw          $v0, 0x63A4($a0)
    ctx->pc = 0x2daff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25508)));
    // 0x2daff8: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x2daff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2daffc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DAFFCu;
    {
        const bool branch_taken_0x2daffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DAFFCu;
        // 0x2db000: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2daffc) {
            ctx->pc = 0x2DB00Cu;
            goto label_2db00c;
        }
    }
    ctx->pc = 0x2DB004u;
    // 0x2db004: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB004u;
        // 0x2db008: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB00Cu;
label_2db00c:
    // 0x2db00c: 0x24832c90  addiu       $v1, $a0, 0x2C90
    ctx->pc = 0x2db00cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 11408));
label_2db010:
    // 0x2db010: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x2db010u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x2db014: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2db014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x2db018: 0x2ce2000a  sltiu       $v0, $a3, 0xA
    ctx->pc = 0x2db018u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2db01c: 0x0  nop
    ctx->pc = 0x2db01cu;
    // NOP
    // 0x2db020: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2DB020u;
    {
        const bool branch_taken_0x2db020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB020u;
        // 0x2db024: 0x24630400  addiu       $v1, $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db020) {
            ctx->pc = 0x2DB010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db010;
        }
    }
    ctx->pc = 0x2DB028u;
    // 0x2db028: 0x8c8263ac  lw          $v0, 0x63AC($a0)
    ctx->pc = 0x2db028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25516)));
    // 0x2db02c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2db02cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db030: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2DB030u;
    {
        const bool branch_taken_0x2db030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB030u;
        // 0x2db034: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db030) {
            ctx->pc = 0x2DB108u;
            goto label_2db108;
        }
    }
    ctx->pc = 0x2DB038u;
    // 0x2db038: 0x8c8363a8  lw          $v1, 0x63A8($a0)
    ctx->pc = 0x2db038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25512)));
    // 0x2db03c: 0x0  nop
    ctx->pc = 0x2db03cu;
    // NOP
label_2db040:
    // 0x2db040: 0x71280  sll         $v0, $a3, 10
    ctx->pc = 0x2db040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
    // 0x2db044: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2db044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2db048: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2db048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2db04c: 0x24462c90  addiu       $a2, $v0, 0x2C90
    ctx->pc = 0x2db04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 11408));
    // 0x2db050: 0x31a80  sll         $v1, $v1, 10
    ctx->pc = 0x2db050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 10));
    // 0x2db054: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2db054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2db058: 0x24650490  addiu       $a1, $v1, 0x490
    ctx->pc = 0x2db058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1168));
    // 0x2db05c: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x2db05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x2db060: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2db060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2db064: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2DB064u;
    {
        const bool branch_taken_0x2db064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB064u;
        // 0x2db068: 0x24630890  addiu       $v1, $v1, 0x890 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db064) {
            ctx->pc = 0x2DB0C4u;
            goto label_2db0c4;
        }
    }
    ctx->pc = 0x2DB06Cu;
    // 0x2db06c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2db06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2db070:
    // 0x2db070: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x2db070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2db074: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x2db074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2db078: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2db078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2db07c: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2db07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2db080: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2db080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2db084: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2db084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2db088: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2db088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x2db08c: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2db08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x2db090: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x2db090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db094: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x2db094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db098: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2db098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db09c: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2db09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db0a0: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2db0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db0a4: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2db0a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db0a8: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x2db0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db0ac: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x2db0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2db0b0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2db0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2db0b4: 0x14a3ffee  bne         $a1, $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2DB0B4u;
    {
        const bool branch_taken_0x2db0b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0B4u;
        // 0x2db0b8: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0b4) {
            ctx->pc = 0x2DB070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db070;
        }
    }
    ctx->pc = 0x2DB0BCu;
    // 0x2db0bc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2DB0BCu;
    {
        const bool branch_taken_0x2db0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0BCu;
        // 0x2db0c0: 0x8c8263ac  lw          $v0, 0x63AC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25516)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0bc) {
            ctx->pc = 0x2DB0F8u;
            goto label_2db0f8;
        }
    }
    ctx->pc = 0x2DB0C4u;
label_2db0c4:
    // 0x2db0c4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2db0c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2db0c8:
    // 0x2db0c8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x2db0c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2db0cc: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2db0ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2db0d0: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2db0d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2db0d4: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2db0d4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x2db0d8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2db0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2db0dc: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x2db0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
    // 0x2db0e0: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2db0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
    // 0x2db0e4: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2db0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
    // 0x2db0e8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2db0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x2db0ec: 0x14a3fff6  bne         $a1, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2DB0ECu;
    {
        const bool branch_taken_0x2db0ec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x2DB0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0ECu;
        // 0x2db0f0: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0ec) {
            ctx->pc = 0x2DB0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db0c8;
        }
    }
    ctx->pc = 0x2DB0F4u;
    // 0x2db0f4: 0x8c8263ac  lw          $v0, 0x63AC($a0)
    ctx->pc = 0x2db0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25516)));
label_2db0f8:
    // 0x2db0f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2db0f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0fc: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2db0fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2db100: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x2DB100u;
    {
        const bool branch_taken_0x2db100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db100) {
            ctx->pc = 0x2DB104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB100u;
            // 0x2db104: 0x8c8363a8  lw          $v1, 0x63A8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB040u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db040;
        }
    }
    ctx->pc = 0x2DB108u;
label_2db108:
    // 0x2db108: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x2db108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2db10c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB10Cu;
    {
        const bool branch_taken_0x2db10c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB10Cu;
        // 0x2db110: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db10c) {
            ctx->pc = 0x2DB11Cu;
            goto label_2db11c;
        }
    }
    ctx->pc = 0x2DB114u;
    // 0x2db114: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DB114u;
    {
        const bool branch_taken_0x2db114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB114u;
        // 0x2db118: 0xac8263ac  sw          $v0, 0x63AC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 25516), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db114) {
            ctx->pc = 0x2DB138u;
            goto label_2db138;
        }
    }
    ctx->pc = 0x2DB11Cu;
label_2db11c:
    // 0x2db11c: 0x8c826398  lw          $v0, 0x6398($a0)
    ctx->pc = 0x2db11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25496)));
    // 0x2db120: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB120u;
    {
        const bool branch_taken_0x2db120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB120u;
        // 0x2db124: 0x8c8263a8  lw          $v0, 0x63A8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 25512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db120) {
            ctx->pc = 0x2DB130u;
            goto label_2db130;
        }
    }
    ctx->pc = 0x2DB128u;
    // 0x2db128: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2DB128u;
    {
        const bool branch_taken_0x2db128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB128u;
        // 0x2db12c: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db128) {
            ctx->pc = 0x2DB134u;
            goto label_2db134;
        }
    }
    ctx->pc = 0x2DB130u;
label_2db130:
    // 0x2db130: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2db130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_2db134:
    // 0x2db134: 0xac8263a8  sw          $v0, 0x63A8($a0)
    ctx->pc = 0x2db134u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 25512), GPR_U32(ctx, 2));
label_2db138:
    // 0x2db138: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB138u;
        // 0x2db13c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB140u;
}
