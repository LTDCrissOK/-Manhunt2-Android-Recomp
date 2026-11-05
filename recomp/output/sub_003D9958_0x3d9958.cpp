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

// Function: sub_003D9958
// Address: 0x3d9958 - 0x3d99d8
void sub_003D9958_0x3d9958(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D9958_0x3d9958");
#endif

    switch (ctx->pc) {
        case 0x3d99c8u: goto label_3d99c8;
        default: break;
    }

    ctx->pc = 0x3d9958u;

    // 0x3d9958: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3d9958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3d995c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x3d995cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9960: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3d9960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d9964: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3d9964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3d9968: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3d9968u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d996c: 0x2522fff0  addiu       $v0, $t1, -0x10
    ctx->pc = 0x3d996cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967280));
    // 0x3d9970: 0x6924fff7  ldl         $a0, -0x9($t1)
    ctx->pc = 0x3d9970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x3d9974: 0x6d24fff0  ldr         $a0, -0x10($t1)
    ctx->pc = 0x3d9974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x3d9978: 0x6925ffff  ldl         $a1, -0x1($t1)
    ctx->pc = 0x3d9978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3d997c: 0x6d25fff8  ldr         $a1, -0x8($t1)
    ctx->pc = 0x3d997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3d9980: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x3d9980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9984: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x3d9984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9988: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x3d9988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d998c: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x3d998cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d9990: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3d9990u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3d9994: 0x23103  sra         $a2, $v0, 4
    ctx->pc = 0x3d9994u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 4));
    // 0x3d9998: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3d9998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d999c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3d999cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d99a0: 0x686a0007  ldl         $t2, 0x7($v1)
    ctx->pc = 0x3d99a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x3d99a4: 0x6c6a0000  ldr         $t2, 0x0($v1)
    ctx->pc = 0x3d99a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3d99a8: 0x686b000f  ldl         $t3, 0xF($v1)
    ctx->pc = 0x3d99a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x3d99ac: 0x6c6b0008  ldr         $t3, 0x8($v1)
    ctx->pc = 0x3d99acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x3d99b0: 0xb12afff7  sdl         $t2, -0x9($t1)
    ctx->pc = 0x3d99b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d99b4: 0xb52afff0  sdr         $t2, -0x10($t1)
    ctx->pc = 0x3d99b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d99b8: 0xb12bffff  sdl         $t3, -0x1($t1)
    ctx->pc = 0x3d99b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d99bc: 0xb52bfff8  sdr         $t3, -0x8($t1)
    ctx->pc = 0x3d99bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294967288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3d99c0: 0xc0f65e8  jal         func_3D97A0
    ctx->pc = 0x3D99C0u;
    SET_GPR_U32(ctx, 31, 0x3D99C8u);
    ctx->pc = 0x3D99C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D99C0u;
    // 0x3d99c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D97A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D97A0u, 0x3D99C0u, 0x3D99C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D99C8u;
label_3d99c8:
    // 0x3d99c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3d99c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d99cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3D99CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D99D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D99CCu;
        // 0x3d99d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D99CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D99D4u;
    // 0x3d99d4: 0x0  nop
    ctx->pc = 0x3d99d4u;
    // NOP
    ctx->pc = 0x3d99d8u;
}
