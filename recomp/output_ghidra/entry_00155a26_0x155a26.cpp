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

// Function: entry_00155a26
// Address: 0x155a26 - 0x155a68
void entry_00155a26_0x155a26(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155a26_0x155a26");
#endif

    ctx->pc = 0x155a26u;

    // 0x155a26: 0x8600000  j           func_1800000
    ctx->pc = 0x155A26u;
    ctx->pc = 0x155A2Au;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A26u;
    // 0x155a2a: 0x8404680  j           func_1011A00 (Delay Slot)
    // J 0x1011A00 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x1800000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1800000u, 0x155A26u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155A2Eu;
    // 0x155a2e: 0x3f804601  .word       0x3F804601                   # lui         $zero, 0x4601 # 03800000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x155a2eu;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)17921 << 16));
    // 0x155a32: 0x3c01  .word       0x00003C01                   # INVALID     $zero, $zero, 0x3C01 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a32u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x155A32 raw=0x00003C01");
    // 0x155a36: 0x4481  .word       0x00004481                   # INVALID     $zero, $zero, 0x4481 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a36u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x155A36 raw=0x00004481");
    // 0x155a3a: 0x8340000  j           func_D00000
    ctx->pc = 0x155A3Au;
    ctx->pc = 0x155A3Eu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155A3Au;
    // 0x155a3e: 0x4600  sll         $t0, $zero, 24 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD00000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD00000u, 0x155A3Au, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x155A42u;
    // 0x155a42: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x155a42u;
    
    // 0x155a46: 0x46c4502  teqi        $v1, 0x4502
    ctx->pc = 0x155a46u;
    if (GPR_S64(ctx, 3) == (int64_t)(int32_t)17666) { runtime->handleTrap(rdram, ctx); }
    // 0x155a4a: 0x1490e3  .word       0x001490E3                   # negu        $s2, $s4 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a4au;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 20)));
    // 0x155a4e: 0x102d1000  beq         $at, $t5, . + 4 + (0x1000 << 2)
    ctx->pc = 0x155A4Eu;
    {
        const bool branch_taken_0x155a4e = (GPR_U64(ctx, 1) == GPR_U64(ctx, 13));
        ctx->pc = 0x155A52u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A4Eu;
        // 0x155a52: 0x490000  .word       0x00490000                   # sll         $zero, $t1, 0 # 00400000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a4e) {
            ctx->pc = 0x159A52u;
            return;
        }
    }
    ctx->pc = 0x155A56u;
    // 0x155a56: 0x43c04  .word       0x00043C04                   # sllv        $a3, $a0, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a56u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 0) & 0x1F));
    // 0x155a5a: 0x9a088ce5  lwr         $t0, -0x731B($s0)
    ctx->pc = 0x155a5au;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4294937829); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 8) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 8) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 8, merged64); }
    // 0x155a5e: 0x18802484  blez        $a0, . + 4 + (0x2484 << 2)
    ctx->pc = 0x155A5Eu;
    {
        const bool branch_taken_0x155a5e = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x155A62u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155A5Eu;
        // 0x155a62: 0x18210003  .word       0x18210003                   # blez        $at, . + 4 + (0x3 << 2) # 00010000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x155A62 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x155a5e) {
            ctx->pc = 0x15EC72u;
            return;
        }
    }
    ctx->pc = 0x155A66u;
    // 0x155a66: 0x65  .word       0x00000065                   # move        $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x155a66u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    ctx->pc = 0x155a68u;
}
