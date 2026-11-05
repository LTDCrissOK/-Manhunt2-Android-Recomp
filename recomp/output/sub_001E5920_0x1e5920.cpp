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

// Function: sub_001E5920
// Address: 0x1e5920 - 0x1e5998
void sub_001E5920_0x1e5920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E5920_0x1e5920");
#endif

    switch (ctx->pc) {
        case 0x1e5948u: goto label_1e5948;
        case 0x1e5950u: goto label_1e5950;
        case 0x1e5964u: goto label_1e5964;
        case 0x1e596cu: goto label_1e596c;
        default: break;
    }

    ctx->pc = 0x1e5920u;

    // 0x1e5920: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e5920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e5924: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x1e5924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
    // 0x1e5928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e5928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e592c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e592cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e5930: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x1e5930u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x1e5934: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1e5934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1e5938: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1e5938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e593c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1e593cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1e5940: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1E5940u;
    SET_GPR_U32(ctx, 31, 0x1E5948u);
    ctx->pc = 0x1E5944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5940u;
    // 0x1e5944: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1E5940u, 0x1E5948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5948u;
label_1e5948:
    // 0x1e5948: 0xae0291dc  sw          $v0, -0x6E24($s0)
    ctx->pc = 0x1e5948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294939100), GPR_U32(ctx, 2));
    // 0x1e594c: 0x8e4291dc  lw          $v0, -0x6E24($s2)
    ctx->pc = 0x1e594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
label_1e5950:
    // 0x1e5950: 0x118080  sll         $s0, $s1, 2
    ctx->pc = 0x1e5950u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1e5954: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x1e5954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1e5958: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1e5958u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1e595c: 0xc0f5240  jal         func_3D4900
    ctx->pc = 0x1E595Cu;
    SET_GPR_U32(ctx, 31, 0x1E5964u);
    ctx->pc = 0x1E5960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E595Cu;
    // 0x1e5960: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4900u, 0x1E595Cu, 0x1E5964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5964u;
label_1e5964:
    // 0x1e5964: 0xc07a8b2  jal         func_1EA2C8
    ctx->pc = 0x1E5964u;
    SET_GPR_U32(ctx, 31, 0x1E596Cu);
    ctx->pc = 0x1E5968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5964u;
    // 0x1e5968: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x1E5964u, 0x1E596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E596Cu;
label_1e596c:
    // 0x1e596c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1e596cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1e5970: 0x2e220050  sltiu       $v0, $s1, 0x50
    ctx->pc = 0x1e5970u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)80) ? 1 : 0);
    // 0x1e5974: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
    ctx->pc = 0x1E5974u;
    {
        const bool branch_taken_0x1e5974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e5974) {
            ctx->pc = 0x1E5978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E5974u;
            // 0x1e5978: 0x8e4291dc  lw          $v0, -0x6E24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294939100)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E5950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e5950;
        }
    }
    ctx->pc = 0x1E597Cu;
    // 0x1e597c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e597cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e5980: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e5980u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e5984: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1e5984u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e5988: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1e5988u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1e598c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E5990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E598Cu;
        // 0x1e5990: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E598Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E5994u;
    // 0x1e5994: 0x0  nop
    ctx->pc = 0x1e5994u;
    // NOP
    ctx->pc = 0x1e5998u;
}
