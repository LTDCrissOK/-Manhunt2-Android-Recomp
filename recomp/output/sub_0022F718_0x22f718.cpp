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

// Function: sub_0022F718
// Address: 0x22f718 - 0x22f858
void sub_0022F718_0x22f718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022F718_0x22f718");
#endif

    switch (ctx->pc) {
        case 0x22f718u: goto label_22f718;
        case 0x22f71cu: goto label_22f71c;
        case 0x22f720u: goto label_22f720;
        case 0x22f724u: goto label_22f724;
        case 0x22f728u: goto label_22f728;
        case 0x22f72cu: goto label_22f72c;
        case 0x22f730u: goto label_22f730;
        case 0x22f734u: goto label_22f734;
        case 0x22f738u: goto label_22f738;
        case 0x22f73cu: goto label_22f73c;
        case 0x22f740u: goto label_22f740;
        case 0x22f744u: goto label_22f744;
        case 0x22f748u: goto label_22f748;
        case 0x22f74cu: goto label_22f74c;
        case 0x22f750u: goto label_22f750;
        case 0x22f754u: goto label_22f754;
        case 0x22f758u: goto label_22f758;
        case 0x22f75cu: goto label_22f75c;
        case 0x22f760u: goto label_22f760;
        case 0x22f764u: goto label_22f764;
        case 0x22f768u: goto label_22f768;
        case 0x22f76cu: goto label_22f76c;
        case 0x22f770u: goto label_22f770;
        case 0x22f774u: goto label_22f774;
        case 0x22f778u: goto label_22f778;
        case 0x22f77cu: goto label_22f77c;
        case 0x22f780u: goto label_22f780;
        case 0x22f784u: goto label_22f784;
        case 0x22f788u: goto label_22f788;
        case 0x22f78cu: goto label_22f78c;
        case 0x22f790u: goto label_22f790;
        case 0x22f794u: goto label_22f794;
        case 0x22f798u: goto label_22f798;
        case 0x22f79cu: goto label_22f79c;
        case 0x22f7a0u: goto label_22f7a0;
        case 0x22f7a4u: goto label_22f7a4;
        case 0x22f7a8u: goto label_22f7a8;
        case 0x22f7acu: goto label_22f7ac;
        case 0x22f7b0u: goto label_22f7b0;
        case 0x22f7b4u: goto label_22f7b4;
        case 0x22f7b8u: goto label_22f7b8;
        case 0x22f7bcu: goto label_22f7bc;
        case 0x22f7c0u: goto label_22f7c0;
        case 0x22f7c4u: goto label_22f7c4;
        case 0x22f7c8u: goto label_22f7c8;
        case 0x22f7ccu: goto label_22f7cc;
        case 0x22f7d0u: goto label_22f7d0;
        case 0x22f7d4u: goto label_22f7d4;
        case 0x22f7d8u: goto label_22f7d8;
        case 0x22f7dcu: goto label_22f7dc;
        case 0x22f7e0u: goto label_22f7e0;
        case 0x22f7e4u: goto label_22f7e4;
        case 0x22f7e8u: goto label_22f7e8;
        case 0x22f7ecu: goto label_22f7ec;
        case 0x22f7f0u: goto label_22f7f0;
        case 0x22f7f4u: goto label_22f7f4;
        case 0x22f7f8u: goto label_22f7f8;
        case 0x22f7fcu: goto label_22f7fc;
        case 0x22f800u: goto label_22f800;
        case 0x22f804u: goto label_22f804;
        case 0x22f808u: goto label_22f808;
        case 0x22f80cu: goto label_22f80c;
        case 0x22f810u: goto label_22f810;
        case 0x22f814u: goto label_22f814;
        case 0x22f818u: goto label_22f818;
        case 0x22f81cu: goto label_22f81c;
        case 0x22f820u: goto label_22f820;
        case 0x22f824u: goto label_22f824;
        case 0x22f828u: goto label_22f828;
        case 0x22f82cu: goto label_22f82c;
        case 0x22f830u: goto label_22f830;
        case 0x22f834u: goto label_22f834;
        case 0x22f838u: goto label_22f838;
        case 0x22f83cu: goto label_22f83c;
        case 0x22f840u: goto label_22f840;
        case 0x22f844u: goto label_22f844;
        case 0x22f848u: goto label_22f848;
        case 0x22f84cu: goto label_22f84c;
        case 0x22f850u: goto label_22f850;
        case 0x22f854u: goto label_22f854;
        default: break;
    }

    ctx->pc = 0x22f718u;

label_22f718:
    // 0x22f718: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x22f718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_22f71c:
    // 0x22f71c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x22f71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_22f720:
    // 0x22f720: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x22f720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_22f724:
    // 0x22f724: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22f724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22f728:
    // 0x22f728: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x22f728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_22f72c:
    // 0x22f72c: 0x8e220430  lw          $v0, 0x430($s1)
    ctx->pc = 0x22f72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1072)));
label_22f730:
    // 0x22f730: 0x14400045  bnez        $v0, . + 4 + (0x45 << 2)
label_22f734:
    if (ctx->pc == 0x22F734u) {
        ctx->pc = 0x22F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F730u;
        // 0x22f734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F738u;
        goto label_22f738;
    }
    ctx->pc = 0x22F730u;
    {
        const bool branch_taken_0x22f730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F730u;
        // 0x22f734: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f730) {
            ctx->pc = 0x22F848u;
            goto label_22f848;
        }
    }
    ctx->pc = 0x22F738u;
label_22f738:
    // 0x22f738: 0x14a00004  bnez        $a1, . + 4 + (0x4 << 2)
label_22f73c:
    if (ctx->pc == 0x22F73Cu) {
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F740u;
        goto label_22f740;
    }
    ctx->pc = 0x22F738u;
    {
        const bool branch_taken_0x22f738 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x22F73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F738u;
        // 0x22f73c: 0x24b00020  addiu       $s0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f738) {
            ctx->pc = 0x22F74Cu;
            goto label_22f74c;
        }
    }
    ctx->pc = 0x22F740u;
label_22f740:
    // 0x22f740: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x22f740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_22f744:
    // 0x22f744: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x22f744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_22f748:
    // 0x22f748: 0x24700060  addiu       $s0, $v1, 0x60
    ctx->pc = 0x22f748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_22f74c:
    // 0x22f74c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22f74cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_22f750:
    // 0x22f750: 0x24425b50  addiu       $v0, $v0, 0x5B50
    ctx->pc = 0x22f750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23376));
label_22f754:
    // 0x22f754: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x22f754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f758:
    // 0x22f758: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22f758u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f75c:
    // 0x22f75c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22f75cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22f760:
    // 0x22f760: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x22f760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f764:
    // 0x22f764: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x22f764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f768:
    // 0x22f768: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22f768u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22f76c:
    // 0x22f76c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f770:
    // 0x22f770: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x22f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f774:
    // 0x22f774: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x22f774u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22f778:
    // 0x22f778: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x22f778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_22f77c:
    // 0x22f77c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f77cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f780:
    // 0x22f780: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22f784:
    // 0x22f784: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x22f784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22f788:
    // 0x22f788: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x22f788u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22f78c:
    // 0x22f78c: 0x0  nop
    ctx->pc = 0x22f78cu;
    // NOP
label_22f790:
    // 0x22f790: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_22f794:
    if (ctx->pc == 0x22F794u) {
        ctx->pc = 0x22F798u;
        goto label_22f798;
    }
    ctx->pc = 0x22F790u;
    {
        const bool branch_taken_0x22f790 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f790) {
            ctx->pc = 0x22F7A0u;
            goto label_22f7a0;
        }
    }
    ctx->pc = 0x22F798u;
label_22f798:
    // 0x22f798: 0x10000005  b           . + 4 + (0x5 << 2)
label_22f79c:
    if (ctx->pc == 0x22F79Cu) {
        ctx->pc = 0x22F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F798u;
        // 0x22f79c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7A0u;
        goto label_22f7a0;
    }
    ctx->pc = 0x22F798u;
    {
        const bool branch_taken_0x22f798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22F79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F798u;
        // 0x22f79c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f798) {
            ctx->pc = 0x22F7B0u;
            goto label_22f7b0;
        }
    }
    ctx->pc = 0x22F7A0u;
label_22f7a0:
    // 0x22f7a0: 0x460d0834  c.lt.s      $f1, $f13
    ctx->pc = 0x22f7a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22f7a4:
    // 0x22f7a4: 0x0  nop
    ctx->pc = 0x22f7a4u;
    // NOP
label_22f7a8:
    // 0x22f7a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_22f7ac:
    if (ctx->pc == 0x22F7ACu) {
        ctx->pc = 0x22F7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F7A8u;
        // 0x22f7ac: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F7B0u;
        goto label_22f7b0;
    }
    ctx->pc = 0x22F7A8u;
    {
        const bool branch_taken_0x22f7a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22f7a8) {
            ctx->pc = 0x22F7ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22F7A8u;
            // 0x22f7ac: 0x46000b46  mov.s       $f13, $f1 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22F7B0u;
            goto label_22f7b0;
        }
    }
    ctx->pc = 0x22F7B0u;
label_22f7b0:
    // 0x22f7b0: 0x460d6802  mul.s       $f0, $f13, $f13
    ctx->pc = 0x22f7b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_22f7b4:
    // 0x22f7b4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x22f7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_22f7b8:
    // 0x22f7b8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x22f7b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_22f7bc:
    // 0x22f7bc: 0x0  nop
    ctx->pc = 0x22f7bcu;
    // NOP
label_22f7c0:
    // 0x22f7c0: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x22f7c0u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
label_22f7c4:
    // 0x22f7c4: 0x460c0304  c1          0xC0304
    ctx->pc = 0x22f7c4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_22f7c8:
    // 0x22f7c8: 0xc0e404c  jal         func_390130
label_22f7cc:
    if (ctx->pc == 0x22F7CCu) {
        ctx->pc = 0x22F7D0u;
        goto label_22f7d0;
    }
    ctx->pc = 0x22F7C8u;
    SET_GPR_U32(ctx, 31, 0x22F7D0u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x22F7C8u, 0x22F7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22F7D0u;
label_22f7d0:
    // 0x22f7d0: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x22f7d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_22f7d4:
    // 0x22f7d4: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x22f7d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_22f7d8:
    // 0x22f7d8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x22f7d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_22f7dc:
    // 0x22f7dc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x22f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_22f7e0:
    // 0x22f7e0: 0x24425b30  addiu       $v0, $v0, 0x5B30
    ctx->pc = 0x22f7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23344));
label_22f7e4:
    // 0x22f7e4: 0x46040302  mul.s       $f12, $f0, $f4
    ctx->pc = 0x22f7e4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_22f7e8:
    // 0x22f7e8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x22f7e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f7ec:
    // 0x22f7ec: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x22f7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f7f0:
    // 0x22f7f0: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x22f7f0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22f7f4:
    // 0x22f7f4: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x22f7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f7f8:
    // 0x22f7f8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x22f7f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f7fc:
    // 0x22f7fc: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x22f7fcu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_22f800:
    // 0x22f800: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x22f800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_22f804:
    // 0x22f804: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x22f804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_22f808:
    // 0x22f808: 0x4603105c  madd.s      $f1, $f2, $f3
    ctx->pc = 0x22f808u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_22f80c:
    // 0x22f80c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22f80cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f810:
    // 0x22f810: 0x0  nop
    ctx->pc = 0x22f810u;
    // NOP
label_22f814:
    // 0x22f814: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22f814u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22f818:
    // 0x22f818: 0x0  nop
    ctx->pc = 0x22f818u;
    // NOP
label_22f81c:
    // 0x22f81c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_22f820:
    if (ctx->pc == 0x22F820u) {
        ctx->pc = 0x22F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F81Cu;
        // 0x22f820: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F824u;
        goto label_22f824;
    }
    ctx->pc = 0x22F81Cu;
    {
        const bool branch_taken_0x22f81c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22F820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F81Cu;
        // 0x22f820: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22f81c) {
            ctx->pc = 0x22F834u;
            goto label_22f834;
        }
    }
    ctx->pc = 0x22F824u;
label_22f824:
    // 0x22f824: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x22f824u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
label_22f828:
    // 0x22f828: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22f828u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22f82c:
    // 0x22f82c: 0x0  nop
    ctx->pc = 0x22f82cu;
    // NOP
label_22f830:
    // 0x22f830: 0x460c0301  sub.s       $f12, $f0, $f12
    ctx->pc = 0x22f830u;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
label_22f834:
    // 0x22f834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22f834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22f838:
    // 0x22f838: 0x8c6201c8  lw          $v0, 0x1C8($v1)
    ctx->pc = 0x22f838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 456)));
label_22f83c:
    // 0x22f83c: 0x40f809  jalr        $v0
label_22f840:
    if (ctx->pc == 0x22F840u) {
        ctx->pc = 0x22F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F83Cu;
        // 0x22f840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F844u;
        goto label_22f844;
    }
    ctx->pc = 0x22F83Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22F844u);
        ctx->pc = 0x22F840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F83Cu;
        // 0x22f840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F83Cu, 0x22F844u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22F844u;
label_22f844:
    // 0x22f844: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22f844u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_22f848:
    // 0x22f848: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x22f848u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_22f84c:
    // 0x22f84c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x22f84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_22f850:
    // 0x22f850: 0x3e00008  jr          $ra
label_22f854:
    if (ctx->pc == 0x22F854u) {
        ctx->pc = 0x22F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F850u;
        // 0x22f854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22F858u;
        goto label_fallthrough_0x22f850;
    }
    ctx->pc = 0x22F850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22F854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22F850u;
        // 0x22f854: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22F850u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22f850:
    ctx->pc = 0x22F858u;
}
