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

// Function: sub_00300A70
// Address: 0x300a70 - 0x300ed0
void sub_00300A70_0x300a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300A70_0x300a70");
#endif

    switch (ctx->pc) {
        case 0x300ab0u: goto label_300ab0;
        case 0x300accu: goto label_300acc;
        case 0x300b30u: goto label_300b30;
        case 0x300b38u: goto label_300b38;
        case 0x300b74u: goto label_300b74;
        case 0x300b8cu: goto label_300b8c;
        case 0x300b9cu: goto label_300b9c;
        case 0x300ba4u: goto label_300ba4;
        case 0x300c10u: goto label_300c10;
        case 0x300c18u: goto label_300c18;
        case 0x300c20u: goto label_300c20;
        case 0x300c3cu: goto label_300c3c;
        case 0x300c44u: goto label_300c44;
        case 0x300c4cu: goto label_300c4c;
        case 0x300c68u: goto label_300c68;
        case 0x300c70u: goto label_300c70;
        case 0x300c78u: goto label_300c78;
        case 0x300cf4u: goto label_300cf4;
        case 0x300d18u: goto label_300d18;
        case 0x300d3cu: goto label_300d3c;
        case 0x300d6cu: goto label_300d6c;
        case 0x300da0u: goto label_300da0;
        case 0x300e30u: goto label_300e30;
        case 0x300e48u: goto label_300e48;
        case 0x300e50u: goto label_300e50;
        default: break;
    }

    ctx->pc = 0x300a70u;

    // 0x300a70: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x300a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x300a74: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x300a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x300a78: 0xffb000c0  sd          $s0, 0xC0($sp)
    ctx->pc = 0x300a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 16));
    // 0x300a7c: 0xffb100c8  sd          $s1, 0xC8($sp)
    ctx->pc = 0x300a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 17));
    // 0x300a80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x300a80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a84: 0xffb300d8  sd          $s3, 0xD8($sp)
    ctx->pc = 0x300a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 19));
    // 0x300a88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x300a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a8c: 0xffb400e0  sd          $s4, 0xE0($sp)
    ctx->pc = 0x300a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 20));
    // 0x300a90: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x300a90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300a94: 0xffb500e8  sd          $s5, 0xE8($sp)
    ctx->pc = 0x300a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 21));
    // 0x300a98: 0x24515870  addiu       $s1, $v0, 0x5870
    ctx->pc = 0x300a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 22640));
    // 0x300a9c: 0xffb200d0  sd          $s2, 0xD0($sp)
    ctx->pc = 0x300a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 18));
    // 0x300aa0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x300aa0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300aa4: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x300aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x300aa8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x300AA8u;
    SET_GPR_U32(ctx, 31, 0x300AB0u);
    ctx->pc = 0x300AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AA8u;
    // 0x300aac: 0x120a02d  daddu       $s4, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x300AA8u, 0x300AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300AB0u;
label_300ab0:
    // 0x300ab0: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x300ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x300ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ab8: 0x24522840  addiu       $s2, $v0, 0x2840
    ctx->pc = 0x300ab8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 10304));
    // 0x300abc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x300abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ac0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x300ac0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300ac4: 0xc0bff58  jal         func_2FFD60
    ctx->pc = 0x300AC4u;
    SET_GPR_U32(ctx, 31, 0x300ACCu);
    ctx->pc = 0x300AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300AC4u;
    // 0x300ac8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FFD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FFD60u, 0x300AC4u, 0x300ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300ACCu;
label_300acc:
    // 0x300acc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x300accu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300ad0: 0x9043bb08  lbu         $v1, -0x44F8($v0)
    ctx->pc = 0x300ad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x3FBB08u));
    // 0x300ad4: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x300AD4u;
    {
        const bool branch_taken_0x300ad4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x300AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300AD4u;
        // 0x300ad8: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ad4) {
            ctx->pc = 0x300CB8u;
            goto label_300cb8;
        }
    }
    ctx->pc = 0x300ADCu;
    // 0x300adc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x300adcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x300ae0: 0x24432458  addiu       $v1, $v0, 0x2458
    ctx->pc = 0x300ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 9304));
    // 0x300ae4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x300ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x300ae8: 0xc4650004  lwc1        $f5, 0x4($v1)
    ctx->pc = 0x300ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x300aec: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x300aecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x300af0: 0xc4442458  lwc1        $f4, 0x2458($v0)
    ctx->pc = 0x300af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 9304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x300af4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x300af4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x300af8: 0xc482bb18  lwc1        $f2, -0x44E8($a0)
    ctx->pc = 0x300af8u;
    { uint32_t bits = FAST_READ32(0x3FBB18u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300afc: 0xc4a3bb1c  lwc1        $f3, -0x44E4($a1)
    ctx->pc = 0x300afcu;
    { uint32_t bits = FAST_READ32(0x3FBB1Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300b00: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x300b00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x300b04: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x300b04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x300b08: 0xc641bb0c  lwc1        $f1, -0x44F4($s2)
    ctx->pc = 0x300b08u;
    { uint32_t bits = FAST_READ32(0x3FBB0Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300b0c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x300b0cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x300b10: 0xc600bb10  lwc1        $f0, -0x44F0($s0)
    ctx->pc = 0x300b10u;
    { uint32_t bits = FAST_READ32(0x3FBB10u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300b14: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x300b14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x300b18: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x300b18u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x300b1c: 0xe7a50014  swc1        $f5, 0x14($sp)
    ctx->pc = 0x300b1cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x300b20: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x300b20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x300b24: 0xe641bb0c  swc1        $f1, -0x44F4($s2)
    ctx->pc = 0x300b24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3FBB0Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FBB0Cu, _value); } while (0); }
    // 0x300b28: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x300B28u;
    SET_GPR_U32(ctx, 31, 0x300B30u);
    ctx->pc = 0x300B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B28u;
    // 0x300b2c: 0xe600bb10  swc1        $f0, -0x44F0($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4294949648), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x300B28u, 0x300B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B30u;
label_300b30:
    // 0x300b30: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x300B30u;
    SET_GPR_U32(ctx, 31, 0x300B38u);
    ctx->pc = 0x300B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B30u;
    // 0x300b34: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x300B30u, 0x300B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B38u;
label_300b38:
    // 0x300b38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x300b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x300b3c: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x300b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
    // 0x300b40: 0xc440bb14  lwc1        $f0, -0x44EC($v0)
    ctx->pc = 0x300b40u;
    { uint32_t bits = FAST_READ32(0x3FBB14u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300b44: 0x27b300a0  addiu       $s3, $sp, 0xA0
    ctx->pc = 0x300b44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x300b48: 0xafa000a8  sw          $zero, 0xA8($sp)
    ctx->pc = 0x300b48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 0));
    // 0x300b4c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x300b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x300b50: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x300b50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
    // 0x300b54: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x300b54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300b58: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300b5c: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x300b5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x300b60: 0xc60cbb10  lwc1        $f12, -0x44F0($s0)
    ctx->pc = 0x300b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294949648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300b64: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x300b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x300b68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300b68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b6c: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x300B6Cu;
    SET_GPR_U32(ctx, 31, 0x300B74u);
    ctx->pc = 0x300B70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B6Cu;
    // 0x300b70: 0x24a55b50  addiu       $a1, $a1, 0x5B50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x300B6Cu, 0x300B74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B74u;
label_300b74:
    // 0x300b74: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x300b74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x300b78: 0xc64cbb0c  lwc1        $f12, -0x44F4($s2)
    ctx->pc = 0x300b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4294949644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300b7c: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x300b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x300b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b84: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x300B84u;
    SET_GPR_U32(ctx, 31, 0x300B8Cu);
    ctx->pc = 0x300B88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B84u;
    // 0x300b88: 0x24a55b40  addiu       $a1, $a1, 0x5B40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x300B84u, 0x300B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B8Cu;
label_300b8c:
    // 0x300b8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x300b8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x300b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300b94: 0xc0b1662  jal         func_2C5988
    ctx->pc = 0x300B94u;
    SET_GPR_U32(ctx, 31, 0x300B9Cu);
    ctx->pc = 0x300B98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B94u;
    // 0x300b98: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5988u, 0x300B94u, 0x300B9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300B9Cu;
label_300b9c:
    // 0x300b9c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x300B9Cu;
    SET_GPR_U32(ctx, 31, 0x300BA4u);
    ctx->pc = 0x300BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300B9Cu;
    // 0x300ba0: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x300B9Cu, 0x300BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300BA4u;
label_300ba4:
    // 0x300ba4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300ba4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300ba8: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x300ba8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300bac: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x300bacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x300bb0: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x300bb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x300bb4: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x300bb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x300bb8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x300bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300bbc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x300bbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300bc0: 0x4bc120be  vmaddaz.xyz $ACC, $vf4, $vf1z
    ctx->pc = 0x300bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300bc4: 0x4bc0284b  vmaddw.xyz  $vf1, $vf5, $vf0w
    ctx->pc = 0x300bc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300bc8: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x300bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300bcc: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x300bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300bd0: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x300bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300bd4: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x300bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300bd8: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x300bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300bdc: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x300bdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x300be0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x300be0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x300be4: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x300be4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x300be8: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x300be8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x300bec: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x300becu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300bf0: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300bf4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x300bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300bf8: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x300bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300bfc: 0x0  nop
    ctx->pc = 0x300bfcu;
    // NOP
    // 0x300c00: 0x0  nop
    ctx->pc = 0x300c00u;
    // NOP
    // 0x300c04: 0x460c0303  div.s       $f12, $f0, $f12
    ctx->pc = 0x300c04u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[12]); }
    // 0x300c08: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x300C08u;
    SET_GPR_U32(ctx, 31, 0x300C10u);
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x300C08u, 0x300C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C10u;
label_300c10:
    // 0x300c10: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x300C10u;
    SET_GPR_U32(ctx, 31, 0x300C18u);
    ctx->pc = 0x300C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C10u;
    // 0x300c14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x300C10u, 0x300C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C18u;
label_300c18:
    // 0x300c18: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x300C18u;
    SET_GPR_U32(ctx, 31, 0x300C20u);
    ctx->pc = 0x300C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C18u;
    // 0x300c1c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x300C18u, 0x300C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C20u;
label_300c20:
    // 0x300c20: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x300c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300c24: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x300c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300c28: 0x0  nop
    ctx->pc = 0x300c28u;
    // NOP
    // 0x300c2c: 0x0  nop
    ctx->pc = 0x300c2cu;
    // NOP
    // 0x300c30: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x300c30u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x300c34: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x300C34u;
    SET_GPR_U32(ctx, 31, 0x300C3Cu);
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x300C34u, 0x300C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C3Cu;
label_300c3c:
    // 0x300c3c: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x300C3Cu;
    SET_GPR_U32(ctx, 31, 0x300C44u);
    ctx->pc = 0x300C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C3Cu;
    // 0x300c40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x300C3Cu, 0x300C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C44u;
label_300c44:
    // 0x300c44: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x300C44u;
    SET_GPR_U32(ctx, 31, 0x300C4Cu);
    ctx->pc = 0x300C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C44u;
    // 0x300c48: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x300C44u, 0x300C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C4Cu;
label_300c4c:
    // 0x300c4c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x300c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300c50: 0xc7ac0008  lwc1        $f12, 0x8($sp)
    ctx->pc = 0x300c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300c54: 0x0  nop
    ctx->pc = 0x300c54u;
    // NOP
    // 0x300c58: 0x0  nop
    ctx->pc = 0x300c58u;
    // NOP
    // 0x300c5c: 0x460c0b03  div.s       $f12, $f1, $f12
    ctx->pc = 0x300c5cu;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[12]); }
    // 0x300c60: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x300C60u;
    SET_GPR_U32(ctx, 31, 0x300C68u);
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x300C60u, 0x300C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C68u;
label_300c68:
    // 0x300c68: 0xc0e3d5c  jal         func_38F570
    ctx->pc = 0x300C68u;
    SET_GPR_U32(ctx, 31, 0x300C70u);
    ctx->pc = 0x300C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C68u;
    // 0x300c6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38F570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38F570u, 0x300C68u, 0x300C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C70u;
label_300c70:
    // 0x300c70: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x300C70u;
    SET_GPR_U32(ctx, 31, 0x300C78u);
    ctx->pc = 0x300C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300C70u;
    // 0x300c74: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x300C70u, 0x300C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300C78u;
label_300c78:
    // 0x300c78: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300c78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300c7c: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x300c7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x300c80: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x300c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300c84: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x300c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300c88: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x300c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300c8c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x300c8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300c90: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x300c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x300c94: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x300c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x300c98: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x300c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x300c9c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x300c9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x300ca0: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x300ca0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x300ca4: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x300ca4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
    // 0x300ca8: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x300ca8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300cac: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x300cacu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300cb0: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x300CB0u;
    {
        const bool branch_taken_0x300cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CB0u;
        // 0x300cb4: 0xdfb000c0  ld          $s0, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cb0) {
            ctx->pc = 0x300EB0u;
            goto label_300eb0;
        }
    }
    ctx->pc = 0x300CB8u;
label_300cb8:
    // 0x300cb8: 0x92420011  lbu         $v0, 0x11($s2)
    ctx->pc = 0x300cb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
    // 0x300cbc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x300CBCu;
    {
        const bool branch_taken_0x300cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300cbc) {
            ctx->pc = 0x300CC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CBCu;
            // 0x300cc0: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300D28u;
            goto label_300d28;
        }
    }
    ctx->pc = 0x300CC4u;
    // 0x300cc4: 0x8e02053c  lw          $v0, 0x53C($s0)
    ctx->pc = 0x300cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1340)));
    // 0x300cc8: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x300CC8u;
    {
        const bool branch_taken_0x300cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x300cc8) {
            ctx->pc = 0x300CCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300CC8u;
            // 0x300ccc: 0x8e030418  lw          $v1, 0x418($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1048)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300D28u;
            goto label_300d28;
        }
    }
    ctx->pc = 0x300CD0u;
    // 0x300cd0: 0x922202c9  lbu         $v0, 0x2C9($s1)
    ctx->pc = 0x300cd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 713)));
    // 0x300cd4: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x300cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x300cd8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x300CD8u;
    {
        const bool branch_taken_0x300cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CD8u;
        // 0x300cdc: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300cd8) {
            ctx->pc = 0x300D04u;
            goto label_300d04;
        }
    }
    ctx->pc = 0x300CE0u;
    // 0x300ce0: 0x922202ca  lbu         $v0, 0x2CA($s1)
    ctx->pc = 0x300ce0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 714)));
    // 0x300ce4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x300CE4u;
    {
        const bool branch_taken_0x300ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300CE4u;
        // 0x300ce8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300ce4) {
            ctx->pc = 0x300D04u;
            goto label_300d04;
        }
    }
    ctx->pc = 0x300CECu;
    // 0x300cec: 0xc0b8f20  jal         func_2E3C80
    ctx->pc = 0x300CECu;
    SET_GPR_U32(ctx, 31, 0x300CF4u);
    ctx->pc = 0x300CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300CECu;
    // 0x300cf0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C80u, 0x300CECu, 0x300CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300CF4u;
label_300cf4:
    // 0x300cf4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300cf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300cf8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300cfc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x300CFCu;
    {
        const bool branch_taken_0x300cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300cfc) {
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300D04u;
label_300d04:
    // 0x300d04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x300d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300d08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x300d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x300d0c: 0xa22202c9  sb          $v0, 0x2C9($s1)
    ctx->pc = 0x300d0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 713), (uint8_t)GPR_U32(ctx, 2));
    // 0x300d10: 0xc0b8f22  jal         func_2E3C88
    ctx->pc = 0x300D10u;
    SET_GPR_U32(ctx, 31, 0x300D18u);
    ctx->pc = 0x300D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D10u;
    // 0x300d14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C88u, 0x300D10u, 0x300D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D18u;
label_300d18:
    // 0x300d18: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300d18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300d1c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300d20: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x300D20u;
    {
        const bool branch_taken_0x300d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x300d20) {
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300D28u;
label_300d28:
    // 0x300d28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x300d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x300d2c: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300D2Cu;
    {
        const bool branch_taken_0x300d2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x300d2c) {
            ctx->pc = 0x300D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x300D2Cu;
            // 0x300d30: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x300D48u;
            goto label_300d48;
        }
    }
    ctx->pc = 0x300D34u;
    // 0x300d34: 0xc092432  jal         func_2490C8
    ctx->pc = 0x300D34u;
    SET_GPR_U32(ctx, 31, 0x300D3Cu);
    ctx->pc = 0x300D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D34u;
    // 0x300d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x300D34u, 0x300D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D3Cu;
label_300d3c:
    // 0x300d3c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x300D3Cu;
    {
        const bool branch_taken_0x300d3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D3Cu;
        // 0x300d40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d3c) {
            ctx->pc = 0x300D98u;
            goto label_300d98;
        }
    }
    ctx->pc = 0x300D44u;
    // 0x300d44: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x300d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_300d48:
    // 0x300d48: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x300d48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x300d4c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300d50: 0x8e030104  lw          $v1, 0x104($s0)
    ctx->pc = 0x300d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x300d54: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x300d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x300d58: 0xc4400078  lwc1        $f0, 0x78($v0)
    ctx->pc = 0x300d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300d5c: 0xc44c0070  lwc1        $f12, 0x70($v0)
    ctx->pc = 0x300d5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300d60: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x300d60u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x300d64: 0xc0e3f98  jal         func_38FE60
    ctx->pc = 0x300D64u;
    SET_GPR_U32(ctx, 31, 0x300D6Cu);
    ctx->pc = 0x300D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D64u;
    // 0x300d68: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x38FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38FE60u, 0x300D64u, 0x300D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300D6Cu;
label_300d6c:
    // 0x300d6c: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x300d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x300d70: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x300d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x300d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x300d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x300d78: 0x3c01ba83  lui         $at, 0xBA83
    ctx->pc = 0x300d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47747 << 16));
    // 0x300d7c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x300d7cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x300d80: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x300d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x300d84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x300d88: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x300d88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x300d8c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x300d8cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x300d90: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x300D90u;
    {
        const bool branch_taken_0x300d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300D90u;
        // 0x300d94: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x300d90) {
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300D98u;
label_300d98:
    // 0x300d98: 0xc0b8f22  jal         func_2E3C88
    ctx->pc = 0x300D98u;
    SET_GPR_U32(ctx, 31, 0x300DA0u);
    ctx->pc = 0x300D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300D98u;
    // 0x300d9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E3C88u, 0x300D98u, 0x300DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300DA0u;
label_300da0:
    // 0x300da0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300da0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300da4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300da8: 0x8e020590  lw          $v0, 0x590($s0)
    ctx->pc = 0x300da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1424)));
    // 0x300dac: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x300DACu;
    {
        const bool branch_taken_0x300dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x300dac) {
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300DB4u;
    // 0x300db4: 0xc6001174  lwc1        $f0, 0x1174($s0)
    ctx->pc = 0x300db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300db8: 0xc6011178  lwc1        $f1, 0x1178($s0)
    ctx->pc = 0x300db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x300dbc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x300dbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x300dc0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x300dc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x300dc4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x300dc4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x300dc8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x300dc8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x300dcc: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x300dccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300dd0: 0x0  nop
    ctx->pc = 0x300dd0u;
    // NOP
    // 0x300dd4: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x300DD4u;
    {
        const bool branch_taken_0x300dd4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x300dd4) {
            ctx->pc = 0x300E28u;
            goto label_300e28;
        }
    }
    ctx->pc = 0x300DDCu;
    // 0x300ddc: 0x0  nop
    ctx->pc = 0x300ddcu;
    // NOP
    // 0x300de0: 0x0  nop
    ctx->pc = 0x300de0u;
    // NOP
    // 0x300de4: 0x46000004  c1          0x4
    ctx->pc = 0x300de4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x300de8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x300de8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x300dec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x300decu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x300df0: 0x0  nop
    ctx->pc = 0x300df0u;
    // NOP
    // 0x300df4: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x300df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x300df8: 0x0  nop
    ctx->pc = 0x300df8u;
    // NOP
    // 0x300dfc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x300DFCu;
    {
        const bool branch_taken_0x300dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x300E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300DFCu;
        // 0x300e00: 0x46000046  mov.s       $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x300dfc) {
            ctx->pc = 0x300E08u;
            goto label_300e08;
        }
    }
    ctx->pc = 0x300E04u;
    // 0x300e04: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x300e04u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_300e08:
    // 0x300e08: 0xc6200468  lwc1        $f0, 0x468($s1)
    ctx->pc = 0x300e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x300e0c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x300e0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x300e10: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x300e10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x300e14: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x300e14u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x300e18: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300e18u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300e1c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x300e1cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x300e20: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x300e20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300e24: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_300e28:
    // 0x300e28: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x300E28u;
    SET_GPR_U32(ctx, 31, 0x300E30u);
    ctx->pc = 0x300E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E28u;
    // 0x300e2c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x300E28u, 0x300E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E30u;
label_300e30:
    // 0x300e30: 0xc60c11d4  lwc1        $f12, 0x11D4($s0)
    ctx->pc = 0x300e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x300e34: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x300e34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x300e38: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x300e38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x300e3c: 0x24a55b30  addiu       $a1, $a1, 0x5B30
    ctx->pc = 0x300e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23344));
    // 0x300e40: 0xc0b1548  jal         func_2C5520
    ctx->pc = 0x300E40u;
    SET_GPR_U32(ctx, 31, 0x300E48u);
    ctx->pc = 0x300E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E40u;
    // 0x300e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5520u, 0x300E40u, 0x300E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E48u;
label_300e48:
    // 0x300e48: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x300E48u;
    SET_GPR_U32(ctx, 31, 0x300E50u);
    ctx->pc = 0x300E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x300E48u;
    // 0x300e4c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x300E48u, 0x300E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x300E50u;
label_300e50:
    // 0x300e50: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x300e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x300e54: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x300e54u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x300e58: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x300e58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x300e5c: 0xda030010  lqc2        $vf3, 0x10($s0)
    ctx->pc = 0x300e5cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x300e60: 0xda040020  lqc2        $vf4, 0x20($s0)
    ctx->pc = 0x300e60u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x300e64: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x300e64u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x300e68: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x300e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e6c: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x300e6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e70: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x300e70u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300e74: 0xfba50050  sqc2        $vf5, 0x50($sp)
    ctx->pc = 0x300e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300e78: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x300e78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x300e7c: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x300e7cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x300e80: 0xda630010  lqc2        $vf3, 0x10($s3)
    ctx->pc = 0x300e80u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x300e84: 0xda640020  lqc2        $vf4, 0x20($s3)
    ctx->pc = 0x300e84u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x300e88: 0xda650030  lqc2        $vf5, 0x30($s3)
    ctx->pc = 0x300e88u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x300e8c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x300e8cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e90: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x300e90u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x300e94: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x300e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x300e98: 0xfa850000  sqc2        $vf5, 0x0($s4)
    ctx->pc = 0x300e98u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x300e9c: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x300e9cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x300ea0: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x300ea0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x300ea4: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x300ea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x300ea8: 0xfa810000  sqc2        $vf1, 0x0($s4)
    ctx->pc = 0x300ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x300eac: 0xdfb000c0  ld          $s0, 0xC0($sp)
    ctx->pc = 0x300eacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_300eb0:
    // 0x300eb0: 0xdfb100c8  ld          $s1, 0xC8($sp)
    ctx->pc = 0x300eb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x300eb4: 0xdfb200d0  ld          $s2, 0xD0($sp)
    ctx->pc = 0x300eb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x300eb8: 0xdfb300d8  ld          $s3, 0xD8($sp)
    ctx->pc = 0x300eb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x300ebc: 0xdfb400e0  ld          $s4, 0xE0($sp)
    ctx->pc = 0x300ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x300ec0: 0xdfb500e8  ld          $s5, 0xE8($sp)
    ctx->pc = 0x300ec0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x300ec4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x300ec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x300ec8: 0x3e00008  jr          $ra
    ctx->pc = 0x300EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x300ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x300EC8u;
        // 0x300ecc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x300EC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x300ED0u;
}
