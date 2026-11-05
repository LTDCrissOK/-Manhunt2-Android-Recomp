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

// Function: sub_002CA080
// Address: 0x2ca080 - 0x2ca130
void sub_002CA080_0x2ca080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CA080_0x2ca080");
#endif

    switch (ctx->pc) {
        case 0x2ca0b0u: goto label_2ca0b0;
        case 0x2ca0f8u: goto label_2ca0f8;
        default: break;
    }

    ctx->pc = 0x2ca080u;

    // 0x2ca080: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2ca080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2ca084: 0x52b02  srl         $a1, $a1, 12
    ctx->pc = 0x2ca084u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
    // 0x2ca088: 0x8c62b430  lw          $v0, -0x4BD0($v1)
    ctx->pc = 0x2ca088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294947888)));
    // 0x2ca08c: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2ca08cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ca090: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x2ca090u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x2ca094: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x2ca094u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2ca098: 0x10a0000b  beqz        $a1, . + 4 + (0xB << 2)
    ctx->pc = 0x2CA098u;
    {
        const bool branch_taken_0x2ca098 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA098u;
        // 0x2ca09c: 0x23302  srl         $a2, $v0, 12 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca098) {
            ctx->pc = 0x2CA0C8u;
            goto label_2ca0c8;
        }
    }
    ctx->pc = 0x2CA0A0u;
    // 0x2ca0a0: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ca0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ca0a4: 0x24425d50  addiu       $v0, $v0, 0x5D50
    ctx->pc = 0x2ca0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x2ca0a8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2ca0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2ca0ac: 0x0  nop
    ctx->pc = 0x2ca0acu;
    // NOP
label_2ca0b0:
    // 0x2ca0b0: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x2ca0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ca0b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2ca0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x2ca0b8: 0x0  nop
    ctx->pc = 0x2ca0b8u;
    // NOP
    // 0x2ca0bc: 0x0  nop
    ctx->pc = 0x2ca0bcu;
    // NOP
    // 0x2ca0c0: 0x14a0fffb  bnez        $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2CA0C0u;
    {
        const bool branch_taken_0x2ca0c0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0C0u;
        // 0x2ca0c4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0c0) {
            ctx->pc = 0x2CA0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca0b0;
        }
    }
    ctx->pc = 0x2CA0C8u;
label_2ca0c8:
    // 0x2ca0c8: 0x8ce2b434  lw          $v0, -0x4BCC($a3)
    ctx->pc = 0x2ca0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294947892)));
    // 0x2ca0cc: 0x14820015  bne         $a0, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2CA0CCu;
    {
        const bool branch_taken_0x2ca0cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2CA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0CCu;
        // 0x2ca0d0: 0x2cc21800  sltiu       $v0, $a2, 0x1800 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0cc) {
            ctx->pc = 0x2CA124u;
            goto label_2ca124;
        }
    }
    ctx->pc = 0x2CA0D4u;
    // 0x2ca0d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2CA0D4u;
    {
        const bool branch_taken_0x2ca0d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0D4u;
        // 0x2ca0d8: 0x8d02b430  lw          $v0, -0x4BD0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0d4) {
            ctx->pc = 0x2CA118u;
            goto label_2ca118;
        }
    }
    ctx->pc = 0x2CA0DCu;
    // 0x2ca0dc: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2ca0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2ca0e0: 0x24445d50  addiu       $a0, $v0, 0x5D50
    ctx->pc = 0x2ca0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 23888));
    // 0x2ca0e4: 0xc41821  addu        $v1, $a2, $a0
    ctx->pc = 0x2ca0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ca0e8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2ca0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ca0ec: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2CA0ECu;
    {
        const bool branch_taken_0x2ca0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CA0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0ECu;
        // 0x2ca0f0: 0x8d02b430  lw          $v0, -0x4BD0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0ec) {
            ctx->pc = 0x2CA118u;
            goto label_2ca118;
        }
    }
    ctx->pc = 0x2CA0F4u;
    // 0x2ca0f4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2ca0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2ca0f8:
    // 0x2ca0f8: 0x2cc21800  sltiu       $v0, $a2, 0x1800
    ctx->pc = 0x2ca0f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
    // 0x2ca0fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CA0FCu;
    {
        const bool branch_taken_0x2ca0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA0FCu;
        // 0x2ca100: 0x8d02b430  lw          $v0, -0x4BD0($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947888)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ca0fc) {
            ctx->pc = 0x2CA118u;
            goto label_2ca118;
        }
    }
    ctx->pc = 0x2CA104u;
    // 0x2ca104: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x2ca104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x2ca108: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2ca108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ca10c: 0x5060fffa  beql        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2CA10Cu;
    {
        const bool branch_taken_0x2ca10c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ca10c) {
            ctx->pc = 0x2CA110u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CA10Cu;
            // 0x2ca110: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CA0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2ca0f8;
        }
    }
    ctx->pc = 0x2CA114u;
    // 0x2ca114: 0x8d02b430  lw          $v0, -0x4BD0($t0)
    ctx->pc = 0x2ca114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947888)));
label_2ca118:
    // 0x2ca118: 0x61b00  sll         $v1, $a2, 12
    ctx->pc = 0x2ca118u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 12));
    // 0x2ca11c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ca11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ca120: 0xace2b434  sw          $v0, -0x4BCC($a3)
    ctx->pc = 0x2ca120u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294947892), GPR_U32(ctx, 2));
label_2ca124:
    // 0x2ca124: 0x3e00008  jr          $ra
    ctx->pc = 0x2CA124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CA128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CA124u;
        // 0x2ca128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CA124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CA12Cu;
    // 0x2ca12c: 0x0  nop
    ctx->pc = 0x2ca12cu;
    // NOP
    ctx->pc = 0x2ca130u;
}
