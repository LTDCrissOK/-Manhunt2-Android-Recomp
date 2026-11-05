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

// Function: sub_0016AB80
// Address: 0x16ab80 - 0x16abc8
void sub_0016AB80_0x16ab80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB80_0x16ab80");
#endif

    switch (ctx->pc) {
        case 0x16aba0u: goto label_16aba0;
        case 0x16abacu: goto label_16abac;
        default: break;
    }

    ctx->pc = 0x16ab80u;

    // 0x16ab80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ab84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16ab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16ab88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16ab88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16ab8c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16ab8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab90: 0x9205002c  lbu         $a1, 0x2C($s0)
    ctx->pc = 0x16ab90u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16ab94: 0x50a00009  beql        $a1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AB94u;
    {
        const bool branch_taken_0x16ab94 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ab94) {
            ctx->pc = 0x16AB98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16AB94u;
            // 0x16ab98: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ABBCu;
            goto label_16abbc;
        }
    }
    ctx->pc = 0x16AB9Cu;
    // 0x16ab9c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_16aba0:
    // 0x16aba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16aba4: 0xc05aaf2  jal         func_16ABC8
    ctx->pc = 0x16ABA4u;
    SET_GPR_U32(ctx, 31, 0x16ABACu);
    ctx->pc = 0x16ABA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ABA4u;
    // 0x16aba8: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ABC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ABC8u, 0x16ABA4u, 0x16ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16ABACu;
label_16abac:
    // 0x16abac: 0x9205002c  lbu         $a1, 0x2C($s0)
    ctx->pc = 0x16abacu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x16abb0: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16ABB0u;
    {
        const bool branch_taken_0x16abb0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abb0) {
            ctx->pc = 0x16ABB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16ABB0u;
            // 0x16abb4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16ABA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_16aba0;
        }
    }
    ctx->pc = 0x16ABB8u;
    // 0x16abb8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16abb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16abbc:
    // 0x16abbc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16abbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16abc0: 0x3e00008  jr          $ra
    ctx->pc = 0x16ABC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ABC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ABC0u;
        // 0x16abc4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ABC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ABC8u;
}
