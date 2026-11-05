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

// Function: sub_002253E8
// Address: 0x2253e8 - 0x225430
void sub_002253E8_0x2253e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002253E8_0x2253e8");
#endif

    switch (ctx->pc) {
        case 0x2253fcu: goto label_2253fc;
        default: break;
    }

    ctx->pc = 0x2253e8u;

    // 0x2253e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2253e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2253ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2253ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2253f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2253f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2253f4: 0xc0845aa  jal         func_2116A8
    ctx->pc = 0x2253F4u;
    SET_GPR_U32(ctx, 31, 0x2253FCu);
    ctx->pc = 0x2253F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2253F4u;
    // 0x2253f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2116A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2116A8u, 0x2253F4u, 0x2253FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2253FCu;
label_2253fc:
    // 0x2253fc: 0x6a020127  ldl         $v0, 0x127($s0)
    ctx->pc = 0x2253fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x225400: 0x6e020120  ldr         $v0, 0x120($s0)
    ctx->pc = 0x225400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x225404: 0x6a03012f  ldl         $v1, 0x12F($s0)
    ctx->pc = 0x225404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x225408: 0x6e030128  ldr         $v1, 0x128($s0)
    ctx->pc = 0x225408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22540c: 0xb202024b  sdl         $v0, 0x24B($s0)
    ctx->pc = 0x22540cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 587); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225410: 0xb6020244  sdr         $v0, 0x244($s0)
    ctx->pc = 0x225410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 580); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225414: 0xb2030253  sdl         $v1, 0x253($s0)
    ctx->pc = 0x225414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 595); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x225418: 0xb603024c  sdr         $v1, 0x24C($s0)
    ctx->pc = 0x225418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 588); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22541c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22541cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x225420: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x225420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x225424: 0x3e00008  jr          $ra
    ctx->pc = 0x225424u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225424u;
        // 0x225428: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225424u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22542Cu;
    // 0x22542c: 0x0  nop
    ctx->pc = 0x22542cu;
    // NOP
    ctx->pc = 0x225430u;
}
