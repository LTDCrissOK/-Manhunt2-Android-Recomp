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

// Function: sub_001179E8
// Address: 0x1179e8 - 0x117a40
void sub_001179E8_0x1179e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001179E8_0x1179e8");
#endif

    switch (ctx->pc) {
        case 0x117a14u: goto label_117a14;
        case 0x117a28u: goto label_117a28;
        default: break;
    }

    ctx->pc = 0x1179e8u;

    // 0x1179e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1179e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1179ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1179ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1179f0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1179f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1179f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1179f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1179f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1179f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1179fc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1179fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x117a00: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x117a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x117a04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x117A04u;
    {
        const bool branch_taken_0x117a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x117A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A04u;
        // 0x117a08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x117a04) {
            ctx->pc = 0x117A14u;
            goto label_117a14;
        }
    }
    ctx->pc = 0x117A0Cu;
    // 0x117a0c: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x117A0Cu;
    SET_GPR_U32(ctx, 31, 0x117A14u);
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x117A0Cu, 0x117A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A14u;
label_117a14:
    // 0x117a14: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x117a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x117a18: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x117A18u;
    {
        const bool branch_taken_0x117a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x117a18) {
            ctx->pc = 0x117A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x117A18u;
            // 0x117a1c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x117A2Cu;
            goto label_117a2c;
        }
    }
    ctx->pc = 0x117A20u;
    // 0x117a20: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x117A20u;
    SET_GPR_U32(ctx, 31, 0x117A28u);
    ctx->pc = 0x117A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x117A20u;
    // 0x117a24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x117A20u, 0x117A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x117A28u;
label_117a28:
    // 0x117a28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x117a28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_117a2c:
    // 0x117a2c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x117a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x117a30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x117a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x117a34: 0x3e00008  jr          $ra
    ctx->pc = 0x117A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x117A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x117A34u;
        // 0x117a38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x117A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x117A3Cu;
    // 0x117a3c: 0x0  nop
    ctx->pc = 0x117a3cu;
    // NOP
    ctx->pc = 0x117a40u;
}
