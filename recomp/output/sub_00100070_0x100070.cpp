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

// Function: sub_00100070
// Address: 0x100070 - 0x1000d8
void sub_00100070_0x100070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100070_0x100070");
#endif

    switch (ctx->pc) {
        case 0x1000b0u: goto label_1000b0;
        case 0x1000b8u: goto label_1000b8;
        default: break;
    }

    ctx->pc = 0x100070u;

    // 0x100070: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x100074: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x100074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x100078: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x100078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10007c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x10007cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100080: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x100084: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x100084u;
    {
        const bool branch_taken_0x100084 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x100088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x100084u;
        // 0x100088: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100084) {
            ctx->pc = 0x1000C0u;
            goto label_1000c0;
        }
    }
    ctx->pc = 0x10008Cu;
    // 0x10008c: 0x82220004  lb          $v0, 0x4($s1)
    ctx->pc = 0x10008cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x100090: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x100090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x100094: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x100094u;
    {
        const bool branch_taken_0x100094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100094) {
            ctx->pc = 0x100098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x100094u;
            // 0x100098: 0xa2300004  sb          $s0, 0x4($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1000C0u;
            goto label_1000c0;
        }
    }
    ctx->pc = 0x10009Cu;
    // 0x10009c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x10009cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1000a0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1000A0u;
    {
        const bool branch_taken_0x1000a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1000a0) {
            ctx->pc = 0x1000B0u;
            goto label_1000b0;
        }
    }
    ctx->pc = 0x1000A8u;
    // 0x1000a8: 0xc0f528a  jal         func_3D4A28
    ctx->pc = 0x1000A8u;
    SET_GPR_U32(ctx, 31, 0x1000B0u);
    ctx->pc = 0x3D4A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4A28u, 0x1000A8u, 0x1000B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000B0u;
label_1000b0:
    // 0x1000b0: 0xc0f52a8  jal         func_3D4AA0
    ctx->pc = 0x1000B0u;
    SET_GPR_U32(ctx, 31, 0x1000B8u);
    ctx->pc = 0x1000B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1000B0u;
    // 0x1000b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4AA0u, 0x1000B0u, 0x1000B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1000B8u;
label_1000b8:
    // 0x1000b8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1000b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1000bc: 0xa2300004  sb          $s0, 0x4($s1)
    ctx->pc = 0x1000bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 16));
label_1000c0:
    // 0x1000c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1000c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1000c4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1000c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1000c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1000c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1000cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1000CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1000D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1000CCu;
        // 0x1000d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1000CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1000D4u;
    // 0x1000d4: 0x0  nop
    ctx->pc = 0x1000d4u;
    // NOP
    ctx->pc = 0x1000d8u;
}
