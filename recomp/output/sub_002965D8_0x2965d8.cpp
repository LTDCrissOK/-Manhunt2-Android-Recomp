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

// Function: sub_002965D8
// Address: 0x2965d8 - 0x2966e0
void sub_002965D8_0x2965d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002965D8_0x2965d8");
#endif

    switch (ctx->pc) {
        case 0x29664cu: goto label_29664c;
        case 0x29666cu: goto label_29666c;
        case 0x2966a8u: goto label_2966a8;
        default: break;
    }

    ctx->pc = 0x2965d8u;

    // 0x2965d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2965d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2965dc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2965dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2965e0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2965e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2965e4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2965e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2965e8: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2965e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2965ec: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x2965ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x2965f0: 0xc600a8b0  lwc1        $f0, -0x5750($s0)
    ctx->pc = 0x2965f0u;
    { uint32_t bits = FAST_READ32(0x3FA8B0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2965f4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2965f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2965f8: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x2965f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2965fc: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x2965fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296600: 0xc641a8b4  lwc1        $f1, -0x574C($s2)
    ctx->pc = 0x296600u;
    { uint32_t bits = FAST_READ32(0x3FA8B4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296604: 0x46006581  sub.s       $f22, $f12, $f0
    ctx->pc = 0x296604u;
    ctx->f[22] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x296608: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x296608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x29660c: 0x46007306  mov.s       $f12, $f14
    ctx->pc = 0x29660cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[14]);
    // 0x296610: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x296610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x296614: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x296614u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296618: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x296618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x29661c: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x29661cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296620: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x296620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x296624: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x296624u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296628: 0xe7b70058  swc1        $f23, 0x58($sp)
    ctx->pc = 0x296628u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x29662c: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x29662cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296630: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x296630u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x296634: 0x46016dc1  sub.s       $f23, $f13, $f1
    ctx->pc = 0x296634u;
    ctx->f[23] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x296638: 0x46007d46  mov.s       $f21, $f15
    ctx->pc = 0x296638u;
    ctx->f[21] = FPU_MOV_S(ctx->f[15]);
    // 0x29663c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x29663cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x296640: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x296640u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x296644: 0xc09f60e  jal         func_27D838
    ctx->pc = 0x296644u;
    SET_GPR_U32(ctx, 31, 0x29664Cu);
    ctx->pc = 0x296648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296644u;
    // 0x296648: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D838u, 0x296644u, 0x29664Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29664Cu;
label_29664c:
    // 0x29664c: 0xc601a8b0  lwc1        $f1, -0x5750($s0)
    ctx->pc = 0x29664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294944944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296650: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296654: 0xc442a8b8  lwc1        $f2, -0x5748($v0)
    ctx->pc = 0x296654u;
    { uint32_t bits = FAST_READ32(0x3FA8B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x296658: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x296658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29665c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x29665cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x296660: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x296660u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x296664: 0xc0a0c30  jal         func_2830C0
    ctx->pc = 0x296664u;
    SET_GPR_U32(ctx, 31, 0x29666Cu);
    ctx->pc = 0x296668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296664u;
    // 0x296668: 0x4602a500  add.s       $f20, $f20, $f2 (Delay Slot)
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2830C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2830C0u, 0x296664u, 0x29666Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29666Cu;
label_29666c:
    // 0x29666c: 0xc641a8b4  lwc1        $f1, -0x574C($s2)
    ctx->pc = 0x29666cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294944948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x296670: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x296670u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x296674: 0xc44fa8bc  lwc1        $f15, -0x5744($v0)
    ctx->pc = 0x296674u;
    { uint32_t bits = FAST_READ32(0x3FA8BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x296678: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x296678u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x29667c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29667cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x296680: 0x4600bb46  mov.s       $f13, $f23
    ctx->pc = 0x296680u;
    ctx->f[13] = FPU_MOV_S(ctx->f[23]);
    // 0x296684: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x296684u;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x296688: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x296688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29668c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296690: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x296690u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296694: 0x460f03c0  add.s       $f15, $f0, $f15
    ctx->pc = 0x296694u;
    ctx->f[15] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x296698: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x296698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29669c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x29669cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2966a0: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2966A0u;
    SET_GPR_U32(ctx, 31, 0x2966A8u);
    ctx->pc = 0x2966A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2966A0u;
    // 0x2966a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2966A0u, 0x2966A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2966A8u;
label_2966a8:
    // 0x2966a8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2966a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2966ac: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2966acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2966b0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2966b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2966b4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2966b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2966b8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2966b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2966bc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2966bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2966c0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2966c0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2966c4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2966c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2966c8: 0xc7b70058  lwc1        $f23, 0x58($sp)
    ctx->pc = 0x2966c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2966cc: 0xc7b60050  lwc1        $f22, 0x50($sp)
    ctx->pc = 0x2966ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2966d0: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x2966d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2966d4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2966d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2966d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2966D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2966DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2966D8u;
        // 0x2966dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2966D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2966E0u;
}
