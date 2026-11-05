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

// Function: sub_002A95C0
// Address: 0x2a95c0 - 0x2a9628
void sub_002A95C0_0x2a95c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A95C0_0x2a95c0");
#endif

    switch (ctx->pc) {
        case 0x2a95d8u: goto label_2a95d8;
        default: break;
    }

    ctx->pc = 0x2a95c0u;

    // 0x2a95c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2a95c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2a95c4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a95c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a95c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2a95c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2a95cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2a95ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a95d0: 0xc0aada2  jal         func_2AB688
    ctx->pc = 0x2A95D0u;
    SET_GPR_U32(ctx, 31, 0x2A95D8u);
    ctx->pc = 0x2A95D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A95D0u;
    // 0x2a95d4: 0x8c840054  lw          $a0, 0x54($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AB688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AB688u, 0x2A95D0u, 0x2A95D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A95D8u;
label_2a95d8:
    // 0x2a95d8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x2a95d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2a95dc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x2a95dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2a95e0: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x2a95e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2a95e4: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x2a95e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2a95e8: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x2a95e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a95ec: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x2a95ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a95f0: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x2a95f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a95f4: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x2a95f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a95f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2a95f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a95fc: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2a95fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a9600: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a9604: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2a9604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a9608: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2a9608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a960c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2a960cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a9610: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2a9610u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2a9614: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2a9614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2a9618: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2a9618u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2a961c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a9620: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9620u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9620u;
        // 0x2a9624: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9620u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9628u;
}
