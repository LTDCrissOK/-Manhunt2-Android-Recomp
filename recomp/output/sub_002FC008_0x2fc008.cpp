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

// Function: sub_002FC008
// Address: 0x2fc008 - 0x2fc080
void sub_002FC008_0x2fc008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FC008_0x2fc008");
#endif

    switch (ctx->pc) {
        case 0x2fc038u: goto label_2fc038;
        default: break;
    }

    ctx->pc = 0x2fc008u;

    // 0x2fc008: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2fc008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2fc00c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fc00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fc010: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2fc010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fc014: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2FC014u;
    {
        const bool branch_taken_0x2fc014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC014u;
        // 0x2fc018: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc014) {
            ctx->pc = 0x2FC068u;
            goto label_2fc068;
        }
    }
    ctx->pc = 0x2FC01Cu;
    // 0x2fc01c: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x2fc01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x2fc020: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x2fc020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x2fc024: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x2fc024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x2fc028: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2FC028u;
    {
        const bool branch_taken_0x2fc028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC028u;
        // 0x2fc02c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc028) {
            ctx->pc = 0x2FC06Cu;
            goto label_2fc06c;
        }
    }
    ctx->pc = 0x2FC030u;
    // 0x2fc030: 0xc0d8de2  jal         func_363788
    ctx->pc = 0x2FC030u;
    SET_GPR_U32(ctx, 31, 0x2FC038u);
    ctx->pc = 0x2FC034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FC030u;
    // 0x2fc034: 0x8e040274  lw          $a0, 0x274($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2FC030u, 0x2FC038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FC038u;
label_2fc038:
    // 0x2fc038: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x2fc038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x2fc03c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2FC03Cu;
    {
        const bool branch_taken_0x2fc03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC03Cu;
        // 0x2fc040: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc03c) {
            ctx->pc = 0x2FC06Cu;
            goto label_2fc06c;
        }
    }
    ctx->pc = 0x2FC044u;
    // 0x2fc044: 0x8e040274  lw          $a0, 0x274($s0)
    ctx->pc = 0x2fc044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 628)));
    // 0x2fc048: 0x8c820068  lw          $v0, 0x68($a0)
    ctx->pc = 0x2fc048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x2fc04c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FC04Cu;
    {
        const bool branch_taken_0x2fc04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FC050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC04Cu;
        // 0x2fc050: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc04c) {
            ctx->pc = 0x2FC060u;
            goto label_2fc060;
        }
    }
    ctx->pc = 0x2FC054u;
    // 0x2fc054: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x2fc054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x2fc058: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2FC058u;
    {
        const bool branch_taken_0x2fc058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fc058) {
            ctx->pc = 0x2FC05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FC058u;
            // 0x2fc05c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FC060u;
            goto label_2fc060;
        }
    }
    ctx->pc = 0x2FC060u;
label_2fc060:
    // 0x2fc060: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2FC060u;
    {
        const bool branch_taken_0x2fc060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FC064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC060u;
        // 0x2fc064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fc060) {
            ctx->pc = 0x2FC06Cu;
            goto label_2fc06c;
        }
    }
    ctx->pc = 0x2FC068u;
label_2fc068:
    // 0x2fc068: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fc068u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fc06c:
    // 0x2fc06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fc06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fc070: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2fc070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fc074: 0x3e00008  jr          $ra
    ctx->pc = 0x2FC074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FC078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FC074u;
        // 0x2fc078: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FC074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FC07Cu;
    // 0x2fc07c: 0x0  nop
    ctx->pc = 0x2fc07cu;
    // NOP
    ctx->pc = 0x2fc080u;
}
