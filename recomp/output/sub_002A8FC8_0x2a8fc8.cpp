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

// Function: sub_002A8FC8
// Address: 0x2a8fc8 - 0x2a9050
void sub_002A8FC8_0x2a8fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8FC8_0x2a8fc8");
#endif

    ctx->pc = 0x2a8fc8u;

    // 0x2a8fc8: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2a8fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2a8fcc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a8fccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a8fd0: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x2a8fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a8fd4: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2a8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2a8fd8: 0x88a40003  lwl         $a0, 0x3($a1)
    ctx->pc = 0x2a8fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2a8fdc: 0x98a40000  lwr         $a0, 0x0($a1)
    ctx->pc = 0x2a8fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x2a8fe0: 0xaba40003  swl         $a0, 0x3($sp)
    ctx->pc = 0x2a8fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a8fe4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a8fe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a8fe8: 0xbba40000  swr         $a0, 0x0($sp)
    ctx->pc = 0x2a8fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a8fec: 0x93a50000  lbu         $a1, 0x0($sp)
    ctx->pc = 0x2a8fecu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a8ff0: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x2a8ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x2a8ff4: 0x34c600ff  ori         $a2, $a2, 0xFF
    ctx->pc = 0x2a8ff4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)255);
    // 0x2a8ff8: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x2a8ff8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a8ffc: 0x3c07ff00  lui         $a3, 0xFF00
    ctx->pc = 0x2a8ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65280 << 16));
    // 0x2a9000: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x2a9000u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x2a9004: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a9004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a9008: 0x93a40002  lbu         $a0, 0x2($sp)
    ctx->pc = 0x2a9008u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a900c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2a900cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2a9010: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2a9010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2a9014: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a9014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a9018: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2a9018u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2a901c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2a901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2a9020: 0x93a30003  lbu         $v1, 0x3($sp)
    ctx->pc = 0x2a9020u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a9024: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x2a9024u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x2a9028: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2a9028u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2a902c: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x2a902cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x2a9030: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x2a9030u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2a9034: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a9034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a9038: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2a9038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2a903c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a903cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a9040: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a9040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a9044: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9044u;
        // 0x2a9048: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A904Cu;
    // 0x2a904c: 0x0  nop
    ctx->pc = 0x2a904cu;
    // NOP
    ctx->pc = 0x2a9050u;
}
