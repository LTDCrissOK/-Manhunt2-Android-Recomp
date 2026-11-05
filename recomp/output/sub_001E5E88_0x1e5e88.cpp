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

// Function: sub_001E5E88
// Address: 0x1e5e88 - 0x1e5f28
void sub_001E5E88_0x1e5e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5E88_0x1e5e88");
#endif

    switch (ctx->pc) {
        case 0x1e5ea4u: goto label_1e5ea4;
        case 0x1e5ec8u: goto label_1e5ec8;
        case 0x1e5ed8u: goto label_1e5ed8;
        default: break;
    }

    ctx->pc = 0x1e5e88u;

    // 0x1e5e88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5e8c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e5e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5e90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e5e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5e94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e5e98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e5e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e5e9c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E5E9Cu;
    SET_GPR_U32(ctx, 31, 0x1E5EA4u);
    ctx->pc = 0x1E5EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5E9Cu;
    // 0x1e5ea0: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E5E9Cu, 0x1E5EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EA4u;
label_1e5ea4:
    // 0x1e5ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1e5ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5ea8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1e5ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5eac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1e5eacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1e5eb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e5eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5eb4: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1e5eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1e5eb8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1e5eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1e5ebc: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1e5ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1e5ec0: 0xc079620  jal         func_1E5880
    ctx->pc = 0x1E5EC0u;
    SET_GPR_U32(ctx, 31, 0x1E5EC8u);
    ctx->pc = 0x1E5EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5EC0u;
    // 0x1e5ec4: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5880u, 0x1E5EC0u, 0x1E5EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5EC8u;
label_1e5ec8:
    // 0x1e5ec8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5ecc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1E5ECCu;
    {
        const bool branch_taken_0x1e5ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5ECCu;
        // 0x1e5ed0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ecc) {
            ctx->pc = 0x1E5F0Cu;
            goto label_1e5f0c;
        }
    }
    ctx->pc = 0x1E5ED4u;
    // 0x1e5ed4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1e5ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5ed8:
    // 0x1e5ed8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1e5ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1e5edc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e5edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e5ee0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1e5ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1e5ee4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e5ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e5ee8: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x1e5ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5eec: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1e5eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1e5ef0: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x1e5ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e5ef4: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1e5ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1e5ef8: 0xe4610030  swc1        $f1, 0x30($v1)
    ctx->pc = 0x1e5ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x1e5efc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1e5efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e5f00: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e5f00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e5f04: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1E5F04u;
    {
        const bool branch_taken_0x1e5f04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F04u;
        // 0x1e5f08: 0x24840050  addiu       $a0, $a0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5f04) {
            ctx->pc = 0x1E5ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5ed8;
        }
    }
    ctx->pc = 0x1E5F0Cu;
label_1e5f0c:
    // 0x1e5f0c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1e5f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5f10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5f10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5f14: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e5f14u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5f18: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e5f18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5F1Cu;
        // 0x1e5f20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5F24u;
    // 0x1e5f24: 0x0  nop
    ctx->pc = 0x1e5f24u;
    // NOP
    ctx->pc = 0x1e5f28u;
}
