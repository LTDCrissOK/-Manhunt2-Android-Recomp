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

// Function: sub_002C5FF8
// Address: 0x2c5ff8 - 0x2c6110
void sub_002C5FF8_0x2c5ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C5FF8_0x2c5ff8");
#endif

    switch (ctx->pc) {
        case 0x2c6020u: goto label_2c6020;
        case 0x2c6030u: goto label_2c6030;
        case 0x2c6038u: goto label_2c6038;
        case 0x2c6040u: goto label_2c6040;
        case 0x2c604cu: goto label_2c604c;
        case 0x2c60f4u: goto label_2c60f4;
        default: break;
    }

    ctx->pc = 0x2c5ff8u;

    // 0x2c5ff8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2c5ff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2c5ffc: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x2c5ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x2c6000: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x2c6000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x2c6004: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6004u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6008: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2c6008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x2c600c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c600cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c6010: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C6010u;
    {
        const bool branch_taken_0x2c6010 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6010u;
        // 0x2c6014: 0xffbf00a8  sd          $ra, 0xA8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6010) {
            ctx->pc = 0x2C6028u;
            goto label_2c6028;
        }
    }
    ctx->pc = 0x2C6018u;
    // 0x2c6018: 0xc0b1844  jal         func_2C6110
    ctx->pc = 0x2C6018u;
    SET_GPR_U32(ctx, 31, 0x2C6020u);
    ctx->pc = 0x2C6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C6110u, 0x2C6018u, 0x2C6020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6020u;
label_2c6020:
    // 0x2c6020: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x2C6020u;
    {
        const bool branch_taken_0x2c6020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6020u;
        // 0x2c6024: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6020) {
            ctx->pc = 0x2C60F8u;
            goto label_2c60f8;
        }
    }
    ctx->pc = 0x2C6028u;
label_2c6028:
    // 0x2c6028: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C6028u;
    SET_GPR_U32(ctx, 31, 0x2C6030u);
    ctx->pc = 0x2C602Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6028u;
    // 0x2c602c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C6028u, 0x2C6030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6030u;
label_2c6030:
    // 0x2c6030: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C6030u;
    SET_GPR_U32(ctx, 31, 0x2C6038u);
    ctx->pc = 0x2C6034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6030u;
    // 0x2c6034: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C6030u, 0x2C6038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6038u;
label_2c6038:
    // 0x2c6038: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C6038u;
    SET_GPR_U32(ctx, 31, 0x2C6040u);
    ctx->pc = 0x2C603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6038u;
    // 0x2c603c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C6038u, 0x2C6040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C6040u;
label_2c6040:
    // 0x2c6040: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x2c6040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c6044: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C6044u;
    SET_GPR_U32(ctx, 31, 0x2C604Cu);
    ctx->pc = 0x2C6048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C6044u;
    // 0x2c6048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C6044u, 0x2C604Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C604Cu;
label_2c604c:
    // 0x2c604c: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x2c604cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c6050: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2c6050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x2c6054: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x2c6054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c6058: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2c6058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2c605c: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x2c605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c6060: 0xc6280000  lwc1        $f8, 0x0($s1)
    ctx->pc = 0x2c6060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2c6064: 0xc6270010  lwc1        $f7, 0x10($s1)
    ctx->pc = 0x2c6064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2c6068: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x2c6068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2c606c: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x2c606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2c6070: 0xc6250018  lwc1        $f5, 0x18($s1)
    ctx->pc = 0x2c6070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2c6074: 0xc6260028  lwc1        $f6, 0x28($s1)
    ctx->pc = 0x2c6074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2c6078: 0xe7a80000  swc1        $f8, 0x0($sp)
    ctx->pc = 0x2c6078u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2c607c: 0xe7a70004  swc1        $f7, 0x4($sp)
    ctx->pc = 0x2c607cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2c6080: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2c6080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2c6084: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x2c6084u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c6088: 0xe7a20014  swc1        $f2, 0x14($sp)
    ctx->pc = 0x2c6088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2c608c: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2c608cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c6090: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2c6090u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2c6094: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2c6094u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2c6098: 0xe7a60028  swc1        $f6, 0x28($sp)
    ctx->pc = 0x2c6098u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2c609c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x2c609cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x2c60a0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x2c60a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x2c60a4: 0xafa0002c  sw          $zero, 0x2C($sp)
    ctx->pc = 0x2c60a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 0));
    // 0x2c60a8: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2c60a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c60ac: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2c60acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c60b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2c60b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c60b4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2c60b4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2c60b8: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2c60b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2c60bc: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2c60bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
    // 0x2c60c0: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2c60c0u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2c60c4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x2c60c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2c60c8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x2c60c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x2c60cc: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x2c60ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
    // 0x2c60d0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2c60d0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2c60d4: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x2c60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2c60d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2c60d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2c60dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2c60dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c60e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c60e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c60e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60e8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c60e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c60ec: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x2C60ECu;
    SET_GPR_U32(ctx, 31, 0x2C60F4u);
    ctx->pc = 0x2C60F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C60ECu;
    // 0x2c60f0: 0xe7a0007c  swc1        $f0, 0x7C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x2C60ECu, 0x2C60F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C60F4u;
label_2c60f4:
    // 0x2c60f4: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2c60f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2c60f8:
    // 0x2c60f8: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2c60f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2c60fc: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2c60fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2c6100: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x2c6100u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2c6104: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6104u;
        // 0x2c6108: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C610Cu;
    // 0x2c610c: 0x0  nop
    ctx->pc = 0x2c610cu;
    // NOP
    ctx->pc = 0x2c6110u;
}
