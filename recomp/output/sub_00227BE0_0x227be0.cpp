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

// Function: sub_00227BE0
// Address: 0x227be0 - 0x227c60
void sub_00227BE0_0x227be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227BE0_0x227be0");
#endif

    switch (ctx->pc) {
        case 0x227bfcu: goto label_227bfc;
        case 0x227c08u: goto label_227c08;
        case 0x227c18u: goto label_227c18;
        default: break;
    }

    ctx->pc = 0x227be0u;

    // 0x227be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x227be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x227be4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x227be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x227be8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x227be8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227bec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x227becu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x227bf0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x227bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x227bf4: 0xc08a1f2  jal         func_2287C8
    ctx->pc = 0x227BF4u;
    SET_GPR_U32(ctx, 31, 0x227BFCu);
    ctx->pc = 0x227BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227BF4u;
    // 0x227bf8: 0x240503e9  addiu       $a1, $zero, 0x3E9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1001));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2287C8u, 0x227BF4u, 0x227BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227BFCu;
label_227bfc:
    // 0x227bfc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x227bfcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227c00: 0xc0f70ce  jal         func_3DC338
    ctx->pc = 0x227C00u;
    SET_GPR_U32(ctx, 31, 0x227C08u);
    ctx->pc = 0x227C04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C00u;
    // 0x227c04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x227C00u, 0x227C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C08u;
label_227c08:
    // 0x227c08: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227C08u;
    {
        const bool branch_taken_0x227c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x227C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C08u;
        // 0x227c0c: 0x260200a0  addiu       $v0, $s0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x227c08) {
            ctx->pc = 0x227C1Cu;
            goto label_227c1c;
        }
    }
    ctx->pc = 0x227C10u;
    // 0x227c10: 0xc0c4900  jal         func_312400
    ctx->pc = 0x227C10u;
    SET_GPR_U32(ctx, 31, 0x227C18u);
    ctx->pc = 0x227C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x227C10u;
    // 0x227c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x227C10u, 0x227C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227C18u;
label_227c18:
    // 0x227c18: 0x260200a0  addiu       $v0, $s0, 0xA0
    ctx->pc = 0x227c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
label_227c1c:
    // 0x227c1c: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x227c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x227c20: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x227c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x227c24: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x227c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x227c28: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x227c28u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x227c2c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x227c2cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x227c30: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x227c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x227c34: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x227c34u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x227c38: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x227c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x227c3c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x227c3cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x227c40: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x227c40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x227c44: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x227c44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227c48: 0xfa210000  sqc2        $vf1, 0x0($s1)
    ctx->pc = 0x227c48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x227c4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x227c4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227c50: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x227c50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x227c54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x227c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x227c58: 0x3e00008  jr          $ra
    ctx->pc = 0x227C58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x227C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x227C58u;
        // 0x227c5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227C58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227C60u;
}
