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

// Function: sub_003706E8
// Address: 0x3706e8 - 0x3707a8
void sub_003706E8_0x3706e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003706E8_0x3706e8");
#endif

    switch (ctx->pc) {
        case 0x37074cu: goto label_37074c;
        case 0x370760u: goto label_370760;
        case 0x37077cu: goto label_37077c;
        case 0x370784u: goto label_370784;
        default: break;
    }

    ctx->pc = 0x3706e8u;

    // 0x3706e8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3706e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3706ec: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x3706ecu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x3706f0: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x3706f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x3706f4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x3706f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x3706f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3706f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3706fc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3706fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x370700: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x370700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x370704: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x370704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x370708: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x370708u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x37070c: 0x0  nop
    ctx->pc = 0x37070cu;
    // NOP
    // 0x370710: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x370710u;
    {
        const bool branch_taken_0x370710 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x370714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370710u;
        // 0x370714: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x370710) {
            ctx->pc = 0x37072Cu;
            goto label_37072c;
        }
    }
    ctx->pc = 0x370718u;
    // 0x370718: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x370718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37071c: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x37071cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x370720: 0x0  nop
    ctx->pc = 0x370720u;
    // NOP
    // 0x370724: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x370724u;
    {
        const bool branch_taken_0x370724 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x370728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370724u;
        // 0x370728: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x370724) {
            ctx->pc = 0x370788u;
            goto label_370788;
        }
    }
    ctx->pc = 0x37072Cu;
label_37072c:
    // 0x37072c: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x37072cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x370730: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x370730u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x370734: 0xe4950000  swc1        $f21, 0x0($a0)
    ctx->pc = 0x370734u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x370738: 0x8e22f8c0  lw          $v0, -0x740($s1)
    ctx->pc = 0x370738u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BF8C0u));
    // 0x37073c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x37073Cu;
    {
        const bool branch_taken_0x37073c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x370740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37073Cu;
        // 0x370740: 0x3c10005c  lui         $s0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37073c) {
            ctx->pc = 0x370760u;
            goto label_370760;
        }
    }
    ctx->pc = 0x370744u;
    // 0x370744: 0xc0df4be  jal         func_37D2F8
    ctx->pc = 0x370744u;
    SET_GPR_U32(ctx, 31, 0x37074Cu);
    ctx->pc = 0x370748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370744u;
    // 0x370748: 0x2604f890  addiu       $a0, $s0, -0x770 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D2F8u, 0x370744u, 0x37074Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37074Cu;
label_37074c:
    // 0x37074c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37074cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x370750: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x370750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
    // 0x370754: 0xae22f8c0  sw          $v0, -0x740($s1)
    ctx->pc = 0x370754u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294965440), GPR_U32(ctx, 2));
    // 0x370758: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x370758u;
    SET_GPR_U32(ctx, 31, 0x370760u);
    ctx->pc = 0x37075Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370758u;
    // 0x37075c: 0x248406c0  addiu       $a0, $a0, 0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x370758u, 0x370760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370760u;
label_370760:
    // 0x370760: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x370760u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x370764: 0x2610f890  addiu       $s0, $s0, -0x770
    ctx->pc = 0x370764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965392));
    // 0x370768: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x370768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37076c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x37076cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x370770: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x370770u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x370774: 0xc0df4d6  jal         func_37D358
    ctx->pc = 0x370774u;
    SET_GPR_U32(ctx, 31, 0x37077Cu);
    ctx->pc = 0x370778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x370774u;
    // 0x370778: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
    ctx->f[15] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D358u, 0x370774u, 0x37077Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37077Cu;
label_37077c:
    // 0x37077c: 0xc0dd684  jal         func_375A10
    ctx->pc = 0x37077Cu;
    SET_GPR_U32(ctx, 31, 0x370784u);
    ctx->pc = 0x370780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37077Cu;
    // 0x370780: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x375A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x375A10u, 0x37077Cu, 0x370784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370784u;
label_370784:
    // 0x370784: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x370784u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_370788:
    // 0x370788: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x370788u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37078c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x37078cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x370790: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x370790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x370794: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x370794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x370798: 0x3e00008  jr          $ra
    ctx->pc = 0x370798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370798u;
        // 0x37079c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3707A0u;
    // 0x3707a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3707a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x3707a4: 0x0  nop
    ctx->pc = 0x3707a4u;
    // NOP
    ctx->pc = 0x3707a8u;
}
