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

// Function: sub_003E0860
// Address: 0x3e0860 - 0x3e08d8
void sub_003E0860_0x3e0860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E0860_0x3e0860");
#endif

    switch (ctx->pc) {
        case 0x3e08ccu: goto label_3e08cc;
        default: break;
    }

    ctx->pc = 0x3e0860u;

    // 0x3e0860: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3e0860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3e0864: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3e0864u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3e0868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3e086c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3e086cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e0870: 0x6922ffff  ldl         $v0, -0x1($t1)
    ctx->pc = 0x3e0870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e0874: 0x6d22fff8  ldr         $v0, -0x8($t1)
    ctx->pc = 0x3e0874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e0878: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3e0878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e087c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3e087cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0880: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x3e0880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x3e0884: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x3e0884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x3e0888: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x3e0888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e088c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x3e088cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e0890: 0x2522fff8  addiu       $v0, $t1, -0x8
    ctx->pc = 0x3e0890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x3e0894: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3e0894u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3e0898: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3e0898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e089c: 0x9fa70014  lwu         $a3, 0x14($sp)
    ctx->pc = 0x3e089cu;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3e08a0: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x3e08a0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
    // 0x3e08a4: 0x9faa0010  lwu         $t2, 0x10($sp)
    ctx->pc = 0x3e08a4u;
    SET_GPR_ZE32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e08a8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3e08a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e08ac: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3e08acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3e08b0: 0xea3825  or          $a3, $a3, $t2
    ctx->pc = 0x3e08b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 10));
    // 0x3e08b4: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x3e08b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3e08b8: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x3e08b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3e08bc: 0xb122ffff  sdl         $v0, -0x1($t1)
    ctx->pc = 0x3e08bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e08c0: 0xb522fff8  sdr         $v0, -0x8($t1)
    ctx->pc = 0x3e08c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3e08c4: 0xc0f813a  jal         func_3E04E8
    ctx->pc = 0x3E08C4u;
    SET_GPR_U32(ctx, 31, 0x3E08CCu);
    ctx->pc = 0x3E08C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E08C4u;
    // 0x3e08c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E04E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E04E8u, 0x3E08C4u, 0x3E08CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E08CCu;
label_3e08cc:
    // 0x3e08cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3e08ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e08d0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E08D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E08D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E08D0u;
        // 0x3e08d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E08D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E08D8u;
}
