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

// Function: sub_0014A080
// Address: 0x14a080 - 0x14a100
void sub_0014A080_0x14a080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A080_0x14a080");
#endif

    switch (ctx->pc) {
        case 0x14a094u: goto label_14a094;
        case 0x14a0a8u: goto label_14a0a8;
        case 0x14a0c8u: goto label_14a0c8;
        case 0x14a0ecu: goto label_14a0ec;
        default: break;
    }

    ctx->pc = 0x14a080u;

    // 0x14a080: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a084: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14a084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x14a088: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x14a088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x14a08c: 0xc04d6b0  jal         func_135AC0
    ctx->pc = 0x14A08Cu;
    SET_GPR_U32(ctx, 31, 0x14A094u);
    ctx->pc = 0x14A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A08Cu;
    // 0x14a090: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x135AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135AC0u, 0x14A08Cu, 0x14A094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A094u;
label_14a094:
    // 0x14a094: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x14a094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x14a098: 0x26040570  addiu       $a0, $s0, 0x570
    ctx->pc = 0x14a098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1392));
    // 0x14a09c: 0x246309d8  addiu       $v1, $v1, 0x9D8
    ctx->pc = 0x14a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2520));
    // 0x14a0a0: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x14A0A0u;
    SET_GPR_U32(ctx, 31, 0x14A0A8u);
    ctx->pc = 0x14A0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0A0u;
    // 0x14a0a4: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x14A0A0u, 0x14A0A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0A8u;
label_14a0a8:
    // 0x14a0a8: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x14a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
    // 0x14a0ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x14a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14a0b0: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x14a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
    // 0x14a0b4: 0x260205a0  addiu       $v0, $s0, 0x5A0
    ctx->pc = 0x14a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1440));
    // 0x14a0b8: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x14a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
    // 0x14a0bc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x14a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x14a0c0: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x14a0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
    // 0x14a0c4: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x14a0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
label_14a0c8:
    // 0x14a0c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x14a0cc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14a0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14a0d0: 0x0  nop
    ctx->pc = 0x14a0d0u;
    // NOP
    // 0x14a0d4: 0x0  nop
    ctx->pc = 0x14a0d4u;
    // NOP
    // 0x14a0d8: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x14A0D8u;
    {
        const bool branch_taken_0x14a0d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x14A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0D8u;
        // 0x14a0dc: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14a0d8) {
            ctx->pc = 0x14A0C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14a0c8;
        }
    }
    ctx->pc = 0x14A0E0u;
    // 0x14a0e0: 0xae000460  sw          $zero, 0x460($s0)
    ctx->pc = 0x14a0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 0));
    // 0x14a0e4: 0xc05290c  jal         func_14A430
    ctx->pc = 0x14A0E4u;
    SET_GPR_U32(ctx, 31, 0x14A0ECu);
    ctx->pc = 0x14A0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A0E4u;
    // 0x14a0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A430u, 0x14A0E4u, 0x14A0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14A0ECu;
label_14a0ec:
    // 0x14a0ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x14a0ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a0f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x14a0f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x14a0f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x14a0f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a0f8: 0x3e00008  jr          $ra
    ctx->pc = 0x14A0F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A0F8u;
        // 0x14a0fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A0F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A100u;
}
