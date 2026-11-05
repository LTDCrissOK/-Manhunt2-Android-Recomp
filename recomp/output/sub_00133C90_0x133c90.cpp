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

// Function: sub_00133C90
// Address: 0x133c90 - 0x133cf8
void sub_00133C90_0x133c90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133C90_0x133c90");
#endif

    switch (ctx->pc) {
        case 0x133cc4u: goto label_133cc4;
        case 0x133ce0u: goto label_133ce0;
        default: break;
    }

    ctx->pc = 0x133c90u;

    // 0x133c90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x133c94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x133c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x133c98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133c9c: 0x24420570  addiu       $v0, $v0, 0x570
    ctx->pc = 0x133c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1392));
    // 0x133ca0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x133ca4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133ca4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ca8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133cac: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x133cacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x133cb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x133cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133cb4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133CB4u;
    {
        const bool branch_taken_0x133cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CB4u;
        // 0x133cb8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cb4) {
            ctx->pc = 0x133CC4u;
            goto label_133cc4;
        }
    }
    ctx->pc = 0x133CBCu;
    // 0x133cbc: 0xc04cf52  jal         func_133D48
    ctx->pc = 0x133CBCu;
    SET_GPR_U32(ctx, 31, 0x133CC4u);
    ctx->pc = 0x133D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133D48u, 0x133CBCu, 0x133CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CC4u;
label_133cc4:
    // 0x133cc4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x133cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x133cc8: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x133cc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x133ccc: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x133cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x133cd0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133CD0u;
    {
        const bool branch_taken_0x133cd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CD0u;
        // 0x133cd4: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133cd0) {
            ctx->pc = 0x133CE0u;
            goto label_133ce0;
        }
    }
    ctx->pc = 0x133CD8u;
    // 0x133cd8: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x133CD8u;
    SET_GPR_U32(ctx, 31, 0x133CE0u);
    ctx->pc = 0x133CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133CD8u;
    // 0x133cdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x133CD8u, 0x133CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133CE0u;
label_133ce0:
    // 0x133ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ce4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x133ce8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133cec: 0x3e00008  jr          $ra
    ctx->pc = 0x133CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133CECu;
        // 0x133cf0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133CF4u;
    // 0x133cf4: 0x0  nop
    ctx->pc = 0x133cf4u;
    // NOP
    ctx->pc = 0x133cf8u;
}
