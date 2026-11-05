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

// Function: sub_00236AD8
// Address: 0x236ad8 - 0x236b30
void sub_00236AD8_0x236ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00236AD8_0x236ad8");
#endif

    switch (ctx->pc) {
        case 0x236ae8u: goto label_236ae8;
        case 0x236b10u: goto label_236b10;
        default: break;
    }

    ctx->pc = 0x236ad8u;

    // 0x236ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x236ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x236adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x236adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x236ae0: 0xc0899c8  jal         func_226720
    ctx->pc = 0x236AE0u;
    SET_GPR_U32(ctx, 31, 0x236AE8u);
    ctx->pc = 0x226720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x226720u, 0x236AE0u, 0x236AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236AE8u;
label_236ae8:
    // 0x236ae8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x236ae8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x236aec: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x236AECu;
    {
        const bool branch_taken_0x236aec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236AECu;
        // 0x236af0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236aec) {
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236AF4u;
    // 0x236af4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x236af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x236af8: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x236af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x236afc: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x236afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x236b00: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x236B00u;
    {
        const bool branch_taken_0x236b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236b00) {
            ctx->pc = 0x236B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236B00u;
            // 0x236b04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236B08u;
    // 0x236b08: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x236B08u;
    SET_GPR_U32(ctx, 31, 0x236B10u);
    ctx->pc = 0x236B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236B08u;
    // 0x236b0c: 0x8c640274  lw          $a0, 0x274($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x236B08u, 0x236B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236B10u;
label_236b10:
    // 0x236b10: 0x38430003  xori        $v1, $v0, 0x3
    ctx->pc = 0x236b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x236b14: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x236B14u;
    {
        const bool branch_taken_0x236b14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x236B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B14u;
        // 0x236b18: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236b14) {
            ctx->pc = 0x236B20u;
            goto label_236b20;
        }
    }
    ctx->pc = 0x236B1Cu;
    // 0x236b1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x236b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_236b20:
    // 0x236b20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x236b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x236b24: 0x3e00008  jr          $ra
    ctx->pc = 0x236B24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236B24u;
        // 0x236b28: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236B24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x236B2Cu;
    // 0x236b2c: 0x0  nop
    ctx->pc = 0x236b2cu;
    // NOP
    ctx->pc = 0x236b30u;
}
