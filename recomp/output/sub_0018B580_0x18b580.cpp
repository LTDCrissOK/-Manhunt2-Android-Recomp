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

// Function: sub_0018B580
// Address: 0x18b580 - 0x18b698
void sub_0018B580_0x18b580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B580_0x18b580");
#endif

    switch (ctx->pc) {
        case 0x18b5b4u: goto label_18b5b4;
        case 0x18b5c0u: goto label_18b5c0;
        case 0x18b5d4u: goto label_18b5d4;
        default: break;
    }

    ctx->pc = 0x18b580u;

    // 0x18b580: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x18b580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x18b584: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x18b584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x18b588: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x18b588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x18b58c: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x18b58cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x18b590: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x18b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x18b594: 0x2603ef50  addiu       $v1, $s0, -0x10B0
    ctx->pc = 0x18b594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
    // 0x18b598: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x18b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x18b59c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18b59cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x18b5a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x18b5a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x18b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48EF54u));
    // 0x18b5ac: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x18B5ACu;
    SET_GPR_U32(ctx, 31, 0x18B5B4u);
    ctx->pc = 0x18B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5ACu;
    // 0x18b5b0: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x18B5ACu, 0x18B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5B4u;
label_18b5b4:
    // 0x18b5b4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x18B5B4u;
    {
        const bool branch_taken_0x18b5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5B4u;
        // 0x18b5b8: 0x2603ef50  addiu       $v1, $s0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5b4) {
            ctx->pc = 0x18B650u;
            goto label_18b650;
        }
    }
    ctx->pc = 0x18B5BCu;
    // 0x18b5bc: 0x0  nop
    ctx->pc = 0x18b5bcu;
    // NOP
label_18b5c0:
    // 0x18b5c0: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x18B5C0u;
    {
        const bool branch_taken_0x18b5c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x18B5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B5C0u;
        // 0x18b5c4: 0x2603ef50  addiu       $v1, $s0, -0x10B0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b5c0) {
            ctx->pc = 0x18B650u;
            goto label_18b650;
        }
    }
    ctx->pc = 0x18B5C8u;
    // 0x18b5c8: 0x8c850fe4  lw          $a1, 0xFE4($a0)
    ctx->pc = 0x18b5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    // 0x18b5cc: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x18B5CCu;
    SET_GPR_U32(ctx, 31, 0x18B5D4u);
    ctx->pc = 0x18B5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B5CCu;
    // 0x18b5d0: 0x2406001a  addiu       $a2, $zero, 0x1A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x18B5CCu, 0x18B5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18B5D4u;
label_18b5d4:
    // 0x18b5d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x18b5d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18b5d8: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x18b5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18b5dc: 0x2442fffb  addiu       $v0, $v0, -0x5
    ctx->pc = 0x18b5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967291));
    // 0x18b5e0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x18b5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x18b5e4: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x18B5E4u;
    {
        const bool branch_taken_0x18b5e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b5e4) {
            ctx->pc = 0x18B5E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B5E4u;
            // 0x18b5e8: 0x2603ef50  addiu       $v1, $s0, -0x10B0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B650u;
            goto label_18b650;
        }
    }
    ctx->pc = 0x18B5ECu;
    // 0x18b5ec: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x18b5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x18b5f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x18b5f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18b5f4: 0xda420000  lqc2        $vf2, 0x0($s2)
    ctx->pc = 0x18b5f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x18b5f8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x18b5f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x18b5fc: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x18b5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x18b600: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18b600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x18b604: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x18b604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x18b608: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x18b608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x18b60c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x18b60cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x18b610: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x18b610u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x18b614: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x18b614u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x18b618: 0x46010044  c1          0x10044
    ctx->pc = 0x18b618u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x18b61c: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x18b61cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x18b620: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x18b620u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18b624: 0x0  nop
    ctx->pc = 0x18b624u;
    // NOP
    // 0x18b628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x18b628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x18b62c: 0x0  nop
    ctx->pc = 0x18b62cu;
    // NOP
    // 0x18b630: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x18B630u;
    {
        const bool branch_taken_0x18b630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18b630) {
            ctx->pc = 0x18B634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B630u;
            // 0x18b634: 0x2603ef50  addiu       $v1, $s0, -0x10B0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B650u;
            goto label_18b650;
        }
    }
    ctx->pc = 0x18B638u;
    // 0x18b638: 0x8c630010  lw          $v1, 0x10($v1)
    ctx->pc = 0x18b638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x18b63c: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x18b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x18b640: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x18b640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x18b644: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x18B644u;
    {
        const bool branch_taken_0x18b644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18B648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B644u;
        // 0x18b648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b644) {
            ctx->pc = 0x18B67Cu;
            goto label_18b67c;
        }
    }
    ctx->pc = 0x18B64Cu;
    // 0x18b64c: 0x2603ef50  addiu       $v1, $s0, -0x10B0
    ctx->pc = 0x18b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963024));
label_18b650:
    // 0x18b650: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x18b650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x18b654: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x18B654u;
    {
        const bool branch_taken_0x18b654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18B658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B654u;
        // 0x18b658: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18b654) {
            ctx->pc = 0x18B660u;
            goto label_18b660;
        }
    }
    ctx->pc = 0x18B65Cu;
    // 0x18b65c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x18b65cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_18b660:
    // 0x18b660: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18B660u;
    {
        const bool branch_taken_0x18b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18b660) {
            ctx->pc = 0x18B670u;
            goto label_18b670;
        }
    }
    ctx->pc = 0x18B668u;
    // 0x18b668: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x18b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x18b66c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x18b66cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_18b670:
    // 0x18b670: 0x5480ffd3  bnel        $a0, $zero, . + 4 + (-0x2D << 2)
    ctx->pc = 0x18B670u;
    {
        const bool branch_taken_0x18b670 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x18b670) {
            ctx->pc = 0x18B674u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18B670u;
            // 0x18b674: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18B5C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_18b5c0;
        }
    }
    ctx->pc = 0x18B678u;
    // 0x18b678: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x18b678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18b67c:
    // 0x18b67c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x18b67cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b680: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x18b680u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x18b684: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x18b684u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18b688: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x18b688u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x18b68c: 0x3e00008  jr          $ra
    ctx->pc = 0x18B68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B68Cu;
        // 0x18b690: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B694u;
    // 0x18b694: 0x0  nop
    ctx->pc = 0x18b694u;
    // NOP
    ctx->pc = 0x18b698u;
}
