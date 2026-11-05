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

// Function: sub_0029A020
// Address: 0x29a020 - 0x29a0c8
void sub_0029A020_0x29a020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A020_0x29a020");
#endif

    switch (ctx->pc) {
        case 0x29a034u: goto label_29a034;
        case 0x29a040u: goto label_29a040;
        case 0x29a078u: goto label_29a078;
        default: break;
    }

    ctx->pc = 0x29a020u;

    // 0x29a020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29a020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29a024: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a028: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x29a028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x29a02c: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x29A02Cu;
    SET_GPR_U32(ctx, 31, 0x29A034u);
    ctx->pc = 0x29A030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A02Cu;
    // 0x29a030: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x29A02Cu, 0x29A034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A034u;
label_29a034:
    // 0x29a034: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29a034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a038: 0xc0a71f8  jal         func_29C7E0
    ctx->pc = 0x29A038u;
    SET_GPR_U32(ctx, 31, 0x29A040u);
    ctx->pc = 0x29A03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A038u;
    // 0x29a03c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E0u, 0x29A038u, 0x29A040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A040u;
label_29a040:
    // 0x29a040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x29a040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a044: 0xae030080  sw          $v1, 0x80($s0)
    ctx->pc = 0x29a044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 3));
    // 0x29a048: 0x4600005  bltz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A048u;
    {
        const bool branch_taken_0x29a048 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x29A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A048u;
        // 0x29a04c: 0xae030084  sw          $v1, 0x84($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a048) {
            ctx->pc = 0x29A060u;
            goto label_29a060;
        }
    }
    ctx->pc = 0x29A050u;
    // 0x29a050: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a054: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29a054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a058: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x29A058u;
    {
        const bool branch_taken_0x29a058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29a058) {
            ctx->pc = 0x29A05Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29A058u;
            // 0x29a05c: 0x8e020078  lw          $v0, 0x78($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29A068u;
            goto label_29a068;
        }
    }
    ctx->pc = 0x29A060u;
label_29a060:
    // 0x29a060: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x29a060u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x29a064: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_29a068:
    // 0x29a068: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29A068u;
    {
        const bool branch_taken_0x29a068 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A068u;
        // 0x29a06c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a068) {
            ctx->pc = 0x29A098u;
            goto label_29a098;
        }
    }
    ctx->pc = 0x29A070u;
    // 0x29a070: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29a070u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a074: 0x0  nop
    ctx->pc = 0x29a074u;
    // NOP
label_29a078:
    // 0x29a078: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x29a07c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29a07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29a080: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x29a080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29a084: 0xa0400060  sb          $zero, 0x60($v0)
    ctx->pc = 0x29a084u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x29a088: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x29a088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x29a08c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x29a08cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a090: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29A090u;
    {
        const bool branch_taken_0x29a090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A090u;
        // 0x29a094: 0x24840078  addiu       $a0, $a0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a090) {
            ctx->pc = 0x29A078u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a078;
        }
    }
    ctx->pc = 0x29A098u;
label_29a098:
    // 0x29a098: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x29a09c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x29a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x29a0a0: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x29a0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a0a8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x29a0a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x29a0ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a0acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a0b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x29a0b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29a0b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x29a0b8: 0xa0450060  sb          $a1, 0x60($v0)
    ctx->pc = 0x29a0b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 96), (uint8_t)GPR_U32(ctx, 5));
    // 0x29a0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x29A0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0BCu;
        // 0x29a0c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A0C4u;
    // 0x29a0c4: 0x0  nop
    ctx->pc = 0x29a0c4u;
    // NOP
    ctx->pc = 0x29a0c8u;
}
