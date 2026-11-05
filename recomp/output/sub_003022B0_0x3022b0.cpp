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

// Function: sub_003022B0
// Address: 0x3022b0 - 0x3023e0
void sub_003022B0_0x3022b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003022B0_0x3022b0");
#endif

    switch (ctx->pc) {
        case 0x302304u: goto label_302304;
        case 0x302314u: goto label_302314;
        case 0x30234cu: goto label_30234c;
        case 0x302380u: goto label_302380;
        case 0x30238cu: goto label_30238c;
        case 0x3023a0u: goto label_3023a0;
        case 0x3023acu: goto label_3023ac;
        default: break;
    }

    ctx->pc = 0x3022b0u;

    // 0x3022b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3022b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3022b4: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x3022b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x3022b8: 0xffb10058  sd          $s1, 0x58($sp)
    ctx->pc = 0x3022b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 17));
    // 0x3022bc: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x3022bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x3022c0: 0x3c110059  lui         $s1, 0x59
    ctx->pc = 0x3022c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)89 << 16));
    // 0x3022c4: 0xffb30068  sd          $s3, 0x68($sp)
    ctx->pc = 0x3022c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 19));
    // 0x3022c8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3022c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022cc: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x3022ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x3022d0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3022d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3022d4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x3022d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x3022d8: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3022d8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3022dc: 0xffb50078  sd          $s5, 0x78($sp)
    ctx->pc = 0x3022dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 21));
    // 0x3022e0: 0x26315870  addiu       $s1, $s1, 0x5870
    ctx->pc = 0x3022e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 22640));
    // 0x3022e4: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x3022e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x3022e8: 0xffb70088  sd          $s7, 0x88($sp)
    ctx->pc = 0x3022e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 23));
    // 0x3022ec: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3022ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3022f0: 0x8c8211d0  lw          $v0, 0x11D0($a0)
    ctx->pc = 0x3022f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4560)));
    // 0x3022f4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3022f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3022f8: 0x8c570100  lw          $s7, 0x100($v0)
    ctx->pc = 0x3022f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 256)));
    // 0x3022fc: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x3022FCu;
    SET_GPR_U32(ctx, 31, 0x302304u);
    ctx->pc = 0x302300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3022FCu;
    // 0x302300: 0x26f70040  addiu       $s7, $s7, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x3022FCu, 0x302304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302304u;
label_302304:
    // 0x302304: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x302304u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x302308: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x302308u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30230c: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x30230Cu;
    SET_GPR_U32(ctx, 31, 0x302314u);
    ctx->pc = 0x302310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30230Cu;
    // 0x302310: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x30230Cu, 0x302314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302314u;
label_302314:
    // 0x302314: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x302314u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302318: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x302318u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30231c: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x30231cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x302320: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x302320u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x302324: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x302324u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302328: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x302328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x30232c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x30232cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x302330: 0xfa410020  sqc2        $vf1, 0x20($s2)
    ctx->pc = 0x302330u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302334: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x302334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x302338: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x302338u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x30233c: 0xfa410030  sqc2        $vf1, 0x30($s2)
    ctx->pc = 0x30233cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302344: 0xc0b14ae  jal         func_2C52B8
    ctx->pc = 0x302344u;
    SET_GPR_U32(ctx, 31, 0x30234Cu);
    ctx->pc = 0x302348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302344u;
    // 0x302348: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C52B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C52B8u, 0x302344u, 0x30234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30234Cu;
label_30234c:
    // 0x30234c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x30234cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x302350: 0xfa610000  sqc2        $vf1, 0x0($s3)
    ctx->pc = 0x302350u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302354: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x302354u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x302358: 0xfa610010  sqc2        $vf1, 0x10($s3)
    ctx->pc = 0x302358u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30235c: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x30235cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x302360: 0xfa610020  sqc2        $vf1, 0x20($s3)
    ctx->pc = 0x302360u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x302364: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x302364u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x302368: 0xfa610030  sqc2        $vf1, 0x30($s3)
    ctx->pc = 0x302368u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x30236c: 0x26300310  addiu       $s0, $s1, 0x310
    ctx->pc = 0x30236cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    // 0x302370: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x302370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x302374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302378: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x302378u;
    SET_GPR_U32(ctx, 31, 0x302380u);
    ctx->pc = 0x30237Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302378u;
    // 0x30237c: 0x26310320  addiu       $s1, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x302378u, 0x302380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x302380u;
label_302380:
    // 0x302380: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x302380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302384: 0xc0b189c  jal         func_2C6270
    ctx->pc = 0x302384u;
    SET_GPR_U32(ctx, 31, 0x30238Cu);
    ctx->pc = 0x302388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302384u;
    // 0x302388: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6270u, 0x302384u, 0x30238Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30238Cu;
label_30238c:
    // 0x30238c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x30238cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302390: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x302390u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x302394: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x302394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x302398: 0xc0b1a88  jal         func_2C6A20
    ctx->pc = 0x302398u;
    SET_GPR_U32(ctx, 31, 0x3023A0u);
    ctx->pc = 0x30239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x302398u;
    // 0x30239c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C6A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6A20u, 0x302398u, 0x3023A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023A0u;
label_3023a0:
    // 0x3023a0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3023a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3023a4: 0xc0b1972  jal         func_2C65C8
    ctx->pc = 0x3023A4u;
    SET_GPR_U32(ctx, 31, 0x3023ACu);
    ctx->pc = 0x3023A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3023A4u;
    // 0x3023a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C65C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C65C8u, 0x3023A4u, 0x3023ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3023ACu;
label_3023ac:
    // 0x3023ac: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x3023acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3023b0: 0xdfb10058  ld          $s1, 0x58($sp)
    ctx->pc = 0x3023b0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x3023b4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3023b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3023b8: 0xdfb30068  ld          $s3, 0x68($sp)
    ctx->pc = 0x3023b8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3023bc: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x3023bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3023c0: 0xdfb50078  ld          $s5, 0x78($sp)
    ctx->pc = 0x3023c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x3023c4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x3023c4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3023c8: 0xdfb70088  ld          $s7, 0x88($sp)
    ctx->pc = 0x3023c8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x3023cc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3023ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3023d0: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x3023d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3023d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3023D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3023D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3023D4u;
        // 0x3023d8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3023D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3023DCu;
    // 0x3023dc: 0x0  nop
    ctx->pc = 0x3023dcu;
    // NOP
    ctx->pc = 0x3023e0u;
}
