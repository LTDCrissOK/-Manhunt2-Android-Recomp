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

// Function: sub_002A7B40
// Address: 0x2a7b40 - 0x2a7bf0
void sub_002A7B40_0x2a7b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7B40_0x2a7b40");
#endif

    switch (ctx->pc) {
        case 0x2a7bb8u: goto label_2a7bb8;
        case 0x2a7be4u: goto label_2a7be4;
        default: break;
    }

    ctx->pc = 0x2a7b40u;

    // 0x2a7b40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a7b44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2a7b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2a7b48: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x2a7b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x2a7b4c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2a7b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x2a7b50: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7b54: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2a7b54u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x2a7b58: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2a7b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2a7b5c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2a7b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a7b60: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2a7b60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7b64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2a7b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a7b68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2a7b68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2a7b6c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x2a7b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x2a7b70: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2a7b70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2a7b74: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2a7b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2a7b78: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x2a7b78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x2a7b7c: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x2a7b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x2a7b80: 0x68820017  ldl         $v0, 0x17($a0)
    ctx->pc = 0x2a7b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7b84: 0x6c820010  ldr         $v0, 0x10($a0)
    ctx->pc = 0x2a7b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7b88: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x2a7b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b8c: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x2a7b8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b90: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2a7b90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2a7b94: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2a7b94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2a7b98: 0xb0820017  sdl         $v0, 0x17($a0)
    ctx->pc = 0x2a7b98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7b9c: 0xb4820010  sdr         $v0, 0x10($a0)
    ctx->pc = 0x2a7b9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2a7ba0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2a7ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2a7ba4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2a7ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a7ba8: 0x10430009  beq         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2A7BA8u;
    {
        const bool branch_taken_0x2a7ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2A7BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BA8u;
        // 0x2a7bac: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7ba8) {
            ctx->pc = 0x2A7BD0u;
            goto label_2a7bd0;
        }
    }
    ctx->pc = 0x2A7BB0u;
    // 0x2a7bb0: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x2a7bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x2a7bb4: 0x0  nop
    ctx->pc = 0x2a7bb4u;
    // NOP
label_2a7bb8:
    // 0x2a7bb8: 0x0  nop
    ctx->pc = 0x2a7bb8u;
    // NOP
    // 0x2a7bbc: 0x0  nop
    ctx->pc = 0x2a7bbcu;
    // NOP
    // 0x2a7bc0: 0x0  nop
    ctx->pc = 0x2a7bc0u;
    // NOP
    // 0x2a7bc4: 0x0  nop
    ctx->pc = 0x2a7bc4u;
    // NOP
    // 0x2a7bc8: 0x5443fffb  bnel        $v0, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2A7BC8u;
    {
        const bool branch_taken_0x2a7bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a7bc8) {
            ctx->pc = 0x2A7BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A7BC8u;
            // 0x2a7bcc: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A7BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7bb8;
        }
    }
    ctx->pc = 0x2A7BD0u;
label_2a7bd0:
    // 0x2a7bd0: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x2a7bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2a7bd4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A7BD4u;
    {
        const bool branch_taken_0x2a7bd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A7BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BD4u;
        // 0x2a7bd8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7bd4) {
            ctx->pc = 0x2A7BE8u;
            goto label_2a7be8;
        }
    }
    ctx->pc = 0x2A7BDCu;
    // 0x2a7bdc: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2A7BDCu;
    SET_GPR_U32(ctx, 31, 0x2A7BE4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2A7BDCu, 0x2A7BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7BE4u;
label_2a7be4:
    // 0x2a7be4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a7be8:
    // 0x2a7be8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7BE8u;
        // 0x2a7bec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7BF0u;
}
