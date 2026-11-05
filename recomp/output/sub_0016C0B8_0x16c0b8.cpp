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

// Function: sub_0016C0B8
// Address: 0x16c0b8 - 0x16c118
void sub_0016C0B8_0x16c0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016C0B8_0x16c0b8");
#endif

    switch (ctx->pc) {
        case 0x16c0d4u: goto label_16c0d4;
        default: break;
    }

    ctx->pc = 0x16c0b8u;

    // 0x16c0b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16c0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16c0bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16c0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16c0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16c0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16c0c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16c0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16c0c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16c0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16c0cc: 0xc05b046  jal         func_16C118
    ctx->pc = 0x16C0CCu;
    SET_GPR_U32(ctx, 31, 0x16C0D4u);
    ctx->pc = 0x16C0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16C0CCu;
    // 0x16c0d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C118u, 0x16C0CCu, 0x16C0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16C0D4u;
label_16c0d4:
    // 0x16c0d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x16c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16c0d8: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16C0D8u;
    {
        const bool branch_taken_0x16c0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x16c0d8) {
            ctx->pc = 0x16C0DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16C0D8u;
            // 0x16c0dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16C104u;
            goto label_16c104;
        }
    }
    ctx->pc = 0x16C0E0u;
    // 0x16c0e0: 0x8e02019c  lw          $v0, 0x19C($s0)
    ctx->pc = 0x16c0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x16c0e4: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x16c0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
    // 0x16c0e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16c0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16c0ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16c0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16c0f0: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x16c0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x16c0f4: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x16c0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x16c0f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16c0fc: 0xae03019c  sw          $v1, 0x19C($s0)
    ctx->pc = 0x16c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 3));
    // 0x16c100: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16c100u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16c104:
    // 0x16c104: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16c104u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16c108: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16c108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16c10c: 0x3e00008  jr          $ra
    ctx->pc = 0x16C10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16C10Cu;
        // 0x16c110: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16C10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16C114u;
    // 0x16c114: 0x0  nop
    ctx->pc = 0x16c114u;
    // NOP
    ctx->pc = 0x16c118u;
}
