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

// Function: sub_0036A4F8
// Address: 0x36a4f8 - 0x36a698
void sub_0036A4F8_0x36a4f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A4F8_0x36a4f8");
#endif

    switch (ctx->pc) {
        case 0x36a55cu: goto label_36a55c;
        case 0x36a5c0u: goto label_36a5c0;
        case 0x36a600u: goto label_36a600;
        case 0x36a634u: goto label_36a634;
        case 0x36a66cu: goto label_36a66c;
        default: break;
    }

    ctx->pc = 0x36a4f8u;

    // 0x36a4f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x36a4f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x36a4fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x36a4fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x36a500: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x36a500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x36a504: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x36a504u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a508: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x36a508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x36a50c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x36a50cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a510: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x36a510u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x36a514: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x36a514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a518: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x36a518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x36a51c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x36a51cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a520: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x36a520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x36a524: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x36a524u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a528: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x36a528u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x36a52c: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x36a52cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x36a530: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x36a530u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x36a534: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x36a534u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a538: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x36a538u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36a53c: 0xe7ae0008  swc1        $f14, 0x8($sp)
    ctx->pc = 0x36a53cu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a540: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x36A540u;
    {
        const bool branch_taken_0x36a540 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x36A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A540u;
        // 0x36a544: 0xe7af000c  swc1        $f15, 0xC($sp) (Delay Slot)
        { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x36a540) {
            ctx->pc = 0x36A55Cu;
            goto label_36a55c;
        }
    }
    ctx->pc = 0x36A548u;
    // 0x36a548: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x36a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a54c: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x36a54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x36a550: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x36a550u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x36a554: 0xc0a1816  jal         func_286058
    ctx->pc = 0x36A554u;
    SET_GPR_U32(ctx, 31, 0x36A55Cu);
    ctx->pc = 0x36A558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A554u;
    // 0x36a558: 0x37a7000c  ori         $a3, $sp, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x286058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x286058u, 0x36A554u, 0x36A55Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A55Cu;
label_36a55c:
    // 0x36a55c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x36a55cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x36a560: 0x4490a800  mtc1        $s0, $f21
    ctx->pc = 0x36a560u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x36a564: 0x0  nop
    ctx->pc = 0x36a564u;
    // NOP
    // 0x36a568: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x36a568u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
    // 0x36a56c: 0x2442ac50  addiu       $v0, $v0, -0x53B0
    ctx->pc = 0x36a56cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945872));
    // 0x36a570: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a574: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x36a574u;
    { uint32_t bits = FAST_READ32(0x6BAC5Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a57c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x36a57cu;
    { uint32_t bits = FAST_READ32(0x6BAC60u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a580: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a584: 0x0  nop
    ctx->pc = 0x36a584u;
    // NOP
    // 0x36a588: 0x0  nop
    ctx->pc = 0x36a588u;
    // NOP
    // 0x36a58c: 0x4614ad03  div.s       $f20, $f21, $f20
    ctx->pc = 0x36a58cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
    // 0x36a590: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a594: 0xc7af000c  lwc1        $f15, 0xC($sp)
    ctx->pc = 0x36a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36a598: 0x0  nop
    ctx->pc = 0x36a598u;
    // NOP
    // 0x36a59c: 0x0  nop
    ctx->pc = 0x36a59cu;
    // NOP
    // 0x36a5a0: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x36a5a0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x36a5a4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36a5a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36a5a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5ac: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36a5acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5b0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36a5b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5b4: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36a5b4u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36a5b8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x36A5B8u;
    SET_GPR_U32(ctx, 31, 0x36A5C0u);
    ctx->pc = 0x36A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5B8u;
    // 0x36a5bc: 0x4614a580  add.s       $f22, $f20, $f20 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x36A5B8u, 0x36A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A5C0u;
label_36a5c0:
    // 0x36a5c0: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x36a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a5c4: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x36a5c4u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x36a5c8: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a5cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5d0: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a5d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a5d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5d8: 0x46006b40  add.s       $f13, $f13, $f0
    ctx->pc = 0x36a5d8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[0]);
    // 0x36a5dc: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x36a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36a5e0: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x36a5e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x36a5e4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36a5e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5e8: 0x46167381  sub.s       $f14, $f14, $f22
    ctx->pc = 0x36a5e8u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[22]);
    // 0x36a5ec: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36a5ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5f0: 0x46156b41  sub.s       $f13, $f13, $f21
    ctx->pc = 0x36a5f0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[21]);
    // 0x36a5f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36a5f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a5f8: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x36A5F8u;
    SET_GPR_U32(ctx, 31, 0x36A600u);
    ctx->pc = 0x36A5FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A5F8u;
    // 0x36a5fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x36A5F8u, 0x36A600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A600u;
label_36a600:
    // 0x36a600: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a604: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x36a604u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x36a608: 0xc7ae0008  lwc1        $f14, 0x8($sp)
    ctx->pc = 0x36a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x36a60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a610: 0x46146300  add.s       $f12, $f12, $f20
    ctx->pc = 0x36a610u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[20]);
    // 0x36a614: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a618: 0x46167381  sub.s       $f14, $f14, $f22
    ctx->pc = 0x36a618u;
    ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[22]);
    // 0x36a61c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a61cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a620: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36a620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a624: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36a624u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a628: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36a628u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a62c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x36A62Cu;
    SET_GPR_U32(ctx, 31, 0x36A634u);
    ctx->pc = 0x36A630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A62Cu;
    // 0x36a630: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x36A62Cu, 0x36A634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A634u;
label_36a634:
    // 0x36a634: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x36a634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x36a638: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x36a638u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x36a63c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x36a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36a640: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x36a640u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a644: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x36a644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x36a648: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x36a648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a64c: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x36a64cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x36a650: 0xc7af000c  lwc1        $f15, 0xC($sp)
    ctx->pc = 0x36a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x36a654: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x36a654u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a658: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x36a658u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a65c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x36a65cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a660: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x36a660u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a664: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x36A664u;
    SET_GPR_U32(ctx, 31, 0x36A66Cu);
    ctx->pc = 0x36A668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A664u;
    // 0x36a668: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x36A664u, 0x36A66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A66Cu;
label_36a66c:
    // 0x36a66c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x36a66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x36a670: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x36a670u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x36a674: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x36a674u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36a678: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x36a678u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36a67c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x36a67cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36a680: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x36a680u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36a684: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x36a684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36a688: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x36a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36a68c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x36a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a690: 0x3e00008  jr          $ra
    ctx->pc = 0x36A690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A690u;
        // 0x36a694: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A698u;
}
