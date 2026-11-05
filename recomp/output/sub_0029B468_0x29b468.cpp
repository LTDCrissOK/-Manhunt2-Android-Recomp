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

// Function: sub_0029B468
// Address: 0x29b468 - 0x29b578
void sub_0029B468_0x29b468(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B468_0x29b468");
#endif

    switch (ctx->pc) {
        case 0x29b4d0u: goto label_29b4d0;
        case 0x29b524u: goto label_29b524;
        case 0x29b550u: goto label_29b550;
        default: break;
    }

    ctx->pc = 0x29b468u;

    // 0x29b468: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x29b468u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29b46c: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x29b46cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x29b470: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29b470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29b474: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x29b474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b478: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29b478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29b47c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29b47cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b480: 0xe7b80030  swc1        $f24, 0x30($sp)
    ctx->pc = 0x29b480u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x29b484: 0xc2180a  movz        $v1, $a2, $v0
    ctx->pc = 0x29b484u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x29b488: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x29b488u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x29b48c: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x29b48cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x29b490: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x29b490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x29b494: 0x18a0000b  blez        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x29B494u;
    {
        const bool branch_taken_0x29b494 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x29B498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B494u;
        // 0x29b498: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b494) {
            ctx->pc = 0x29B4C4u;
            goto label_29b4c4;
        }
    }
    ctx->pc = 0x29B49Cu;
    // 0x29b49c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x29b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x29b4a0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29b4a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29b4a4: 0x0  nop
    ctx->pc = 0x29b4a4u;
    // NOP
    // 0x29b4a8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29b4a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x29b4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29b4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29b4b0: 0x0  nop
    ctx->pc = 0x29b4b0u;
    // NOP
    // 0x29b4b4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29b4b4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29b4b8: 0x46000e03  div.s       $f24, $f1, $f0
    ctx->pc = 0x29b4b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[24] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x29b4bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29B4BCu;
    {
        const bool branch_taken_0x29b4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b4bc) {
            ctx->pc = 0x29B4C8u;
            goto label_29b4c8;
        }
    }
    ctx->pc = 0x29B4C4u;
label_29b4c4:
    // 0x29b4c4: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x29b4c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_29b4c8:
    // 0x29b4c8: 0xc0db190  jal         func_36C640
    ctx->pc = 0x29B4C8u;
    SET_GPR_U32(ctx, 31, 0x29B4D0u);
    ctx->pc = 0x36C640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36C640u, 0x29B4C8u, 0x29B4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B4D0u;
label_29b4d0:
    // 0x29b4d0: 0x3c013f23  lui         $at, 0x3F23
    ctx->pc = 0x29b4d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16163 << 16));
    // 0x29b4d4: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x29b4d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x29b4d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x29b4d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x29b4dc: 0x3c013f51  lui         $at, 0x3F51
    ctx->pc = 0x29b4dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16209 << 16));
    // 0x29b4e0: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x29b4e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x29b4e4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x29b4e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x29b4e8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29b4e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b4ec: 0x3c013e86  lui         $at, 0x3E86
    ctx->pc = 0x29b4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16006 << 16));
    // 0x29b4f0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x29b4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x29b4f4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29b4f4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29b4f8: 0x3c013c90  lui         $at, 0x3C90
    ctx->pc = 0x29b4f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15504 << 16));
    // 0x29b4fc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x29b4fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x29b500: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29b500u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29b504: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x29b504u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29b508: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x29b508u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x29b50c: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x29b50cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x29b510: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x29b510u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x29b514: 0x92060002  lbu         $a2, 0x2($s0)
    ctx->pc = 0x29b514u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x29b518: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x29b518u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b51c: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x29B51Cu;
    SET_GPR_U32(ctx, 31, 0x29B524u);
    ctx->pc = 0x29B520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B51Cu;
    // 0x29b520: 0x92070003  lbu         $a3, 0x3($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29B51Cu, 0x29B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B524u;
label_29b524:
    // 0x29b524: 0x4614c382  mul.s       $f14, $f24, $f20
    ctx->pc = 0x29b524u;
    ctx->f[14] = FPU_MUL_S(ctx->f[24], ctx->f[20]);
    // 0x29b528: 0x92070007  lbu         $a3, 0x7($s0)
    ctx->pc = 0x29b528u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x29b52c: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x29b52cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x29b530: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x29b530u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29b534: 0x92050005  lbu         $a1, 0x5($s0)
    ctx->pc = 0x29b534u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x29b538: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x29b538u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x29b53c: 0x92060006  lbu         $a2, 0x6($s0)
    ctx->pc = 0x29b53cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x29b540: 0x4600abc6  mov.s       $f15, $f21
    ctx->pc = 0x29b540u;
    ctx->f[15] = FPU_MOV_S(ctx->f[21]);
    // 0x29b544: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29b544u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b548: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x29B548u;
    SET_GPR_U32(ctx, 31, 0x29B550u);
    ctx->pc = 0x29B54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B548u;
    // 0x29b54c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x29B548u, 0x29B550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29B550u;
label_29b550:
    // 0x29b550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29b550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b554: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29b554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29b558: 0xc7b80030  lwc1        $f24, 0x30($sp)
    ctx->pc = 0x29b558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x29b55c: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x29b55cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x29b560: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x29b560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x29b564: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x29b564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x29b568: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x29b568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x29b56c: 0x3e00008  jr          $ra
    ctx->pc = 0x29B56Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B56Cu;
        // 0x29b570: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B56Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B574u;
    // 0x29b574: 0x0  nop
    ctx->pc = 0x29b574u;
    // NOP
    ctx->pc = 0x29b578u;
}
