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

// Function: sub_002C29E8
// Address: 0x2c29e8 - 0x2c2ac8
void sub_002C29E8_0x2c29e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C29E8_0x2c29e8");
#endif

    switch (ctx->pc) {
        case 0x2c2a24u: goto label_2c2a24;
        case 0x2c2a2cu: goto label_2c2a2c;
        case 0x2c2a5cu: goto label_2c2a5c;
        case 0x2c2a6cu: goto label_2c2a6c;
        case 0x2c2a74u: goto label_2c2a74;
        case 0x2c2a8cu: goto label_2c2a8c;
        case 0x2c2a98u: goto label_2c2a98;
        default: break;
    }

    ctx->pc = 0x2c29e8u;

    // 0x2c29e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2c29e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2c29ec: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2c29ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2c29f0: 0xffb10048  sd          $s1, 0x48($sp)
    ctx->pc = 0x2c29f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 17));
    // 0x2c29f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2c29f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29f8: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2c29f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2c29fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c29fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a00: 0xffb30058  sd          $s3, 0x58($sp)
    ctx->pc = 0x2c2a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 19));
    // 0x2c2a04: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c2a04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a08: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x2c2a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x2c2a0c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2c2a0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a10: 0xffbf0068  sd          $ra, 0x68($sp)
    ctx->pc = 0x2c2a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 31));
    // 0x2c2a14: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x2C2A14u;
    {
        const bool branch_taken_0x2c2a14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A14u;
        // 0x2c2a18: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a14) {
            ctx->pc = 0x2C2AA0u;
            goto label_2c2aa0;
        }
    }
    ctx->pc = 0x2C2A1Cu;
    // 0x2c2a1c: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C2A1Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A24u);
    ctx->pc = 0x2C2A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A1Cu;
    // 0x2c2a20: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C2A1Cu, 0x2C2A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A24u;
label_2c2a24:
    // 0x2c2a24: 0xc0b1488  jal         func_2C5220
    ctx->pc = 0x2C2A24u;
    SET_GPR_U32(ctx, 31, 0x2C2A2Cu);
    ctx->pc = 0x2C2A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A24u;
    // 0x2c2a28: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x2C2A24u, 0x2C2A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A2Cu;
label_2c2a2c:
    // 0x2c2a2c: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x2c2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c2a30: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c2a30u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a34: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2c2a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c2a38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2c2a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a3c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2c2a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2c2a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a44: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x2c2a44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2c2a48: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2c2a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a4c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x2c2a4cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2c2a50: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c2a50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a54: 0xc0b0a4c  jal         func_2C2930
    ctx->pc = 0x2C2A54u;
    SET_GPR_U32(ctx, 31, 0x2C2A5Cu);
    ctx->pc = 0x2C2A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A54u;
    // 0x2c2a58: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2930u, 0x2C2A54u, 0x2C2A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A5Cu;
label_2c2a5c:
    // 0x2c2a5c: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2A5Cu;
    {
        const bool branch_taken_0x2c2a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2a5c) {
            ctx->pc = 0x2C2A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C2A5Cu;
            // 0x2c2a60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C2AA4u;
            goto label_2c2aa4;
        }
    }
    ctx->pc = 0x2C2A64u;
    // 0x2c2a64: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x2C2A64u;
    SET_GPR_U32(ctx, 31, 0x2C2A6Cu);
    ctx->pc = 0x2C2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A64u;
    // 0x2c2a68: 0x24040090  addiu       $a0, $zero, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x2C2A64u, 0x2C2A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A6Cu;
label_2c2a6c:
    // 0x2c2a6c: 0xc0b0e7e  jal         func_2C39F8
    ctx->pc = 0x2C2A6Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A74u);
    ctx->pc = 0x2C2A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A6Cu;
    // 0x2c2a70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39F8u, 0x2C2A6Cu, 0x2C2A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A74u;
label_2c2a74:
    // 0x2c2a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c2a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c2a78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a7c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c2a7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c2a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2a84: 0xc0b0f66  jal         func_2C3D98
    ctx->pc = 0x2C2A84u;
    SET_GPR_U32(ctx, 31, 0x2C2A8Cu);
    ctx->pc = 0x2C2A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A84u;
    // 0x2c2a88: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3D98u, 0x2C2A84u, 0x2C2A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A8Cu;
label_2c2a8c:
    // 0x2c2a8c: 0x2684000c  addiu       $a0, $s4, 0xC
    ctx->pc = 0x2c2a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x2c2a90: 0xc0b0596  jal         func_2C1658
    ctx->pc = 0x2C2A90u;
    SET_GPR_U32(ctx, 31, 0x2C2A98u);
    ctx->pc = 0x2C2A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C2A90u;
    // 0x2c2a94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C1658u, 0x2C2A90u, 0x2C2A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C2A98u;
label_2c2a98:
    // 0x2c2a98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2C2A98u;
    {
        const bool branch_taken_0x2c2a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2A98u;
        // 0x2c2a9c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a98) {
            ctx->pc = 0x2C2AA4u;
            goto label_2c2aa4;
        }
    }
    ctx->pc = 0x2C2AA0u;
label_2c2aa0:
    // 0x2c2aa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c2aa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c2aa4:
    // 0x2c2aa4: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2c2aa4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2aa8: 0xdfb10048  ld          $s1, 0x48($sp)
    ctx->pc = 0x2c2aa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c2aac: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2c2aacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2ab0: 0xdfb30058  ld          $s3, 0x58($sp)
    ctx->pc = 0x2c2ab0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2c2ab4: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2c2ab4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2ab8: 0xdfbf0068  ld          $ra, 0x68($sp)
    ctx->pc = 0x2c2ab8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2c2abc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2ABCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C2ABCu;
        // 0x2c2ac0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C2ABCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C2AC4u;
    // 0x2c2ac4: 0x0  nop
    ctx->pc = 0x2c2ac4u;
    // NOP
    ctx->pc = 0x2c2ac8u;
}
