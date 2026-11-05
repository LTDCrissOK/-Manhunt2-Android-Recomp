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

// Function: sub_003758D8
// Address: 0x3758d8 - 0x375988
void sub_003758D8_0x3758d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003758D8_0x3758d8");
#endif

    ctx->pc = 0x3758d8u;

    // 0x3758d8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x3758d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x3758dc: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x3758dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3758e0: 0x2442cd50  addiu       $v0, $v0, -0x32B0
    ctx->pc = 0x3758e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954320));
    // 0x3758e4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3758e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3758e8: 0x624821  addu        $t1, $v1, $v0
    ctx->pc = 0x3758e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3758ec: 0x52b7a  dsrl        $a1, $a1, 13
    ctx->pc = 0x3758ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 13);
    // 0x3758f0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3758f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3758f4: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x3758f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x3758f8: 0xdd280000  ld          $t0, 0x0($t1)
    ctx->pc = 0x3758f8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3758fc: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x3758fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x375900: 0x7383e  dsrl32      $a3, $a3, 0
    ctx->pc = 0x375900u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> (32 + 0));
    // 0x375904: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x375904u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x375908: 0xc73825  or          $a3, $a2, $a3
    ctx->pc = 0x375908u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x37590c: 0x3402fff0  ori         $v0, $zero, 0xFFF0
    ctx->pc = 0x37590cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x375910: 0x215f8  dsll        $v0, $v0, 23
    ctx->pc = 0x375910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 23);
    // 0x375914: 0x3442c000  ori         $v0, $v0, 0xC000
    ctx->pc = 0x375914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49152);
    // 0x375918: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x375918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x37591c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x37591cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x375920: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x375920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x375924: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x375924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x375928: 0x246b8168  addiu       $t3, $v1, -0x7E98
    ctx->pc = 0x375928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934888));
    // 0x37592c: 0x69650007  ldl         $a1, 0x7($t3)
    ctx->pc = 0x37592cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x375930: 0x6d650000  ldr         $a1, 0x0($t3)
    ctx->pc = 0x375930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x375934: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x375934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x375938: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x375938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x37593c: 0x1047000e  beq         $v0, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x37593Cu;
    {
        const bool branch_taken_0x37593c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x375940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37593Cu;
        // 0x375940: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37593c) {
            ctx->pc = 0x375978u;
            goto label_375978;
        }
    }
    ctx->pc = 0x375944u;
    // 0x375944: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x375944u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x375948: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x375948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x37594c: 0x8cc3cd00  lw          $v1, -0x3300($a2)
    ctx->pc = 0x37594cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FCD00u));
    // 0x375950: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x375950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
    // 0x375954: 0x3442ff3f  ori         $v0, $v0, 0xFF3F
    ctx->pc = 0x375954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65343);
    // 0x375958: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x375958u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
    // 0x37595c: 0x34421ffe  ori         $v0, $v0, 0x1FFE
    ctx->pc = 0x37595cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8190);
    // 0x375960: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x375960u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x375964: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x375964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
    // 0x375968: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x375968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x37596c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x37596cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x375970: 0xfd220000  sd          $v0, 0x0($t1)
    ctx->pc = 0x375970u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 2));
    // 0x375974: 0xacc3cd00  sw          $v1, -0x3300($a2)
    ctx->pc = 0x375974u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954240), GPR_U32(ctx, 3));
label_375978:
    // 0x375978: 0x3e00008  jr          $ra
    ctx->pc = 0x375978u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375978u;
        // 0x37597c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375978u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375980u;
    // 0x375980: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x375980u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x375984: 0x0  nop
    ctx->pc = 0x375984u;
    // NOP
    ctx->pc = 0x375988u;
}
