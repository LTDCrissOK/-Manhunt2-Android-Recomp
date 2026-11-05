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

// Function: sub_0012F660
// Address: 0x12f660 - 0x12f6d8
void sub_0012F660_0x12f660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F660_0x12f660");
#endif

    switch (ctx->pc) {
        case 0x12f680u: goto label_12f680;
        case 0x12f690u: goto label_12f690;
        case 0x12f6a4u: goto label_12f6a4;
        case 0x12f6b0u: goto label_12f6b0;
        case 0x12f6c4u: goto label_12f6c4;
        default: break;
    }

    ctx->pc = 0x12f660u;

    // 0x12f660: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12f660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12f664: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x12f664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x12f668: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x12f668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x12f66c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12f66cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f670: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x12f670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x12f674: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12f674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12f678: 0xc04be06  jal         func_12F818
    ctx->pc = 0x12F678u;
    SET_GPR_U32(ctx, 31, 0x12F680u);
    ctx->pc = 0x12F67Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F678u;
    // 0x12f67c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12F818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12F818u, 0x12F678u, 0x12F680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F680u;
label_12f680:
    // 0x12f680: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x12F680u;
    {
        const bool branch_taken_0x12f680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12F684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F680u;
        // 0x12f684: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f680) {
            ctx->pc = 0x12F6C8u;
            goto label_12f6c8;
        }
    }
    ctx->pc = 0x12F688u;
    // 0x12f688: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x12F688u;
    SET_GPR_U32(ctx, 31, 0x12F690u);
    ctx->pc = 0x12F68Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F688u;
    // 0x12f68c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x12F688u, 0x12F690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F690u;
label_12f690:
    // 0x12f690: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12f690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12f694: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x12f694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x12f698: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12f698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x12f69c: 0xc0dde53  jal         func_37794C
    ctx->pc = 0x12F69Cu;
    SET_GPR_U32(ctx, 31, 0x12F6A4u);
    ctx->pc = 0x12F6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F69Cu;
    // 0x12f6a0: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x12F69Cu, 0x12F6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6A4u;
label_12f6a4:
    // 0x12f6a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x12f6a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6a8: 0xc0aafc4  jal         func_2ABF10
    ctx->pc = 0x12F6A8u;
    SET_GPR_U32(ctx, 31, 0x12F6B0u);
    ctx->pc = 0x12F6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6A8u;
    // 0x12f6ac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF10u, 0x12F6A8u, 0x12F6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6B0u;
label_12f6b0:
    // 0x12f6b0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x12f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12f6b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12f6b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f6b8: 0xae220024  sw          $v0, 0x24($s1)
    ctx->pc = 0x12f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 2));
    // 0x12f6bc: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x12F6BCu;
    SET_GPR_U32(ctx, 31, 0x12F6C4u);
    ctx->pc = 0x12F6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12F6BCu;
    // 0x12f6c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x12F6BCu, 0x12F6C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12F6C4u;
label_12f6c4:
    // 0x12f6c4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x12f6c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_12f6c8:
    // 0x12f6c8: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x12f6c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12f6cc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12f6ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f6d0: 0x3e00008  jr          $ra
    ctx->pc = 0x12F6D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F6D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6D0u;
        // 0x12f6d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F6D8u;
}
