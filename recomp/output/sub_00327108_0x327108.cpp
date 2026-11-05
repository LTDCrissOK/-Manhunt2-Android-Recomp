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

// Function: sub_00327108
// Address: 0x327108 - 0x327160
void sub_00327108_0x327108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327108_0x327108");
#endif

    switch (ctx->pc) {
        case 0x327130u: goto label_327130;
        case 0x327144u: goto label_327144;
        default: break;
    }

    ctx->pc = 0x327108u;

    // 0x327108: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327108u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x32710c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x32710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x327110: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327114: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x327114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327118: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x32711c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x32711cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x327120: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x327120u;
    {
        const bool branch_taken_0x327120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x327120) {
            ctx->pc = 0x327124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x327120u;
            // 0x327124: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x327148u;
            goto label_327148;
        }
    }
    ctx->pc = 0x327128u;
    // 0x327128: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x327128u;
    SET_GPR_U32(ctx, 31, 0x327130u);
    ctx->pc = 0x32712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327128u;
    // 0x32712c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x327128u, 0x327130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327130u;
label_327130:
    // 0x327130: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x327130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327134: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x327134u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x327138: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x327138u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x32713c: 0xc0efa49  jal         func_3BE924
    ctx->pc = 0x32713Cu;
    SET_GPR_U32(ctx, 31, 0x327144u);
    ctx->pc = 0x327140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32713Cu;
    // 0x327140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BE924u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE924u, 0x32713Cu, 0x327144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x327144u;
label_327144:
    // 0x327144: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327148:
    // 0x327148: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327148u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x32714c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x32714cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x327150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327154: 0x3e00008  jr          $ra
    ctx->pc = 0x327154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327154u;
        // 0x327158: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32715Cu;
    // 0x32715c: 0x0  nop
    ctx->pc = 0x32715cu;
    // NOP
    ctx->pc = 0x327160u;
}
