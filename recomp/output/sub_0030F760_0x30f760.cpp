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

// Function: sub_0030F760
// Address: 0x30f760 - 0x30f840
void sub_0030F760_0x30f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030F760_0x30f760");
#endif

    switch (ctx->pc) {
        case 0x30f78cu: goto label_30f78c;
        case 0x30f790u: goto label_30f790;
        case 0x30f79cu: goto label_30f79c;
        case 0x30f7b8u: goto label_30f7b8;
        case 0x30f7c4u: goto label_30f7c4;
        default: break;
    }

    ctx->pc = 0x30f760u;

    // 0x30f760: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x30f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x30f764: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x30f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x30f768: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30f768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f76c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x30f76cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x30f770: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x30f770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x30f774: 0x26440200  addiu       $a0, $s2, 0x200
    ctx->pc = 0x30f774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x30f778: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x30f778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x30f77c: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x30f77cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30f780: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x30f780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x30f784: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x30F784u;
    SET_GPR_U32(ctx, 31, 0x30F78Cu);
    ctx->pc = 0x30F788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F784u;
    // 0x30f788: 0x26500210  addiu       $s0, $s2, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x30F784u, 0x30F78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F78Cu;
label_30f78c:
    // 0x30f78c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x30f78cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_30f790:
    // 0x30f790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f794: 0xc0c373a  jal         func_30DCE8
    ctx->pc = 0x30F794u;
    SET_GPR_U32(ctx, 31, 0x30F79Cu);
    ctx->pc = 0x30F798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F794u;
    // 0x30f798: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30DCE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30DCE8u, 0x30F794u, 0x30F79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F79Cu;
label_30f79c:
    // 0x30f79c: 0x0  nop
    ctx->pc = 0x30f79cu;
    // NOP
    // 0x30f7a0: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30F7A0u;
    {
        const bool branch_taken_0x30f7a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x30F7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7A0u;
        // 0x30f7a4: 0x26100050  addiu       $s0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7a0) {
            ctx->pc = 0x30F790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f790;
        }
    }
    ctx->pc = 0x30F7A8u;
    // 0x30f7a8: 0x26500580  addiu       $s0, $s2, 0x580
    ctx->pc = 0x30f7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1408));
    // 0x30f7ac: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x30f7acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x30f7b0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x30f7b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x30f7b4: 0x0  nop
    ctx->pc = 0x30f7b4u;
    // NOP
label_30f7b8:
    // 0x30f7b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x30f7b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f7bc: 0xc0c9a3a  jal         func_3268E8
    ctx->pc = 0x30F7BCu;
    SET_GPR_U32(ctx, 31, 0x30F7C4u);
    ctx->pc = 0x30F7C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F7BCu;
    // 0x30f7c0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3268E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3268E8u, 0x30F7BCu, 0x30F7C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F7C4u;
label_30f7c4:
    // 0x30f7c4: 0x0  nop
    ctx->pc = 0x30f7c4u;
    // NOP
    // 0x30f7c8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x30F7C8u;
    {
        const bool branch_taken_0x30f7c8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x30F7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F7C8u;
        // 0x30f7cc: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30f7c8) {
            ctx->pc = 0x30F7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30f7b8;
        }
    }
    ctx->pc = 0x30F7D0u;
    // 0x30f7d0: 0x3c01c7c3  lui         $at, 0xC7C3
    ctx->pc = 0x30f7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)51139 << 16));
    // 0x30f7d4: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x30f7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
    // 0x30f7d8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x30f7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x30f7dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30f7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f7e0: 0x3c0147c3  lui         $at, 0x47C3
    ctx->pc = 0x30f7e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18371 << 16));
    // 0x30f7e4: 0x34214f80  ori         $at, $at, 0x4F80
    ctx->pc = 0x30f7e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20352);
    // 0x30f7e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x30f7e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30f7ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x30f7f0: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x30f7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x30f7f4: 0xa2420001  sb          $v0, 0x1($s2)
    ctx->pc = 0x30f7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x30f7f8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x30f7f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x30f7fc: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x30f7fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x30f800: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x30f800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x30f804: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x30f804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x30f808: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x30f808u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f80c: 0xfa410200  sqc2        $vf1, 0x200($s2)
    ctx->pc = 0x30f80cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 512), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30f810: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x30f810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30f814: 0xae40055c  sw          $zero, 0x55C($s2)
    ctx->pc = 0x30f814u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1372), GPR_U32(ctx, 0));
    // 0x30f818: 0xae400800  sw          $zero, 0x800($s2)
    ctx->pc = 0x30f818u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2048), GPR_U32(ctx, 0));
    // 0x30f81c: 0xae400994  sw          $zero, 0x994($s2)
    ctx->pc = 0x30f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2452), GPR_U32(ctx, 0));
    // 0x30f820: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x30f820u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f824: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x30f824u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30f828: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x30f828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f82c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x30f82cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30f830: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x30f830u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f834: 0x3e00008  jr          $ra
    ctx->pc = 0x30F834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F834u;
        // 0x30f838: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F83Cu;
    // 0x30f83c: 0x0  nop
    ctx->pc = 0x30f83cu;
    // NOP
    ctx->pc = 0x30f840u;
}
