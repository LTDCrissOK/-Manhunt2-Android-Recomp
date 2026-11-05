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

// Function: sub_001F9860
// Address: 0x1f9860 - 0x1f98f0
void sub_001F9860_0x1f9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9860_0x1f9860");
#endif

    switch (ctx->pc) {
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f98a8u: goto label_1f98a8;
        default: break;
    }

    ctx->pc = 0x1f9860u;

    // 0x1f9860: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f9860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f9864: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9864u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9868: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f986c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1f986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1f9870: 0x340480f0  ori         $a0, $zero, 0x80F0
    ctx->pc = 0x1f9870u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33008);
    // 0x1f9874: 0xc07ed2e  jal         func_1FB4B8
    ctx->pc = 0x1F9874u;
    SET_GPR_U32(ctx, 31, 0x1F987Cu);
    ctx->pc = 0x1F9878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9874u;
    // 0x1f9878: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB4B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB4B8u, 0x1F9874u, 0x1F987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F987Cu;
label_1f987c:
    // 0x1f987c: 0x34048420  ori         $a0, $zero, 0x8420
    ctx->pc = 0x1f987cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33824);
    // 0x1f9880: 0xc07ac68  jal         func_1EB1A0
    ctx->pc = 0x1F9880u;
    SET_GPR_U32(ctx, 31, 0x1F9888u);
    ctx->pc = 0x1F9884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9880u;
    // 0x1f9884: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EB1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB1A0u, 0x1F9880u, 0x1F9888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9888u;
label_1f9888:
    // 0x1f9888: 0x34048de0  ori         $a0, $zero, 0x8DE0
    ctx->pc = 0x1f9888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36320);
    // 0x1f988c: 0xc07e8d4  jal         func_1FA350
    ctx->pc = 0x1F988Cu;
    SET_GPR_U32(ctx, 31, 0x1F9894u);
    ctx->pc = 0x1F9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F988Cu;
    // 0x1f9890: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA350u, 0x1F988Cu, 0x1F9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9894u;
label_1f9894:
    // 0x1f9894: 0x26067ba0  addiu       $a2, $s0, 0x7BA0
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 31648));
    // 0x1f9898: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1f989c: 0x24c50500  addiu       $a1, $a2, 0x500
    ctx->pc = 0x1f989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1280));
    // 0x1f98a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f98a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f98a4: 0x0  nop
    ctx->pc = 0x1f98a4u;
    // NOP
label_1f98a8:
    // 0x1f98a8: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f98ac: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1f98acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x1f98b0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x1f98b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1f98b4: 0x2c82000a  sltiu       $v0, $a0, 0xA
    ctx->pc = 0x1f98b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f98b8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F98B8u;
    {
        const bool branch_taken_0x1f98b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F98BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98B8u;
        // 0x1f98bc: 0xa0670000  sb          $a3, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98b8) {
            ctx->pc = 0x1F98A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f98a8;
        }
    }
    ctx->pc = 0x1F98C0u;
    // 0x1f98c0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1f98c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1f98c4: 0xa0c0050a  sb          $zero, 0x50A($a2)
    ctx->pc = 0x1f98c4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1290), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f98c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1f98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f98cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f98ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f98d0: 0xac4003c0  sw          $zero, 0x3C0($v0)
    ctx->pc = 0x1f98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 960), GPR_U32(ctx, 0));
    // 0x1f98d4: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x1f98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x1f98d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f98d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f98dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1f98dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f98e0: 0xac400418  sw          $zero, 0x418($v0)
    ctx->pc = 0x1f98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1048), GPR_U32(ctx, 0));
    // 0x1f98e4: 0xac400414  sw          $zero, 0x414($v0)
    ctx->pc = 0x1f98e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1044), GPR_U32(ctx, 0));
    // 0x1f98e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F98E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98E8u;
        // 0x1f98ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F98E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F98F0u;
}
