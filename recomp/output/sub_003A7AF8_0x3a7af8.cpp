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

// Function: sub_003A7AF8
// Address: 0x3a7af8 - 0x3a7b28
void sub_003A7AF8_0x3a7af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A7AF8_0x3a7af8");
#endif

    switch (ctx->pc) {
        case 0x3a7af8u: goto label_3a7af8;
        case 0x3a7afcu: goto label_3a7afc;
        case 0x3a7b00u: goto label_3a7b00;
        case 0x3a7b04u: goto label_3a7b04;
        case 0x3a7b08u: goto label_3a7b08;
        case 0x3a7b0cu: goto label_3a7b0c;
        case 0x3a7b10u: goto label_3a7b10;
        case 0x3a7b14u: goto label_3a7b14;
        case 0x3a7b18u: goto label_3a7b18;
        case 0x3a7b1cu: goto label_3a7b1c;
        case 0x3a7b20u: goto label_3a7b20;
        case 0x3a7b24u: goto label_3a7b24;
        default: break;
    }

    ctx->pc = 0x3a7af8u;

label_3a7af8:
    // 0x3a7af8: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a7af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a7afc:
    // 0x3a7afc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a7afcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a7b00:
    // 0x3a7b00: 0x8c4386bc  lw          $v1, -0x7944($v0)
    ctx->pc = 0x3a7b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936252)));
label_3a7b04:
    // 0x3a7b04: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a7b04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a7b08:
    // 0x3a7b08: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a7b0c:
    if (ctx->pc == 0x3A7B0Cu) {
        ctx->pc = 0x3A7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B08u;
        // 0x3a7b0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7B10u;
        goto label_3a7b10;
    }
    ctx->pc = 0x3A7B08u;
    {
        const bool branch_taken_0x3a7b08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A7B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B08u;
        // 0x3a7b0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a7b08) {
            ctx->pc = 0x3A7B1Cu;
            goto label_3a7b1c;
        }
    }
    ctx->pc = 0x3A7B10u;
label_3a7b10:
    // 0x3a7b10: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a7b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
label_3a7b14:
    // 0x3a7b14: 0x60f809  jalr        $v1
label_3a7b18:
    if (ctx->pc == 0x3A7B18u) {
        ctx->pc = 0x3A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B14u;
        // 0x3a7b18: 0x8c4486c0  lw          $a0, -0x7940($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7B1Cu;
        goto label_3a7b1c;
    }
    ctx->pc = 0x3A7B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A7B1Cu);
        ctx->pc = 0x3A7B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B14u;
        // 0x3a7b18: 0x8c4486c0  lw          $a0, -0x7940($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936256)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7B14u, 0x3A7B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A7B1Cu;
label_3a7b1c:
    // 0x3a7b1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a7b1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a7b20:
    // 0x3a7b20: 0x3e00008  jr          $ra
label_3a7b24:
    if (ctx->pc == 0x3A7B24u) {
        ctx->pc = 0x3A7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B20u;
        // 0x3a7b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A7B28u;
        goto label_fallthrough_0x3a7b20;
    }
    ctx->pc = 0x3A7B20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A7B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A7B20u;
        // 0x3a7b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A7B20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a7b20:
    ctx->pc = 0x3A7B28u;
}
