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

// Function: sub_001FD018
// Address: 0x1fd018 - 0x1fd0a0
void sub_001FD018_0x1fd018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD018_0x1fd018");
#endif

    switch (ctx->pc) {
        case 0x1fd054u: goto label_1fd054;
        case 0x1fd068u: goto label_1fd068;
        case 0x1fd080u: goto label_1fd080;
        default: break;
    }

    ctx->pc = 0x1fd018u;

    // 0x1fd018: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x1fd018u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x1fd01c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fd01cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fd020: 0x8c6225a8  lw          $v0, 0x25A8($v1)
    ctx->pc = 0x1fd020u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x4C25A8u));
    // 0x1fd024: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1fd024u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd028: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fd028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fd02c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD02Cu;
    {
        const bool branch_taken_0x1fd02c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD02Cu;
        // 0x1fd030: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd02c) {
            ctx->pc = 0x1FD088u;
            goto label_1fd088;
        }
    }
    ctx->pc = 0x1FD034u;
    // 0x1fd034: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1FD034u;
    {
        const bool branch_taken_0x1fd034 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD034u;
        // 0x1fd038: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd034) {
            ctx->pc = 0x1FD08Cu;
            goto label_1fd08c;
        }
    }
    ctx->pc = 0x1FD03Cu;
    // 0x1fd03c: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1fd03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1fd040: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1FD040u;
    {
        const bool branch_taken_0x1fd040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD040u;
        // 0x1fd044: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd040) {
            ctx->pc = 0x1FD088u;
            goto label_1fd088;
        }
    }
    ctx->pc = 0x1FD048u;
    // 0x1fd048: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd048u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd04c: 0xc0aebd6  jal         func_2BAF58
    ctx->pc = 0x1FD04Cu;
    SET_GPR_U32(ctx, 31, 0x1FD054u);
    ctx->pc = 0x1FD050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD04Cu;
    // 0x1fd050: 0x24844ed8  addiu       $a0, $a0, 0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x1FD04Cu, 0x1FD054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD054u;
label_1fd054:
    // 0x1fd054: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fd054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd058: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x1FD058u;
    {
        const bool branch_taken_0x1fd058 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD058u;
        // 0x1fd05c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd058) {
            ctx->pc = 0x1FD08Cu;
            goto label_1fd08c;
        }
    }
    ctx->pc = 0x1FD060u;
    // 0x1fd060: 0xc07f438  jal         func_1FD0E0
    ctx->pc = 0x1FD060u;
    SET_GPR_U32(ctx, 31, 0x1FD068u);
    ctx->pc = 0x1FD064u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD060u;
    // 0x1fd064: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD0E0u, 0x1FD060u, 0x1FD068u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD068u;
label_1fd068:
    // 0x1fd068: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fd068u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fd06c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1fd06cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd070: 0x8c449330  lw          $a0, -0x6CD0($v0)
    ctx->pc = 0x1fd070u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3F9330u));
    // 0x1fd074: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd074u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd078: 0xc0b6e3c  jal         func_2DB8F0
    ctx->pc = 0x1FD078u;
    SET_GPR_U32(ctx, 31, 0x1FD080u);
    ctx->pc = 0x1FD07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FD078u;
    // 0x1fd07c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB8F0u, 0x1FD078u, 0x1FD080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FD080u;
label_1fd080:
    // 0x1fd080: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1FD080u;
    {
        const bool branch_taken_0x1fd080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD080u;
        // 0x1fd084: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd080) {
            ctx->pc = 0x1FD090u;
            goto label_1fd090;
        }
    }
    ctx->pc = 0x1FD088u;
label_1fd088:
    // 0x1fd088: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd088u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd08c:
    // 0x1fd08c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fd08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1fd090:
    // 0x1fd090: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fd090u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fd094: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FD094u;
        // 0x1fd098: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FD094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FD09Cu;
    // 0x1fd09c: 0x0  nop
    ctx->pc = 0x1fd09cu;
    // NOP
    ctx->pc = 0x1fd0a0u;
}
