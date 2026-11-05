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

// Function: sub_0028ACE0
// Address: 0x28ace0 - 0x28ad28
void sub_0028ACE0_0x28ace0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ACE0_0x28ace0");
#endif

    ctx->pc = 0x28ace0u;

    // 0x28ace0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28ace0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28ace4: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x28ace4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x28ace8: 0x2447af88  addiu       $a3, $v0, -0x5078
    ctx->pc = 0x28ace8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946696));
    // 0x28acec: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x28acecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28acf0: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x28acf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28acf4: 0x68e5000f  ldl         $a1, 0xF($a3)
    ctx->pc = 0x28acf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28acf8: 0x6ce50008  ldr         $a1, 0x8($a3)
    ctx->pc = 0x28acf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28acfc: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x28acfcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x46AF98u));
    // 0x28ad00: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x28ad00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ad04: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x28ad04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ad08: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x28ad08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ad0c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x28ad0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ad10: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x28ad10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x28ad14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28ad14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x28ad18: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x28ad18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x28ad1c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28ad1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28ad20: 0x3e00008  jr          $ra
    ctx->pc = 0x28AD20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28AD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AD20u;
        // 0x28ad24: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28AD20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28AD28u;
}
