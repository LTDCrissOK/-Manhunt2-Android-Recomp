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

// Function: sub_001E5B50
// Address: 0x1e5b50 - 0x1e5e88
void sub_001E5B50_0x1e5b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5B50_0x1e5b50");
#endif

    switch (ctx->pc) {
        case 0x1e5bc0u: goto label_1e5bc0;
        case 0x1e5bc8u: goto label_1e5bc8;
        case 0x1e5bd8u: goto label_1e5bd8;
        case 0x1e5be0u: goto label_1e5be0;
        case 0x1e5c00u: goto label_1e5c00;
        default: break;
    }

    ctx->pc = 0x1e5b50u;

    // 0x1e5b50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1e5b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1e5b54: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1e5b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1e5b58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1e5b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x1e5b5c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1e5b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x1e5b60: 0x247001d0  addiu       $s0, $v1, 0x1D0
    ctx->pc = 0x1e5b60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 464));
    // 0x1e5b64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5b64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b68: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1e5b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x1e5b6c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1e5b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x1e5b70: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1e5b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1e5b74: 0x7c6001d0  sq          $zero, 0x1D0($v1)
    ctx->pc = 0x1e5b74u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4901D0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4901D0u, _value); } while (0);
    // 0x1e5b78: 0x7e000010  sq          $zero, 0x10($s0)
    ctx->pc = 0x1e5b78u;
    do { __m128i _value = (GPR_VEC(ctx, 0)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x4901E0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x4901E0u, _value); } while (0);
    // 0x1e5b7c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x1e5b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x1e5b80: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1e5b80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5b84: 0xc440d940  lwc1        $f0, -0x26C0($v0)
    ctx->pc = 0x1e5b84u;
    { uint32_t bits = FAST_READ32(0x45D940u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5b88: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1e5b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1e5b8c: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1e5b8cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x490214u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490214u, _value); } while (0);
    // 0x1e5b90: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1e5b90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4901F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4901F0u, _value); } while (0); }
    // 0x1e5b94: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1e5b94u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4901F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4901F4u, _value); } while (0);
    // 0x1e5b98: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1e5b98u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4901FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4901FCu, _value); } while (0);
    // 0x1e5b9c: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1e5b9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490204u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490204u, _value); } while (0);
    // 0x1e5ba0: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1e5ba0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4901F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4901F8u, _value); } while (0);
    // 0x1e5ba4: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1e5ba4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490200u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490200u, _value); } while (0);
    // 0x1e5ba8: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1e5ba8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490208u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490208u, _value); } while (0);
    // 0x1e5bac: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x1e5bacu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x49020Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x49020Cu, _value); } while (0);
    // 0x1e5bb0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x1e5bb0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490210u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490210u, _value); } while (0);
    // 0x1e5bb4: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x1e5bb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x490220u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x490220u, _value); } while (0);
    // 0x1e5bb8: 0xc0796ac  jal         func_1E5AB0
    ctx->pc = 0x1E5BB8u;
    SET_GPR_U32(ctx, 31, 0x1E5BC0u);
    ctx->pc = 0x1E5BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BB8u;
    // 0x1e5bbc: 0xae000048  sw          $zero, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5AB0u, 0x1E5BB8u, 0x1E5BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BC0u;
label_1e5bc0:
    // 0x1e5bc0: 0xc0797fe  jal         func_1E5FF8
    ctx->pc = 0x1E5BC0u;
    SET_GPR_U32(ctx, 31, 0x1E5BC8u);
    ctx->pc = 0x1E5BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BC0u;
    // 0x1e5bc4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E5FF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E5FF8u, 0x1E5BC0u, 0x1E5BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BC8u;
label_1e5bc8:
    // 0x1e5bc8: 0x504000a4  beql        $v0, $zero, . + 4 + (0xA4 << 2)
    ctx->pc = 0x1E5BC8u;
    {
        const bool branch_taken_0x1e5bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5bc8) {
            ctx->pc = 0x1E5BCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5BC8u;
            // 0x1e5bcc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E5Cu;
            goto label_1e5e5c;
        }
    }
    ctx->pc = 0x1E5BD0u;
    // 0x1e5bd0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E5BD0u;
    SET_GPR_U32(ctx, 31, 0x1E5BD8u);
    ctx->pc = 0x1E5BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BD0u;
    // 0x1e5bd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E5BD0u, 0x1E5BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BD8u;
label_1e5bd8:
    // 0x1e5bd8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1E5BD8u;
    SET_GPR_U32(ctx, 31, 0x1E5BE0u);
    ctx->pc = 0x1E5BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5BD8u;
    // 0x1e5bdc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1E5BD8u, 0x1E5BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5BE0u;
label_1e5be0:
    // 0x1e5be0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5be0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5be4: 0x12400040  beqz        $s2, . + 4 + (0x40 << 2)
    ctx->pc = 0x1E5BE4u;
    {
        const bool branch_taken_0x1e5be4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5BE4u;
        // 0x1e5be8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5be4) {
            ctx->pc = 0x1E5CE8u;
            goto label_1e5ce8;
        }
    }
    ctx->pc = 0x1E5BECu;
    // 0x1e5bec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1e5becu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5bf0: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x1e5bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x1e5bf4: 0x27a90010  addiu       $t1, $sp, 0x10
    ctx->pc = 0x1e5bf4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5bf8: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x1e5bf8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e5bfc: 0x8d4391dc  lw          $v1, -0x6E24($t2)
    ctx->pc = 0x1e5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3F91DCu));
label_1e5c00:
    // 0x1e5c00: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1e5c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1e5c04: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1e5c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e5c08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5c0c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1e5c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1e5c10: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x1e5c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x1e5c14: 0x50400031  beql        $v0, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x1E5C14u;
    {
        const bool branch_taken_0x1e5c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c14) {
            ctx->pc = 0x1E5C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C14u;
            // 0x1e5c18: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5C1Cu;
    // 0x1e5c1c: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1e5c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x1e5c20: 0x5040002e  beql        $v0, $zero, . + 4 + (0x2E << 2)
    ctx->pc = 0x1E5C20u;
    {
        const bool branch_taken_0x1e5c20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c20) {
            ctx->pc = 0x1E5C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C20u;
            // 0x1e5c24: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CDCu;
            goto label_1e5cdc;
        }
    }
    ctx->pc = 0x1E5C28u;
    // 0x1e5c28: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e5c28u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5c2c: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x1e5c2cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5c30: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e5c30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5c34: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e5c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5c38: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1e5c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5c3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e5c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5c40: 0xd9210000  lqc2        $vf1, 0x0($t1)
    ctx->pc = 0x1e5c40u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1e5c44: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1e5c44u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5c48: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1e5c48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5c4c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e5c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5c50: 0x54e00021  bnel        $a3, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1E5C50u;
    {
        const bool branch_taken_0x1e5c50 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5c50) {
            ctx->pc = 0x1E5C54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5C50u;
            // 0x1e5c54: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5CD8u;
            goto label_1e5cd8;
        }
    }
    ctx->pc = 0x1E5C58u;
    // 0x1e5c58: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1e5c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5c5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1e5c5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e5c60: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1e5c60u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5c64: 0xf90101d0  sqc2        $vf1, 0x1D0($t0)
    ctx->pc = 0x1e5c64u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5c68: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x1e5c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x1e5c6c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e5c6cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5c70: 0xf8a10010  sqc2        $vf1, 0x10($a1)
    ctx->pc = 0x1e5c70u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5c74: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1e5c74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1e5c78: 0xaca30024  sw          $v1, 0x24($a1)
    ctx->pc = 0x1e5c78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
    // 0x1e5c7c: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x1e5c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1e5c80: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x1e5c80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
    // 0x1e5c84: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x1e5c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x1e5c88: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x1e5c88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
    // 0x1e5c8c: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x1e5c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x1e5c90: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x1e5c90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x1e5c94: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x1e5c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x1e5c98: 0xaca30034  sw          $v1, 0x34($a1)
    ctx->pc = 0x1e5c98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 3));
    // 0x1e5c9c: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1e5c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1e5ca0: 0xaca20038  sw          $v0, 0x38($a1)
    ctx->pc = 0x1e5ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 2));
    // 0x1e5ca4: 0xc4800020  lwc1        $f0, 0x20($a0)
    ctx->pc = 0x1e5ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5ca8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x1e5ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x1e5cac: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e5cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e5cb0: 0xaca2003c  sw          $v0, 0x3C($a1)
    ctx->pc = 0x1e5cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 2));
    // 0x1e5cb4: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x1e5cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x1e5cb8: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x1e5cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
    // 0x1e5cbc: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x1e5cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1e5cc0: 0xaca20044  sw          $v0, 0x44($a1)
    ctx->pc = 0x1e5cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 2));
    // 0x1e5cc4: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x1e5cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x1e5cc8: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x1e5cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
    // 0x1e5ccc: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1e5cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1e5cd0: 0xaca20048  sw          $v0, 0x48($a1)
    ctx->pc = 0x1e5cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 2));
    // 0x1e5cd4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1e5cd8:
    // 0x1e5cd8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1e5cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1e5cdc:
    // 0x1e5cdc: 0xd2102b  sltu        $v0, $a2, $s2
    ctx->pc = 0x1e5cdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1e5ce0: 0x1440ffc7  bnez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x1E5CE0u;
    {
        const bool branch_taken_0x1e5ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CE0u;
        // 0x1e5ce4: 0x8d4391dc  lw          $v1, -0x6E24($t2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294939100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ce0) {
            ctx->pc = 0x1E5C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5c00;
        }
    }
    ctx->pc = 0x1E5CE8u;
label_1e5ce8:
    // 0x1e5ce8: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x1E5CE8u;
    {
        const bool branch_taken_0x1e5ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CE8u;
        // 0x1e5cec: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ce8) {
            ctx->pc = 0x1E5E5Cu;
            goto label_1e5e5c;
        }
    }
    ctx->pc = 0x1E5CF0u;
    // 0x1e5cf0: 0x6200006  bltz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5CF0u;
    {
        const bool branch_taken_0x1e5cf0 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1E5CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5CF0u;
        // 0x1e5cf4: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5cf0) {
            ctx->pc = 0x1E5D0Cu;
            goto label_1e5d0c;
        }
    }
    ctx->pc = 0x1E5CF8u;
    // 0x1e5cf8: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1e5cf8u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5cfc: 0x0  nop
    ctx->pc = 0x1e5cfcu;
    // NOP
    // 0x1e5d00: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5d04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5D04u;
    {
        const bool branch_taken_0x1e5d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d04) {
            ctx->pc = 0x1E5D24u;
            goto label_1e5d24;
        }
    }
    ctx->pc = 0x1E5D0Cu;
label_1e5d0c:
    // 0x1e5d0c: 0x111842  srl         $v1, $s1, 1
    ctx->pc = 0x1e5d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
    // 0x1e5d10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e5d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e5d14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5d14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5d18: 0x0  nop
    ctx->pc = 0x1e5d18u;
    // NOP
    // 0x1e5d1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5d20: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e5d20u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e5d24:
    // 0x1e5d24: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5d24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5d28: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5d2c: 0x0  nop
    ctx->pc = 0x1e5d2cu;
    // NOP
    // 0x1e5d30: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e5d30u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e5d34: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e5d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e5d38: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e5d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5d3c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5d3cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5d40: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e5d40u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5d44: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e5d44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5d48: 0x6220006  bltzl       $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1E5D48u;
    {
        const bool branch_taken_0x1e5d48 = (GPR_S32(ctx, 17) < 0);
        if (branch_taken_0x1e5d48) {
            ctx->pc = 0x1E5D4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5D48u;
            // 0x1e5d4c: 0x111842  srl         $v1, $s1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5D64u;
            goto label_1e5d64;
        }
    }
    ctx->pc = 0x1E5D50u;
    // 0x1e5d50: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1e5d50u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5d54: 0x0  nop
    ctx->pc = 0x1e5d54u;
    // NOP
    // 0x1e5d58: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5d58u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5d5c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5D5Cu;
    {
        const bool branch_taken_0x1e5d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e5d5c) {
            ctx->pc = 0x1E5D7Cu;
            goto label_1e5d7c;
        }
    }
    ctx->pc = 0x1E5D64u;
label_1e5d64:
    // 0x1e5d64: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x1e5d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1e5d68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1e5d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1e5d6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1e5d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5d70: 0x0  nop
    ctx->pc = 0x1e5d70u;
    // NOP
    // 0x1e5d74: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1e5d74u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1e5d78: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1e5d78u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1e5d7c:
    // 0x1e5d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1e5d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1e5d80: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1e5d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e5d84: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x1e5d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1e5d88: 0x0  nop
    ctx->pc = 0x1e5d88u;
    // NOP
    // 0x1e5d8c: 0x0  nop
    ctx->pc = 0x1e5d8cu;
    // NOP
    // 0x1e5d90: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1e5d90u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1e5d94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1e5d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1e5d98: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e5d98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5d9c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1e5d9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1e5da0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1e5da0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5da4: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1e5da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5da8: 0x266201d0  addiu       $v0, $s3, 0x1D0
    ctx->pc = 0x1e5da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 464));
    // 0x1e5dac: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1e5dacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5db0: 0xfa6101d0  sqc2        $vf1, 0x1D0($s3)
    ctx->pc = 0x1e5db0u;
    WRITE128(ADD32(GPR_U32(ctx, 19), 464), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5db4: 0x24440010  addiu       $a0, $v0, 0x10
    ctx->pc = 0x1e5db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e5db8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e5db8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5dbc: 0xf8410010  sqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1e5dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5dc0: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1e5dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5dc4: 0x3c013727  lui         $at, 0x3727
    ctx->pc = 0x1e5dc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14119 << 16));
    // 0x1e5dc8: 0x3421c5ac  ori         $at, $at, 0xC5AC
    ctx->pc = 0x1e5dc8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50604);
    // 0x1e5dcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e5dccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e5dd0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e5dd0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e5dd4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5dd4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5dd8: 0x0  nop
    ctx->pc = 0x1e5dd8u;
    // NOP
    // 0x1e5ddc: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x1E5DDCu;
    {
        const bool branch_taken_0x1e5ddc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E5DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5DDCu;
        // 0x1e5de0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5ddc) {
            ctx->pc = 0x1E5E14u;
            goto label_1e5e14;
        }
    }
    ctx->pc = 0x1E5DE4u;
    // 0x1e5de4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e5de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5de8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e5de8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e5dec: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5decu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5df0: 0x0  nop
    ctx->pc = 0x1e5df0u;
    // NOP
    // 0x1e5df4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5DF4u;
    {
        const bool branch_taken_0x1e5df4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5df4) {
            ctx->pc = 0x1E5E14u;
            goto label_1e5e14;
        }
    }
    ctx->pc = 0x1E5DFCu;
    // 0x1e5dfc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x1e5dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e5e00: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1e5e00u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1e5e04: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1e5e04u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e5e08: 0x0  nop
    ctx->pc = 0x1e5e08u;
    // NOP
    // 0x1e5e0c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E5E0Cu;
    {
        const bool branch_taken_0x1e5e0c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e5e0c) {
            ctx->pc = 0x1E5E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5E0Cu;
            // 0x1e5e10: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5E14u;
            goto label_1e5e14;
        }
    }
    ctx->pc = 0x1E5E14u;
label_1e5e14:
    // 0x1e5e14: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1E5E14u;
    {
        const bool branch_taken_0x1e5e14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E14u;
        // 0x1e5e18: 0x3c050049  lui         $a1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5e14) {
            ctx->pc = 0x1E5E34u;
            goto label_1e5e34;
        }
    }
    ctx->pc = 0x1E5E1Cu;
    // 0x1e5e1c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1e5e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1e5e20: 0x8c4491dc  lw          $a0, -0x6E24($v0)
    ctx->pc = 0x1e5e20u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F91DCu));
    // 0x1e5e24: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1e5e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1e5e28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1e5e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1e5e2c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1e5e2cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e5e30: 0xf8a101e0  sqc2        $vf1, 0x1E0($a1)
    ctx->pc = 0x1e5e30u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 480), _mm_castps_si128(ctx->vu0_vf[1]));
label_1e5e34:
    // 0x1e5e34: 0x24a201e0  addiu       $v0, $a1, 0x1E0
    ctx->pc = 0x1e5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 480));
    // 0x1e5e38: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1e5e38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e5e3c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x1e5e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5e40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x1e5e40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5e44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x1e5e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1e5e48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x1e5e48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1e5e4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1e5e4cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1e5e50: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x1e5e50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1e5e54: 0xf8a101e0  sqc2        $vf1, 0x1E0($a1)
    ctx->pc = 0x1e5e54u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 480), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1e5e58: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1e5e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1e5e5c:
    // 0x1e5e5c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1e5e5cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1e5e60: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1e5e60u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e5e64: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1e5e64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1e5e68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1e5e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e5e6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E5E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5E6Cu;
        // 0x1e5e70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E5E6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5E74u;
    // 0x1e5e74: 0x0  nop
    ctx->pc = 0x1e5e74u;
    // NOP
    // 0x1e5e78: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1e5e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1e5e7c: 0x0  nop
    ctx->pc = 0x1e5e7cu;
    // NOP
    // 0x1e5e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1e5e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1e5e84: 0x0  nop
    ctx->pc = 0x1e5e84u;
    // NOP
    ctx->pc = 0x1e5e88u;
}
