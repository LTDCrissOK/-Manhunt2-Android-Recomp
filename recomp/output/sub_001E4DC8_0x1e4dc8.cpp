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

// Function: sub_001E4DC8
// Address: 0x1e4dc8 - 0x1e4eb8
void sub_001E4DC8_0x1e4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4DC8_0x1e4dc8");
#endif

    switch (ctx->pc) {
        case 0x1e4e04u: goto label_1e4e04;
        case 0x1e4e18u: goto label_1e4e18;
        case 0x1e4e20u: goto label_1e4e20;
        case 0x1e4e28u: goto label_1e4e28;
        default: break;
    }

    ctx->pc = 0x1e4dc8u;

    // 0x1e4dc8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e4dcc: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x1e4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e4dd0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1e4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1e4dd4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1e4dd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4dd8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1e4dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x1e4ddc: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x1e4ddcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e4de0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1e4de0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e4de4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1e4de4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1e4de8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1e4de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1e4dec: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1e4decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x1e4df0: 0x2651ffff  addiu       $s1, $s2, -0x1
    ctx->pc = 0x1e4df0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1e4df4: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1e4df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x1e4df8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e4df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e4dfc: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E4DFCu;
    SET_GPR_U32(ctx, 31, 0x1E4E04u);
    ctx->pc = 0x1E4E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4DFCu;
    // 0x1e4e00: 0x34440010  ori         $a0, $v0, 0x10 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E4DFCu, 0x1E4E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E04u;
label_1e4e04:
    // 0x1e4e04: 0x24530010  addiu       $s3, $v0, 0x10
    ctx->pc = 0x1e4e04u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e4e08: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x1e4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x1e4e0c: 0x1240001e  beqz        $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1E4E0Cu;
    {
        const bool branch_taken_0x1e4e0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E0Cu;
        // 0x1e4e10: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e0c) {
            ctx->pc = 0x1E4E88u;
            goto label_1e4e88;
        }
    }
    ctx->pc = 0x1E4E14u;
    // 0x1e4e14: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x1e4e14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1e4e18:
    // 0x1e4e18: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4E18u;
    SET_GPR_U32(ctx, 31, 0x1E4E20u);
    ctx->pc = 0x1E4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E18u;
    // 0x1e4e1c: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4E18u, 0x1E4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E20u;
label_1e4e20:
    // 0x1e4e20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E4E20u;
    SET_GPR_U32(ctx, 31, 0x1E4E28u);
    ctx->pc = 0x1E4E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4E20u;
    // 0x1e4e24: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E4E20u, 0x1E4E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4E28u;
label_1e4e28:
    // 0x1e4e28: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e4e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e4e2c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e4e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e4e30: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e4e30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e4e34: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e4e38: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1e4e38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e3c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e4e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e4e40: 0x7e020020  sq          $v0, 0x20($s0)
    ctx->pc = 0x1e4e40u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 2));
    // 0x1e4e44: 0x7e020010  sq          $v0, 0x10($s0)
    ctx->pc = 0x1e4e44u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 16), GPR_VEC(ctx, 2));
    // 0x1e4e48: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e4e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e4e4c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e4e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e4e50: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e4e54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e58: 0xfa010040  sqc2        $vf1, 0x40($s0)
    ctx->pc = 0x1e4e58u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4e5c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1e4e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1e4e60: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1e4e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1e4e64: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1e4e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1e4e68: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1e4e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1e4e6c: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e4e6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e4e70: 0xfa010030  sqc2        $vf1, 0x30($s0)
    ctx->pc = 0x1e4e70u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e4e74: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1e4e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x1e4e78: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1e4e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1e4e7c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1e4e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1e4e80: 0x1635ffe5  bne         $s1, $s5, . + 4 + (-0x1B << 2)
    ctx->pc = 0x1E4E80u;
    {
        const bool branch_taken_0x1e4e80 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x1E4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4E80u;
        // 0x1e4e84: 0x26100060  addiu       $s0, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4e80) {
            ctx->pc = 0x1E4E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e4e18;
        }
    }
    ctx->pc = 0x1E4E88u;
label_1e4e88:
    // 0x1e4e88: 0xae920008  sw          $s2, 0x8($s4)
    ctx->pc = 0x1e4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 18));
    // 0x1e4e8c: 0xae930004  sw          $s3, 0x4($s4)
    ctx->pc = 0x1e4e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 19));
    // 0x1e4e90: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1e4e90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e4e94: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1e4e94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e4e98: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1e4e98u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e4e9c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1e4e9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e4ea0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1e4ea0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e4ea4: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1e4ea4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e4ea8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e4ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e4eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E4EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4EACu;
        // 0x1e4eb0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E4EB4u;
    // 0x1e4eb4: 0x0  nop
    ctx->pc = 0x1e4eb4u;
    // NOP
    ctx->pc = 0x1e4eb8u;
}
