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

// Function: sub_00147270
// Address: 0x147270 - 0x147370
void sub_00147270_0x147270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147270_0x147270");
#endif

    switch (ctx->pc) {
        case 0x1472b8u: goto label_1472b8;
        case 0x1472d0u: goto label_1472d0;
        case 0x1472d8u: goto label_1472d8;
        case 0x1472f4u: goto label_1472f4;
        default: break;
    }

    ctx->pc = 0x147270u;

    // 0x147270: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x147270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x147274: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x147274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x147278: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x147278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x14727c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x14727cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147280: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x147280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x147284: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x147284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x147288: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x147288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x14728c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x14728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x147290: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x147290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x147294: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x147294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147298: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x147298u;
    {
        const bool branch_taken_0x147298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14729Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147298u;
        // 0x14729c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147298) {
            ctx->pc = 0x1472A8u;
            goto label_1472a8;
        }
    }
    ctx->pc = 0x1472A0u;
    // 0x1472a0: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1472A0u;
    {
        const bool branch_taken_0x1472a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472A0u;
        // 0x1472a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472a0) {
            ctx->pc = 0x147348u;
            goto label_147348;
        }
    }
    ctx->pc = 0x1472A8u;
label_1472a8:
    // 0x1472a8: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1472a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1472ac: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1472ACu;
    {
        const bool branch_taken_0x1472ac = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1472B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472ACu;
        // 0x1472b0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472ac) {
            ctx->pc = 0x147344u;
            goto label_147344;
        }
    }
    ctx->pc = 0x1472B4u;
    // 0x1472b4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1472b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1472b8:
    // 0x1472b8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1472b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472bc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1472BCu;
    {
        const bool branch_taken_0x1472bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1472C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1472BCu;
        // 0x1472c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1472bc) {
            ctx->pc = 0x1472C8u;
            goto label_1472c8;
        }
    }
    ctx->pc = 0x1472C4u;
    // 0x1472c4: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1472c4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1472c8:
    // 0x1472c8: 0xc0f61e8  jal         func_3D87A0
    ctx->pc = 0x1472C8u;
    SET_GPR_U32(ctx, 31, 0x1472D0u);
    ctx->pc = 0x1472CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472C8u;
    // 0x1472cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D87A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D87A0u, 0x1472C8u, 0x1472D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D0u;
label_1472d0:
    // 0x1472d0: 0xc0414a2  jal         func_105288
    ctx->pc = 0x1472D0u;
    SET_GPR_U32(ctx, 31, 0x1472D8u);
    ctx->pc = 0x1472D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472D0u;
    // 0x1472d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105288u, 0x1472D0u, 0x1472D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472D8u;
label_1472d8:
    // 0x1472d8: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1472D8u;
    {
        const bool branch_taken_0x1472d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1472d8) {
            ctx->pc = 0x1472DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1472D8u;
            // 0x1472dc: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14733Cu;
            goto label_14733c;
        }
    }
    ctx->pc = 0x1472E0u;
    // 0x1472e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1472e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1472e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472e8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1472e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1472ec: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1472ECu;
    SET_GPR_U32(ctx, 31, 0x1472F4u);
    ctx->pc = 0x1472F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1472ECu;
    // 0x1472f0: 0x2e700001  sltiu       $s0, $s3, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1472ECu, 0x1472F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1472F4u;
label_1472f4:
    // 0x1472f4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1472f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1472f8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1472f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1472fc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1472fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x147300: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x147300u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x147304: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x147304u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x147308: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x147308u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x14730c: 0x56000009  bnel        $s0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x14730Cu;
    {
        const bool branch_taken_0x14730c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x14730c) {
            ctx->pc = 0x147310u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14730Cu;
            // 0x147310: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x147334u;
            goto label_147334;
        }
    }
    ctx->pc = 0x147314u;
    // 0x147314: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x147314u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x147318: 0x0  nop
    ctx->pc = 0x147318u;
    // NOP
    // 0x14731c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x14731Cu;
    {
        const bool branch_taken_0x14731c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x147320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14731Cu;
        // 0x147320: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14731c) {
            ctx->pc = 0x147328u;
            goto label_147328;
        }
    }
    ctx->pc = 0x147324u;
    // 0x147324: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x147324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_147328:
    // 0x147328: 0x52000004  beql        $s0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x147328u;
    {
        const bool branch_taken_0x147328 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x147328) {
            ctx->pc = 0x14732Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x147328u;
            // 0x14732c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14733Cu;
            goto label_14733c;
        }
    }
    ctx->pc = 0x147330u;
    // 0x147330: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x147330u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_147334:
    // 0x147334: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x147334u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x147338: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x147338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_14733c:
    // 0x14733c: 0x5c40ffde  bgtzl       $v0, . + 4 + (-0x22 << 2)
    ctx->pc = 0x14733Cu;
    {
        const bool branch_taken_0x14733c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x14733c) {
            ctx->pc = 0x147340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14733Cu;
            // 0x147340: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1472B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1472b8;
        }
    }
    ctx->pc = 0x147344u;
label_147344:
    // 0x147344: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x147344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_147348:
    // 0x147348: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x147348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14734c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x14734cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x147350: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x147350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x147354: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x147354u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x147358: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x147358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14735c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x14735cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x147360: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x147360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x147364: 0x3e00008  jr          $ra
    ctx->pc = 0x147364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x147364u;
        // 0x147368: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x147364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14736Cu;
    // 0x14736c: 0x0  nop
    ctx->pc = 0x14736cu;
    // NOP
    ctx->pc = 0x147370u;
}
