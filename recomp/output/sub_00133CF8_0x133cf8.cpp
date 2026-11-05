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

// Function: sub_00133CF8
// Address: 0x133cf8 - 0x133d48
void sub_00133CF8_0x133cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133CF8_0x133cf8");
#endif

    switch (ctx->pc) {
        case 0x133cf8u: goto label_133cf8;
        case 0x133cfcu: goto label_133cfc;
        case 0x133d00u: goto label_133d00;
        case 0x133d04u: goto label_133d04;
        case 0x133d08u: goto label_133d08;
        case 0x133d0cu: goto label_133d0c;
        case 0x133d10u: goto label_133d10;
        case 0x133d14u: goto label_133d14;
        case 0x133d18u: goto label_133d18;
        case 0x133d1cu: goto label_133d1c;
        case 0x133d20u: goto label_133d20;
        case 0x133d24u: goto label_133d24;
        case 0x133d28u: goto label_133d28;
        case 0x133d2cu: goto label_133d2c;
        case 0x133d30u: goto label_133d30;
        case 0x133d34u: goto label_133d34;
        case 0x133d38u: goto label_133d38;
        case 0x133d3cu: goto label_133d3c;
        case 0x133d40u: goto label_133d40;
        case 0x133d44u: goto label_133d44;
        default: break;
    }

    ctx->pc = 0x133cf8u;

label_133cf8:
    // 0x133cf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_133cfc:
    // 0x133cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_133d00:
    // 0x133d00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x133d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_133d04:
    // 0x133d04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x133d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_133d08:
    // 0x133d08: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_133d0c:
    // 0x133d0c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x133d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_133d10:
    // 0x133d10: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x133d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_133d14:
    // 0x133d14: 0x40f809  jalr        $v0
label_133d18:
    if (ctx->pc == 0x133D18u) {
        ctx->pc = 0x133D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D14u;
        // 0x133d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D1Cu;
        goto label_133d1c;
    }
    ctx->pc = 0x133D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133D1Cu);
        ctx->pc = 0x133D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D14u;
        // 0x133d18: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D14u, 0x133D1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x133D1Cu;
label_133d1c:
    // 0x133d1c: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x133d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
label_133d20:
    // 0x133d20: 0xc04cfaa  jal         func_133EA8
label_133d24:
    if (ctx->pc == 0x133D24u) {
        ctx->pc = 0x133D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D20u;
        // 0x133d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D28u;
        goto label_133d28;
    }
    ctx->pc = 0x133D20u;
    SET_GPR_U32(ctx, 31, 0x133D28u);
    ctx->pc = 0x133D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133D20u;
    // 0x133d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133EA8u, 0x133D20u, 0x133D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133D28u;
label_133d28:
    // 0x133d28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133d2c:
    // 0x133d2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x133d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_133d30:
    // 0x133d30: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x133d30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_133d34:
    // 0x133d34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x133d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_133d38:
    // 0x133d38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133d38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_133d3c:
    // 0x133d3c: 0x3e00008  jr          $ra
label_133d40:
    if (ctx->pc == 0x133D40u) {
        ctx->pc = 0x133D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D3Cu;
        // 0x133d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x133D44u;
        goto label_133d44;
    }
    ctx->pc = 0x133D3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133D3Cu;
        // 0x133d40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x133D3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x133D44u;
label_133d44:
    // 0x133d44: 0x0  nop
    ctx->pc = 0x133d44u;
    // NOP
    ctx->pc = 0x133d48u;
}
