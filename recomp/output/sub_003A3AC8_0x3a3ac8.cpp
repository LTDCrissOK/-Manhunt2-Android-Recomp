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

// Function: sub_003A3AC8
// Address: 0x3a3ac8 - 0x3a3b30
void sub_003A3AC8_0x3a3ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3AC8_0x3a3ac8");
#endif

    switch (ctx->pc) {
        case 0x3a3af0u: goto label_3a3af0;
        case 0x3a3af8u: goto label_3a3af8;
        case 0x3a3b0cu: goto label_3a3b0c;
        default: break;
    }

    ctx->pc = 0x3a3ac8u;

    // 0x3a3ac8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a3ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3acc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3a3accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a3ad0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a3ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a3ad4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a3ad4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3ad8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a3ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a3adc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a3adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a3ae0: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x3a3ae0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x3a3ae4: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3a3ae4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a3ae8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A3AE8u;
    {
        const bool branch_taken_0x3a3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3A3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3AE8u;
        // 0x3a3aec: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3ae8) {
            ctx->pc = 0x3A3B04u;
            goto label_3a3b04;
        }
    }
    ctx->pc = 0x3A3AF0u;
label_3a3af0:
    // 0x3a3af0: 0xc0e8fcc  jal         func_3A3F30
    ctx->pc = 0x3A3AF0u;
    SET_GPR_U32(ctx, 31, 0x3A3AF8u);
    ctx->pc = 0x3A3F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3F30u, 0x3A3AF0u, 0x3A3AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3AF8u;
label_3a3af8:
    // 0x3a3af8: 0x82020001  lb          $v0, 0x1($s0)
    ctx->pc = 0x3a3af8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3a3afc: 0x1051fffc  beq         $v0, $s1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x3A3AFCu;
    {
        const bool branch_taken_0x3a3afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x3a3afc) {
            ctx->pc = 0x3A3AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a3af0;
        }
    }
    ctx->pc = 0x3A3B04u;
label_3a3b04:
    // 0x3a3b04: 0xc0e8e12  jal         func_3A3848
    ctx->pc = 0x3A3B04u;
    SET_GPR_U32(ctx, 31, 0x3A3B0Cu);
    ctx->pc = 0x3A3B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B04u;
    // 0x3a3b08: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3848u, 0x3A3B04u, 0x3A3B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3B0Cu;
label_3a3b0c:
    // 0x3a3b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3a3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a3b10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a3b14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3a3b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3b18: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a3b18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a3b1c: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x3a3b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x3a3b20: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3b20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a3b24: 0x80efab3  j           func_3BEACC
    ctx->pc = 0x3A3B24u;
    ctx->pc = 0x3A3B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3B24u;
    // 0x3a3b28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    sub_003BEACC_0x3beacc(rdram, ctx, runtime); return;
    ctx->pc = 0x3A3B2Cu;
    // 0x3a3b2c: 0x0  nop
    ctx->pc = 0x3a3b2cu;
    // NOP
    ctx->pc = 0x3a3b30u;
}
