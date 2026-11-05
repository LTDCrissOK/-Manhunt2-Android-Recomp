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

// Function: sub_002A0EE8
// Address: 0x2a0ee8 - 0x2a0fd0
void sub_002A0EE8_0x2a0ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0EE8_0x2a0ee8");
#endif

    ctx->pc = 0x2a0ee8u;

    // 0x2a0ee8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a0ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a0eec: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2a0eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x2a0ef0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x2a0ef0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a0ef4: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a0ef8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a0efc: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x2a0efcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2a0f00: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0F00u;
    {
        const bool branch_taken_0x2a0f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f00) {
            ctx->pc = 0x2A0F04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0F00u;
            // 0x2a0f04: 0xa3a00010  sb          $zero, 0x10($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F0Cu;
            goto label_2a0f0c;
        }
    }
    ctx->pc = 0x2A0F08u;
    // 0x2a0f08: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x2a0f08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
label_2a0f0c:
    // 0x2a0f0c: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2a0f0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x2a0f10: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a0f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a0f14: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a0f18: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x2a0f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2a0f1c: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0F1Cu;
    {
        const bool branch_taken_0x2a0f1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f1c) {
            ctx->pc = 0x2A0F20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0F1Cu;
            // 0x2a0f20: 0xa3a00011  sb          $zero, 0x11($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F28u;
            goto label_2a0f28;
        }
    }
    ctx->pc = 0x2A0F24u;
    // 0x2a0f24: 0xa3a20011  sb          $v0, 0x11($sp)
    ctx->pc = 0x2a0f24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 2));
label_2a0f28:
    // 0x2a0f28: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x2a0f28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x2a0f2c: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2a0f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2a0f30: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2a0f30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a0f34: 0x2c430100  sltiu       $v1, $v0, 0x100
    ctx->pc = 0x2a0f34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2a0f38: 0x50600002  beql        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x2A0F38u;
    {
        const bool branch_taken_0x2a0f38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a0f38) {
            ctx->pc = 0x2A0F3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A0F38u;
            // 0x2a0f3c: 0xa3a00012  sb          $zero, 0x12($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A0F44u;
            goto label_2a0f44;
        }
    }
    ctx->pc = 0x2A0F40u;
    // 0x2a0f40: 0xa3a20012  sb          $v0, 0x12($sp)
    ctx->pc = 0x2a0f40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 2));
label_2a0f44:
    // 0x2a0f44: 0x93a40003  lbu         $a0, 0x3($sp)
    ctx->pc = 0x2a0f44u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x2a0f48: 0x2403ff00  addiu       $v1, $zero, -0x100
    ctx->pc = 0x2a0f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x2a0f4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a0f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2a0f50: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2a0f50u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2a0f54: 0x34e700ff  ori         $a3, $a3, 0xFF
    ctx->pc = 0x2a0f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)255);
    // 0x2a0f58: 0xa3a40013  sb          $a0, 0x13($sp)
    ctx->pc = 0x2a0f58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 4));
    // 0x2a0f5c: 0x3c08807f  lui         $t0, 0x807F
    ctx->pc = 0x2a0f5cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32895 << 16));
    // 0x2a0f60: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x2a0f60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x2a0f64: 0x84078  dsll        $t0, $t0, 1
    ctx->pc = 0x2a0f64u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 1);
    // 0x2a0f68: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x2a0f68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x2a0f6c: 0x8ba30013  lwl         $v1, 0x13($sp)
    ctx->pc = 0x2a0f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2a0f70: 0x9ba30010  lwr         $v1, 0x10($sp)
    ctx->pc = 0x2a0f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2a0f74: 0xaba30023  swl         $v1, 0x23($sp)
    ctx->pc = 0x2a0f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a0f78: 0xbba30020  swr         $v1, 0x20($sp)
    ctx->pc = 0x2a0f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2a0f7c: 0x3c06ff00  lui         $a2, 0xFF00
    ctx->pc = 0x2a0f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65280 << 16));
    // 0x2a0f80: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x2a0f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x2a0f84: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x2a0f84u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a0f88: 0x93a30021  lbu         $v1, 0x21($sp)
    ctx->pc = 0x2a0f88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 33)));
    // 0x2a0f8c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2a0f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2a0f90: 0x93a40022  lbu         $a0, 0x22($sp)
    ctx->pc = 0x2a0f90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 34)));
    // 0x2a0f94: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2a0f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
    // 0x2a0f98: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2a0f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x2a0f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2a0f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2a0fa0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x2a0fa0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x2a0fa4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x2a0fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x2a0fa8: 0x93a30023  lbu         $v1, 0x23($sp)
    ctx->pc = 0x2a0fa8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 35)));
    // 0x2a0fac: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2a0facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2a0fb0: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x2a0fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x2a0fb4: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2a0fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2a0fb8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x2a0fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2a0fbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0FBCu;
        // 0x2a0fc0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0FBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A0FC4u;
    // 0x2a0fc4: 0x0  nop
    ctx->pc = 0x2a0fc4u;
    // NOP
    // 0x2a0fc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2a0fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a0fcc: 0x0  nop
    ctx->pc = 0x2a0fccu;
    // NOP
    ctx->pc = 0x2a0fd0u;
}
