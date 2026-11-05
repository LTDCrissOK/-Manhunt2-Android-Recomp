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

// Function: sub_00125CF8
// Address: 0x125cf8 - 0x125d50
void sub_00125CF8_0x125cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125CF8_0x125cf8");
#endif

    switch (ctx->pc) {
        case 0x125d0cu: goto label_125d0c;
        case 0x125d3cu: goto label_125d3c;
        default: break;
    }

    ctx->pc = 0x125cf8u;

    // 0x125cf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125cfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x125cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x125d00: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x125d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x125d04: 0xc049f1a  jal         func_127C68
    ctx->pc = 0x125D04u;
    SET_GPR_U32(ctx, 31, 0x125D0Cu);
    ctx->pc = 0x125D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D04u;
    // 0x125d08: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127C68u, 0x125D04u, 0x125D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D0Cu;
label_125d0c:
    // 0x125d0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x125d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125d10: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x125d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x125d14: 0x10a20009  beq         $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x125D14u;
    {
        const bool branch_taken_0x125d14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x125D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D14u;
        // 0x125d18: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d14) {
            ctx->pc = 0x125D3Cu;
            goto label_125d3c;
        }
    }
    ctx->pc = 0x125D1Cu;
    // 0x125d1c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x125d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x125d20: 0x24420870  addiu       $v0, $v0, 0x870
    ctx->pc = 0x125d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2160));
    // 0x125d24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x125d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x125d28: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x125d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x125d2c: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x125D2Cu;
    {
        const bool branch_taken_0x125d2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x125D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D2Cu;
        // 0x125d30: 0xac400024  sw          $zero, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125d2c) {
            ctx->pc = 0x125D3Cu;
            goto label_125d3c;
        }
    }
    ctx->pc = 0x125D34u;
    // 0x125d34: 0xc049f32  jal         func_127CC8
    ctx->pc = 0x125D34u;
    SET_GPR_U32(ctx, 31, 0x125D3Cu);
    ctx->pc = 0x125D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125D34u;
    // 0x125d38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127CC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127CC8u, 0x125D34u, 0x125D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x125D3Cu;
label_125d3c:
    // 0x125d3c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x125d3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125d40: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x125d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125d44: 0x3e00008  jr          $ra
    ctx->pc = 0x125D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125D44u;
        // 0x125d48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x125D4Cu;
    // 0x125d4c: 0x0  nop
    ctx->pc = 0x125d4cu;
    // NOP
    ctx->pc = 0x125d50u;
}
