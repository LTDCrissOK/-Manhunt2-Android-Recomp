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

// Function: sub_00286978
// Address: 0x286978 - 0x286a00
void sub_00286978_0x286978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286978_0x286978");
#endif

    switch (ctx->pc) {
        case 0x2869a0u: goto label_2869a0;
        case 0x2869b8u: goto label_2869b8;
        case 0x2869d8u: goto label_2869d8;
        case 0x2869e8u: goto label_2869e8;
        default: break;
    }

    ctx->pc = 0x286978u;

    // 0x286978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28697c: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x286980: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x286980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x286984: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x286984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x286988: 0x2450b368  addiu       $s0, $v0, -0x4C98
    ctx->pc = 0x286988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947688));
    // 0x28698c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x28698cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x286990: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x286990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x286994: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x286994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x286998: 0xc0a1a36  jal         func_2868D8
    ctx->pc = 0x286998u;
    SET_GPR_U32(ctx, 31, 0x2869A0u);
    ctx->pc = 0x28699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286998u;
    // 0x28699c: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2868D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2868D8u, 0x286998u, 0x2869A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869A0u;
label_2869a0:
    // 0x2869a0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x2869a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2869a4: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2869a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2869a8: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x2869a8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x2869ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2869acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869b0: 0xc0a0c96  jal         func_283258
    ctx->pc = 0x2869B0u;
    SET_GPR_U32(ctx, 31, 0x2869B8u);
    ctx->pc = 0x2869B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869B0u;
    // 0x2869b4: 0xa7a00002  sh          $zero, 0x2($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 2), (uint16_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283258u, 0x2869B0u, 0x2869B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869B8u;
label_2869b8:
    // 0x2869b8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x2869b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2869bc: 0x2404002d  addiu       $a0, $zero, 0x2D
    ctx->pc = 0x2869bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2869c0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2869c0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2869c4: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2869C4u;
    {
        const bool branch_taken_0x2869c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2869C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869C4u;
        // 0x2869c8: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2869c4) {
            ctx->pc = 0x2869E8u;
            goto label_2869e8;
        }
    }
    ctx->pc = 0x2869CCu;
    // 0x2869cc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2869ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869d0: 0xc0aedcc  jal         func_2BB730
    ctx->pc = 0x2869D0u;
    SET_GPR_U32(ctx, 31, 0x2869D8u);
    ctx->pc = 0x2869D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869D0u;
    // 0x2869d4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB730u, 0x2869D0u, 0x2869D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869D8u;
label_2869d8:
    // 0x2869d8: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2869d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2869dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2869dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869e0: 0xc0aedcc  jal         func_2BB730
    ctx->pc = 0x2869E0u;
    SET_GPR_U32(ctx, 31, 0x2869E8u);
    ctx->pc = 0x2869E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2869E0u;
    // 0x2869e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB730u, 0x2869E0u, 0x2869E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2869E8u;
label_2869e8:
    // 0x2869e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2869e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2869ec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2869ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2869f0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2869f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2869f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2869F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2869F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2869F4u;
        // 0x2869f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2869F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2869FCu;
    // 0x2869fc: 0x0  nop
    ctx->pc = 0x2869fcu;
    // NOP
    ctx->pc = 0x286a00u;
}
