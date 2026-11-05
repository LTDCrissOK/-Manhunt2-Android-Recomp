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

// Function: sub_00161950
// Address: 0x161950 - 0x1619a0
void sub_00161950_0x161950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161950_0x161950");
#endif

    ctx->pc = 0x161950u;

    // 0x161950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161954: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x161954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x161958: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x161958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x16195c: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x16195cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x161960: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x161960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x161964: 0x68a70017  ldl         $a3, 0x17($a1)
    ctx->pc = 0x161964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x161968: 0x6ca70010  ldr         $a3, 0x10($a1)
    ctx->pc = 0x161968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x16196c: 0x68a8001f  ldl         $t0, 0x1F($a1)
    ctx->pc = 0x16196cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x161970: 0x6ca80018  ldr         $t0, 0x18($a1)
    ctx->pc = 0x161970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x161974: 0xb083037f  sdl         $v1, 0x37F($a0)
    ctx->pc = 0x161974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 895); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161978: 0xb4830378  sdr         $v1, 0x378($a0)
    ctx->pc = 0x161978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 888); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16197c: 0xb0860387  sdl         $a2, 0x387($a0)
    ctx->pc = 0x16197cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 903); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161980: 0xb4860380  sdr         $a2, 0x380($a0)
    ctx->pc = 0x161980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 896); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161984: 0xb087038f  sdl         $a3, 0x38F($a0)
    ctx->pc = 0x161984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 911); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161988: 0xb4870388  sdr         $a3, 0x388($a0)
    ctx->pc = 0x161988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 904); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16198c: 0xb0880397  sdl         $t0, 0x397($a0)
    ctx->pc = 0x16198cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 919); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161990: 0xb4880390  sdr         $t0, 0x390($a0)
    ctx->pc = 0x161990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x161994: 0x3e00008  jr          $ra
    ctx->pc = 0x161994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161994u;
        // 0x161998: 0xac820398  sw          $v0, 0x398($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 920), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161994u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16199Cu;
    // 0x16199c: 0x0  nop
    ctx->pc = 0x16199cu;
    // NOP
    ctx->pc = 0x1619a0u;
}
