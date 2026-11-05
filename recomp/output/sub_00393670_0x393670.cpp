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

// Function: sub_00393670
// Address: 0x393670 - 0x393908
void sub_00393670_0x393670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00393670_0x393670");
#endif

    switch (ctx->pc) {
        case 0x3936c8u: goto label_3936c8;
        default: break;
    }

    ctx->pc = 0x393670u;

    // 0x393670: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x393670u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x393674: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x393674u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x393678: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x393678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39367c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x39367cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x393680: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x393680u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x393684: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x393684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x393688: 0xc32824  and         $a1, $a2, $v1
    ctx->pc = 0x393688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x39368c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x39368cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x393690: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x393690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x393694: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x393694u;
    {
        const bool branch_taken_0x393694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x393698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393694u;
        // 0x393698: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393694) {
            ctx->pc = 0x393714u;
            goto label_393714;
        }
    }
    ctx->pc = 0x39369Cu;
    // 0x39369c: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x39369cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3936a0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3936a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3936a4: 0x0  nop
    ctx->pc = 0x3936a4u;
    // NOP
    // 0x3936a8: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3936A8u;
    {
        const bool branch_taken_0x3936a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3936ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936A8u;
        // 0x3936ac: 0x3c023f2c  lui         $v0, 0x3F2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936a8) {
            ctx->pc = 0x393718u;
            goto label_393718;
        }
    }
    ctx->pc = 0x3936B0u;
    // 0x3936b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3936b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3936b4: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x3936b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3936b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3936B8u;
    {
        const bool branch_taken_0x3936b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3936BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936B8u;
        // 0x3936bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936b8) {
            ctx->pc = 0x3936E8u;
            goto label_3936e8;
        }
    }
    ctx->pc = 0x3936C0u;
    // 0x3936c0: 0xc0e3f56  jal         func_38FD58
    ctx->pc = 0x3936C0u;
    SET_GPR_U32(ctx, 31, 0x3936C8u);
    ctx->pc = 0x38FD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FD58u, 0x3936C0u, 0x3936C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3936C8u;
label_3936c8:
    // 0x3936c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3936c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3936cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3936ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3936d0: 0x0  nop
    ctx->pc = 0x3936d0u;
    // NOP
    // 0x3936d4: 0x0  nop
    ctx->pc = 0x3936d4u;
    // NOP
    // 0x3936d8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x3936d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3936dc: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x3936DCu;
    {
        const bool branch_taken_0x3936dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3936E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936DCu;
        // 0x3936e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936dc) {
            ctx->pc = 0x3938FCu;
            goto label_3938fc;
        }
    }
    ctx->pc = 0x3936E4u;
    // 0x3936e4: 0x0  nop
    ctx->pc = 0x3936e4u;
    // NOP
label_3936e8:
    // 0x3936e8: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3936E8u;
    {
        const bool branch_taken_0x3936e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x3936ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3936E8u;
        // 0x3936ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3936e8) {
            ctx->pc = 0x39370Cu;
            goto label_39370c;
        }
    }
    ctx->pc = 0x3936F0u;
    // 0x3936f0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3936f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3936f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3936f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3936f8: 0x0  nop
    ctx->pc = 0x3936f8u;
    // NOP
    // 0x3936fc: 0x0  nop
    ctx->pc = 0x3936fcu;
    // NOP
    // 0x393700: 0x460c0003  div.s       $f0, $f0, $f12
    ctx->pc = 0x393700u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x393704: 0x1000007d  b           . + 4 + (0x7D << 2)
    ctx->pc = 0x393704u;
    {
        const bool branch_taken_0x393704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x393704) {
            ctx->pc = 0x3938FCu;
            goto label_3938fc;
        }
    }
    ctx->pc = 0x39370Cu;
label_39370c:
    // 0x39370c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x39370Cu;
    {
        const bool branch_taken_0x39370c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39370Cu;
        // 0x393710: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39370c) {
            ctx->pc = 0x3938F8u;
            goto label_3938f8;
        }
    }
    ctx->pc = 0x393714u;
label_393714:
    // 0x393714: 0x3c023f2c  lui         $v0, 0x3F2C
    ctx->pc = 0x393714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16172 << 16));
label_393718:
    // 0x393718: 0x3442a13f  ori         $v0, $v0, 0xA13F
    ctx->pc = 0x393718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41279);
    // 0x39371c: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x39371cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x393720: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x393720u;
    {
        const bool branch_taken_0x393720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x393720) {
            ctx->pc = 0x393724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x393720u;
            // 0x393724: 0x460c6382  mul.s       $f14, $f12, $f12 (Delay Slot)
            ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x393764u;
            goto label_393764;
        }
    }
    ctx->pc = 0x393728u;
    // 0x393728: 0x4c10003  bgez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x393728u;
    {
        const bool branch_taken_0x393728 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x393728) {
            ctx->pc = 0x393738u;
            goto label_393738;
        }
    }
    ctx->pc = 0x393730u;
    // 0x393730: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x393730u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x393734: 0x46006b47  neg.s       $f13, $f13
    ctx->pc = 0x393734u;
    ctx->f[13] = FPU_NEG_S(ctx->f[13]);
label_393738:
    // 0x393738: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x393738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
    // 0x39373c: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x39373cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
    // 0x393740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x393740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x393744: 0x3c013322  lui         $at, 0x3322
    ctx->pc = 0x393744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13090 << 16));
    // 0x393748: 0x34212168  ori         $at, $at, 0x2168
    ctx->pc = 0x393748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)8552);
    // 0x39374c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x39374cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x393750: 0x460c0381  sub.s       $f14, $f0, $f12
    ctx->pc = 0x393750u;
    ctx->f[14] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x393754: 0x460d0ac1  sub.s       $f11, $f1, $f13
    ctx->pc = 0x393754u;
    ctx->f[11] = FPU_SUB_S(ctx->f[1], ctx->f[13]);
    // 0x393758: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x393758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x39375c: 0x460b7300  add.s       $f12, $f14, $f11
    ctx->pc = 0x39375cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[14], ctx->f[11]);
    // 0x393760: 0x460c6382  mul.s       $f14, $f12, $f12
    ctx->pc = 0x393760u;
    ctx->f[14] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_393764:
    // 0x393764: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x393764u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x393768: 0x2462a428  addiu       $v0, $v1, -0x5BD8
    ctx->pc = 0x393768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294943784));
    // 0x39376c: 0xc469a428  lwc1        $f9, -0x5BD8($v1)
    ctx->pc = 0x39376cu;
    { uint32_t bits = FAST_READ32(0x47A428u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x393770: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x393770u;
    { uint32_t bits = FAST_READ32(0x47A458u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x393774: 0x3c033f2c  lui         $v1, 0x3F2C
    ctx->pc = 0x393774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16172 << 16));
    // 0x393778: 0x460e72c2  mul.s       $f11, $f14, $f14
    ctx->pc = 0x393778u;
    ctx->f[11] = FPU_MUL_S(ctx->f[14], ctx->f[14]);
    // 0x39377c: 0xc445002c  lwc1        $f5, 0x2C($v0)
    ctx->pc = 0x39377cu;
    { uint32_t bits = FAST_READ32(0x47A454u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x393780: 0xc4460028  lwc1        $f6, 0x28($v0)
    ctx->pc = 0x393780u;
    { uint32_t bits = FAST_READ32(0x47A450u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x393784: 0x460c73c2  mul.s       $f15, $f14, $f12
    ctx->pc = 0x393784u;
    ctx->f[15] = FPU_MUL_S(ctx->f[14], ctx->f[12]);
    // 0x393788: 0xc4420024  lwc1        $f2, 0x24($v0)
    ctx->pc = 0x393788u;
    { uint32_t bits = FAST_READ32(0x47A44Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x39378c: 0x3463a13f  ori         $v1, $v1, 0xA13F
    ctx->pc = 0x39378cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41279);
    // 0x393790: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x393790u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x393794: 0xc4430020  lwc1        $f3, 0x20($v0)
    ctx->pc = 0x393794u;
    { uint32_t bits = FAST_READ32(0x47A448u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x393798: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x393798u;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x39379c: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x39379cu;
    { uint32_t bits = FAST_READ32(0x47A444u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3937a0: 0xc4470018  lwc1        $f7, 0x18($v0)
    ctx->pc = 0x3937a0u;
    { uint32_t bits = FAST_READ32(0x47A440u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3937a4: 0x460f4a42  mul.s       $f9, $f9, $f15
    ctx->pc = 0x3937a4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[15]);
    // 0x3937a8: 0x46043180  add.s       $f6, $f6, $f4
    ctx->pc = 0x3937a8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[4]);
    // 0x3937ac: 0xc4410014  lwc1        $f1, 0x14($v0)
    ctx->pc = 0x3937acu;
    { uint32_t bits = FAST_READ32(0x47A43Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3937b0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x3937b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x3937b4: 0xc4440010  lwc1        $f4, 0x10($v0)
    ctx->pc = 0x3937b4u;
    { uint32_t bits = FAST_READ32(0x47A438u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3937b8: 0xc445000c  lwc1        $f5, 0xC($v0)
    ctx->pc = 0x3937b8u;
    { uint32_t bits = FAST_READ32(0x47A434u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3937bc: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x3937bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3937c0: 0x46065982  mul.s       $f6, $f11, $f6
    ctx->pc = 0x3937c0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[11], ctx->f[6]);
    // 0x3937c4: 0xc4480008  lwc1        $f8, 0x8($v0)
    ctx->pc = 0x3937c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x3937c8: 0x46025882  mul.s       $f2, $f11, $f2
    ctx->pc = 0x3937c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[11], ctx->f[2]);
    // 0x3937cc: 0xc44a0004  lwc1        $f10, 0x4($v0)
    ctx->pc = 0x3937ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x3937d0: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x3937d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x3937d4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3937d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3937d8: 0x460358c2  mul.s       $f3, $f11, $f3
    ctx->pc = 0x3937d8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[11], ctx->f[3]);
    // 0x3937dc: 0x46005802  mul.s       $f0, $f11, $f0
    ctx->pc = 0x3937dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x3937e0: 0x460339c0  add.s       $f7, $f7, $f3
    ctx->pc = 0x3937e0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
    // 0x3937e4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x3937e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3937e8: 0x460759c2  mul.s       $f7, $f11, $f7
    ctx->pc = 0x3937e8u;
    ctx->f[7] = FPU_MUL_S(ctx->f[11], ctx->f[7]);
    // 0x3937ec: 0x46015842  mul.s       $f1, $f11, $f1
    ctx->pc = 0x3937ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[1]);
    // 0x3937f0: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x3937f0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x3937f4: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x3937f4u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x3937f8: 0x46045902  mul.s       $f4, $f11, $f4
    ctx->pc = 0x3937f8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[4]);
    // 0x3937fc: 0x46055942  mul.s       $f5, $f11, $f5
    ctx->pc = 0x3937fcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
    // 0x393800: 0x46044200  add.s       $f8, $f8, $f4
    ctx->pc = 0x393800u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[4]);
    // 0x393804: 0x460550c0  add.s       $f3, $f10, $f5
    ctx->pc = 0x393804u;
    ctx->f[3] = FPU_ADD_S(ctx->f[10], ctx->f[5]);
    // 0x393808: 0x46087102  mul.s       $f4, $f14, $f8
    ctx->pc = 0x393808u;
    ctx->f[4] = FPU_MUL_S(ctx->f[14], ctx->f[8]);
    // 0x39380c: 0x46041800  add.s       $f0, $f3, $f4
    ctx->pc = 0x39380cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x393810: 0x46007802  mul.s       $f0, $f15, $f0
    ctx->pc = 0x393810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[15], ctx->f[0]);
    // 0x393814: 0x460d0000  add.s       $f0, $f0, $f13
    ctx->pc = 0x393814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[13]);
    // 0x393818: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x393818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x39381c: 0x460068c0  add.s       $f3, $f13, $f0
    ctx->pc = 0x39381cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x393820: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x393820u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x393824: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x393824u;
    {
        const bool branch_taken_0x393824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x393828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393824u;
        // 0x393828: 0x460362c0  add.s       $f11, $f12, $f3 (Delay Slot)
        ctx->f[11] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393824) {
            ctx->pc = 0x393878u;
            goto label_393878;
        }
    }
    ctx->pc = 0x39382Cu;
    // 0x39382c: 0x44842000  mtc1        $a0, $f4
    ctx->pc = 0x39382cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x393830: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x393830u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x393834: 0x61f83  sra         $v1, $a2, 30
    ctx->pc = 0x393834u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 30));
    // 0x393838: 0x460b5802  mul.s       $f0, $f11, $f11
    ctx->pc = 0x393838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[11], ctx->f[11]);
    // 0x39383c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x39383cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x393840: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x393844: 0x46045840  add.s       $f1, $f11, $f4
    ctx->pc = 0x393844u;
    ctx->f[1] = FPU_ADD_S(ctx->f[11], ctx->f[4]);
    // 0x393848: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x393848u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x39384c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x39384cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x393850: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x393850u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x393854: 0x0  nop
    ctx->pc = 0x393854u;
    // NOP
    // 0x393858: 0x0  nop
    ctx->pc = 0x393858u;
    // NOP
    // 0x39385c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x39385cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x393860: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x393860u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x393864: 0x46006001  sub.s       $f0, $f12, $f0
    ctx->pc = 0x393864u;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x393868: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x393868u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x39386c: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x39386cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x393870: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x393870u;
    {
        const bool branch_taken_0x393870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393870u;
        // 0x393874: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x393870) {
            ctx->pc = 0x3938F8u;
            goto label_3938f8;
        }
    }
    ctx->pc = 0x393878u;
label_393878:
    // 0x393878: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x393878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x39387c: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x39387Cu;
    {
        const bool branch_taken_0x39387c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x393880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39387Cu;
        // 0x393880: 0x46005806  mov.s       $f0, $f11 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[11]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x39387c) {
            ctx->pc = 0x3938F8u;
            goto label_3938f8;
        }
    }
    ctx->pc = 0x393884u;
    // 0x393884: 0x44025800  mfc1        $v0, $f11
    ctx->pc = 0x393884u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[11], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x393888: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x393888u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39388c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x39388cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x393890: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x393890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x393894: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x393894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x393898: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x393898u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x39389c: 0x460c7041  sub.s       $f1, $f14, $f12
    ctx->pc = 0x39389cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[12]);
    // 0x3938a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3938a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3938a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3938a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3938a8: 0x0  nop
    ctx->pc = 0x3938a8u;
    // NOP
    // 0x3938ac: 0x0  nop
    ctx->pc = 0x3938acu;
    // NOP
    // 0x3938b0: 0x460b0003  div.s       $f0, $f0, $f11
    ctx->pc = 0x3938b0u;
    { if (ctx->f[11] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[11]); }
    // 0x3938b4: 0x46011901  sub.s       $f4, $f3, $f1
    ctx->pc = 0x3938b4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3938b8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x3938b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x3938bc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x3938bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3938c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3938c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3938c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3938c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3938c8: 0x460e0042  mul.s       $f1, $f0, $f14
    ctx->pc = 0x3938c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[14]);
    // 0x3938cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3938ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3938d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3938d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3938d4: 0x46000bc0  add.s       $f15, $f1, $f0
    ctx->pc = 0x3938d4u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3938d8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3938d8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3938dc: 0x46040802  mul.s       $f0, $f1, $f4
    ctx->pc = 0x3938dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3938e0: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x3938e0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3938e4: 0x46007800  add.s       $f0, $f15, $f0
    ctx->pc = 0x3938e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[15], ctx->f[0]);
    // 0x3938e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3938e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3938ec: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x3938ecu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3938f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x3938f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x3938f4: 0x0  nop
    ctx->pc = 0x3938f4u;
    // NOP
label_3938f8:
    // 0x3938f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3938f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3938fc:
    // 0x3938fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3938FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3938FCu;
        // 0x393900: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3938FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393904u;
    // 0x393904: 0x0  nop
    ctx->pc = 0x393904u;
    // NOP
    ctx->pc = 0x393908u;
}
