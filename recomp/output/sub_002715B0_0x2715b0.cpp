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

// Function: sub_002715B0
// Address: 0x2715b0 - 0x2719e8
void sub_002715B0_0x2715b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002715B0_0x2715b0");
#endif

    switch (ctx->pc) {
        case 0x271658u: goto label_271658;
        case 0x27170cu: goto label_27170c;
        case 0x271760u: goto label_271760;
        case 0x2717c8u: goto label_2717c8;
        case 0x27187cu: goto label_27187c;
        case 0x2718b4u: goto label_2718b4;
        case 0x2718f0u: goto label_2718f0;
        case 0x2719b8u: goto label_2719b8;
        default: break;
    }

    ctx->pc = 0x2715b0u;

    // 0x2715b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2715b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2715b4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2715b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2715b8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2715b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2715bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2715bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2715c0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2715c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2715c4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2715c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2715c8: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2715c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2715cc: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2715ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x2715d0: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2715d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2715d4: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2715d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2715d8: 0x8e2300c0  lw          $v1, 0xC0($s1)
    ctx->pc = 0x2715d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x2715dc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x2715dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x2715e0: 0x144000f8  bnez        $v0, . + 4 + (0xF8 << 2)
    ctx->pc = 0x2715E0u;
    {
        const bool branch_taken_0x2715e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715E0u;
        // 0x2715e4: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715e0) {
            ctx->pc = 0x2719C4u;
            goto label_2719c4;
        }
    }
    ctx->pc = 0x2715E8u;
    // 0x2715e8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2715e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2715ec: 0x544000f6  bnel        $v0, $zero, . + 4 + (0xF6 << 2)
    ctx->pc = 0x2715ECu;
    {
        const bool branch_taken_0x2715ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2715ec) {
            ctx->pc = 0x2715F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2715ECu;
            // 0x2715f0: 0xdfb10038  ld          $s1, 0x38($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2719C8u;
            goto label_2719c8;
        }
    }
    ctx->pc = 0x2715F4u;
    // 0x2715f4: 0x92220270  lbu         $v0, 0x270($s1)
    ctx->pc = 0x2715f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 624)));
    // 0x2715f8: 0x144000f2  bnez        $v0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x2715F8u;
    {
        const bool branch_taken_0x2715f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2715FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2715F8u;
        // 0x2715fc: 0xa22002a0  sb          $zero, 0x2A0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 672), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2715f8) {
            ctx->pc = 0x2719C4u;
            goto label_2719c4;
        }
    }
    ctx->pc = 0x271600u;
    // 0x271600: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x271600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x271604: 0x421018  mult        $v0, $v0, $v0
    ctx->pc = 0x271604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x271608: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271608u;
    {
        const bool branch_taken_0x271608 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27160Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271608u;
        // 0x27160c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271608) {
            ctx->pc = 0x271624u;
            goto label_271624;
        }
    }
    ctx->pc = 0x271610u;
    // 0x271610: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x271610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271614: 0x0  nop
    ctx->pc = 0x271614u;
    // NOP
    // 0x271618: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x271618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x27161c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27161Cu;
    {
        const bool branch_taken_0x27161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27161Cu;
        // 0x271620: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27161c) {
            ctx->pc = 0x271640u;
            goto label_271640;
        }
    }
    ctx->pc = 0x271624u;
label_271624:
    // 0x271624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x271628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27162c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x27162cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x271630: 0x0  nop
    ctx->pc = 0x271630u;
    // NOP
    // 0x271634: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x271634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
    // 0x271638: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x271638u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x27163c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x27163cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_271640:
    // 0x271640: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x271640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x271644: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x271644u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271648: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x271648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27164c: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x27164cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
    // 0x271650: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x271650u;
    SET_GPR_U32(ctx, 31, 0x271658u);
    ctx->pc = 0x271654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271650u;
    // 0x271654: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x271650u, 0x271658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271658u;
label_271658:
    // 0x271658: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x271658u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x27165c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x27165cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271660: 0x0  nop
    ctx->pc = 0x271660u;
    // NOP
    // 0x271664: 0x450000d6  bc1f        . + 4 + (0xD6 << 2)
    ctx->pc = 0x271664u;
    {
        const bool branch_taken_0x271664 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271664u;
        // 0x271668: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271664) {
            ctx->pc = 0x2719C0u;
            goto label_2719c0;
        }
    }
    ctx->pc = 0x27166Cu;
    // 0x27166c: 0x8c522b00  lw          $s2, 0x2B00($v0)
    ctx->pc = 0x27166cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x271670: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x271670u;
    {
        const bool branch_taken_0x271670 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x271674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271670u;
        // 0x271674: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271670) {
            ctx->pc = 0x27168Cu;
            goto label_27168c;
        }
    }
    ctx->pc = 0x271678u;
    // 0x271678: 0x44921800  mtc1        $s2, $f3
    ctx->pc = 0x271678u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x27167c: 0x0  nop
    ctx->pc = 0x27167cu;
    // NOP
    // 0x271680: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x271680u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x271684: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271684u;
    {
        const bool branch_taken_0x271684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271684u;
        // 0x271688: 0x8e220298  lw          $v0, 0x298($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271684) {
            ctx->pc = 0x2716A8u;
            goto label_2716a8;
        }
    }
    ctx->pc = 0x27168Cu;
label_27168c:
    // 0x27168c: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x27168cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x271690: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271694: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x271694u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x271698: 0x0  nop
    ctx->pc = 0x271698u;
    // NOP
    // 0x27169c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x27169cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2716a0: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2716a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
    // 0x2716a4: 0x8e220298  lw          $v0, 0x298($s1)
    ctx->pc = 0x2716a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 664)));
label_2716a8:
    // 0x2716a8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2716A8u;
    {
        const bool branch_taken_0x2716a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2716ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716A8u;
        // 0x2716ac: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716a8) {
            ctx->pc = 0x2716C4u;
            goto label_2716c4;
        }
    }
    ctx->pc = 0x2716B0u;
    // 0x2716b0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2716b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2716b4: 0x0  nop
    ctx->pc = 0x2716b4u;
    // NOP
    // 0x2716b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2716b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2716bc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2716BCu;
    {
        const bool branch_taken_0x2716bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2716C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716BCu;
        // 0x2716c0: 0xc6200294  lwc1        $f0, 0x294($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716bc) {
            ctx->pc = 0x2716E0u;
            goto label_2716e0;
        }
    }
    ctx->pc = 0x2716C4u;
label_2716c4:
    // 0x2716c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2716c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2716c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2716c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2716cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2716ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2716d0: 0x0  nop
    ctx->pc = 0x2716d0u;
    // NOP
    // 0x2716d4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2716d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2716d8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2716d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x2716dc: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x2716dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2716e0:
    // 0x2716e0: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x2716e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x2716e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2716e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2716e8: 0x0  nop
    ctx->pc = 0x2716e8u;
    // NOP
    // 0x2716ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2716ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2716f0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2716f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2716f4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2716f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2716f8: 0x0  nop
    ctx->pc = 0x2716f8u;
    // NOP
    // 0x2716fc: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
    ctx->pc = 0x2716FCu;
    {
        const bool branch_taken_0x2716fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2716FCu;
        // 0x271700: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2716fc) {
            ctx->pc = 0x2719C4u;
            goto label_2719c4;
        }
    }
    ctx->pc = 0x271704u;
    // 0x271704: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x271704u;
    SET_GPR_U32(ctx, 31, 0x27170Cu);
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x271704u, 0x27170Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27170Cu;
label_27170c:
    // 0x27170c: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x27170cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x271710: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x271710u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x271714: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x271714u;
    {
        const bool branch_taken_0x271714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x271714) {
            ctx->pc = 0x271718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271714u;
            // 0x271718: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27171Cu;
            goto label_27171c;
        }
    }
    ctx->pc = 0x27171Cu;
label_27171c:
    // 0x27171c: 0x8e220290  lw          $v0, 0x290($s1)
    ctx->pc = 0x27171cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
    // 0x271720: 0x2010  mfhi        $a0
    ctx->pc = 0x271720u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x271724: 0x82202b  sltu        $a0, $a0, $v0
    ctx->pc = 0x271724u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x271728: 0x108000a4  beqz        $a0, . + 4 + (0xA4 << 2)
    ctx->pc = 0x271728u;
    {
        const bool branch_taken_0x271728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27172Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271728u;
        // 0x27172c: 0x26900480  addiu       $s0, $s4, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271728) {
            ctx->pc = 0x2719BCu;
            goto label_2719bc;
        }
    }
    ctx->pc = 0x271730u;
    // 0x271730: 0x92220274  lbu         $v0, 0x274($s1)
    ctx->pc = 0x271730u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 628)));
    // 0x271734: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x271734u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x271738: 0x0  nop
    ctx->pc = 0x271738u;
    // NOP
    // 0x27173c: 0x0  nop
    ctx->pc = 0x27173cu;
    // NOP
    // 0x271740: 0x46150504  c1          0x150504
    ctx->pc = 0x271740u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x271744: 0xa20200fc  sb          $v0, 0xFC($s0)
    ctx->pc = 0x271744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 252), (uint8_t)GPR_U32(ctx, 2));
    // 0x271748: 0x24849c38  addiu       $a0, $a0, -0x63C8
    ctx->pc = 0x271748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    // 0x27174c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x27174cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271750: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x271750u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271754: 0x8e260278  lw          $a2, 0x278($s1)
    ctx->pc = 0x271754u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x271758: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x271758u;
    SET_GPR_U32(ctx, 31, 0x271760u);
    ctx->pc = 0x27175Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271758u;
    // 0x27175c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x271758u, 0x271760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271760u;
label_271760:
    // 0x271760: 0x50400097  beql        $v0, $zero, . + 4 + (0x97 << 2)
    ctx->pc = 0x271760u;
    {
        const bool branch_taken_0x271760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x271760) {
            ctx->pc = 0x271764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271760u;
            // 0x271764: 0xae320298  sw          $s2, 0x298($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2719C0u;
            goto label_2719c0;
        }
    }
    ctx->pc = 0x271768u;
    // 0x271768: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x271768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x27176c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271770: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x271770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x271774: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x271774u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271778: 0xfa010130  sqc2        $vf1, 0x130($s0)
    ctx->pc = 0x271778u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 304), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x27177c: 0xe6140110  swc1        $f20, 0x110($s0)
    ctx->pc = 0x27177cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x271780: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x271780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x271784: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x271784u;
    {
        const bool branch_taken_0x271784 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271784u;
        // 0x271788: 0x92250288  lbu         $a1, 0x288($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271784) {
            ctx->pc = 0x2717A0u;
            goto label_2717a0;
        }
    }
    ctx->pc = 0x27178Cu;
    // 0x27178c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x27178cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x271790: 0x0  nop
    ctx->pc = 0x271790u;
    // NOP
    // 0x271794: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x271794u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x271798: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x271798u;
    {
        const bool branch_taken_0x271798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271798u;
        // 0x27179c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271798) {
            ctx->pc = 0x2717C0u;
            goto label_2717c0;
        }
    }
    ctx->pc = 0x2717A0u;
label_2717a0:
    // 0x2717a0: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2717a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2717a4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2717a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2717a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2717a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2717ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2717acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2717b0: 0x0  nop
    ctx->pc = 0x2717b0u;
    // NOP
    // 0x2717b4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x2717b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x2717b8: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x2717b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x2717bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2717bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2717c0:
    // 0x2717c0: 0xc07dc70  jal         func_1F71C0
    ctx->pc = 0x2717C0u;
    SET_GPR_U32(ctx, 31, 0x2717C8u);
    ctx->pc = 0x2717C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2717C0u;
    // 0x2717c4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F71C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F71C0u, 0x2717C0u, 0x2717C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2717C8u;
label_2717c8:
    // 0x2717c8: 0xc6210294  lwc1        $f1, 0x294($s1)
    ctx->pc = 0x2717c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2717cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2717ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2717d0: 0x0  nop
    ctx->pc = 0x2717d0u;
    // NOP
    // 0x2717d4: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x2717d4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2717d8: 0x0  nop
    ctx->pc = 0x2717d8u;
    // NOP
    // 0x2717dc: 0x45000024  bc1f        . + 4 + (0x24 << 2)
    ctx->pc = 0x2717DCu;
    {
        const bool branch_taken_0x2717dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2717E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717DCu;
        // 0x2717e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717dc) {
            ctx->pc = 0x271870u;
            goto label_271870;
        }
    }
    ctx->pc = 0x2717E4u;
    // 0x2717e4: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x2717E4u;
    {
        const bool branch_taken_0x2717e4 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2717E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717E4u;
        // 0x2717e8: 0x32420001  andi        $v0, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717e4) {
            ctx->pc = 0x271800u;
            goto label_271800;
        }
    }
    ctx->pc = 0x2717ECu;
    // 0x2717ec: 0x44921000  mtc1        $s2, $f2
    ctx->pc = 0x2717ecu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2717f0: 0x0  nop
    ctx->pc = 0x2717f0u;
    // NOP
    // 0x2717f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2717f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2717f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2717F8u;
    {
        const bool branch_taken_0x2717f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2717FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2717F8u;
        // 0x2717fc: 0x8e22029c  lw          $v0, 0x29C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2717f8) {
            ctx->pc = 0x27181Cu;
            goto label_27181c;
        }
    }
    ctx->pc = 0x271800u;
label_271800:
    // 0x271800: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x271800u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x271804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x271804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271808: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x271808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x27180c: 0x0  nop
    ctx->pc = 0x27180cu;
    // NOP
    // 0x271810: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x271810u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x271814: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x271814u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x271818: 0x8e22029c  lw          $v0, 0x29C($s1)
    ctx->pc = 0x271818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 668)));
label_27181c:
    // 0x27181c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27181Cu;
    {
        const bool branch_taken_0x27181c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27181Cu;
        // 0x271820: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27181c) {
            ctx->pc = 0x271838u;
            goto label_271838;
        }
    }
    ctx->pc = 0x271824u;
    // 0x271824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271828: 0x0  nop
    ctx->pc = 0x271828u;
    // NOP
    // 0x27182c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x27182cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x271830: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x271830u;
    {
        const bool branch_taken_0x271830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271830) {
            ctx->pc = 0x271850u;
            goto label_271850;
        }
    }
    ctx->pc = 0x271838u;
label_271838:
    // 0x271838: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27183c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27183cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271840: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x271840u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x271844: 0x0  nop
    ctx->pc = 0x271844u;
    // NOP
    // 0x271848: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x271848u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x27184c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x27184cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_271850:
    // 0x271850: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x271850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x271854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x271854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271858: 0x0  nop
    ctx->pc = 0x271858u;
    // NOP
    // 0x27185c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27185cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x271860: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x271860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271864: 0x0  nop
    ctx->pc = 0x271864u;
    // NOP
    // 0x271868: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x271868u;
    {
        const bool branch_taken_0x271868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271868u;
        // 0x27186c: 0x26900480  addiu       $s0, $s4, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271868) {
            ctx->pc = 0x2718A4u;
            goto label_2718a4;
        }
    }
    ctx->pc = 0x271870u;
label_271870:
    // 0x271870: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x271870u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x271874: 0xc077f36  jal         func_1DFCD8
    ctx->pc = 0x271874u;
    SET_GPR_U32(ctx, 31, 0x27187Cu);
    ctx->pc = 0x271878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271874u;
    // 0x271878: 0x248405b0  addiu       $a0, $a0, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DFCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFCD8u, 0x271874u, 0x27187Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27187Cu;
label_27187c:
    // 0x27187c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27187cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x271880: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x271880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x271884: 0xc62302ac  lwc1        $f3, 0x2AC($s1)
    ctx->pc = 0x271884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x271888: 0x46001041  sub.s       $f1, $f2, $f0
    ctx->pc = 0x271888u;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x27188c: 0xae32029c  sw          $s2, 0x29C($s1)
    ctx->pc = 0x27188cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 668), GPR_U32(ctx, 18));
    // 0x271890: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x271890u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x271894: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x271894u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x271898: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x271898u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x27189c: 0xe62002a8  swc1        $f0, 0x2A8($s1)
    ctx->pc = 0x27189cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 680), bits); }
    // 0x2718a0: 0x26900480  addiu       $s0, $s4, 0x480
    ctx->pc = 0x2718a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
label_2718a4:
    // 0x2718a4: 0xc62c02a8  lwc1        $f12, 0x2A8($s1)
    ctx->pc = 0x2718a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2718a8: 0x262502a4  addiu       $a1, $s1, 0x2A4
    ctx->pc = 0x2718a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 676));
    // 0x2718ac: 0xc07e6e4  jal         func_1F9B90
    ctx->pc = 0x2718ACu;
    SET_GPR_U32(ctx, 31, 0x2718B4u);
    ctx->pc = 0x2718B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718ACu;
    // 0x2718b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B90u, 0x2718ACu, 0x2718B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718B4u;
label_2718b4:
    // 0x2718b4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x2718b4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2718b8: 0x0  nop
    ctx->pc = 0x2718b8u;
    // NOP
    // 0x2718bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2718bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2718c0: 0xc62102a4  lwc1        $f1, 0x2A4($s1)
    ctx->pc = 0x2718c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2718c4: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x2718c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x2718c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2718c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718cc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2718ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2718d0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2718d0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2718d4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2718d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2718d8: 0xa222028c  sb          $v0, 0x28C($s1)
    ctx->pc = 0x2718d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 652), (uint8_t)GPR_U32(ctx, 2));
    // 0x2718dc: 0xe601016c  swc1        $f1, 0x16C($s0)
    ctx->pc = 0x2718dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x2718e0: 0xa2030170  sb          $v1, 0x170($s0)
    ctx->pc = 0x2718e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 3));
    // 0x2718e4: 0x9222028c  lbu         $v0, 0x28C($s1)
    ctx->pc = 0x2718e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 652)));
    // 0x2718e8: 0xc07e6e0  jal         func_1F9B80
    ctx->pc = 0x2718E8u;
    SET_GPR_U32(ctx, 31, 0x2718F0u);
    ctx->pc = 0x2718ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2718E8u;
    // 0x2718ec: 0xa202010c  sb          $v0, 0x10C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 268), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9B80u, 0x2718E8u, 0x2718F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718F0u;
label_2718f0:
    // 0x2718f0: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x2718f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x2718f4: 0x962202b0  lhu         $v0, 0x2B0($s1)
    ctx->pc = 0x2718f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 688)));
    // 0x2718f8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2718f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2718fc: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x2718fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x271900: 0xae000108  sw          $zero, 0x108($s0)
    ctx->pc = 0x271900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 0));
    // 0x271904: 0xae0300f8  sw          $v1, 0xF8($s0)
    ctx->pc = 0x271904u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 3));
    // 0x271908: 0xa60200f4  sh          $v0, 0xF4($s0)
    ctx->pc = 0x271908u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 244), (uint16_t)GPR_U32(ctx, 2));
    // 0x27190c: 0xae000100  sw          $zero, 0x100($s0)
    ctx->pc = 0x27190cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 256), GPR_U32(ctx, 0));
    // 0x271910: 0xae000104  sw          $zero, 0x104($s0)
    ctx->pc = 0x271910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 260), GPR_U32(ctx, 0));
    // 0x271914: 0xc6010108  lwc1        $f1, 0x108($s0)
    ctx->pc = 0x271914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x271918: 0xc6200294  lwc1        $f0, 0x294($s1)
    ctx->pc = 0x271918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x27191c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27191cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x271920: 0x0  nop
    ctx->pc = 0x271920u;
    // NOP
    // 0x271924: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x271924u;
    {
        const bool branch_taken_0x271924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x271928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271924u;
        // 0x271928: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271924) {
            ctx->pc = 0x271938u;
            goto label_271938;
        }
    }
    ctx->pc = 0x27192Cu;
    // 0x27192c: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x27192cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x271930: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x271930u;
    {
        const bool branch_taken_0x271930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271930u;
        // 0x271934: 0xae020158  sw          $v0, 0x158($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271930) {
            ctx->pc = 0x271948u;
            goto label_271948;
        }
    }
    ctx->pc = 0x271938u;
label_271938:
    // 0x271938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x271938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27193c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x27193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x271940: 0xae020158  sw          $v0, 0x158($s0)
    ctx->pc = 0x271940u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 2));
    // 0x271944: 0xae030114  sw          $v1, 0x114($s0)
    ctx->pc = 0x271944u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 3));
label_271948:
    // 0x271948: 0x92220288  lbu         $v0, 0x288($s1)
    ctx->pc = 0x271948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 648)));
    // 0x27194c: 0x26840480  addiu       $a0, $s4, 0x480
    ctx->pc = 0x27194cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
    // 0x271950: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x271950u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
    // 0x271954: 0xa082011c  sb          $v0, 0x11C($a0)
    ctx->pc = 0x271954u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 284), (uint8_t)GPR_U32(ctx, 2));
    // 0x271958: 0x8e220284  lw          $v0, 0x284($s1)
    ctx->pc = 0x271958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 644)));
    // 0x27195c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27195Cu;
    {
        const bool branch_taken_0x27195c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x271960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27195Cu;
        // 0x271960: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27195c) {
            ctx->pc = 0x271978u;
            goto label_271978;
        }
    }
    ctx->pc = 0x271964u;
    // 0x271964: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271964u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271968: 0x0  nop
    ctx->pc = 0x271968u;
    // NOP
    // 0x27196c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27196cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x271970: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x271970u;
    {
        const bool branch_taken_0x271970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271970u;
        // 0x271974: 0x26820480  addiu       $v0, $s4, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271970) {
            ctx->pc = 0x271994u;
            goto label_271994;
        }
    }
    ctx->pc = 0x271978u;
label_271978:
    // 0x271978: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x271978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27197c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27197cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x271980: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x271980u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x271984: 0x0  nop
    ctx->pc = 0x271984u;
    // NOP
    // 0x271988: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x271988u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x27198c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x27198cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x271990: 0x26820480  addiu       $v0, $s4, 0x480
    ctx->pc = 0x271990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1152));
label_271994:
    // 0x271994: 0xe4800120  swc1        $f0, 0x120($a0)
    ctx->pc = 0x271994u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 288), bits); }
    // 0x271998: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27199c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27199cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719a0: 0xac400124  sw          $zero, 0x124($v0)
    ctx->pc = 0x2719a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 0));
    // 0x2719a4: 0xac500140  sw          $s0, 0x140($v0)
    ctx->pc = 0x2719a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 16));
    // 0x2719a8: 0xac400144  sw          $zero, 0x144($v0)
    ctx->pc = 0x2719a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 0));
    // 0x2719ac: 0xa0400148  sb          $zero, 0x148($v0)
    ctx->pc = 0x2719acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 328), (uint8_t)GPR_U32(ctx, 0));
    // 0x2719b0: 0xc07de16  jal         func_1F7858
    ctx->pc = 0x2719B0u;
    SET_GPR_U32(ctx, 31, 0x2719B8u);
    ctx->pc = 0x2719B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2719B0u;
    // 0x2719b4: 0xac40014c  sw          $zero, 0x14C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7858u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7858u, 0x2719B0u, 0x2719B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719B8u;
label_2719b8:
    // 0x2719b8: 0xa23002a0  sb          $s0, 0x2A0($s1)
    ctx->pc = 0x2719b8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 672), (uint8_t)GPR_U32(ctx, 16));
label_2719bc:
    // 0x2719bc: 0xae320298  sw          $s2, 0x298($s1)
    ctx->pc = 0x2719bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 664), GPR_U32(ctx, 18));
label_2719c0:
    // 0x2719c0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2719c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2719c4:
    // 0x2719c4: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2719c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2719c8:
    // 0x2719c8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2719c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2719cc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2719ccu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2719d0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2719d4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2719d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2719d8: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2719d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2719dc: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2719dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2719e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2719E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2719E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2719E0u;
        // 0x2719e4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2719E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2719E8u;
}
