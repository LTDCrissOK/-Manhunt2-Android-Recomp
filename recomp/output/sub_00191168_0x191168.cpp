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

// Function: sub_00191168
// Address: 0x191168 - 0x191280
void sub_00191168_0x191168(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191168_0x191168");
#endif

    switch (ctx->pc) {
        case 0x191188u: goto label_191188;
        case 0x1911b4u: goto label_1911b4;
        case 0x1911fcu: goto label_1911fc;
        default: break;
    }

    ctx->pc = 0x191168u;

    // 0x191168: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19116c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19116cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x191170: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x191170u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191174: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x191174u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x191178: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x191178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19117c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19117cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x191180: 0xc061a12  jal         func_186848
    ctx->pc = 0x191180u;
    SET_GPR_U32(ctx, 31, 0x191188u);
    ctx->pc = 0x191184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191180u;
    // 0x191184: 0xe7b50028  swc1        $f21, 0x28($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x191180u, 0x191188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191188u;
label_191188:
    // 0x191188: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x191188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x19118c: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x19118cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191190: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x191190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191194: 0x0  nop
    ctx->pc = 0x191194u;
    // NOP
    // 0x191198: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x191198u;
    {
        const bool branch_taken_0x191198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191198u;
        // 0x19119c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191198) {
            ctx->pc = 0x1911A4u;
            goto label_1911a4;
        }
    }
    ctx->pc = 0x1911A0u;
    // 0x1911a0: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x1911a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_1911a4:
    // 0x1911a4: 0x1060002d  beqz        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x1911A4u;
    {
        const bool branch_taken_0x1911a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911A4u;
        // 0x1911a8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911a4) {
            ctx->pc = 0x19125Cu;
            goto label_19125c;
        }
    }
    ctx->pc = 0x1911ACu;
    // 0x1911ac: 0xc061a12  jal         func_186848
    ctx->pc = 0x1911ACu;
    SET_GPR_U32(ctx, 31, 0x1911B4u);
    ctx->pc = 0x1911B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911ACu;
    // 0x1911b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1911ACu, 0x1911B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911B4u;
label_1911b4:
    // 0x1911b4: 0xc4400290  lwc1        $f0, 0x290($v0)
    ctx->pc = 0x1911b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1911b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1911b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1911bc: 0x0  nop
    ctx->pc = 0x1911bcu;
    // NOP
    // 0x1911c0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1911C0u;
    {
        const bool branch_taken_0x1911c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1911C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1911C0u;
        // 0x1911c4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911c0) {
            ctx->pc = 0x1911CCu;
            goto label_1911cc;
        }
    }
    ctx->pc = 0x1911C8u;
    // 0x1911c8: 0x24430270  addiu       $v1, $v0, 0x270
    ctx->pc = 0x1911c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 624));
label_1911cc:
    // 0x1911cc: 0x26110060  addiu       $s1, $s0, 0x60
    ctx->pc = 0x1911ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x1911d0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x1911d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1911d4: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1911d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1911d8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x1911d8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1911dc: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1911dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1911e0: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1911e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1911e4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x1911e4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x1911e8: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1911e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1911ec: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1911ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1911f0: 0x4603155c  madd.s      $f21, $f2, $f3
    ctx->pc = 0x1911f0u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x1911f4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1911F4u;
    SET_GPR_U32(ctx, 31, 0x1911FCu);
    ctx->pc = 0x1911F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1911F4u;
    // 0x1911f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1911F4u, 0x1911FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911FCu;
label_1911fc:
    // 0x1911fc: 0xc4400240  lwc1        $f0, 0x240($v0)
    ctx->pc = 0x1911fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x191200: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x191200u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x191204: 0x0  nop
    ctx->pc = 0x191204u;
    // NOP
    // 0x191208: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x191208u;
    {
        const bool branch_taken_0x191208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x19120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191208u;
        // 0x19120c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191208) {
            ctx->pc = 0x191214u;
            goto label_191214;
        }
    }
    ctx->pc = 0x191210u;
    // 0x191210: 0x24430220  addiu       $v1, $v0, 0x220
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 544));
label_191214:
    // 0x191214: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x191214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191218: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x191218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x19121c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x19121cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x191220: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x191220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191224: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x191224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191228: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x191228u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
    // 0x19122c: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x19122cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x191230: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x191230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x191234: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x191234u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x191238: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x191238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19123c: 0x0  nop
    ctx->pc = 0x19123cu;
    // NOP
    // 0x191240: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x191240u;
    {
        const bool branch_taken_0x191240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x191244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191240u;
        // 0x191244: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191240) {
            ctx->pc = 0x19125Cu;
            goto label_19125c;
        }
    }
    ctx->pc = 0x191248u;
    // 0x191248: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x191248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19124c: 0x0  nop
    ctx->pc = 0x19124cu;
    // NOP
    // 0x191250: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x191250u;
    {
        const bool branch_taken_0x191250 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x191254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191250u;
        // 0x191254: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191250) {
            ctx->pc = 0x19125Cu;
            goto label_19125c;
        }
    }
    ctx->pc = 0x191258u;
    // 0x191258: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x191258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_19125c:
    // 0x19125c: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x19125cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x191260: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191260u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191264: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x191264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191268: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x191268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19126c: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x19126cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x191270: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x191270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191274: 0x3e00008  jr          $ra
    ctx->pc = 0x191274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191274u;
        // 0x191278: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191274u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19127Cu;
    // 0x19127c: 0x0  nop
    ctx->pc = 0x19127cu;
    // NOP
    ctx->pc = 0x191280u;
}
