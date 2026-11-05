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

// Function: sub_0015E548
// Address: 0x15e548 - 0x15e608
void sub_0015E548_0x15e548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E548_0x15e548");
#endif

    switch (ctx->pc) {
        case 0x15e594u: goto label_15e594;
        case 0x15e5d0u: goto label_15e5d0;
        case 0x15e5e0u: goto label_15e5e0;
        default: break;
    }

    ctx->pc = 0x15e548u;

    // 0x15e548: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15e548u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15e54c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15e54cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15e550: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15e550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15e554: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15e554u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e558: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x15e558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x15e55c: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15e55cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15e560: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x15e560u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x15e564: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x15e564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e568: 0x1240001f  beqz        $s2, . + 4 + (0x1F << 2)
    ctx->pc = 0x15E568u;
    {
        const bool branch_taken_0x15e568 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E568u;
        // 0x15e56c: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e568) {
            ctx->pc = 0x15E5E8u;
            goto label_15e5e8;
        }
    }
    ctx->pc = 0x15E570u;
    // 0x15e570: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x15e570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x15e574: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x15e574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x15e578: 0x709821  addu        $s3, $v1, $s0
    ctx->pc = 0x15e578u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x15e57c: 0x8e630320  lw          $v1, 0x320($s3)
    ctx->pc = 0x15e57cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 800)));
    // 0x15e580: 0x5060001a  beql        $v1, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x15E580u;
    {
        const bool branch_taken_0x15e580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15e580) {
            ctx->pc = 0x15E584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15E580u;
            // 0x15e584: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15E5ECu;
            goto label_15e5ec;
        }
    }
    ctx->pc = 0x15E588u;
    // 0x15e588: 0x8e0502e4  lw          $a1, 0x2E4($s0)
    ctx->pc = 0x15e588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
    // 0x15e58c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x15E58Cu;
    SET_GPR_U32(ctx, 31, 0x15E594u);
    ctx->pc = 0x15E590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E58Cu;
    // 0x15e590: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x15E58Cu, 0x15E594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E594u;
label_15e594:
    // 0x15e594: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x15e594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15e598: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x15e598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15e59c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x15e59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15e5a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x15e5a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x15e5a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x15e5a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x15e5a8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x15e5a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x15e5ac: 0xc60002f0  lwc1        $f0, 0x2F0($s0)
    ctx->pc = 0x15e5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15e5b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x15e5b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15e5b4: 0x0  nop
    ctx->pc = 0x15e5b4u;
    // NOP
    // 0x15e5b8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x15E5B8u;
    {
        const bool branch_taken_0x15e5b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15E5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5B8u;
        // 0x15e5bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5b8) {
            ctx->pc = 0x15E5D8u;
            goto label_15e5d8;
        }
    }
    ctx->pc = 0x15E5C0u;
    // 0x15e5c0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15e5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5c4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15e5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15e5c8: 0xc05727e  jal         func_15C9F8
    ctx->pc = 0x15E5C8u;
    SET_GPR_U32(ctx, 31, 0x15E5D0u);
    ctx->pc = 0x15E5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5C8u;
    // 0x15e5cc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C9F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C9F8u, 0x15E5C8u, 0x15E5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5D0u;
label_15e5d0:
    // 0x15e5d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15E5D0u;
    {
        const bool branch_taken_0x15e5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15E5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5D0u;
        // 0x15e5d4: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15e5d0) {
            ctx->pc = 0x15E5ECu;
            goto label_15e5ec;
        }
    }
    ctx->pc = 0x15E5D8u;
label_15e5d8:
    // 0x15e5d8: 0xc0571c6  jal         func_15C718
    ctx->pc = 0x15E5D8u;
    SET_GPR_U32(ctx, 31, 0x15E5E0u);
    ctx->pc = 0x15E5DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15E5D8u;
    // 0x15e5dc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15C718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C718u, 0x15E5D8u, 0x15E5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15E5E0u;
label_15e5e0:
    // 0x15e5e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15e5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15e5e4: 0xae620384  sw          $v0, 0x384($s3)
    ctx->pc = 0x15e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 900), GPR_U32(ctx, 2));
label_15e5e8:
    // 0x15e5e8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15e5e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_15e5ec:
    // 0x15e5ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15e5ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15e5f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x15e5f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15e5f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x15e5f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x15e5f8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x15e5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15e5fc: 0x3e00008  jr          $ra
    ctx->pc = 0x15E5FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15E600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15E5FCu;
        // 0x15e600: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E5FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E604u;
    // 0x15e604: 0x0  nop
    ctx->pc = 0x15e604u;
    // NOP
    ctx->pc = 0x15e608u;
}
