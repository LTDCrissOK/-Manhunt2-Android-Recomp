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

// Function: sub_001385A8
// Address: 0x1385a8 - 0x138678
void sub_001385A8_0x1385a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001385A8_0x1385a8");
#endif

    switch (ctx->pc) {
        case 0x13863cu: goto label_13863c;
        default: break;
    }

    ctx->pc = 0x1385a8u;

    // 0x1385a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1385a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1385ac: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x1385acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1385b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1385b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1385b4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1385b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1385b8: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
    ctx->pc = 0x1385B8u;
    {
        const bool branch_taken_0x1385b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B8u;
        // 0x1385bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385b8) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x1385C0u;
    // 0x1385c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1385c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1385c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1385c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1385c8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1385c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1385cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1385ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1385d0: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x1385d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x1385d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1385d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1385d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1385dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1385dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1385e0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x1385e4: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x1385E4u;
    {
        const bool branch_taken_0x1385e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1385E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385E4u;
        // 0x1385e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385e4) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x1385ECu;
    // 0x1385ec: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1385ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1385f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1385f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1385f4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1385f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1385f8: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1385f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1385fc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1385FCu;
    {
        const bool branch_taken_0x1385fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1385fc) {
            ctx->pc = 0x138600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385FCu;
            // 0x138600: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13860Cu;
            goto label_13860c;
        }
    }
    ctx->pc = 0x138604u;
    // 0x138604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x138604u;
    {
        const bool branch_taken_0x138604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138604u;
        // 0x138608: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138604) {
            ctx->pc = 0x138614u;
            goto label_138614;
        }
    }
    ctx->pc = 0x13860Cu;
label_13860c:
    // 0x13860c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13860cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x138610: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x138610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_138614:
    // 0x138614: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x138614u;
    {
        const bool branch_taken_0x138614 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x138618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138614u;
        // 0x138618: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138614) {
            ctx->pc = 0x138624u;
            goto label_138624;
        }
    }
    ctx->pc = 0x13861Cu;
    // 0x13861c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13861Cu;
    {
        const bool branch_taken_0x13861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13861Cu;
        // 0x138620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13861c) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x138624u;
label_138624:
    // 0x138624: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x138628: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x138628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13862c: 0x0  nop
    ctx->pc = 0x13862cu;
    // NOP
    // 0x138630: 0x46146500  add.s       $f20, $f12, $f20
    ctx->pc = 0x138630u;
    ctx->f[20] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x138634: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x138634u;
    SET_GPR_U32(ctx, 31, 0x13863Cu);
    ctx->pc = 0x138638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138634u;
    // 0x138638: 0x4614a502  mul.s       $f20, $f20, $f20 (Delay Slot)
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x138634u, 0x13863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13863Cu;
label_13863c:
    // 0x13863c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x138640: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x138640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x138644: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x138644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x138648: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x138648u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13864c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13864cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x138650: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x138650u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x138654: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x138654u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x138658: 0x0  nop
    ctx->pc = 0x138658u;
    // NOP
    // 0x13865c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x13865Cu;
    {
        const bool branch_taken_0x13865c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13865Cu;
        // 0x138660: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13865c) {
            ctx->pc = 0x138668u;
            goto label_138668;
        }
    }
    ctx->pc = 0x138664u;
    // 0x138664: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x138664u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_138668:
    // 0x138668: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x138668u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13866c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x13866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x138670: 0x3e00008  jr          $ra
    ctx->pc = 0x138670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138670u;
        // 0x138674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x138678u;
}
