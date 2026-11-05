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

// Function: sub_00132AD8
// Address: 0x132ad8 - 0x132b38
void sub_00132AD8_0x132ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132AD8_0x132ad8");
#endif

    switch (ctx->pc) {
        case 0x132b00u: goto label_132b00;
        case 0x132b10u: goto label_132b10;
        case 0x132b1cu: goto label_132b1c;
        case 0x132b24u: goto label_132b24;
        default: break;
    }

    ctx->pc = 0x132ad8u;

    // 0x132ad8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x132ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x132adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x132adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x132ae0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x132ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x132ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x132ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132ae8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132aec: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x132aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x132af0: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x132AF0u;
    {
        const bool branch_taken_0x132af0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x132AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132AF0u;
        // 0x132af4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132af0) {
            ctx->pc = 0x132B24u;
            goto label_132b24;
        }
    }
    ctx->pc = 0x132AF8u;
    // 0x132af8: 0xc04244c  jal         func_109130
    ctx->pc = 0x132AF8u;
    SET_GPR_U32(ctx, 31, 0x132B00u);
    ctx->pc = 0x109130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109130u, 0x132AF8u, 0x132B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B00u;
label_132b00:
    // 0x132b00: 0x54510009  bnel        $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x132B00u;
    {
        const bool branch_taken_0x132b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x132b00) {
            ctx->pc = 0x132B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x132B00u;
            // 0x132b04: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x132B28u;
            goto label_132b28;
        }
    }
    ctx->pc = 0x132B08u;
    // 0x132b08: 0xc042448  jal         func_109120
    ctx->pc = 0x132B08u;
    SET_GPR_U32(ctx, 31, 0x132B10u);
    ctx->pc = 0x132B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B08u;
    // 0x132b0c: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109120u, 0x132B08u, 0x132B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B10u;
label_132b10:
    // 0x132b10: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x132b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x132b14: 0xc04b4a2  jal         func_12D288
    ctx->pc = 0x132B14u;
    SET_GPR_U32(ctx, 31, 0x132B1Cu);
    ctx->pc = 0x132B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B14u;
    // 0x132b18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12D288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12D288u, 0x132B14u, 0x132B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B1Cu;
label_132b1c:
    // 0x132b1c: 0xc04cc10  jal         func_133040
    ctx->pc = 0x132B1Cu;
    SET_GPR_U32(ctx, 31, 0x132B24u);
    ctx->pc = 0x132B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x132B1Cu;
    // 0x132b20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x133040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x133040u, 0x132B1Cu, 0x132B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132B24u;
label_132b24:
    // 0x132b24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x132b24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132b28:
    // 0x132b28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x132b28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x132b2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132b30: 0x3e00008  jr          $ra
    ctx->pc = 0x132B30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x132B30u;
        // 0x132b34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x132B30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x132B38u;
}
