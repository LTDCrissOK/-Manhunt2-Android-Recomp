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

// Function: sub_00115AD8
// Address: 0x115ad8 - 0x115b40
void sub_00115AD8_0x115ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115AD8_0x115ad8");
#endif

    switch (ctx->pc) {
        case 0x115b28u: goto label_115b28;
        case 0x115b30u: goto label_115b30;
        default: break;
    }

    ctx->pc = 0x115ad8u;

    // 0x115ad8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115adc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x115adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x115ae0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x115ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x115ae4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x115ae4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ae8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x115ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x115aec: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x115AECu;
    {
        const bool branch_taken_0x115aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x115aec) {
            ctx->pc = 0x115AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115AECu;
            // 0x115af0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115B34u;
            goto label_115b34;
        }
    }
    ctx->pc = 0x115AF4u;
    // 0x115af4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x115af4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x115af8: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x115af8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x115afc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x115afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x115b00: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x115b00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x115b04: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x115b04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x115b08: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x115b08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x115b0c: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x115b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x115b10: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x115b10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x115b14: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x115b14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x115b18: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x115b18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x115b1c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x115b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x115b20: 0xc0456d0  jal         func_115B40
    ctx->pc = 0x115B20u;
    SET_GPR_U32(ctx, 31, 0x115B28u);
    ctx->pc = 0x115B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B20u;
    // 0x115b24: 0xa6020076  sh          $v0, 0x76($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 118), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115B40u, 0x115B20u, 0x115B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B28u;
label_115b28:
    // 0x115b28: 0xc045714  jal         func_115C50
    ctx->pc = 0x115B28u;
    SET_GPR_U32(ctx, 31, 0x115B30u);
    ctx->pc = 0x115B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115B28u;
    // 0x115b2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C50u, 0x115B28u, 0x115B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115B30u;
label_115b30:
    // 0x115b30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x115b30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115b34:
    // 0x115b34: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x115b34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x115b38: 0x3e00008  jr          $ra
    ctx->pc = 0x115B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115B38u;
        // 0x115b3c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x115B40u;
}
