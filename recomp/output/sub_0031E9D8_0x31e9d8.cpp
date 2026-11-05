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

// Function: sub_0031E9D8
// Address: 0x31e9d8 - 0x31ea68
void sub_0031E9D8_0x31e9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E9D8_0x31e9d8");
#endif

    switch (ctx->pc) {
        case 0x31ea00u: goto label_31ea00;
        case 0x31ea0cu: goto label_31ea0c;
        default: break;
    }

    ctx->pc = 0x31e9d8u;

    // 0x31e9d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x31e9d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x31e9dc: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x31e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x31e9e0: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x31e9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x31e9e4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x31e9e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31e9e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x31e9e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31e9ec: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x31e9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x31e9f0: 0xafa40014  sw          $a0, 0x14($sp)
    ctx->pc = 0x31e9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
    // 0x31e9f4: 0x10440016  beq         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x31E9F4u;
    {
        const bool branch_taken_0x31e9f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x31E9F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E9F4u;
        // 0x31e9f8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31e9f4) {
            ctx->pc = 0x31EA50u;
            goto label_31ea50;
        }
    }
    ctx->pc = 0x31E9FCu;
    // 0x31e9fc: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x31e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_31ea00:
    // 0x31ea00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31ea00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ea04: 0xc0f0a8a  jal         func_3C2A28
    ctx->pc = 0x31EA04u;
    SET_GPR_U32(ctx, 31, 0x31EA0Cu);
    ctx->pc = 0x31EA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EA04u;
    // 0x31ea08: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C2A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C2A28u, 0x31EA04u, 0x31EA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EA0Cu;
label_31ea0c:
    // 0x31ea0c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x31EA0Cu;
    {
        const bool branch_taken_0x31ea0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA0Cu;
        // 0x31ea10: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea0c) {
            ctx->pc = 0x31EA54u;
            goto label_31ea54;
        }
    }
    ctx->pc = 0x31EA14u;
    // 0x31ea14: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x31ea14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31ea18: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x31ea18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31ea1c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x31ea1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ea20: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x31ea20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ea24: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x31ea24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31ea28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31ea28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31ea2c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x31ea2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x31ea30: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x31ea30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x31ea34: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x31ea34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x31ea38: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x31ea38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ea3c: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x31ea3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31ea40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x31ea40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x31ea44: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x31ea44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x31ea48: 0x1462ffed  bne         $v1, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x31EA48u;
    {
        const bool branch_taken_0x31ea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x31EA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA48u;
        // 0x31ea4c: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ea48) {
            ctx->pc = 0x31EA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31ea00;
        }
    }
    ctx->pc = 0x31EA50u;
label_31ea50:
    // 0x31ea50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x31ea50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31ea54:
    // 0x31ea54: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x31ea54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x31ea58: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x31ea58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31ea5c: 0x3e00008  jr          $ra
    ctx->pc = 0x31EA5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EA5Cu;
        // 0x31ea60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EA5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EA64u;
    // 0x31ea64: 0x0  nop
    ctx->pc = 0x31ea64u;
    // NOP
    ctx->pc = 0x31ea68u;
}
