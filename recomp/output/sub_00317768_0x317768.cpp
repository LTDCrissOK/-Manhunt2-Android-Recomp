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

// Function: sub_00317768
// Address: 0x317768 - 0x3177f0
void sub_00317768_0x317768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317768_0x317768");
#endif

    switch (ctx->pc) {
        case 0x3177e4u: goto label_3177e4;
        default: break;
    }

    ctx->pc = 0x317768u;

    // 0x317768: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x317768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31776c: 0x3c04005b  lui         $a0, 0x5B
    ctx->pc = 0x31776cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)91 << 16));
    // 0x317770: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x317770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x317774: 0x27a20008  addiu       $v0, $sp, 0x8
    ctx->pc = 0x317774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x317778: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x317778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x31777c: 0x248322b0  addiu       $v1, $a0, 0x22B0
    ctx->pc = 0x31777cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8880));
    // 0x317780: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x317780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x317784: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x317784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x317788: 0x8c8222b0  lw          $v0, 0x22B0($a0)
    ctx->pc = 0x317788u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5B22B0u));
    // 0x31778c: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x31778cu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x5B22B4u));
    // 0x317790: 0x8c66000c  lw          $a2, 0xC($v1)
    ctx->pc = 0x317790u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x5B22BCu));
    // 0x317794: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x317794u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x317798: 0x8fa80004  lw          $t0, 0x4($sp)
    ctx->pc = 0x317798u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31779c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x31779cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3177a0: 0xac8722b0  sw          $a3, 0x22B0($a0)
    ctx->pc = 0x3177a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x5B22B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22B0u, _value); } while (0);
    // 0x3177a4: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x3177a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
    // 0x3177a8: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x3177a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
    // 0x3177ac: 0xac680004  sw          $t0, 0x4($v1)
    ctx->pc = 0x3177acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x5B22B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B22B4u, _value); } while (0);
    // 0x3177b0: 0x6ba2000f  ldl         $v0, 0xF($sp)
    ctx->pc = 0x3177b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3177b4: 0x6fa20008  ldr         $v0, 0x8($sp)
    ctx->pc = 0x3177b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3177b8: 0xb062000f  sdl         $v0, 0xF($v1)
    ctx->pc = 0x3177b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3177bc: 0xb4620008  sdr         $v0, 0x8($v1)
    ctx->pc = 0x3177bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3177c0: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x3177c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3177c4: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x3177c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3177c8: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x3177c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3177cc: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x3177ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3177d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3177d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3177d4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3177D4u;
    {
        const bool branch_taken_0x3177d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3177D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177D4u;
        // 0x3177d8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3177d4) {
            ctx->pc = 0x3177E8u;
            goto label_3177e8;
        }
    }
    ctx->pc = 0x3177DCu;
    // 0x3177dc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3177DCu;
    SET_GPR_U32(ctx, 31, 0x3177E4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3177DCu, 0x3177E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3177E4u;
label_3177e4:
    // 0x3177e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3177e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3177e8:
    // 0x3177e8: 0x3e00008  jr          $ra
    ctx->pc = 0x3177E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3177ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3177E8u;
        // 0x3177ec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3177E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3177F0u;
}
