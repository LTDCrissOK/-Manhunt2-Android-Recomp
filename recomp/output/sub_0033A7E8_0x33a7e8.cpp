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

// Function: sub_0033A7E8
// Address: 0x33a7e8 - 0x33a8b8
void sub_0033A7E8_0x33a7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033A7E8_0x33a7e8");
#endif

    switch (ctx->pc) {
        case 0x33a834u: goto label_33a834;
        case 0x33a844u: goto label_33a844;
        case 0x33a878u: goto label_33a878;
        case 0x33a888u: goto label_33a888;
        case 0x33a898u: goto label_33a898;
        default: break;
    }

    ctx->pc = 0x33a7e8u;

    // 0x33a7e8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x33a7e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x33a7ec: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x33a7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x33a7f0: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x33a7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x33a7f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33a7f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a7f8: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x33a7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x33a7fc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x33a7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33a800: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x33a800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x33a804: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x33a804u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a808: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x33a808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x33a80c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x33a80cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33a810: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a814: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x33a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a818: 0xc601002c  lwc1        $f1, 0x2C($s0)
    ctx->pc = 0x33a818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a81c: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x33a81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a820: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x33a820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x33a824: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x33a824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x33a828: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x33a828u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x33a82c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x33A82Cu;
    SET_GPR_U32(ctx, 31, 0x33A834u);
    ctx->pc = 0x33A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A82Cu;
    // 0x33a830: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x33A82Cu, 0x33A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A834u;
label_33a834:
    // 0x33a834: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x33a834u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x33a838: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x33a838u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a83c: 0xc0b1520  jal         func_2C5480
    ctx->pc = 0x33A83Cu;
    SET_GPR_U32(ctx, 31, 0x33A844u);
    ctx->pc = 0x33A840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A83Cu;
    // 0x33a840: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5480u, 0x33A83Cu, 0x33A844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A844u;
label_33a844:
    // 0x33a844: 0xc602003c  lwc1        $f2, 0x3C($s0)
    ctx->pc = 0x33a844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a848: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x33a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x33a84c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x33a84cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a850: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x33a850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a854: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x33a854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x33a858: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x33a858u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x33a85c: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x33a85cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x33a860: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x33a860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x33a864: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x33a864u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a868: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x33a868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33a86c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x33a86cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x33a870: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x33A870u;
    SET_GPR_U32(ctx, 31, 0x33A878u);
    ctx->pc = 0x33A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A870u;
    // 0x33a874: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x33A870u, 0x33A878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A878u;
label_33a878:
    // 0x33a878: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A878u;
    {
        const bool branch_taken_0x33a878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A878u;
        // 0x33a87c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a878) {
            ctx->pc = 0x33A88Cu;
            goto label_33a88c;
        }
    }
    ctx->pc = 0x33A880u;
    // 0x33a880: 0xc0c4900  jal         func_312400
    ctx->pc = 0x33A880u;
    SET_GPR_U32(ctx, 31, 0x33A888u);
    ctx->pc = 0x33A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A880u;
    // 0x33a884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x33A880u, 0x33A888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A888u;
label_33a888:
    // 0x33a888: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x33a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_33a88c:
    // 0x33a88c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33a88cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a890: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x33A890u;
    SET_GPR_U32(ctx, 31, 0x33A898u);
    ctx->pc = 0x33A894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A890u;
    // 0x33a894: 0x26060080  addiu       $a2, $s0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x33A890u, 0x33A898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A898u;
label_33a898:
    // 0x33a898: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x33a898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33a89c: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x33a89cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33a8a0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x33a8a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33a8a4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x33a8a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x33a8a8: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x33a8a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33a8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x33A8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A8ACu;
        // 0x33a8b0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A8B4u;
    // 0x33a8b4: 0x0  nop
    ctx->pc = 0x33a8b4u;
    // NOP
    ctx->pc = 0x33a8b8u;
}
