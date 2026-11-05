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

// Function: sub_001EA6E0
// Address: 0x1ea6e0 - 0x1ea7e8
void sub_001EA6E0_0x1ea6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EA6E0_0x1ea6e0");
#endif

    switch (ctx->pc) {
        case 0x1ea748u: goto label_1ea748;
        case 0x1ea75cu: goto label_1ea75c;
        default: break;
    }

    ctx->pc = 0x1ea6e0u;

    // 0x1ea6e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1ea6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1ea6e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ea6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1ea6e8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ea6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1ea6ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ea6ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6f0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1ea6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1ea6f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1ea6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea6f8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1ea6f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1ea6fc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ea6fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea700: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1ea700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1ea704: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1ea704u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea708: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x1ea708u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1ea70c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ea70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1ea710: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1ea710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1ea714: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1ea714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1ea718: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ea718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ea71c: 0x3c01cb18  lui         $at, 0xCB18
    ctx->pc = 0x1ea71cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51992 << 16));
    // 0x1ea720: 0x3421967f  ori         $at, $at, 0x967F
    ctx->pc = 0x1ea720u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38527);
    // 0x1ea724: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1ea724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1ea728: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ea728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ea72c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1EA72Cu;
    {
        const bool branch_taken_0x1ea72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA72Cu;
        // 0x1ea730: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea72c) {
            ctx->pc = 0x1EA7ACu;
            goto label_1ea7ac;
        }
    }
    ctx->pc = 0x1EA734u;
    // 0x1ea734: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1ea734u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1ea738: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1ea738u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1ea73c: 0x24540340  addiu       $s4, $v0, 0x340
    ctx->pc = 0x1ea73cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 832));
    // 0x1ea740: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1ea740u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea744: 0x0  nop
    ctx->pc = 0x1ea744u;
    // NOP
label_1ea748:
    // 0x1ea748: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ea748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea74c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1ea74cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea750: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1ea750u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea754: 0xc078c16  jal         func_1E3058
    ctx->pc = 0x1EA754u;
    SET_GPR_U32(ctx, 31, 0x1EA75Cu);
    ctx->pc = 0x1EA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EA754u;
    // 0x1ea758: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E3058u, 0x1EA754u, 0x1EA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EA75Cu;
label_1ea75c:
    // 0x1ea75c: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1EA75Cu;
    {
        const bool branch_taken_0x1ea75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ea75c) {
            ctx->pc = 0x1EA760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA75Cu;
            // 0x1ea760: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA79Cu;
            goto label_1ea79c;
        }
    }
    ctx->pc = 0x1EA764u;
    // 0x1ea764: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1ea764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ea768: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1ea768u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ea76c: 0x0  nop
    ctx->pc = 0x1ea76cu;
    // NOP
    // 0x1ea770: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1EA770u;
    {
        const bool branch_taken_0x1ea770 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ea770) {
            ctx->pc = 0x1EA774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EA770u;
            // 0x1ea774: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EA79Cu;
            goto label_1ea79c;
        }
    }
    ctx->pc = 0x1EA778u;
    // 0x1ea778: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ea778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ea77c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1ea77cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1ea780: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1ea780u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1ea784: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x1ea784u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x1ea788: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x1ea788u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1ea78c: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x1ea78cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1ea790: 0xae570030  sw          $s7, 0x30($s2)
    ctx->pc = 0x1ea790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 23));
    // 0x1ea794: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1ea794u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ea798: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ea798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1ea79c:
    // 0x1ea79c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1ea79cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1ea7a0: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x1ea7a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1ea7a4: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1EA7A4u;
    {
        const bool branch_taken_0x1ea7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7A4u;
        // 0x1ea7a8: 0x26310030  addiu       $s1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ea7a4) {
            ctx->pc = 0x1EA748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ea748;
        }
    }
    ctx->pc = 0x1EA7ACu;
label_1ea7ac:
    // 0x1ea7ac: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ea7acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ea7b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ea7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ea7b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ea7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ea7b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ea7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ea7bc: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ea7bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ea7c0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ea7c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ea7c4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ea7c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ea7c8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ea7c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ea7cc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ea7ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ea7d0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ea7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ea7d4: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x1ea7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ea7d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1EA7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EA7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EA7D8u;
        // 0x1ea7dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EA7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EA7E0u;
    // 0x1ea7e0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1ea7e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1ea7e4: 0x0  nop
    ctx->pc = 0x1ea7e4u;
    // NOP
    ctx->pc = 0x1ea7e8u;
}
