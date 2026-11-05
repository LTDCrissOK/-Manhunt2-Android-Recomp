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

// Function: sub_00218330
// Address: 0x218330 - 0x218438
void sub_00218330_0x218330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218330_0x218330");
#endif

    switch (ctx->pc) {
        case 0x21839cu: goto label_21839c;
        case 0x2183acu: goto label_2183ac;
        default: break;
    }

    ctx->pc = 0x218330u;

    // 0x218330: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x218330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x218334: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x218334u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x218338: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x218338u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21833c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x21833cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x218340: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x218340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x218344: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x218344u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x218348: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x218348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x21834c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21834cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218350: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x218350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x218354: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x218354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x218358: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x218358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x21835c: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x21835cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x218360: 0x27b40030  addiu       $s4, $sp, 0x30
    ctx->pc = 0x218360u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x218364: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x218364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x218368: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x218368u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21836c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x21836cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x218370: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x218370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x218374: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x218374u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x218378: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x218378u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21837c: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x21837cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x218380: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x218380u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x218384: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x218384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x218388: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x218388u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x21838c: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x21838cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x218390: 0xe6610004  swc1        $f1, 0x4($s3)
    ctx->pc = 0x218390u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x218394: 0xc08609c  jal         func_218270
    ctx->pc = 0x218394u;
    SET_GPR_U32(ctx, 31, 0x21839Cu);
    ctx->pc = 0x218398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x218394u;
    // 0x218398: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218270u, 0x218394u, 0x21839Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21839Cu;
label_21839c:
    // 0x21839c: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x21839cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2183a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2183a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183a4: 0xc08609c  jal         func_218270
    ctx->pc = 0x2183A4u;
    SET_GPR_U32(ctx, 31, 0x2183ACu);
    ctx->pc = 0x2183A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2183A4u;
    // 0x2183a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x218270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x218270u, 0x2183A4u, 0x2183ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2183ACu;
label_2183ac:
    // 0x2183ac: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x2183acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x2183b0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2183b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2183b4: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x2183b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2183b8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2183b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2183bc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x2183bcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2183c0: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x2183c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2183c4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x2183c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183c8: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x2183c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x2183cc: 0xa3a40050  sb          $a0, 0x50($sp)
    ctx->pc = 0x2183ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x2183d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2183d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2183d4: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2183d4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2183d8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x2183d8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2183dc: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x2183dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2183e0: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x2183e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2183e4: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2183e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2183e8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x2183e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2183ec: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x2183ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2183f0: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x2183f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2183f4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2183f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2183f8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2183f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2183fc: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x2183fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218400: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x218400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x218404: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x218404u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x218408: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x218408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21840c: 0xc6610004  lwc1        $f1, 0x4($s3)
    ctx->pc = 0x21840cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218410: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x218410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x218414: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x218414u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x218418: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x218418u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21841c: 0xc6600008  lwc1        $f0, 0x8($s3)
    ctx->pc = 0x21841cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x218420: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x218420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x218424: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x218424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x218428: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x218428u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21842c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x21842cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x218430: 0x3e00008  jr          $ra
    ctx->pc = 0x218430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x218434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218430u;
        // 0x218434: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218438u;
}
