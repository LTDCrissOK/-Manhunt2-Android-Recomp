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

// Function: entry_001562fa
// Address: 0x1562fa - 0x156314
void entry_001562fa_0x1562fa(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001562fa_0x1562fa");
#endif

    ctx->pc = 0x1562fau;

    // 0x1562fa: 0x8340000  j           func_D00000
    ctx->pc = 0x1562FAu;
    ctx->pc = 0x1562FEu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1562FAu;
    // 0x1562fe: 0x4600  sll         $t0, $zero, 24 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0xD00000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xD00000u, 0x1562FAu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x156302u;
    // 0x156302: 0xd0000  sll         $zero, $t5, 0
    ctx->pc = 0x156302u;
    
    // 0x156306: 0x104502  srl         $t0, $s0, 20
    ctx->pc = 0x156306u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 16), 20));
    // 0x15630a: 0x6a96dfb0  ldl         $s6, -0x2050($s4)
    ctx->pc = 0x15630au;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 4294959024); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 22, (GPR_U64(ctx, 22) & keepMask) | (mem << shift)); }
    // 0x15630e: 0x202d0c0f  addi        $t5, $at, 0xC0F
    ctx->pc = 0x15630eu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)3087, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 13, (int32_t)tmp); }
    // 0x156312: 0x54403a0  .word       0x054403A0                   # INVALID     $t2, $a0, 0x3A0 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x156312u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x156312 raw=0x054403A0");
    ctx->pc = 0x156314u;
}
