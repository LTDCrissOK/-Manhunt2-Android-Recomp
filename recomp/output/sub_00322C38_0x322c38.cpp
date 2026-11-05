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

// Function: sub_00322C38
// Address: 0x322c38 - 0x322d68
void sub_00322C38_0x322c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322C38_0x322c38");
#endif

    switch (ctx->pc) {
        case 0x322c94u: goto label_322c94;
        case 0x322d08u: goto label_322d08;
        case 0x322d20u: goto label_322d20;
        default: break;
    }

    ctx->pc = 0x322c38u;

    // 0x322c38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x322c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x322c3c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x322c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x322c40: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x322c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x322c44: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x322c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x322c48: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x322c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c4c: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x322c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x322c50: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x322c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x322c54: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x322c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x322c58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x322c58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x322c5c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x322c5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x322c60: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x322c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x322c64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322c68: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322c6c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x322c6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x322c70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x322C70u;
    {
        const bool branch_taken_0x322c70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x322C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C70u;
        // 0x322c74: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c70) {
            ctx->pc = 0x322C80u;
            goto label_322c80;
        }
    }
    ctx->pc = 0x322C78u;
    // 0x322c78: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x322C78u;
    {
        const bool branch_taken_0x322c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322C78u;
        // 0x322c7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322c78) {
            ctx->pc = 0x322D3Cu;
            goto label_322d3c;
        }
    }
    ctx->pc = 0x322C80u;
label_322c80:
    // 0x322c80: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x322c80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x322c84: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x322c84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x322c88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x322c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x322c8c: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x322C8Cu;
    SET_GPR_U32(ctx, 31, 0x322C94u);
    ctx->pc = 0x322C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322C8Cu;
    // 0x322c90: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x322C8Cu, 0x322C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322C94u;
label_322c94:
    // 0x322c94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x322c94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322c98: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x322c98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322c9c: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x322c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x322ca0: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x322ca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x322ca4: 0x3421d70b  ori         $at, $at, 0xD70B
    ctx->pc = 0x322ca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55051);
    // 0x322ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x322ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x322cac: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x322cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x322cb0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x322cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x322cb4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x322cb4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x322cb8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x322cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322cbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x322cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x322cc0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x322cc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x322cc4: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x322cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322cc8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x322cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x322ccc: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x322cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x322cd0: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x322cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x322cd4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x322cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x322cd8: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x322cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x322cdc: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x322cdcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x322ce0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x322ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x322ce4: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x322ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x322ce8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322ce8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322cec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x322cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322cf0: 0x3842029a  xori        $v0, $v0, 0x29A
    ctx->pc = 0x322cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)666);
    // 0x322cf4: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x322cf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x322cf8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x322CF8u;
    {
        const bool branch_taken_0x322cf8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CF8u;
        // 0x322cfc: 0x3c150032  lui         $s5, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322cf8) {
            ctx->pc = 0x322D38u;
            goto label_322d38;
        }
    }
    ctx->pc = 0x322D00u;
    // 0x322d00: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322d04: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x322d04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_322d08:
    // 0x322d08: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x322d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d0c: 0x9611000c  lhu         $s1, 0xC($s0)
    ctx->pc = 0x322d0cu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x322d10: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x322d10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322d14: 0x26a72c30  addiu       $a3, $s5, 0x2C30
    ctx->pc = 0x322d14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), 11312));
    // 0x322d18: 0xc0c927c  jal         func_3249F0
    ctx->pc = 0x322D18u;
    SET_GPR_U32(ctx, 31, 0x322D20u);
    ctx->pc = 0x322D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322D18u;
    // 0x322d1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3249F0u, 0x322D18u, 0x322D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322D20u;
label_322d20:
    // 0x322d20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x322D20u;
    {
        const bool branch_taken_0x322d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D20u;
        // 0x322d24: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d20) {
            ctx->pc = 0x322D30u;
            goto label_322d30;
        }
    }
    ctx->pc = 0x322D28u;
    // 0x322d28: 0x2341004  sllv        $v0, $s4, $s1
    ctx->pc = 0x322d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 17) & 0x1F));
    // 0x322d2c: 0x2629825  or          $s3, $s3, $v0
    ctx->pc = 0x322d2cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_322d30:
    // 0x322d30: 0x5600fff5  bnel        $s0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x322D30u;
    {
        const bool branch_taken_0x322d30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x322d30) {
            ctx->pc = 0x322D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x322D30u;
            // 0x322d34: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x322D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d08;
        }
    }
    ctx->pc = 0x322D38u;
label_322d38:
    // 0x322d38: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x322d38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_322d3c:
    // 0x322d3c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x322d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x322d40: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x322d40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x322d44: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x322d44u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x322d48: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x322d48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x322d4c: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x322d4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x322d50: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x322d50u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x322d54: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x322d54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x322d58: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x322d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x322d5c: 0x3e00008  jr          $ra
    ctx->pc = 0x322D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x322D64u;
    // 0x322d64: 0x0  nop
    ctx->pc = 0x322d64u;
    // NOP
    ctx->pc = 0x322d68u;
}
