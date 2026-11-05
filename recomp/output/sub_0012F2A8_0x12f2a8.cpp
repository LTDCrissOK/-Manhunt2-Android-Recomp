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

// Function: sub_0012F2A8
// Address: 0x12f2a8 - 0x12f330
void sub_0012F2A8_0x12f2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F2A8_0x12f2a8");
#endif

    switch (ctx->pc) {
        case 0x12f2c8u: goto label_12f2c8;
        case 0x12f2d8u: goto label_12f2d8;
        case 0x12f2ecu: goto label_12f2ec;
        case 0x12f2f8u: goto label_12f2f8;
        case 0x12f30cu: goto label_12f30c;
        default: break;
    }

    ctx->pc = 0x12f2a8u;

    // 0x12f2a8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f2ac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f2acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f2b0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f2bc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f2c0: 0xc04bcf6  jal         func_12F3D8
    ctx->pc = 0x12F2C0u;
    SET_GPR_U32(ctx, 31, 0x12F2C8u);
    ctx->pc = 0x12F2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2C0u;
    // 0x12f2c4: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F3D8u, 0x12F2C0u, 0x12F2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2C8u;
label_12f2c8:
    // 0x12f2c8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F2C8u;
    {
        const bool branch_taken_0x12f2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F2C8u;
        // 0x12f2cc: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f2c8) {
            ctx->pc = 0x12F310u;
            goto label_12f310;
        }
    }
    ctx->pc = 0x12F2D0u;
    // 0x12f2d0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F2D0u;
    SET_GPR_U32(ctx, 31, 0x12F2D8u);
    ctx->pc = 0x12F2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2D0u;
    // 0x12f2d4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F2D0u, 0x12F2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2D8u;
label_12f2d8:
    // 0x12f2d8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f2dc: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x12f2dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x12f2e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f2e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f2e4: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x12F2E4u;
    SET_GPR_U32(ctx, 31, 0x12F2ECu);
    ctx->pc = 0x12F2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2E4u;
    // 0x12f2e8: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x12F2E4u, 0x12F2ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2ECu;
label_12f2ec:
    // 0x12f2ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f2ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f2f0: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x12F2F0u;
    SET_GPR_U32(ctx, 31, 0x12F2F8u);
    ctx->pc = 0x12F2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F2F0u;
    // 0x12f2f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x12F2F0u, 0x12F2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F2F8u;
label_12f2f8:
    // 0x12f2f8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12f2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12f2fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f2fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f300: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x12f300u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x12f304: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F304u;
    SET_GPR_U32(ctx, 31, 0x12F30Cu);
    ctx->pc = 0x12F308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F304u;
    // 0x12f308: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F304u, 0x12F30Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F30Cu;
label_12f30c:
    // 0x12f30c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12f30cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f310:
    // 0x12f310: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12f310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f314: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f318: 0x3e00008  jr          $ra
    ctx->pc = 0x12F318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F318u;
        // 0x12f31c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F320u;
    // 0x12f320: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x12f320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12f324: 0x0  nop
    ctx->pc = 0x12f324u;
    // NOP
    // 0x12f328: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x12f328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x12f32c: 0x0  nop
    ctx->pc = 0x12f32cu;
    // NOP
    ctx->pc = 0x12f330u;
}
