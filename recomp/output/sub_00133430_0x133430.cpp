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

// Function: sub_00133430
// Address: 0x133430 - 0x1334b0
void sub_00133430_0x133430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133430_0x133430");
#endif

    switch (ctx->pc) {
        case 0x133460u: goto label_133460;
        case 0x13346cu: goto label_13346c;
        case 0x133474u: goto label_133474;
        case 0x13348cu: goto label_13348c;
        case 0x13349cu: goto label_13349c;
        default: break;
    }

    ctx->pc = 0x133430u;

    // 0x133430: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x133430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x133434: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x133434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x133438: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x133438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x13343c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13343cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133440: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x133440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x133444: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x133444u;
    {
        const bool branch_taken_0x133444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x133444) {
            ctx->pc = 0x133448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133444u;
            // 0x133448: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1334A0u;
            goto label_1334a0;
        }
    }
    ctx->pc = 0x13344Cu;
    // 0x13344c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x13344cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133450: 0x5080000b  beql        $a0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x133450u;
    {
        const bool branch_taken_0x133450 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x133450) {
            ctx->pc = 0x133454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x133450u;
            // 0x133454: 0xae000020  sw          $zero, 0x20($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x133480u;
            goto label_133480;
        }
    }
    ctx->pc = 0x133458u;
    // 0x133458: 0xc04561a  jal         func_115868
    ctx->pc = 0x133458u;
    SET_GPR_U32(ctx, 31, 0x133460u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133458u, 0x133460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133460u;
label_133460:
    // 0x133460: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x133464: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x133464u;
    SET_GPR_U32(ctx, 31, 0x13346Cu);
    ctx->pc = 0x133468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133464u;
    // 0x133468: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x133464u, 0x13346Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13346Cu;
label_13346c:
    // 0x13346c: 0xc04cccc  jal         func_133330
    ctx->pc = 0x13346Cu;
    SET_GPR_U32(ctx, 31, 0x133474u);
    ctx->pc = 0x133470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13346Cu;
    // 0x133470: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133330u, 0x13346Cu, 0x133474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x133474u;
label_133474:
    // 0x133474: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x133474u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x133478: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x133478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13347c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x13347cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_133480:
    // 0x133480: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133484: 0xc04561a  jal         func_115868
    ctx->pc = 0x133484u;
    SET_GPR_U32(ctx, 31, 0x13348Cu);
    ctx->pc = 0x133488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133484u;
    // 0x133488: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x133484u, 0x13348Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13348Cu;
label_13348c:
    // 0x13348c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x13348cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x133490: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x133490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133494: 0xc04b496  jal         func_12D258
    ctx->pc = 0x133494u;
    SET_GPR_U32(ctx, 31, 0x13349Cu);
    ctx->pc = 0x133498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133494u;
    // 0x133498: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D258u, 0x133494u, 0x13349Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13349Cu;
label_13349c:
    // 0x13349c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13349cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1334a0:
    // 0x1334a0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1334a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1334a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1334A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1334A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1334A4u;
        // 0x1334a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1334A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1334ACu;
    // 0x1334ac: 0x0  nop
    ctx->pc = 0x1334acu;
    // NOP
    ctx->pc = 0x1334b0u;
}
