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

// Function: sub_00267E60
// Address: 0x267e60 - 0x267f78
void sub_00267E60_0x267e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00267E60_0x267e60");
#endif

    switch (ctx->pc) {
        case 0x267e74u: goto label_267e74;
        case 0x267f4cu: goto label_267f4c;
        case 0x267f54u: goto label_267f54;
        case 0x267f5cu: goto label_267f5c;
        case 0x267f64u: goto label_267f64;
        default: break;
    }

    ctx->pc = 0x267e60u;

    // 0x267e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x267e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x267e64: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x267e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x267e68: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x267e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x267e6c: 0xc099e8c  jal         func_267A30
    ctx->pc = 0x267E6Cu;
    SET_GPR_U32(ctx, 31, 0x267E74u);
    ctx->pc = 0x267E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267E6Cu;
    // 0x267e70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267A30u, 0x267E6Cu, 0x267E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267E74u;
label_267e74:
    // 0x267e74: 0x92020293  lbu         $v0, 0x293($s0)
    ctx->pc = 0x267e74u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 659)));
    // 0x267e78: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x267E78u;
    {
        const bool branch_taken_0x267e78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E78u;
        // 0x267e7c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e78) {
            ctx->pc = 0x267F3Cu;
            goto label_267f3c;
        }
    }
    ctx->pc = 0x267E80u;
    // 0x267e80: 0x8e040220  lw          $a0, 0x220($s0)
    ctx->pc = 0x267e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x267e84: 0x8e0202a4  lw          $v0, 0x2A4($s0)
    ctx->pc = 0x267e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 676)));
    // 0x267e88: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x267e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x267e8c: 0x90a3bd24  lbu         $v1, -0x42DC($a1)
    ctx->pc = 0x267e8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 4294950180)));
    // 0x267e90: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x267E90u;
    {
        const bool branch_taken_0x267e90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267E90u;
        // 0x267e94: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267e90) {
            ctx->pc = 0x267F44u;
            goto label_267f44;
        }
    }
    ctx->pc = 0x267E98u;
    // 0x267e98: 0x8d079dbc  lw          $a3, -0x6244($t0)
    ctx->pc = 0x267e98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294942140)));
    // 0x267e9c: 0x2ce20014  sltiu       $v0, $a3, 0x14
    ctx->pc = 0x267e9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x267ea0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x267EA0u;
    {
        const bool branch_taken_0x267ea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267EA0u;
        // 0x267ea4: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267ea0) {
            ctx->pc = 0x267F44u;
            goto label_267f44;
        }
    }
    ctx->pc = 0x267EA8u;
    // 0x267ea8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x267ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x267eac: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x267eacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x267eb0: 0x2442ae30  addiu       $v0, $v0, -0x51D0
    ctx->pc = 0x267eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946352));
    // 0x267eb4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x267eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x267eb8: 0x8c65bd48  lw          $a1, -0x42B8($v1)
    ctx->pc = 0x267eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950216)));
    // 0x267ebc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x267ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x267ec0: 0x8e040104  lw          $a0, 0x104($s0)
    ctx->pc = 0x267ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x267ec4: 0x8ca30100  lw          $v1, 0x100($a1)
    ctx->pc = 0x267ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 256)));
    // 0x267ec8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x267ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x267ecc: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x267eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x267ed0: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x267ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x267ed4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x267ed4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x267ed8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x267ed8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x267edc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x267edcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x267ee0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x267ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x267ee4: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x267ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x267ee8: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x267ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x267eec: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x267eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267ef0: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x267ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x267ef4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x267ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x267ef8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x267ef8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x267efc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x267efcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x267f00: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x267f00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x267f04: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x267f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x267f08: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x267f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x267f0c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x267f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x267f10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x267f10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x267f14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x267f14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x267f18: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x267f18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x267f1c: 0x46000004  c1          0x4
    ctx->pc = 0x267f1cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x267f20: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x267f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x267f24: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x267f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x267f28: 0x2442ae80  addiu       $v0, $v0, -0x5180
    ctx->pc = 0x267f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946432));
    // 0x267f2c: 0xad039dbc  sw          $v1, -0x6244($t0)
    ctx->pc = 0x267f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294942140), GPR_U32(ctx, 3));
    // 0x267f30: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x267f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x267f34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267F34u;
    {
        const bool branch_taken_0x267f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F34u;
        // 0x267f38: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x267f34) {
            ctx->pc = 0x267F44u;
            goto label_267f44;
        }
    }
    ctx->pc = 0x267F3Cu;
label_267f3c:
    // 0x267f3c: 0x8e020220  lw          $v0, 0x220($s0)
    ctx->pc = 0x267f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
    // 0x267f40: 0xac400028  sw          $zero, 0x28($v0)
    ctx->pc = 0x267f40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 0));
label_267f44:
    // 0x267f44: 0xc09a26a  jal         func_2689A8
    ctx->pc = 0x267F44u;
    SET_GPR_U32(ctx, 31, 0x267F4Cu);
    ctx->pc = 0x267F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F44u;
    // 0x267f48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2689A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2689A8u, 0x267F44u, 0x267F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F4Cu;
label_267f4c:
    // 0x267f4c: 0xc09a2c0  jal         func_268B00
    ctx->pc = 0x267F4Cu;
    SET_GPR_U32(ctx, 31, 0x267F54u);
    ctx->pc = 0x267F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F4Cu;
    // 0x267f50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268B00u, 0x267F4Cu, 0x267F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F54u;
label_267f54:
    // 0x267f54: 0xc09a200  jal         func_268800
    ctx->pc = 0x267F54u;
    SET_GPR_U32(ctx, 31, 0x267F5Cu);
    ctx->pc = 0x268800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268800u, 0x267F54u, 0x267F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F5Cu;
label_267f5c:
    // 0x267f5c: 0xc084048  jal         func_210120
    ctx->pc = 0x267F5Cu;
    SET_GPR_U32(ctx, 31, 0x267F64u);
    ctx->pc = 0x267F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267F5Cu;
    // 0x267f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210120u, 0x267F5Cu, 0x267F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267F64u;
label_267f64:
    // 0x267f64: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x267f64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267f68: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x267f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x267f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x267F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x267F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267F6Cu;
        // 0x267f70: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x267F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x267F74u;
    // 0x267f74: 0x0  nop
    ctx->pc = 0x267f74u;
    // NOP
    ctx->pc = 0x267f78u;
}
