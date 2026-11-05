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

// Function: sub_00375768
// Address: 0x375768 - 0x3757e8
void sub_00375768_0x375768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375768_0x375768");
#endif

    ctx->pc = 0x375768u;

    // 0x375768: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x37576c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x37576cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x375770: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x375770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x375774: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x375774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x375778: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x375778u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37577c: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x37577cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x375780: 0xdd280000  ld          $t0, 0x0($t1)
    ctx->pc = 0x375780u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x375784: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x375784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x375788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x37578c: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x37578cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x375790: 0x5383e  dsrl32      $a3, $a1, 0
    ctx->pc = 0x375790u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x375794: 0x3102001c  andi        $v0, $t0, 0x1C
    ctx->pc = 0x375794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)28);
    // 0x375798: 0x246b8168  addiu       $t3, $v1, -0x7E98
    ctx->pc = 0x375798u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934888));
    // 0x37579c: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x37579cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x3757a0: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x3757a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x3757a4: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x3757a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3757a8: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x3757a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3757ac: 0x1047000b  beq         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3757ACu;
    {
        const bool branch_taken_0x3757ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x3757B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757ACu;
        // 0x3757b0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3757ac) {
            ctx->pc = 0x3757DCu;
            goto label_3757dc;
        }
    }
    ctx->pc = 0x3757B4u;
    // 0x3757b4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3757b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3757b8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3757b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3757bc: 0x8cc3cd00  lw          $v1, -0x3300($a2)
    ctx->pc = 0x3757bcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x3757c0: 0x2402ffe3  addiu       $v0, $zero, -0x1D
    ctx->pc = 0x3757c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x3757c4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3757c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3757c8: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x3757c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x3757cc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3757ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3757d0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3757d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3757d4: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x3757d4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x3757d8: 0xacc3cd00  sw          $v1, -0x3300($a2)
    ctx->pc = 0x3757d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 3));
label_3757dc:
    // 0x3757dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3757DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3757E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3757DCu;
        // 0x3757e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3757DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3757E4u;
    // 0x3757e4: 0x0  nop
    ctx->pc = 0x3757e4u;
    // NOP
    ctx->pc = 0x3757e8u;
}
