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

// Function: sub_001EAC88
// Address: 0x1eac88 - 0x1ead30
void sub_001EAC88_0x1eac88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAC88_0x1eac88");
#endif

    switch (ctx->pc) {
        case 0x1eaca4u: goto label_1eaca4;
        case 0x1eacc0u: goto label_1eacc0;
        case 0x1eacd0u: goto label_1eacd0;
        default: break;
    }

    ctx->pc = 0x1eac88u;

    // 0x1eac88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1eac88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1eac8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1eac90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1eac90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eac94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1eac98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1eac98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1eac9c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1EAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1EACA4u);
    ctx->pc = 0x1EACA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EAC9Cu;
    // 0x1eaca0: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1EAC9Cu, 0x1EACA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACA4u;
label_1eaca4:
    // 0x1eaca4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1eaca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eaca8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1eaca8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eacac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1eacacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1eacb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eacb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1eacb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1eacb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1eacb8: 0xc07aaac  jal         func_1EAAB0
    ctx->pc = 0x1EACB8u;
    SET_GPR_U32(ctx, 31, 0x1EACC0u);
    ctx->pc = 0x1EACBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EACB8u;
    // 0x1eacbc: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EAAB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAAB0u, 0x1EACB8u, 0x1EACC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EACC0u;
label_1eacc0:
    // 0x1eacc0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1eacc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1eacc4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1EACC4u;
    {
        const bool branch_taken_0x1eacc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EACC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EACC4u;
        // 0x1eacc8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eacc4) {
            ctx->pc = 0x1EAD14u;
            goto label_1ead14;
        }
    }
    ctx->pc = 0x1EACCCu;
    // 0x1eaccc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1eacccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1eacd0:
    // 0x1eacd0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eacd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eacd4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1eacd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1eacd8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1eacd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eacdc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eace0: 0xc4400040  lwc1        $f0, 0x40($v0)
    ctx->pc = 0x1eace0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eace4: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eace4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1eace8: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x1eace8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x1eacec: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1eacecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1eacf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1eacf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1eacf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1eacf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1eacf8: 0xc4400048  lwc1        $f0, 0x48($v0)
    ctx->pc = 0x1eacf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1eacfc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1eacfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ead00: 0xe4600048  swc1        $f0, 0x48($v1)
    ctx->pc = 0x1ead00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 72), bits); }
    // 0x1ead04: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1ead04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1ead08: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1ead08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ead0c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x1EAD0Cu;
    {
        const bool branch_taken_0x1ead0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD0Cu;
        // 0x1ead10: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ead0c) {
            ctx->pc = 0x1EACD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1eacd0;
        }
    }
    ctx->pc = 0x1EAD14u;
label_1ead14:
    // 0x1ead14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1ead14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ead18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ead18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ead1c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ead1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ead20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ead20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ead24: 0x3e00008  jr          $ra
    ctx->pc = 0x1EAD24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAD24u;
        // 0x1ead28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAD24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAD2Cu;
    // 0x1ead2c: 0x0  nop
    ctx->pc = 0x1ead2cu;
    // NOP
    ctx->pc = 0x1ead30u;
}
