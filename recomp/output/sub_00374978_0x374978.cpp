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

// Function: sub_00374978
// Address: 0x374978 - 0x374a50
void sub_00374978_0x374978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374978_0x374978");
#endif

    switch (ctx->pc) {
        case 0x3749b0u: goto label_3749b0;
        case 0x3749bcu: goto label_3749bc;
        case 0x3749d4u: goto label_3749d4;
        case 0x3749ecu: goto label_3749ec;
        case 0x374a1cu: goto label_374a1c;
        case 0x374a2cu: goto label_374a2c;
        default: break;
    }

    ctx->pc = 0x374978u;

    // 0x374978: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x374978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37497c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37497cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x374980: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x374980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x374984: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x374984u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x374988: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x374988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37498c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x37498cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x374990: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x374990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x374994: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x374994u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x374998: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x374998u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37499c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x37499cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x3749a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3749a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3749a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3749a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3749a8: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x3749A8u;
    SET_GPR_U32(ctx, 31, 0x3749B0u);
    ctx->pc = 0x3749ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749A8u;
    // 0x3749ac: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x3749A8u, 0x3749B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749B0u;
label_3749b0:
    // 0x3749b0: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x3749b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3749b4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x3749B4u;
    SET_GPR_U32(ctx, 31, 0x3749BCu);
    ctx->pc = 0x3749B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749B4u;
    // 0x3749b8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x3749B4u, 0x3749BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749BCu;
label_3749bc:
    // 0x3749bc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x3749bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3749c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3749c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3749c4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x3749c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3749c8: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x3749c8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3749cc: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x3749CCu;
    SET_GPR_U32(ctx, 31, 0x3749D4u);
    ctx->pc = 0x3749D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749CCu;
    // 0x3749d0: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x3749CCu, 0x3749D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749D4u;
label_3749d4:
    // 0x3749d4: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x3749d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3749d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3749d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3749dc: 0xc62c0004  lwc1        $f12, 0x4($s1)
    ctx->pc = 0x3749dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3749e0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x3749e0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x3749e4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x3749E4u;
    SET_GPR_U32(ctx, 31, 0x3749ECu);
    ctx->pc = 0x3749E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3749E4u;
    // 0x3749e8: 0x46146301  sub.s       $f12, $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x3749E4u, 0x3749ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3749ECu;
label_3749ec:
    // 0x3749ec: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x3749ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x3749f0: 0x12903c  dsll32      $s2, $s2, 0
    ctx->pc = 0x3749f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3749f4: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x3749f4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3749f8: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3749f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3749fc: 0x10843a  dsrl        $s0, $s0, 16
    ctx->pc = 0x3749fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 16);
    // 0x374a00: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x374a00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x374a04: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x374a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x374a08: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x374a08u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x374a0c: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x374A0Cu;
    {
        const bool branch_taken_0x374a0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x374A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A0Cu;
        // 0x374a10: 0x532825  or          $a1, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a0c) {
            ctx->pc = 0x374A24u;
            goto label_374a24;
        }
    }
    ctx->pc = 0x374A14u;
    // 0x374a14: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x374A14u;
    SET_GPR_U32(ctx, 31, 0x374A1Cu);
    ctx->pc = 0x374A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A14u;
    // 0x374a18: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x374A14u, 0x374A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A1Cu;
label_374a1c:
    // 0x374a1c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x374A1Cu;
    {
        const bool branch_taken_0x374a1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A1Cu;
        // 0x374a20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374a1c) {
            ctx->pc = 0x374A30u;
            goto label_374a30;
        }
    }
    ctx->pc = 0x374A24u;
label_374a24:
    // 0x374a24: 0xc0dd83c  jal         func_3760F0
    ctx->pc = 0x374A24u;
    SET_GPR_U32(ctx, 31, 0x374A2Cu);
    ctx->pc = 0x374A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374A24u;
    // 0x374a28: 0x24040041  addiu       $a0, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3760F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3760F0u, 0x374A24u, 0x374A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374A2Cu;
label_374a2c:
    // 0x374a2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x374a2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_374a30:
    // 0x374a30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x374a30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x374a34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x374a34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x374a38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x374a38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x374a3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x374a3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x374a40: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x374a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x374a44: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x374a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x374a48: 0x3e00008  jr          $ra
    ctx->pc = 0x374A48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374A48u;
        // 0x374a4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x374A48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374A50u;
}
