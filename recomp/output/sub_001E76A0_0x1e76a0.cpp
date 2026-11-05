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

// Function: sub_001E76A0
// Address: 0x1e76a0 - 0x1e7718
void sub_001E76A0_0x1e76a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E76A0_0x1e76a0");
#endif

    switch (ctx->pc) {
        case 0x1e76c8u: goto label_1e76c8;
        case 0x1e76d0u: goto label_1e76d0;
        case 0x1e76e4u: goto label_1e76e4;
        case 0x1e76ecu: goto label_1e76ec;
        default: break;
    }

    ctx->pc = 0x1e76a0u;

    // 0x1e76a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e76a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e76a4: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1e76a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1e76a8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e76a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e76ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e76acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e76b0: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e76b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e76b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e76b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e76b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e76b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e76bc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e76bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e76c0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E76C0u;
    SET_GPR_U32(ctx, 31, 0x1E76C8u);
    ctx->pc = 0x1E76C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76C0u;
    // 0x1e76c4: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E76C0u, 0x1E76C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76C8u;
label_1e76c8:
    // 0x1e76c8: 0xae0291ec  sw          $v0, -0x6E14($s0)
    ctx->pc = 0x1e76c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939116), GPR_U32(ctx, 2));
    // 0x1e76cc: 0x8e4291ec  lw          $v0, -0x6E14($s2)
    ctx->pc = 0x1e76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939116)));
label_1e76d0:
    // 0x1e76d0: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1e76d0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e76d4: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1e76d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e76d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e76d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e76dc: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E76DCu;
    SET_GPR_U32(ctx, 31, 0x1E76E4u);
    ctx->pc = 0x1E76E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76DCu;
    // 0x1e76e0: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E76DCu, 0x1E76E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76E4u;
label_1e76e4:
    // 0x1e76e4: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E76E4u;
    SET_GPR_U32(ctx, 31, 0x1E76ECu);
    ctx->pc = 0x1E76E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E76E4u;
    // 0x1e76e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E76E4u, 0x1E76ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E76ECu;
label_1e76ec:
    // 0x1e76ec: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e76ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e76f0: 0x2e220050  sltiu       $v0, $s1, 0x50
    ctx->pc = 0x1e76f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e76f4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E76F4u;
    {
        const bool branch_taken_0x1e76f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e76f4) {
            ctx->pc = 0x1E76F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E76F4u;
            // 0x1e76f8: 0x8e4291ec  lw          $v0, -0x6E14($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E76D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e76d0;
        }
    }
    ctx->pc = 0x1E76FCu;
    // 0x1e76fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e76fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e7700: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e7700u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7704: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e7704u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7708: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e7708u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e770c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E770Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E770Cu;
        // 0x1e7710: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E770Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7714u;
    // 0x1e7714: 0x0  nop
    ctx->pc = 0x1e7714u;
    // NOP
    ctx->pc = 0x1e7718u;
}
