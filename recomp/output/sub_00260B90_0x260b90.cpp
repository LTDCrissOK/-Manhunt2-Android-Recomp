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

// Function: sub_00260B90
// Address: 0x260b90 - 0x260cc0
void sub_00260B90_0x260b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260B90_0x260b90");
#endif

    switch (ctx->pc) {
        case 0x260be8u: goto label_260be8;
        case 0x260bf4u: goto label_260bf4;
        default: break;
    }

    ctx->pc = 0x260b90u;

    // 0x260b90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x260b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x260b94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x260b98: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x260b98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x260b9c: 0x24429d08  addiu       $v0, $v0, -0x62F8
    ctx->pc = 0x260b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941960));
    // 0x260ba0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x260ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x260ba4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x260ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x260ba8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x260ba8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bac: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x260bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x260bb0: 0x24510008  addiu       $s1, $v0, 0x8
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x260bb4: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x260bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x260bb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x260bb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bbc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x260bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x260bc0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x260bc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bc4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x260bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x260bc8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x260bc8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bcc: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x260bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
    // 0x260bd0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x260bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260bd4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x260bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x260bd8: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x260bd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x260bdc: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x260be0: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x260be0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
    // 0x260be4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x260be4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_260be8:
    // 0x260be8: 0x8e25fffc  lw          $a1, -0x4($s1)
    ctx->pc = 0x260be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294967292)));
    // 0x260bec: 0xc0efb95  jal         func_3BEE54
    ctx->pc = 0x260BECu;
    SET_GPR_U32(ctx, 31, 0x260BF4u);
    ctx->pc = 0x260BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260BECu;
    // 0x260bf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEE54u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEE54u, 0x260BECu, 0x260BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BF4u;
label_260bf4:
    // 0x260bf4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x260BF4u;
    {
        const bool branch_taken_0x260bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260BF4u;
        // 0x260bf8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bf4) {
            ctx->pc = 0x260C84u;
            goto label_260c84;
        }
    }
    ctx->pc = 0x260BFCu;
    // 0x260bfc: 0xa3b60003  sb          $s6, 0x3($sp)
    ctx->pc = 0x260bfcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 22));
    // 0x260c00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x260c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260c04: 0xa3b30000  sb          $s3, 0x0($sp)
    ctx->pc = 0x260c04u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 19));
    // 0x260c08: 0xa3b40001  sb          $s4, 0x1($sp)
    ctx->pc = 0x260c08u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 20));
    // 0x260c0c: 0xa3b50002  sb          $s5, 0x2($sp)
    ctx->pc = 0x260c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 21));
    // 0x260c10: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x260c10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x260c14: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x260c14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x260c18: 0xaba30013  swl         $v1, 0x13($sp)
    ctx->pc = 0x260c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x260c1c: 0xbba30010  swr         $v1, 0x10($sp)
    ctx->pc = 0x260c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x260c20: 0x93a30010  lbu         $v1, 0x10($sp)
    ctx->pc = 0x260c20u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x260c24: 0x93a50011  lbu         $a1, 0x11($sp)
    ctx->pc = 0x260c24u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x260c28: 0x93a60012  lbu         $a2, 0x12($sp)
    ctx->pc = 0x260c28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x260c2c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x260c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x260c30: 0x0  nop
    ctx->pc = 0x260c30u;
    // NOP
    // 0x260c34: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x260c34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x260c38: 0x93a40013  lbu         $a0, 0x13($sp)
    ctx->pc = 0x260c38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x260c3c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x260c3cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x260c40: 0x0  nop
    ctx->pc = 0x260c40u;
    // NOP
    // 0x260c44: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x260c44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x260c48: 0x44861800  mtc1        $a2, $f3
    ctx->pc = 0x260c48u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x260c4c: 0x0  nop
    ctx->pc = 0x260c4cu;
    // NOP
    // 0x260c50: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x260c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x260c54: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x260c54u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x260c58: 0x0  nop
    ctx->pc = 0x260c58u;
    // NOP
    // 0x260c5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x260c5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x260c60: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x260c60u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x260c64: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x260c64u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x260c68: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x260c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x260c6c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x260c6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x260c70: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x260c70u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x260c74: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x260c74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x260c78: 0xe620000c  swc1        $f0, 0xC($s1)
    ctx->pc = 0x260c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
    // 0x260c7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x260C7Cu;
    {
        const bool branch_taken_0x260c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C7Cu;
        // 0x260c80: 0xe6230008  swc1        $f3, 0x8($s1) (Delay Slot)
        { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c7c) {
            ctx->pc = 0x260C94u;
            goto label_260c94;
        }
    }
    ctx->pc = 0x260C84u;
label_260c84:
    // 0x260c84: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x260c84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x260c88: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x260C88u;
    {
        const bool branch_taken_0x260c88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260C88u;
        // 0x260c8c: 0x26310018  addiu       $s1, $s1, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c88) {
            ctx->pc = 0x260BE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_260be8;
        }
    }
    ctx->pc = 0x260C90u;
    // 0x260c90: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x260c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260c94:
    // 0x260c94: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x260c94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x260c98: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x260c98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x260c9c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x260c9cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x260ca0: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x260ca0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x260ca4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x260ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x260ca8: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x260ca8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x260cac: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x260cacu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x260cb0: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x260cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x260cb4: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x260cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x260cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x260CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260CB8u;
        // 0x260cbc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260CC0u;
}
