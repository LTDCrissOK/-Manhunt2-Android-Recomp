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

// Function: sub_00312398
// Address: 0x312398 - 0x312400
void sub_00312398_0x312398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312398_0x312398");
#endif

    switch (ctx->pc) {
        case 0x3123c0u: goto label_3123c0;
        case 0x3123d4u: goto label_3123d4;
        case 0x3123e8u: goto label_3123e8;
        default: break;
    }

    ctx->pc = 0x312398u;

label_312398:
    // 0x312398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x312398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x31239c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31239cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3123a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3123a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3123a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3123a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123a8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3123a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3123ac: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x3123acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x3123b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3123b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3123b4: 0x26050040  addiu       $a1, $s0, 0x40
    ctx->pc = 0x3123b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x3123b8: 0xc0b163c  jal         func_2C58F0
    ctx->pc = 0x3123B8u;
    SET_GPR_U32(ctx, 31, 0x3123C0u);
    ctx->pc = 0x3123BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123B8u;
    // 0x3123bc: 0x26260080  addiu       $a2, $s1, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C58F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C58F0u, 0x3123B8u, 0x3123C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3123C0u;
label_3123c0:
    // 0x3123c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x3123c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3123c4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3123C4u;
    {
        const bool branch_taken_0x3123c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3123c4) {
            ctx->pc = 0x3123C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3123C4u;
            // 0x3123c8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3123D8u;
            goto label_3123d8;
        }
    }
    ctx->pc = 0x3123CCu;
    // 0x3123cc: 0xc0c48e6  jal         func_312398
    ctx->pc = 0x3123CCu;
    SET_GPR_U32(ctx, 31, 0x3123D4u);
    ctx->pc = 0x3123D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123CCu;
    // 0x3123d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312398u;
    goto label_312398;
    ctx->pc = 0x3123D4u;
label_3123d4:
    // 0x3123d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3123d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3123d8:
    // 0x3123d8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3123D8u;
    {
        const bool branch_taken_0x3123d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3123d8) {
            ctx->pc = 0x3123DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3123D8u;
            // 0x3123dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3123ECu;
            goto label_3123ec;
        }
    }
    ctx->pc = 0x3123E0u;
    // 0x3123e0: 0xc0c48e6  jal         func_312398
    ctx->pc = 0x3123E0u;
    SET_GPR_U32(ctx, 31, 0x3123E8u);
    ctx->pc = 0x3123E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3123E0u;
    // 0x3123e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312398u;
    goto label_312398;
    ctx->pc = 0x3123E8u;
label_3123e8:
    // 0x3123e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3123e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3123ec:
    // 0x3123ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3123ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3123f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3123f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3123f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3123F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3123F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3123F4u;
        // 0x3123f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3123F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3123FCu;
    // 0x3123fc: 0x0  nop
    ctx->pc = 0x3123fcu;
    // NOP
    ctx->pc = 0x312400u;
}
