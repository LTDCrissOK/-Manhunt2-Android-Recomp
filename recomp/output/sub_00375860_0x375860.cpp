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

// Function: sub_00375860
// Address: 0x375860 - 0x3758d8
void sub_00375860_0x375860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375860_0x375860");
#endif

    ctx->pc = 0x375860u;

    // 0x375860: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x375860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x375864: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x375864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x375868: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x375868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x37586c: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x37586cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x375870: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x375870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x375874: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375874u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375878: 0xdd270000  ld          $a3, 0x0($t1)
    ctx->pc = 0x375878u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x37587c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x37587cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x375880: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x375880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x375884: 0x30e30020  andi        $v1, $a3, 0x20
    ctx->pc = 0x375884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)32);
    // 0x375888: 0x244b8168  addiu       $t3, $v0, -0x7E98
    ctx->pc = 0x375888u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934888));
    // 0x37588c: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x37588cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x375890: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x375890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x375894: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x375894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375898: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x375898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37589c: 0x1068000b  beq         $v1, $t0, . + 4 + (0xB << 2)
    ctx->pc = 0x37589Cu;
    {
        const bool branch_taken_0x37589c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 8));
        ctx->pc = 0x3758A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37589Cu;
        // 0x3758a0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37589c) {
            ctx->pc = 0x3758CCu;
            goto label_3758cc;
        }
    }
    ctx->pc = 0x3758A4u;
    // 0x3758a4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3758a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x3758a8: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x3758a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3758ac: 0x8cc3cd00  lw          $v1, -0x3300($a2)
    ctx->pc = 0x3758acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x3758b0: 0x2402ffdf  addiu       $v0, $zero, -0x21
    ctx->pc = 0x3758b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x3758b4: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x3758b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3758b8: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x3758b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x3758bc: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x3758bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x3758c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3758c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3758c4: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x3758c4u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x3758c8: 0xacc3cd00  sw          $v1, -0x3300($a2)
    ctx->pc = 0x3758c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 3));
label_3758cc:
    // 0x3758cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3758CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3758D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3758CCu;
        // 0x3758d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3758CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3758D4u;
    // 0x3758d4: 0x0  nop
    ctx->pc = 0x3758d4u;
    // NOP
    ctx->pc = 0x3758d8u;
}
