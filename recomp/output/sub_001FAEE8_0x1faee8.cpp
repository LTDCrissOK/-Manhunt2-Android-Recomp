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

// Function: sub_001FAEE8
// Address: 0x1faee8 - 0x1fb0a8
void sub_001FAEE8_0x1faee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FAEE8_0x1faee8");
#endif

    switch (ctx->pc) {
        case 0x1faf44u: goto label_1faf44;
        case 0x1faf6cu: goto label_1faf6c;
        case 0x1faf80u: goto label_1faf80;
        case 0x1fafb8u: goto label_1fafb8;
        case 0x1fb03cu: goto label_1fb03c;
        case 0x1fb07cu: goto label_1fb07c;
        default: break;
    }

    ctx->pc = 0x1faee8u;

    // 0x1faee8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1faee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1faeec: 0xffb50068  sd          $s5, 0x68($sp)
    ctx->pc = 0x1faeecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 21));
    // 0x1faef0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x1faef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x1faef4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1faef4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faef8: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x1faef8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x1faefc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1faefcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf00: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x1faf00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x1faf04: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1faf04u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf08: 0xffb70078  sd          $s7, 0x78($sp)
    ctx->pc = 0x1faf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 23));
    // 0x1faf0c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1faf0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf10: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x1faf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x1faf14: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1faf14u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf18: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x1faf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x1faf1c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x1faf1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf20: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x1faf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x1faf24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1faf24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1faf28: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x1faf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x1faf2c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1faf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf30: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x1faf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x1faf34: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1faf34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf38: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1faf38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf3c: 0xc080ac2  jal         func_202B08
    ctx->pc = 0x1FAF3Cu;
    SET_GPR_U32(ctx, 31, 0x1FAF44u);
    ctx->pc = 0x1FAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF3Cu;
    // 0x1faf40: 0x24849c38  addiu       $a0, $a0, -0x63C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202B08u, 0x1FAF3Cu, 0x1FAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF44u;
label_1faf44:
    // 0x1faf44: 0x93a50028  lbu         $a1, 0x28($sp)
    ctx->pc = 0x1faf44u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1faf48: 0x34108de0  ori         $s0, $zero, 0x8DE0
    ctx->pc = 0x1faf48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1faf4c: 0x93b10029  lbu         $s1, 0x29($sp)
    ctx->pc = 0x1faf4cu;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 41)));
    // 0x1faf50: 0x131827  nor         $v1, $zero, $s3
    ctx->pc = 0x1faf50u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 19)));
    // 0x1faf54: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1faf54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1faf58: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x1faf58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
    // 0x1faf5c: 0x263880b  movn        $s1, $s3, $v1
    ctx->pc = 0x1faf5cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 19));
    // 0x1faf60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf64: 0xc07e976  jal         func_1FA5D8
    ctx->pc = 0x1FAF64u;
    SET_GPR_U32(ctx, 31, 0x1FAF6Cu);
    ctx->pc = 0x1FAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF64u;
    // 0x1faf68: 0x282280b  movn        $a1, $s4, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA5D8u, 0x1FAF64u, 0x1FAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF6Cu;
label_1faf6c:
    // 0x1faf6c: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1faf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1faf70: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1faf70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1faf74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1faf78: 0xc07e980  jal         func_1FA600
    ctx->pc = 0x1FAF78u;
    SET_GPR_U32(ctx, 31, 0x1FAF80u);
    ctx->pc = 0x1FAF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAF78u;
    // 0x1faf7c: 0x29e03  sra         $s3, $v0, 24 (Delay Slot)
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA600u, 0x1FAF78u, 0x1FAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAF80u;
label_1faf80:
    // 0x1faf80: 0xc643000c  lwc1        $f3, 0xC($s2)
    ctx->pc = 0x1faf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1faf84: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1faf84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1faf88: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x1faf88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1faf8c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1faf8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1faf90: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1faf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1faf94: 0x28e03  sra         $s1, $v0, 24
    ctx->pc = 0x1faf94u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1faf98: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1faf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1faf9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1faf9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafa0: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1fafa0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1fafa4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fafa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fafa8: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1fafa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1fafac: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1fafacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1fafb0: 0xc07bc7e  jal         func_1EF1F8
    ctx->pc = 0x1FAFB0u;
    SET_GPR_U32(ctx, 31, 0x1FAFB8u);
    ctx->pc = 0x1FAFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FAFB0u;
    // 0x1fafb4: 0xe7a3003c  swc1        $f3, 0x3C($sp) (Delay Slot)
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EF1F8u, 0x1FAFB0u, 0x1FAFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FAFB8u;
label_1fafb8:
    // 0x1fafb8: 0x2311018  mult        $v0, $s1, $s1
    ctx->pc = 0x1fafb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fafbc: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1fafbcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1fafc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1fafc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fafc4: 0x0  nop
    ctx->pc = 0x1fafc4u;
    // NOP
    // 0x1fafc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1fafc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1fafcc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x1fafccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1fafd0: 0x0  nop
    ctx->pc = 0x1fafd0u;
    // NOP
    // 0x1fafd4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1FAFD4u;
    {
        const bool branch_taken_0x1fafd4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1FAFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFD4u;
        // 0x1fafd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafd4) {
            ctx->pc = 0x1FAFF4u;
            goto label_1faff4;
        }
    }
    ctx->pc = 0x1FAFDCu;
    // 0x1fafdc: 0x340292f0  ori         $v0, $zero, 0x92F0
    ctx->pc = 0x1fafdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37616);
    // 0x1fafe0: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fafe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1fafe4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fafe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fafe8: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1fafe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1fafec: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x1FAFECu;
    {
        const bool branch_taken_0x1fafec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FAFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FAFECu;
        // 0x1faff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fafec) {
            ctx->pc = 0x1FB07Cu;
            goto label_1fb07c;
        }
    }
    ctx->pc = 0x1FAFF4u;
label_1faff4:
    // 0x1faff4: 0x34108000  ori         $s0, $zero, 0x8000
    ctx->pc = 0x1faff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1faff8: 0x34029310  ori         $v0, $zero, 0x9310
    ctx->pc = 0x1faff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37648);
    // 0x1faffc: 0x2b08021  addu        $s0, $s5, $s0
    ctx->pc = 0x1faffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
    // 0x1fb000: 0x2a21021  addu        $v0, $s5, $v0
    ctx->pc = 0x1fb000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x1fb004: 0xae1612f8  sw          $s6, 0x12F8($s0)
    ctx->pc = 0x1fb004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4856), GPR_U32(ctx, 22));
    // 0x1fb008: 0xae1712fc  sw          $s7, 0x12FC($s0)
    ctx->pc = 0x1fb008u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4860), GPR_U32(ctx, 23));
    // 0x1fb00c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1fb00cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fb010: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1fb010u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1fb014: 0x0  nop
    ctx->pc = 0x1fb014u;
    // NOP
    // 0x1fb018: 0x0  nop
    ctx->pc = 0x1fb018u;
    // NOP
    // 0x1fb01c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x1fb01cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
    // 0x1fb020: 0xa2131328  sb          $s3, 0x1328($s0)
    ctx->pc = 0x1fb020u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4904), (uint8_t)GPR_U32(ctx, 19));
    // 0x1fb024: 0xa2111329  sb          $s1, 0x1329($s0)
    ctx->pc = 0x1fb024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4905), (uint8_t)GPR_U32(ctx, 17));
    // 0x1fb028: 0x34048de0  ori         $a0, $zero, 0x8DE0
    ctx->pc = 0x1fb028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fb02c: 0x2a42021  addu        $a0, $s5, $a0
    ctx->pc = 0x1fb02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1fb030: 0x326500ff  andi        $a1, $s3, 0xFF
    ctx->pc = 0x1fb030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)255);
    // 0x1fb034: 0xc07e98a  jal         func_1FA628
    ctx->pc = 0x1FB034u;
    SET_GPR_U32(ctx, 31, 0x1FB03Cu);
    ctx->pc = 0x1FB038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB034u;
    // 0x1fb038: 0x322600ff  andi        $a2, $s1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA628u, 0x1FB034u, 0x1FB03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB03Cu;
label_1fb03c:
    // 0x1fb03c: 0x93a2002a  lbu         $v0, 0x2A($sp)
    ctx->pc = 0x1fb03cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 42)));
    // 0x1fb040: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB040u;
    {
        const bool branch_taken_0x1fb040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB040u;
        // 0x1fb044: 0xe6001324  swc1        $f0, 0x1324($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4900), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb040) {
            ctx->pc = 0x1FB05Cu;
            goto label_1fb05c;
        }
    }
    ctx->pc = 0x1FB048u;
    // 0x1fb048: 0x340392f0  ori         $v1, $zero, 0x92F0
    ctx->pc = 0x1fb048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37616);
    // 0x1fb04c: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1fb04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1fb050: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1fb050u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb054: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB054u;
    {
        const bool branch_taken_0x1fb054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB054u;
        // 0x1fb058: 0x304200fd  andi        $v0, $v0, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb054) {
            ctx->pc = 0x1FB06Cu;
            goto label_1fb06c;
        }
    }
    ctx->pc = 0x1FB05Cu;
label_1fb05c:
    // 0x1fb05c: 0x340392f0  ori         $v1, $zero, 0x92F0
    ctx->pc = 0x1fb05cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)37616);
    // 0x1fb060: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1fb060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1fb064: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1fb064u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fb068: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1fb068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_1fb06c:
    // 0x1fb06c: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1fb06cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1fb070: 0x34048de0  ori         $a0, $zero, 0x8DE0
    ctx->pc = 0x1fb070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1fb074: 0xc07e910  jal         func_1FA440
    ctx->pc = 0x1FB074u;
    SET_GPR_U32(ctx, 31, 0x1FB07Cu);
    ctx->pc = 0x1FB078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB074u;
    // 0x1fb078: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA440u, 0x1FB074u, 0x1FB07Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB07Cu;
label_1fb07c:
    // 0x1fb07c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x1fb07cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fb080: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x1fb080u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1fb084: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x1fb084u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fb088: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x1fb088u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1fb08c: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x1fb08cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fb090: 0xdfb50068  ld          $s5, 0x68($sp)
    ctx->pc = 0x1fb090u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1fb094: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x1fb094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fb098: 0xdfb70078  ld          $s7, 0x78($sp)
    ctx->pc = 0x1fb098u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fb09c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x1fb09cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fb0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0A0u;
        // 0x1fb0a4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0A8u;
}
