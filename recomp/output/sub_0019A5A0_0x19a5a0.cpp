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

// Function: sub_0019A5A0
// Address: 0x19a5a0 - 0x19a600
void sub_0019A5A0_0x19a5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A5A0_0x19a5a0");
#endif

    switch (ctx->pc) {
        case 0x19a5c0u: goto label_19a5c0;
        default: break;
    }

    ctx->pc = 0x19a5a0u;

    // 0x19a5a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19a5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19a5a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x19a5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19a5a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x19a5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x19a5ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19a5acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19a5b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19a5b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x19a5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5b8: 0xc062a72  jal         func_18A9C8
    ctx->pc = 0x19A5B8u;
    SET_GPR_U32(ctx, 31, 0x19A5C0u);
    ctx->pc = 0x19A5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A5B8u;
    // 0x19a5bc: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A9C8u, 0x19A5B8u, 0x19A5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A5C0u;
label_19a5c0:
    // 0x19a5c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x19A5C0u;
    {
        const bool branch_taken_0x19a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5C0u;
        // 0x19a5c4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5c0) {
            ctx->pc = 0x19A5E8u;
            goto label_19a5e8;
        }
    }
    ctx->pc = 0x19A5C8u;
    // 0x19a5c8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x19a5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x19a5cc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19A5CCu;
    {
        const bool branch_taken_0x19a5cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5CCu;
        // 0x19a5d0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5cc) {
            ctx->pc = 0x19A5E8u;
            goto label_19a5e8;
        }
    }
    ctx->pc = 0x19A5D4u;
    // 0x19a5d4: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A5D4u;
    {
        const bool branch_taken_0x19a5d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5D4u;
        // 0x19a5d8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5d4) {
            ctx->pc = 0x19A5E8u;
            goto label_19a5e8;
        }
    }
    ctx->pc = 0x19A5DCu;
    // 0x19a5dc: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x19A5DCu;
    {
        const bool branch_taken_0x19a5dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x19A5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5DCu;
        // 0x19a5e0: 0x38820006  xori        $v0, $a0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a5dc) {
            ctx->pc = 0x19A5E8u;
            goto label_19a5e8;
        }
    }
    ctx->pc = 0x19A5E4u;
    // 0x19a5e4: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x19a5e4u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_19a5e8:
    // 0x19a5e8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x19a5e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a5ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x19a5ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a5f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x19a5f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x19a5f4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A5F8u;
        // 0x19a5fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A600u;
}
