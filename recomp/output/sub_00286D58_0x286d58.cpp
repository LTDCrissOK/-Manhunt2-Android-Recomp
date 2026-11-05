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

// Function: sub_00286D58
// Address: 0x286d58 - 0x286dc0
void sub_00286D58_0x286d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286D58_0x286d58");
#endif

    switch (ctx->pc) {
        case 0x286d84u: goto label_286d84;
        case 0x286d94u: goto label_286d94;
        case 0x286da0u: goto label_286da0;
        default: break;
    }

    ctx->pc = 0x286d58u;

    // 0x286d58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x286d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x286d5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x286d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x286d60: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x286d60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x286d64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x286d68: 0x8e22a46c  lw          $v0, -0x5B94($s1)
    ctx->pc = 0x286d68u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FA46Cu));
    // 0x286d6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x286D6Cu;
    {
        const bool branch_taken_0x286d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x286D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286D6Cu;
        // 0x286d70: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286d6c) {
            ctx->pc = 0x286DA4u;
            goto label_286da4;
        }
    }
    ctx->pc = 0x286D74u;
    // 0x286d74: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x286d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x286d78: 0x24509b10  addiu       $s0, $v0, -0x64F0
    ctx->pc = 0x286d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
    // 0x286d7c: 0xc07f6a6  jal         func_1FDA98
    ctx->pc = 0x286D7Cu;
    SET_GPR_U32(ctx, 31, 0x286D84u);
    ctx->pc = 0x286D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D7Cu;
    // 0x286d80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA98u, 0x286D7Cu, 0x286D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D84u;
label_286d84:
    // 0x286d84: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x286D84u;
    {
        const bool branch_taken_0x286d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286d84) {
            ctx->pc = 0x286D88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x286D84u;
            // 0x286d88: 0xae20a46c  sw          $zero, -0x5B94($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4294943852), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x286DA4u;
            goto label_286da4;
        }
    }
    ctx->pc = 0x286D8Cu;
    // 0x286d8c: 0xc07f68c  jal         func_1FDA30
    ctx->pc = 0x286D8Cu;
    SET_GPR_U32(ctx, 31, 0x286D94u);
    ctx->pc = 0x286D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D8Cu;
    // 0x286d90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA30u, 0x286D8Cu, 0x286D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286D94u;
label_286d94:
    // 0x286d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x286d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286d98: 0xc07f69c  jal         func_1FDA70
    ctx->pc = 0x286D98u;
    SET_GPR_U32(ctx, 31, 0x286DA0u);
    ctx->pc = 0x286D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x286D98u;
    // 0x286d9c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDA70u, 0x286D98u, 0x286DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286DA0u;
label_286da0:
    // 0x286da0: 0xae20a46c  sw          $zero, -0x5B94($s1)
    ctx->pc = 0x286da0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294943852), GPR_U32(ctx, 0));
label_286da4:
    // 0x286da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x286da8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x286da8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x286dac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x286dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286db0: 0x3e00008  jr          $ra
    ctx->pc = 0x286DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x286DB0u;
        // 0x286db4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x286DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x286DB8u;
    // 0x286db8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x286db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x286dbc: 0x0  nop
    ctx->pc = 0x286dbcu;
    // NOP
    ctx->pc = 0x286dc0u;
}
