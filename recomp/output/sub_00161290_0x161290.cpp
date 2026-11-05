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

// Function: sub_00161290
// Address: 0x161290 - 0x161318
void sub_00161290_0x161290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161290_0x161290");
#endif

    switch (ctx->pc) {
        case 0x1612b8u: goto label_1612b8;
        case 0x1612c4u: goto label_1612c4;
        case 0x161308u: goto label_161308;
        default: break;
    }

    ctx->pc = 0x161290u;

    // 0x161290: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161294: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x161294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x161298: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x161298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x16129c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16129cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612a0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1612a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612a4: 0x920204a1  lbu         $v0, 0x4A1($s0)
    ctx->pc = 0x1612a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1185)));
    // 0x1612a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1612a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1612ac: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1612acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1612b0: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x1612B0u;
    SET_GPR_U32(ctx, 31, 0x1612B8u);
    ctx->pc = 0x1612B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612B0u;
    // 0x1612b4: 0xac450320  sw          $a1, 0x320($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 800), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x1612B0u, 0x1612B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612B8u;
label_1612b8:
    // 0x1612b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1612b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612bc: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x1612BCu;
    SET_GPR_U32(ctx, 31, 0x1612C4u);
    ctx->pc = 0x1612C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1612BCu;
    // 0x1612c0: 0x2405003c  addiu       $a1, $zero, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x1612BCu, 0x1612C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1612C4u;
label_1612c4:
    // 0x1612c4: 0x920304a1  lbu         $v1, 0x4A1($s0)
    ctx->pc = 0x1612c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1185)));
    // 0x1612c8: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1612c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1612cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1612ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1612d0: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x1612d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1612d4: 0xac6203e0  sw          $v0, 0x3E0($v1)
    ctx->pc = 0x1612d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 992), GPR_U32(ctx, 2));
    // 0x1612d8: 0x920204a1  lbu         $v0, 0x4A1($s0)
    ctx->pc = 0x1612d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1185)));
    // 0x1612dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1612dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1612e0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1612e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1612e4: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1612E4u;
    {
        const bool branch_taken_0x1612e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1612E4u;
        // 0x1612e8: 0xa20204a1  sb          $v0, 0x4A1($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 1185), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1612e4) {
            ctx->pc = 0x1612F0u;
            goto label_1612f0;
        }
    }
    ctx->pc = 0x1612ECu;
    // 0x1612ec: 0xa20004a1  sb          $zero, 0x4A1($s0)
    ctx->pc = 0x1612ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1185), (uint8_t)GPR_U32(ctx, 0));
label_1612f0:
    // 0x1612f0: 0x920204a0  lbu         $v0, 0x4A0($s0)
    ctx->pc = 0x1612f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1184)));
    // 0x1612f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1612f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1612f8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1612f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1612fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1612fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x161300: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x161300u;
    SET_GPR_U32(ctx, 31, 0x161308u);
    ctx->pc = 0x161304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161300u;
    // 0x161304: 0xa20204a0  sb          $v0, 0x4A0($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 1184), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x161300u, 0x161308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161308u;
label_161308:
    // 0x161308: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x161308u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16130c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x16130cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x161310: 0x3e00008  jr          $ra
    ctx->pc = 0x161310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161310u;
        // 0x161314: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161318u;
}
