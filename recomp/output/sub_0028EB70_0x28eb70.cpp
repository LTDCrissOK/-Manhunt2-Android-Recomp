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

// Function: sub_0028EB70
// Address: 0x28eb70 - 0x28ec30
void sub_0028EB70_0x28eb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028EB70_0x28eb70");
#endif

    switch (ctx->pc) {
        case 0x28ebc4u: goto label_28ebc4;
        case 0x28ebc8u: goto label_28ebc8;
        case 0x28ebecu: goto label_28ebec;
        default: break;
    }

    ctx->pc = 0x28eb70u;

    // 0x28eb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28eb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28eb74: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28eb78: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28eb78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28eb7c: 0x24851128  addiu       $a1, $a0, 0x1128
    ctx->pc = 0x28eb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4392));
    // 0x28eb80: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x28eb80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x28eb84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28eb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eb88: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x28eb88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x28eb8c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x28eb8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x28eb90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28eb90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28eb94: 0x8c831128  lw          $v1, 0x1128($a0)
    ctx->pc = 0x28eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x4C1128u));
    // 0x28eb98: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C112Cu));
    // 0x28eb9c: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x28eb9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x28eba0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x28eba0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28eba4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28eba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28eba8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28eba8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28ebac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ebacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ebb0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28EBB0u;
    {
        const bool branch_taken_0x28ebb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EBB0u;
        // 0x28ebb4: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebb0) {
            ctx->pc = 0x28EC10u;
            goto label_28ec10;
        }
    }
    ctx->pc = 0x28EBB8u;
    // 0x28ebb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28ebb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebbc: 0xc0f4902  jal         func_3D2408
    ctx->pc = 0x28EBBCu;
    SET_GPR_U32(ctx, 31, 0x28EBC4u);
    ctx->pc = 0x28EBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBBCu;
    // 0x28ebc0: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2408u, 0x28EBBCu, 0x28EBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBC4u;
label_28ebc4:
    // 0x28ebc4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28ebc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ebc8:
    // 0x28ebc8: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x28ebc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x28ebcc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ebccu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ebd0: 0x8e231128  lw          $v1, 0x1128($s1)
    ctx->pc = 0x28ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28ebd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28ebd8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28ebd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ebdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ebe0: 0x66100001  daddiu      $s0, $s0, 0x1
    ctx->pc = 0x28ebe0u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)1);
    // 0x28ebe4: 0xc0a379c  jal         func_28DE70
    ctx->pc = 0x28EBE4u;
    SET_GPR_U32(ctx, 31, 0x28EBECu);
    ctx->pc = 0x28EBE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28EBE4u;
    // 0x28ebe8: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DE70u, 0x28EBE4u, 0x28EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28EBECu;
label_28ebec:
    // 0x28ebec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x28ebecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x28ebf0: 0x8e231128  lw          $v1, 0x1128($s1)
    ctx->pc = 0x28ebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4392)));
    // 0x28ebf4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28ebf8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x28ebfc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28ebfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28ec00: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28ec00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28ec04: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28ec04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ec08: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x28EC08u;
    {
        const bool branch_taken_0x28ec08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ec08) {
            ctx->pc = 0x28EBC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ebc8;
        }
    }
    ctx->pc = 0x28EC10u;
label_28ec10:
    // 0x28ec10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28ec10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ec14: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x28ec14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28ec18: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x28ec18u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28ec1c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x28ec1cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x28ec20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28ec20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28ec24: 0x3e00008  jr          $ra
    ctx->pc = 0x28EC24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28EC24u;
        // 0x28ec28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28EC24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28EC2Cu;
    // 0x28ec2c: 0x0  nop
    ctx->pc = 0x28ec2cu;
    // NOP
    ctx->pc = 0x28ec30u;
}
