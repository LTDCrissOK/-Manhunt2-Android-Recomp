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

// Function: sub_00334E38
// Address: 0x334e38 - 0x334ed0
void sub_00334E38_0x334e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334E38_0x334e38");
#endif

    switch (ctx->pc) {
        case 0x334e68u: goto label_334e68;
        case 0x334e88u: goto label_334e88;
        default: break;
    }

    ctx->pc = 0x334e38u;

    // 0x334e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x334e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x334e3c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x334e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x334e40: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x334e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x334e44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x334e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x334e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x334e4c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x334e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e50: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x334e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x334e54: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x334e54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e58: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x334e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x334e5c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x334e5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e60: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x334e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x334e64: 0x0  nop
    ctx->pc = 0x334e64u;
    // NOP
label_334e68:
    // 0x334e68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x334e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e6c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x334e6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x334e70: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x334e70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x334e74: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x334e74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x334e78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x334e78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334e7c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x334e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334e80: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x334E80u;
    SET_GPR_U32(ctx, 31, 0x334E88u);
    ctx->pc = 0x334E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334E80u;
    // 0x334e84: 0xb7a30000  sdr         $v1, 0x0($sp) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x334E80u, 0x334E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334E88u;
label_334e88:
    // 0x334e88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x334E88u;
    {
        const bool branch_taken_0x334e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E88u;
        // 0x334e8c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e88) {
            ctx->pc = 0x334EACu;
            goto label_334eac;
        }
    }
    ctx->pc = 0x334E90u;
    // 0x334e90: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x334e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x334e94: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x334e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x334e98: 0x211202a  slt         $a0, $s0, $s1
    ctx->pc = 0x334e98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x334e9c: 0x1480fff2  bnez        $a0, . + 4 + (-0xE << 2)
    ctx->pc = 0x334E9Cu;
    {
        const bool branch_taken_0x334e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x334EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334E9Cu;
        // 0x334ea0: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334e9c) {
            ctx->pc = 0x334E68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334e68;
        }
    }
    ctx->pc = 0x334EA4u;
    // 0x334ea4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x334EA4u;
    {
        const bool branch_taken_0x334ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x334EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EA4u;
        // 0x334ea8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334ea4) {
            ctx->pc = 0x334EB0u;
            goto label_334eb0;
        }
    }
    ctx->pc = 0x334EACu;
label_334eac:
    // 0x334eac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x334eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_334eb0:
    // 0x334eb0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x334eb0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x334eb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x334eb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x334eb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x334eb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x334ebc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x334ebcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x334ec0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x334ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x334ec4: 0x3e00008  jr          $ra
    ctx->pc = 0x334EC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x334EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334EC4u;
        // 0x334ec8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x334EC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x334ECCu;
    // 0x334ecc: 0x0  nop
    ctx->pc = 0x334eccu;
    // NOP
    ctx->pc = 0x334ed0u;
}
