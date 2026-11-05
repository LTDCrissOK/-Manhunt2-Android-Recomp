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

// Function: sub_00291138
// Address: 0x291138 - 0x2911f0
void sub_00291138_0x291138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291138_0x291138");
#endif

    switch (ctx->pc) {
        case 0x291190u: goto label_291190;
        case 0x2911a0u: goto label_2911a0;
        case 0x2911b4u: goto label_2911b4;
        default: break;
    }

    ctx->pc = 0x291138u;

    // 0x291138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x291138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x29113c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x291140: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x291140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x291144: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x291144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291148: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x291148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29114c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29114cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291150: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x291150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x291154: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x291154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x291158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29115c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x29115cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x291160: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x291160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x291164: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x291164u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x291168: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x291168u;
    {
        const bool branch_taken_0x291168 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x29116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291168u;
        // 0x29116c: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x291168) {
            ctx->pc = 0x29117Cu;
            goto label_29117c;
        }
    }
    ctx->pc = 0x291170u;
    // 0x291170: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x291170u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291174: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x291174u;
    {
        const bool branch_taken_0x291174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x291178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291174u;
        // 0x291178: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291174) {
            ctx->pc = 0x2911CCu;
            goto label_2911cc;
        }
    }
    ctx->pc = 0x29117Cu;
label_29117c:
    // 0x29117c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x29117cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x291180: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x291180u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291184: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x291184u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x291188: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x291188u;
    SET_GPR_U32(ctx, 31, 0x291190u);
    ctx->pc = 0x29118Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x291188u;
    // 0x29118c: 0xc62c0024  lwc1        $f12, 0x24($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x291188u, 0x291190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x291190u;
label_291190:
    // 0x291190: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x291190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x291194: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x291194u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x291198: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x291198u;
    {
        const bool branch_taken_0x291198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291198u;
        // 0x29119c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291198) {
            ctx->pc = 0x2911C4u;
            goto label_2911c4;
        }
    }
    ctx->pc = 0x2911A0u;
label_2911a0:
    // 0x2911a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2911a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2911a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2911a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2911ac: 0xc0a4444  jal         func_291110
    ctx->pc = 0x2911ACu;
    SET_GPR_U32(ctx, 31, 0x2911B4u);
    ctx->pc = 0x2911B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2911ACu;
    // 0x2911b0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x291110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291110u, 0x2911ACu, 0x2911B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2911B4u;
label_2911b4:
    // 0x2911b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2911b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2911b8: 0x212102a  slt         $v0, $s0, $s2
    ctx->pc = 0x2911b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x2911bc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2911BCu;
    {
        const bool branch_taken_0x2911bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2911C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911BCu;
        // 0x2911c0: 0x4600a500  add.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911bc) {
            ctx->pc = 0x2911A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2911a0;
        }
    }
    ctx->pc = 0x2911C4u;
label_2911c4:
    // 0x2911c4: 0x4616a000  add.s       $f0, $f20, $f22
    ctx->pc = 0x2911c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[22]);
    // 0x2911c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2911c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2911cc:
    // 0x2911cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2911ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2911d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2911d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2911d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2911d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2911d8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2911d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2911dc: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x2911dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2911e0: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x2911e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2911e4: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2911e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2911e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2911E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2911ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2911E8u;
        // 0x2911ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2911E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2911F0u;
}
