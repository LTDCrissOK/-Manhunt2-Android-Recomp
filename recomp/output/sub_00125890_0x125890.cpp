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

// Function: sub_00125890
// Address: 0x125890 - 0x125980
void sub_00125890_0x125890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125890_0x125890");
#endif

    switch (ctx->pc) {
        case 0x125908u: goto label_125908;
        default: break;
    }

    ctx->pc = 0x125890u;

    // 0x125890: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x125894: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x125898: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x125898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x12589c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x12589cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1258a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1258a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1258a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1258a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1258a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1258ac: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1258acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1258b0: 0x8c43a9d4  lw          $v1, -0x562C($v0)
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FA9D4u));
    // 0x1258b4: 0x8e040824  lw          $a0, 0x824($s0)
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2084)));
    // 0x1258b8: 0x1083002a  beq         $a0, $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1258B8u;
    {
        const bool branch_taken_0x1258b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1258BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258B8u;
        // 0x1258bc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258b8) {
            ctx->pc = 0x125964u;
            goto label_125964;
        }
    }
    ctx->pc = 0x1258C0u;
    // 0x1258c0: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1258c4: 0x24439a08  addiu       $v1, $v0, -0x65F8
    ctx->pc = 0x1258c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1258c8: 0x8c620214  lw          $v0, 0x214($v1)
    ctx->pc = 0x1258c8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x489C1Cu));
    // 0x1258cc: 0x50400026  beql        $v0, $zero, . + 4 + (0x26 << 2)
    ctx->pc = 0x1258CCu;
    {
        const bool branch_taken_0x1258cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1258cc) {
            ctx->pc = 0x1258D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1258CCu;
            // 0x1258d0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125968u;
            goto label_125968;
        }
    }
    ctx->pc = 0x1258D4u;
    // 0x1258d4: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x1258d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1258d8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1258dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1258dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1258e0: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x1258e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x1258e4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1258E4u;
    {
        const bool branch_taken_0x1258e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1258e4) {
            ctx->pc = 0x1258E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1258E4u;
            // 0x1258e8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1258F4u;
            goto label_1258f4;
        }
    }
    ctx->pc = 0x1258ECu;
    // 0x1258ec: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1258ECu;
    {
        const bool branch_taken_0x1258ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1258ECu;
        // 0x1258f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258ec) {
            ctx->pc = 0x1258FCu;
            goto label_1258fc;
        }
    }
    ctx->pc = 0x1258F4u;
label_1258f4:
    // 0x1258f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1258f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1258f8: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x1258f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_1258fc:
    // 0x1258fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1258fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125900: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x125900u;
    SET_GPR_U32(ctx, 31, 0x125908u);
    ctx->pc = 0x125904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125900u;
    // 0x125904: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x125900u, 0x125908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125908u;
label_125908:
    // 0x125908: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x125908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12590c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x12590cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x125910: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x125910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x125914: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x125914u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x125918: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x125918u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x12591c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x12591cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x125920: 0x8e030820  lw          $v1, 0x820($s0)
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2080)));
    // 0x125924: 0x8e42a9d4  lw          $v0, -0x562C($s2)
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945236)));
    // 0x125928: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x125928u;
    {
        const bool branch_taken_0x125928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x125928) {
            ctx->pc = 0x12592Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125928u;
            // 0x12592c: 0xe6010840  swc1        $f1, 0x840($s0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2112), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x125954u;
            goto label_125954;
        }
    }
    ctx->pc = 0x125930u;
    // 0x125930: 0xc6000840  lwc1        $f0, 0x840($s0)
    ctx->pc = 0x125930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 2112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125934: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x125934u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x125938: 0x0  nop
    ctx->pc = 0x125938u;
    // NOP
    // 0x12593c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x12593Cu;
    {
        const bool branch_taken_0x12593c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x125940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12593Cu;
        // 0x125940: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12593c) {
            ctx->pc = 0x125948u;
            goto label_125948;
        }
    }
    ctx->pc = 0x125944u;
    // 0x125944: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x125944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125948:
    // 0x125948: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x125948u;
    {
        const bool branch_taken_0x125948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x125948) {
            ctx->pc = 0x12594Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125948u;
            // 0x12594c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x125968u;
            goto label_125968;
        }
    }
    ctx->pc = 0x125950u;
    // 0x125950: 0xe6010840  swc1        $f1, 0x840($s0)
    ctx->pc = 0x125950u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2112), bits); }
label_125954:
    // 0x125954: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x125954u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x125958: 0xfa010830  sqc2        $vf1, 0x830($s0)
    ctx->pc = 0x125958u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 2096), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12595c: 0x8e42a9d4  lw          $v0, -0x562C($s2)
    ctx->pc = 0x12595cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294945236)));
    // 0x125960: 0xae020820  sw          $v0, 0x820($s0)
    ctx->pc = 0x125960u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2080), GPR_U32(ctx, 2));
label_125964:
    // 0x125964: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x125964u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_125968:
    // 0x125968: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x125968u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x12596c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x12596cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x125970: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x125970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x125974: 0x3e00008  jr          $ra
    ctx->pc = 0x125974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125974u;
        // 0x125978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12597Cu;
    // 0x12597c: 0x0  nop
    ctx->pc = 0x12597cu;
    // NOP
    ctx->pc = 0x125980u;
}
