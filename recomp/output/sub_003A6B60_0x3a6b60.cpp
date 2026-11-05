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

// Function: sub_003A6B60
// Address: 0x3a6b60 - 0x3a6bd8
void sub_003A6B60_0x3a6b60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A6B60_0x3a6b60");
#endif

    ctx->pc = 0x3a6b60u;

    // 0x3a6b60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a6b60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a6b64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3a6b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a6b68: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A6B68u;
    {
        const bool branch_taken_0x3a6b68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A6B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6B68u;
        // 0x3a6b6c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a6b68) {
            ctx->pc = 0x3A6BB0u;
            goto label_3a6bb0;
        }
    }
    ctx->pc = 0x3A6B70u;
    // 0x3a6b70: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x3a6b70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x3a6b74: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3a6b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3a6b78: 0x2447e020  addiu       $a3, $v0, -0x1FE0
    ctx->pc = 0x3a6b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959136));
    // 0x3a6b7c: 0x24663e60  addiu       $a2, $v1, 0x3E60
    ctx->pc = 0x3a6b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 15968));
    // 0x3a6b80: 0x88e40003  lwl         $a0, 0x3($a3)
    ctx->pc = 0x3a6b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x3a6b84: 0x98e40000  lwr         $a0, 0x0($a3)
    ctx->pc = 0x3a6b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x3a6b88: 0x80e50004  lb          $a1, 0x4($a3)
    ctx->pc = 0x3a6b88u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x47E024u));
    // 0x3a6b8c: 0xa8c40003  swl         $a0, 0x3($a2)
    ctx->pc = 0x3a6b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a6b90: 0xb8c40000  swr         $a0, 0x0($a2)
    ctx->pc = 0x3a6b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3a6b94: 0xa0c50004  sb          $a1, 0x4($a2)
    ctx->pc = 0x3a6b94u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x413E64u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413E64u, _value); } while (0);
    // 0x3a6b98: 0x80e40005  lb          $a0, 0x5($a3)
    ctx->pc = 0x3a6b98u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x47E025u));
    // 0x3a6b9c: 0xa0c40005  sb          $a0, 0x5($a2)
    ctx->pc = 0x3a6b9cu;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x413E65u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x413E65u, _value); } while (0);
    // 0x3a6ba0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6ba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6ba4: 0x3e00008  jr          $ra
    ctx->pc = 0x3A6BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A6BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A6BA4u;
        // 0x3a6ba8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A6BA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A6BACu;
    // 0x3a6bac: 0x0  nop
    ctx->pc = 0x3a6bacu;
    // NOP
label_3a6bb0:
    // 0x3a6bb0: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x3a6bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x3a6bb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a6bb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a6bb8: 0x24843e60  addiu       $a0, $a0, 0x3E60
    ctx->pc = 0x3a6bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15968));
    // 0x3a6bbc: 0x80efbe8  j           func_3BEFA0
    ctx->pc = 0x3A6BBCu;
    ctx->pc = 0x3A6BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A6BBCu;
    // 0x3a6bc0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEFA0u;
    sub_003BEFA0_0x3befa0(rdram, ctx, runtime); return;
    ctx->pc = 0x3A6BC4u;
    // 0x3a6bc4: 0x0  nop
    ctx->pc = 0x3a6bc4u;
    // NOP
    // 0x3a6bc8: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x3a6bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x3a6bcc: 0x0  nop
    ctx->pc = 0x3a6bccu;
    // NOP
    // 0x3a6bd0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3a6bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3a6bd4: 0x0  nop
    ctx->pc = 0x3a6bd4u;
    // NOP
    ctx->pc = 0x3a6bd8u;
}
