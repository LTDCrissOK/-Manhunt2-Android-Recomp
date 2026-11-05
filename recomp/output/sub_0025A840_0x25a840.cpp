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

// Function: sub_0025A840
// Address: 0x25a840 - 0x25a8b8
void sub_0025A840_0x25a840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025A840_0x25a840");
#endif

    switch (ctx->pc) {
        case 0x25a868u: goto label_25a868;
        default: break;
    }

    ctx->pc = 0x25a840u;

    // 0x25a840: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25a840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25a844: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x25a844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x25a848: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25a848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25a84c: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x25a84cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x25a850: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25a850u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a854: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25a854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25a858: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x25a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a85c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x25a85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a860: 0xc096a8c  jal         func_25AA30
    ctx->pc = 0x25A860u;
    SET_GPR_U32(ctx, 31, 0x25A868u);
    ctx->pc = 0x25A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25A860u;
    // 0x25a864: 0xc2280a  movz        $a1, $a2, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25AA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AA30u, 0x25A860u, 0x25A868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25A868u;
label_25a868:
    // 0x25a868: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x25a868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x25a86c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x25a86cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x25a870: 0x452018  mult        $a0, $v0, $a1
    ctx->pc = 0x25a870u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x25a874: 0x24639c10  addiu       $v1, $v1, -0x63F0
    ctx->pc = 0x25a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941712));
    // 0x25a878: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25a878u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a87c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25a87cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25a880: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x25a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x25a884: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x25a884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x25a888: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x25a888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x25a88c: 0x6885000f  ldl         $a1, 0xF($a0)
    ctx->pc = 0x25a88cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x25a890: 0x6c850008  ldr         $a1, 0x8($a0)
    ctx->pc = 0x25a890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x25a894: 0x8c860010  lw          $a2, 0x10($a0)
    ctx->pc = 0x25a894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x25a898: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x25a898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a89c: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x25a89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a8a0: 0xb205000f  sdl         $a1, 0xF($s0)
    ctx->pc = 0x25a8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a8a4: 0xb6050008  sdr         $a1, 0x8($s0)
    ctx->pc = 0x25a8a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x25a8a8: 0xae060010  sw          $a2, 0x10($s0)
    ctx->pc = 0x25a8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 6));
    // 0x25a8ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25a8acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25a8b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25A8B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25A8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25A8B0u;
        // 0x25a8b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25A8B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25A8B8u;
}
