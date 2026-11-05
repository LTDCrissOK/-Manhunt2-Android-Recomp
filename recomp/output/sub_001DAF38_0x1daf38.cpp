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

// Function: sub_001DAF38
// Address: 0x1daf38 - 0x1db230
void sub_001DAF38_0x1daf38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DAF38_0x1daf38");
#endif

    switch (ctx->pc) {
        case 0x1dafa4u: goto label_1dafa4;
        case 0x1dafc8u: goto label_1dafc8;
        case 0x1db030u: goto label_1db030;
        case 0x1db0c8u: goto label_1db0c8;
        case 0x1db154u: goto label_1db154;
        case 0x1db200u: goto label_1db200;
        default: break;
    }

    ctx->pc = 0x1daf38u;

    // 0x1daf38: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1daf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1daf3c: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x1daf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x1daf40: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1daf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1daf44: 0x8cc2ff90  lw          $v0, -0x70($a2)
    ctx->pc = 0x1daf44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48FF90u));
    // 0x1daf48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1daf48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1daf4c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1daf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1daf50: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1daf50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1daf54: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1daf54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1daf58: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1daf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x1daf5c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1daf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x1daf60: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1daf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x1daf64: 0xffb70058  sd          $s7, 0x58($sp)
    ctx->pc = 0x1daf64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 23));
    // 0x1daf68: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1daf68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1daf6c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1DAF6Cu;
    {
        const bool branch_taken_0x1daf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAF6Cu;
        // 0x1daf70: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daf6c) {
            ctx->pc = 0x1DAFA4u;
            goto label_1dafa4;
        }
    }
    ctx->pc = 0x1DAF74u;
    // 0x1daf74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1daf74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1daf78: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x1daf78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x1daf7c: 0x24a2ff80  addiu       $v0, $a1, -0x80
    ctx->pc = 0x1daf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967168));
    // 0x1daf80: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1daf80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1daf84: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1daf84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48FF8Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48FF8Cu, _value); } while (0); }
    // 0x1daf88: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1daf88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1daf8c: 0xacc3ff90  sw          $v1, -0x70($a2)
    ctx->pc = 0x1daf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967184), GPR_U32(ctx, 3));
    // 0x1daf90: 0x2484af28  addiu       $a0, $a0, -0x50D8
    ctx->pc = 0x1daf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946600));
    // 0x1daf94: 0xe4a0ff80  swc1        $f0, -0x80($a1)
    ctx->pc = 0x1daf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48FF80u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48FF80u, _value); } while (0); }
    // 0x1daf98: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x1daf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x48FF84u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x48FF84u, _value); } while (0); }
    // 0x1daf9c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x1DAF9Cu;
    SET_GPR_U32(ctx, 31, 0x1DAFA4u);
    ctx->pc = 0x1DAFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAF9Cu;
    // 0x1dafa0: 0xe4400008  swc1        $f0, 0x8($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x1DAF9Cu, 0x1DAFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFA4u;
label_1dafa4:
    // 0x1dafa4: 0x3c130049  lui         $s3, 0x49
    ctx->pc = 0x1dafa4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)73 << 16));
    // 0x1dafa8: 0x8e62fff0  lw          $v0, -0x10($s3)
    ctx->pc = 0x1dafa8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x48FFF0u));
    // 0x1dafac: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DAFACu;
    {
        const bool branch_taken_0x1dafac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DAFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DAFACu;
        // 0x1dafb0: 0x3c160049  lui         $s6, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dafac) {
            ctx->pc = 0x1DB030u;
            goto label_1db030;
        }
    }
    ctx->pc = 0x1DAFB4u;
    // 0x1dafb4: 0x26d1ffa0  addiu       $s1, $s6, -0x60
    ctx->pc = 0x1dafb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967200));
    // 0x1dafb8: 0x3c100049  lui         $s0, 0x49
    ctx->pc = 0x1dafb8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)73 << 16));
    // 0x1dafbc: 0x2610ff80  addiu       $s0, $s0, -0x80
    ctx->pc = 0x1dafbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967168));
    // 0x1dafc0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1DAFC0u;
    SET_GPR_U32(ctx, 31, 0x1DAFC8u);
    ctx->pc = 0x1DAFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DAFC0u;
    // 0x1dafc4: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1DAFC0u, 0x1DAFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DAFC8u;
label_1dafc8:
    // 0x1dafc8: 0x7a030000  lq          $v1, 0x0($s0)
    ctx->pc = 0x1dafc8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dafcc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x1dafccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1dafd0: 0x3c013db8  lui         $at, 0x3DB8
    ctx->pc = 0x1dafd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15800 << 16));
    // 0x1dafd4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1dafd4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1dafd8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1dafd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dafdc: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x1dafdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x1dafe0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x1dafe0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x1dafe4: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1dafe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dafe8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1dafe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dafec: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1dafecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1daff0: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x1daff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1daff4: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1daff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1daff8: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1daff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1daffc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1daffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1db000: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1db000u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1db004: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1db004u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1db008: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1db008u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1db00c: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x1db00cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1db010: 0xe6240020  swc1        $f4, 0x20($s1)
    ctx->pc = 0x1db010u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
    // 0x1db014: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1db014u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1db018: 0xfa210040  sqc2        $vf1, 0x40($s1)
    ctx->pc = 0x1db018u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db01c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1db01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1db020: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x1db020u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
    // 0x1db024: 0xae62fff0  sw          $v0, -0x10($s3)
    ctx->pc = 0x1db024u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294967280), GPR_U32(ctx, 2));
    // 0x1db028: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x1DB028u;
    SET_GPR_U32(ctx, 31, 0x1DB030u);
    ctx->pc = 0x1DB02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB028u;
    // 0x1db02c: 0x2484af30  addiu       $a0, $a0, -0x50D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x1DB028u, 0x1DB030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB030u;
label_1db030:
    // 0x1db030: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x1db030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1db034: 0x26c4ffa0  addiu       $a0, $s6, -0x60
    ctx->pc = 0x1db034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967200));
    // 0x1db038: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x1db038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1db03c: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1db03cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1db040: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1db040u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1db044: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1db044u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1db048: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x1db048u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1db04c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x1db04cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x1db050: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1db050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db054: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1db054u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1db058: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x1db058u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x1db05c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1db05cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db060: 0xf8810040  sqc2        $vf1, 0x40($a0)
    ctx->pc = 0x1db060u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1db064: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x1db064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x1db068: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x1db068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1db06c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DB06Cu;
    {
        const bool branch_taken_0x1db06c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB06Cu;
        // 0x1db070: 0x8c540ffc  lw          $s4, 0xFFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db06c) {
            ctx->pc = 0x1DB084u;
            goto label_1db084;
        }
    }
    ctx->pc = 0x1DB074u;
    // 0x1db074: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1db074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1db078: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1db078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1db07c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DB07Cu;
    {
        const bool branch_taken_0x1db07c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB07Cu;
        // 0x1db080: 0x3442fdef  ori         $v0, $v0, 0xFDEF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65007);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db07c) {
            ctx->pc = 0x1DB090u;
            goto label_1db090;
        }
    }
    ctx->pc = 0x1DB084u;
label_1db084:
    // 0x1db084: 0x3c020800  lui         $v0, 0x800
    ctx->pc = 0x1db084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2048 << 16));
    // 0x1db088: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1db088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1db08c: 0x34427000  ori         $v0, $v0, 0x7000
    ctx->pc = 0x1db08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28672);
label_1db090:
    // 0x1db090: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x1db090u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db094: 0xac62fff4  sw          $v0, -0xC($v1)
    ctx->pc = 0x1db094u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
    // 0x1db098: 0x26820034  addiu       $v0, $s4, 0x34
    ctx->pc = 0x1db098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 52));
    // 0x1db09c: 0x8e840034  lw          $a0, 0x34($s4)
    ctx->pc = 0x1db09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1db0a0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1db0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1db0a4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1db0a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db0a8: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1db0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1db0ac: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1db0acu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1db0b0: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
    ctx->pc = 0x1DB0B0u;
    {
        const bool branch_taken_0x1db0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0B0u;
        // 0x1db0b4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0b0) {
            ctx->pc = 0x1DB1F8u;
            goto label_1db1f8;
        }
    }
    ctx->pc = 0x1DB0B8u;
    // 0x1db0b8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1db0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1db0bc: 0xc454d810  lwc1        $f20, -0x27F0($v0)
    ctx->pc = 0x1db0bcu;
    { uint32_t bits = FAST_READ32(0x45D810u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db0c0: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x1db0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1db0c4: 0x0  nop
    ctx->pc = 0x1db0c4u;
    // NOP
label_1db0c8:
    // 0x1db0c8: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x1db0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x1db0cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1db0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db0d0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1db0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db0d4: 0x12000040  beqz        $s0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1DB0D4u;
    {
        const bool branch_taken_0x1db0d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB0D4u;
        // 0x1db0d8: 0x3c050404  lui         $a1, 0x404 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1028 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db0d4) {
            ctx->pc = 0x1DB1D8u;
            goto label_1db1d8;
        }
    }
    ctx->pc = 0x1DB0DCu;
    // 0x1db0dc: 0x8e0400b8  lw          $a0, 0xB8($s0)
    ctx->pc = 0x1db0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x1db0e0: 0x8ee2fff4  lw          $v0, -0xC($s7)
    ctx->pc = 0x1db0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294967284)));
    // 0x1db0e4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x1db0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1db0e8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1db0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1db0ec: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1db0ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1db0f0: 0x5460003a  bnel        $v1, $zero, . + 4 + (0x3A << 2)
    ctx->pc = 0x1DB0F0u;
    {
        const bool branch_taken_0x1db0f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db0f0) {
            ctx->pc = 0x1DB0F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB0F0u;
            // 0x1db0f4: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1DCu;
            goto label_1db1dc;
        }
    }
    ctx->pc = 0x1DB0F8u;
    // 0x1db0f8: 0x8e0200c4  lw          $v0, 0xC4($s0)
    ctx->pc = 0x1db0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1db0fc: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1db0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1db100: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x1db100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1db104: 0x50800035  beql        $a0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1DB104u;
    {
        const bool branch_taken_0x1db104 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db104) {
            ctx->pc = 0x1DB108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB104u;
            // 0x1db108: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1DCu;
            goto label_1db1dc;
        }
    }
    ctx->pc = 0x1DB10Cu;
    // 0x1db10c: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1db10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1db110: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1db110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1db114: 0x54400031  bnel        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1DB114u;
    {
        const bool branch_taken_0x1db114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db114) {
            ctx->pc = 0x1DB118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB114u;
            // 0x1db118: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB1DCu;
            goto label_1db1dc;
        }
    }
    ctx->pc = 0x1DB11Cu;
    // 0x1db11c: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1db11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1db120: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x1db120u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x1db124: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1db124u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F91E0u));
    // 0x1db128: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x1db128u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
    // 0x1db12c: 0x8e0500c4  lw          $a1, 0xC4($s0)
    ctx->pc = 0x1db12cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    // 0x1db130: 0x26c4ffa0  addiu       $a0, $s6, -0x60
    ctx->pc = 0x1db130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967200));
    // 0x1db134: 0x8e4691dc  lw          $a2, -0x6E24($s2)
    ctx->pc = 0x1db134u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3F91DCu));
    // 0x1db138: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db138u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db13c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1db13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1db140: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1db140u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1db144: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1db144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1db148: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x1db148u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x1db14c: 0xc07a498  jal         func_1E9260
    ctx->pc = 0x1DB14Cu;
    SET_GPR_U32(ctx, 31, 0x1DB154u);
    ctx->pc = 0x1DB150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB14Cu;
    // 0x1db150: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9260u, 0x1DB14Cu, 0x1DB154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB154u;
label_1db154:
    // 0x1db154: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1DB154u;
    {
        const bool branch_taken_0x1db154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB154u;
        // 0x1db158: 0x8e2391e0  lw          $v1, -0x6E20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db154) {
            ctx->pc = 0x1DB1D8u;
            goto label_1db1d8;
        }
    }
    ctx->pc = 0x1DB15Cu;
    // 0x1db15c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x1db15cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1db160: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1db160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1db164: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x1db164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x1db168: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1db16c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1db16cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1db170: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1db170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db174: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1db174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1db178: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1db178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db17c: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x1db17cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x1db180: 0x8e2491e0  lw          $a0, -0x6E20($s1)
    ctx->pc = 0x1db180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1db184: 0x8e4291dc  lw          $v0, -0x6E24($s2)
    ctx->pc = 0x1db184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1db188: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1db188u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1db18c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1db18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1db190: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1db190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1db194: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1db194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1db198: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1db198u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x1db19c: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1db19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1db1a0: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1db1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1db1a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db1a8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db1ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db1b0: 0xac700034  sw          $s0, 0x34($v1)
    ctx->pc = 0x1db1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 16));
    // 0x1db1b4: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1db1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1db1b8: 0x8e4491dc  lw          $a0, -0x6E24($s2)
    ctx->pc = 0x1db1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
    // 0x1db1bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1db1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1db1c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1db1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1db1c4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1db1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1db1c8: 0xac660038  sw          $a2, 0x38($v1)
    ctx->pc = 0x1db1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 6));
    // 0x1db1cc: 0x8e2291e0  lw          $v0, -0x6E20($s1)
    ctx->pc = 0x1db1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294939104)));
    // 0x1db1d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db1d4: 0xae2291e0  sw          $v0, -0x6E20($s1)
    ctx->pc = 0x1db1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294939104), GPR_U32(ctx, 2));
label_1db1d8:
    // 0x1db1d8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x1db1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_1db1dc:
    // 0x1db1dc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1db1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1db1e0: 0x8e830034  lw          $v1, 0x34($s4)
    ctx->pc = 0x1db1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
    // 0x1db1e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1db1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1db1e8: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x1db1e8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x1db1ec: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x1db1ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1db1f0: 0x5440ffb5  bnel        $v0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x1DB1F0u;
    {
        const bool branch_taken_0x1db1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1db1f0) {
            ctx->pc = 0x1DB1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DB1F0u;
            // 0x1db1f4: 0x8e820034  lw          $v0, 0x34($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DB0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1db0c8;
        }
    }
    ctx->pc = 0x1DB1F8u;
label_1db1f8:
    // 0x1db1f8: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x1DB1F8u;
    SET_GPR_U32(ctx, 31, 0x1DB200u);
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1DB1F8u, 0x1DB200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DB200u;
label_1db200:
    // 0x1db200: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1db200u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1db204: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1db204u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1db208: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1db208u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1db20c: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1db20cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1db210: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1db210u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1db214: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1db214u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1db218: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1db218u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1db21c: 0xdfb70058  ld          $s7, 0x58($sp)
    ctx->pc = 0x1db21cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1db220: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x1db220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1db224: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x1db224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1db228: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DB22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB228u;
        // 0x1db22c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DB230u;
}
