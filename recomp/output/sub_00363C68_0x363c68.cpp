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

// Function: sub_00363C68
// Address: 0x363c68 - 0x363d68
void sub_00363C68_0x363c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363C68_0x363c68");
#endif

    switch (ctx->pc) {
        case 0x363c94u: goto label_363c94;
        default: break;
    }

    ctx->pc = 0x363c68u;

    // 0x363c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x363c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x363c6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x363c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x363c70: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x363c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x363c74: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x363c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x363c78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x363c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x363c7c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x363c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x363c80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x363c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x363c84: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x363C84u;
    {
        const bool branch_taken_0x363c84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x363c84) {
            ctx->pc = 0x363C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363C84u;
            // 0x363c88: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363C9Cu;
            goto label_363c9c;
        }
    }
    ctx->pc = 0x363C8Cu;
    // 0x363c8c: 0xc0d8e14  jal         func_363850
    ctx->pc = 0x363C8Cu;
    SET_GPR_U32(ctx, 31, 0x363C94u);
    ctx->pc = 0x363C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x363C8Cu;
    // 0x363c90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363850u, 0x363C8Cu, 0x363C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x363C94u;
label_363c94:
    // 0x363c94: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x363C94u;
    {
        const bool branch_taken_0x363c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363C94u;
        // 0x363c98: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363c94) {
            ctx->pc = 0x363D58u;
            goto label_363d58;
        }
    }
    ctx->pc = 0x363C9Cu;
label_363c9c:
    // 0x363c9c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x363c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x363ca0: 0x8c430418  lw          $v1, 0x418($v0)
    ctx->pc = 0x363ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
    // 0x363ca4: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x363CA4u;
    {
        const bool branch_taken_0x363ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x363CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CA4u;
        // 0x363ca8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363ca4) {
            ctx->pc = 0x363CBCu;
            goto label_363cbc;
        }
    }
    ctx->pc = 0x363CACu;
    // 0x363cac: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x363cacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x363cb0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x363cb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x363cb4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x363CB4u;
    {
        const bool branch_taken_0x363cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CB4u;
        // 0x363cb8: 0x8cc30104  lw          $v1, 0x104($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cb4) {
            ctx->pc = 0x363D0Cu;
            goto label_363d0c;
        }
    }
    ctx->pc = 0x363CBCu;
label_363cbc:
    // 0x363cbc: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x363cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x363cc0: 0x10a0000f  beqz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x363CC0u;
    {
        const bool branch_taken_0x363cc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x363CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CC0u;
        // 0x363cc4: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cc0) {
            ctx->pc = 0x363D00u;
            goto label_363d00;
        }
    }
    ctx->pc = 0x363CC8u;
    // 0x363cc8: 0x8cc20334  lw          $v0, 0x334($a2)
    ctx->pc = 0x363cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 820)));
    // 0x363ccc: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x363cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x363cd0: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x363CD0u;
    {
        const bool branch_taken_0x363cd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x363cd0) {
            ctx->pc = 0x363CD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x363CD0u;
            // 0x363cd4: 0x8cc30104  lw          $v1, 0x104($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x363D04u;
            goto label_363d04;
        }
    }
    ctx->pc = 0x363CD8u;
    // 0x363cd8: 0xc4a10030  lwc1        $f1, 0x30($a1)
    ctx->pc = 0x363cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363cdc: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x363cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x363ce0: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x363ce0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x363ce4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x363ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363ce8: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x363ce8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x363cec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x363cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363cf0: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x363cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x363cf4: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x363cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363cf8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x363CF8u;
    {
        const bool branch_taken_0x363cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x363CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363CF8u;
        // 0x363cfc: 0xe600000c  swc1        $f0, 0xC($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x363cf8) {
            ctx->pc = 0x363D54u;
            goto label_363d54;
        }
    }
    ctx->pc = 0x363D00u;
label_363d00:
    // 0x363d00: 0x8cc30104  lw          $v1, 0x104($a2)
    ctx->pc = 0x363d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 260)));
label_363d04:
    // 0x363d04: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x363d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x363d08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x363d08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_363d0c:
    // 0x363d0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x363d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x363d10: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x363d10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x363d14: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x363d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x363d18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x363d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x363d1c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x363d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x363d20: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x363d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x363d24: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x363d24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x363d28: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x363d28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x363d2c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x363d2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x363d30: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x363d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x363d34: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x363d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x363d38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x363d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x363d3c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x363d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x363d40: 0xc7a3001c  lwc1        $f3, 0x1C($sp)
    ctx->pc = 0x363d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x363d44: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x363d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x363d48: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x363d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x363d4c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x363d4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x363d50: 0xe603000c  swc1        $f3, 0xC($s0)
    ctx->pc = 0x363d50u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_363d54:
    // 0x363d54: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x363d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_363d58:
    // 0x363d58: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x363d58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x363d5c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x363d5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x363d60: 0x3e00008  jr          $ra
    ctx->pc = 0x363D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x363D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x363D60u;
        // 0x363d64: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x363D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x363D68u;
}
