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

// Function: sub_002FB9F8
// Address: 0x2fb9f8 - 0x2fba48
void sub_002FB9F8_0x2fb9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FB9F8_0x2fb9f8");
#endif

    switch (ctx->pc) {
        case 0x2fba10u: goto label_2fba10;
        case 0x2fba24u: goto label_2fba24;
        default: break;
    }

    ctx->pc = 0x2fb9f8u;

    // 0x2fb9f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fb9f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fb9fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fb9fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fba00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fba00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fba04: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fba04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fba08: 0xc0951ec  jal         func_2547B0
    ctx->pc = 0x2FBA08u;
    SET_GPR_U32(ctx, 31, 0x2FBA10u);
    ctx->pc = 0x2FBA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA08u;
    // 0x2fba0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2547B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2547B0u, 0x2FBA08u, 0x2FBA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA10u;
label_2fba10:
    // 0x2fba10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fba10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba14: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FBA14u;
    {
        const bool branch_taken_0x2fba14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FBA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA14u;
        // 0x2fba18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fba14) {
            ctx->pc = 0x2FBA24u;
            goto label_2fba24;
        }
    }
    ctx->pc = 0x2FBA1Cu;
    // 0x2fba1c: 0xc0cda26  jal         func_336898
    ctx->pc = 0x2FBA1Cu;
    SET_GPR_U32(ctx, 31, 0x2FBA24u);
    ctx->pc = 0x2FBA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FBA1Cu;
    // 0x2fba20: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x2FBA1Cu, 0x2FBA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FBA24u;
label_2fba24:
    // 0x2fba24: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fba24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fba28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fba28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fba2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fba2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fba30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fba30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fba34: 0x3e00008  jr          $ra
    ctx->pc = 0x2FBA34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FBA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FBA34u;
        // 0x2fba38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FBA34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FBA3Cu;
    // 0x2fba3c: 0x0  nop
    ctx->pc = 0x2fba3cu;
    // NOP
    // 0x2fba40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2fba40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2fba44: 0x0  nop
    ctx->pc = 0x2fba44u;
    // NOP
    ctx->pc = 0x2fba48u;
}
