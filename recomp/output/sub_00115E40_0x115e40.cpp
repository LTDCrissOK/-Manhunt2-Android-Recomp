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

// Function: sub_00115E40
// Address: 0x115e40 - 0x115ea8
void sub_00115E40_0x115e40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115E40_0x115e40");
#endif

    switch (ctx->pc) {
        case 0x115e78u: goto label_115e78;
        case 0x115e94u: goto label_115e94;
        default: break;
    }

    ctx->pc = 0x115e40u;

    // 0x115e40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x115e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x115e44: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x115e44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x115e48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115e4c: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x115e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x115e50: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x115e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x115e54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115e54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115e58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x115e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x115e5c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x115e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x115e60: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x115e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115e64: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x115e64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x115e68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115E68u;
    {
        const bool branch_taken_0x115e68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E68u;
        // 0x115e6c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e68) {
            ctx->pc = 0x115E78u;
            goto label_115e78;
        }
    }
    ctx->pc = 0x115E70u;
    // 0x115e70: 0xc0457c0  jal         func_115F00
    ctx->pc = 0x115E70u;
    SET_GPR_U32(ctx, 31, 0x115E78u);
    ctx->pc = 0x115F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115F00u, 0x115E70u, 0x115E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E78u;
label_115e78:
    // 0x115e78: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x115e78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x115e7c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x115e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x115e80: 0x24420348  addiu       $v0, $v0, 0x348
    ctx->pc = 0x115e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 840));
    // 0x115e84: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x115E84u;
    {
        const bool branch_taken_0x115e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x115E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115E84u;
        // 0x115e88: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115e84) {
            ctx->pc = 0x115E94u;
            goto label_115e94;
        }
    }
    ctx->pc = 0x115E8Cu;
    // 0x115e8c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x115E8Cu;
    SET_GPR_U32(ctx, 31, 0x115E94u);
    ctx->pc = 0x115E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115E8Cu;
    // 0x115e90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x115E8Cu, 0x115E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115E94u;
label_115e94:
    // 0x115e94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115e94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x115e98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x115e98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115e9c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x115e9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x115ea0: 0x3e00008  jr          $ra
    ctx->pc = 0x115EA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115EA0u;
        // 0x115ea4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115EA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115EA8u;
}
