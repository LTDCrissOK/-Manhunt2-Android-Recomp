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

// Function: sub_00128230
// Address: 0x128230 - 0x1282a0
void sub_00128230_0x128230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128230_0x128230");
#endif

    switch (ctx->pc) {
        case 0x128248u: goto label_128248;
        case 0x128278u: goto label_128278;
        default: break;
    }

    ctx->pc = 0x128230u;

    // 0x128230: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x128230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128234: 0x90c20e80  lbu         $v0, 0xE80($a2)
    ctx->pc = 0x128234u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3712)));
    // 0x128238: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x128238u;
    {
        const bool branch_taken_0x128238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x128238) {
            ctx->pc = 0x12823Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128238u;
            // 0x12823c: 0x90c20e80  lbu         $v0, 0xE80($a2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3712)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x128250u;
            goto label_128250;
        }
    }
    ctx->pc = 0x128240u;
    // 0x128240: 0x3e00008  jr          $ra
    ctx->pc = 0x128240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128240u;
        // 0x128244: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128248u;
label_128248:
    // 0x128248: 0x3e00008  jr          $ra
    ctx->pc = 0x128248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128248u;
        // 0x12824c: 0x30a200ff  andi        $v0, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128250u;
label_128250:
    // 0x128250: 0x2445ffff  addiu       $a1, $v0, -0x1
    ctx->pc = 0x128250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x128254: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x128254u;
    {
        const bool branch_taken_0x128254 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x128258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128254u;
        // 0x128258: 0x52400  sll         $a0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128254) {
            ctx->pc = 0x128294u;
            goto label_128294;
        }
    }
    ctx->pc = 0x12825Cu;
    // 0x12825c: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x128260: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x128260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x128264: 0x24420a80  addiu       $v0, $v0, 0xA80
    ctx->pc = 0x128264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2688));
    // 0x128268: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x128268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x12826c: 0x462021  addu        $a0, $v0, $a2
    ctx->pc = 0x12826cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x128270: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x128274: 0x0  nop
    ctx->pc = 0x128274u;
    // NOP
label_128278:
    // 0x128278: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x128278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x12827c: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12827Cu;
    {
        const bool branch_taken_0x12827c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x128280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12827Cu;
        // 0x128280: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12827c) {
            ctx->pc = 0x128248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128248;
        }
    }
    ctx->pc = 0x128284u;
    // 0x128284: 0x2484ffe0  addiu       $a0, $a0, -0x20
    ctx->pc = 0x128284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x128288: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x128288u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x12828c: 0x4a1fffa  bgez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12828Cu;
    {
        const bool branch_taken_0x12828c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x128290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12828Cu;
        // 0x128290: 0x661821  addu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12828c) {
            ctx->pc = 0x128278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_128278;
        }
    }
    ctx->pc = 0x128294u;
label_128294:
    // 0x128294: 0x3e00008  jr          $ra
    ctx->pc = 0x128294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128294u;
        // 0x128298: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12829Cu;
    // 0x12829c: 0x0  nop
    ctx->pc = 0x12829cu;
    // NOP
    ctx->pc = 0x1282a0u;
}
