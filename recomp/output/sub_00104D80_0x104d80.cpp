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

// Function: sub_00104D80
// Address: 0x104d80 - 0x104de0
void sub_00104D80_0x104d80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104D80_0x104d80");
#endif

    switch (ctx->pc) {
        case 0x104da8u: goto label_104da8;
        default: break;
    }

    ctx->pc = 0x104d80u;

    // 0x104d80: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x104d80u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x104d84: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x104D84u;
    {
        const bool branch_taken_0x104d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D84u;
        // 0x104d88: 0xac800030  sw          $zero, 0x30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d84) {
            ctx->pc = 0x104DCCu;
            goto label_104dcc;
        }
    }
    ctx->pc = 0x104D8Cu;
    // 0x104d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x104d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104d90: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x104d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104d94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x104D94u;
    {
        const bool branch_taken_0x104d94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D94u;
        // 0x104d98: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104d94) {
            ctx->pc = 0x104DC4u;
            goto label_104dc4;
        }
    }
    ctx->pc = 0x104D9Cu;
    // 0x104d9c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x104d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x104da0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x104da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x104da4: 0x0  nop
    ctx->pc = 0x104da4u;
    // NOP
label_104da8:
    // 0x104da8: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x104da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x104dac: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x104dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x104db0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x104db0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x104db4: 0x9082002c  lbu         $v0, 0x2C($a0)
    ctx->pc = 0x104db4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x104db8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x104db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104dbc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x104DBCu;
    {
        const bool branch_taken_0x104dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104DBCu;
        // 0x104dc0: 0xa31021  addu        $v0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104dbc) {
            ctx->pc = 0x104DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104da8;
        }
    }
    ctx->pc = 0x104DC4u;
label_104dc4:
    // 0x104dc4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x104dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x104dc8: 0xa082002c  sb          $v0, 0x2C($a0)
    ctx->pc = 0x104dc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 44), (uint8_t)GPR_U32(ctx, 2));
label_104dcc:
    // 0x104dcc: 0x3e00008  jr          $ra
    ctx->pc = 0x104DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104DD4u;
    // 0x104dd4: 0x0  nop
    ctx->pc = 0x104dd4u;
    // NOP
    // 0x104dd8: 0x90e2002c  lbu         $v0, 0x2C($a3)
    ctx->pc = 0x104dd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 44)));
    // 0x104ddc: 0x0  nop
    ctx->pc = 0x104ddcu;
    // NOP
    ctx->pc = 0x104de0u;
}
