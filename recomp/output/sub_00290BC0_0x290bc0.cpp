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

// Function: sub_00290BC0
// Address: 0x290bc0 - 0x290cd0
void sub_00290BC0_0x290bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290BC0_0x290bc0");
#endif

    switch (ctx->pc) {
        case 0x290bf4u: goto label_290bf4;
        case 0x290bfcu: goto label_290bfc;
        case 0x290c0cu: goto label_290c0c;
        case 0x290c40u: goto label_290c40;
        case 0x290c78u: goto label_290c78;
        default: break;
    }

    ctx->pc = 0x290bc0u;

    // 0x290bc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x290bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x290bc4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x290bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x290bc8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x290bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x290bcc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x290bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290bd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x290bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x290bd4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x290bd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290bd8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x290bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x290bdc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x290bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290be0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x290be0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x290be4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x290be4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290be8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x290be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x290bec: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x290BECu;
    SET_GPR_U32(ctx, 31, 0x290BF4u);
    ctx->pc = 0x290BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BECu;
    // 0x290bf0: 0x240401e8  addiu       $a0, $zero, 0x1E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x290BECu, 0x290BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BF4u;
label_290bf4:
    // 0x290bf4: 0xc0a42a6  jal         func_290A98
    ctx->pc = 0x290BF4u;
    SET_GPR_U32(ctx, 31, 0x290BFCu);
    ctx->pc = 0x290BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290BF4u;
    // 0x290bf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290A98u, 0x290BF4u, 0x290BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290BFCu;
label_290bfc:
    // 0x290bfc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x290bfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c00: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x290c00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c04: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x290C04u;
    SET_GPR_U32(ctx, 31, 0x290C0Cu);
    ctx->pc = 0x290C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C04u;
    // 0x290c08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x290C04u, 0x290C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C0Cu;
label_290c0c:
    // 0x290c0c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x290c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c10: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x290c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x290c14: 0x24a54ec0  addiu       $a1, $a1, 0x4EC0
    ctx->pc = 0x290c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20160));
    // 0x290c18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c1c: 0xe6610018  swc1        $f1, 0x18($s3)
    ctx->pc = 0x290c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 24), bits); }
    // 0x290c20: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x290c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c24: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x290c24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x290c28: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x290c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x290c2c: 0xe6610078  swc1        $f1, 0x78($s3)
    ctx->pc = 0x290c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
    // 0x290c30: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x290c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c34: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x290c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
    // 0x290c38: 0xc0a42c4  jal         func_290B10
    ctx->pc = 0x290C38u;
    SET_GPR_U32(ctx, 31, 0x290C40u);
    ctx->pc = 0x290C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x290C38u;
    // 0x290c3c: 0x8e460000  lw          $a2, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290B10u, 0x290C38u, 0x290C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C40u;
label_290c40:
    // 0x290c40: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x290c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c44: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x290c44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x290c48: 0x0  nop
    ctx->pc = 0x290c48u;
    // NOP
    // 0x290c4c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x290c4cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290c50: 0x0  nop
    ctx->pc = 0x290c50u;
    // NOP
    // 0x290c54: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x290C54u;
    {
        const bool branch_taken_0x290c54 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290c54) {
            ctx->pc = 0x290C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C54u;
            // 0x290c58: 0xe6600020  swc1        $f0, 0x20($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 32), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x290C5Cu;
            goto label_290c5c;
        }
    }
    ctx->pc = 0x290C5Cu;
label_290c5c:
    // 0x290c5c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x290c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x290c60: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x290c60u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x290c64: 0x0  nop
    ctx->pc = 0x290c64u;
    // NOP
    // 0x290c68: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x290C68u;
    {
        const bool branch_taken_0x290c68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x290c68) {
            ctx->pc = 0x290C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x290C68u;
            // 0x290c6c: 0xe6600024  swc1        $f0, 0x24($s3) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 36), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x290C70u;
            goto label_290c70;
        }
    }
    ctx->pc = 0x290C70u;
label_290c70:
    // 0x290c70: 0xc0a57e2  jal         func_295F88
    ctx->pc = 0x290C70u;
    SET_GPR_U32(ctx, 31, 0x290C78u);
    ctx->pc = 0x295F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F88u, 0x290C70u, 0x290C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x290C78u;
label_290c78:
    // 0x290c78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x290c78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x290c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x290c80: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x290c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x290c84: 0x32e3a  dsrl        $a1, $v1, 24
    ctx->pc = 0x290c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) >> 24);
    // 0x290c88: 0x3243a  dsrl        $a0, $v1, 16
    ctx->pc = 0x290c88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 16);
    // 0x290c8c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x290c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x290c90: 0xa3a40002  sb          $a0, 0x2($sp)
    ctx->pc = 0x290c90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 4));
    // 0x290c94: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x290c94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290c98: 0xa3a50003  sb          $a1, 0x3($sp)
    ctx->pc = 0x290c98u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x290c9c: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x290c9cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x290ca0: 0x8ba30003  lwl         $v1, 0x3($sp)
    ctx->pc = 0x290ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x290ca4: 0x9ba30000  lwr         $v1, 0x0($sp)
    ctx->pc = 0x290ca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x290ca8: 0xaa630017  swl         $v1, 0x17($s3)
    ctx->pc = 0x290ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x290cac: 0xba630014  swr         $v1, 0x14($s3)
    ctx->pc = 0x290cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x290cb0: 0xa260006c  sb          $zero, 0x6C($s3)
    ctx->pc = 0x290cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 108), (uint8_t)GPR_U32(ctx, 0));
    // 0x290cb4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x290cb4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x290cb8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x290cb8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x290cbc: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x290cbcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x290cc0: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x290cc0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290cc4: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x290cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x290cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x290CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x290CC8u;
        // 0x290ccc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x290CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x290CD0u;
}
