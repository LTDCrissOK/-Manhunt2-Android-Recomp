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

// Function: sub_00178280
// Address: 0x178280 - 0x178300
void sub_00178280_0x178280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178280_0x178280");
#endif

    switch (ctx->pc) {
        case 0x1782b0u: goto label_1782b0;
        case 0x1782ccu: goto label_1782cc;
        default: break;
    }

    ctx->pc = 0x178280u;

    // 0x178280: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178284: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x178284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x178288: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x178288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17828c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17828cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178290: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x178290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x178294: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x178294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x178298: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x178298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x17829c: 0x263200d8  addiu       $s2, $s1, 0xD8
    ctx->pc = 0x17829cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
    // 0x1782a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1782a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1782a4: 0x24130021  addiu       $s3, $zero, 0x21
    ctx->pc = 0x1782a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x1782a8: 0x1018c0  sll         $v1, $s0, 3
    ctx->pc = 0x1782a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1782ac: 0x0  nop
    ctx->pc = 0x1782acu;
    // NOP
label_1782b0:
    // 0x1782b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1782b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1782b4: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x1782b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1782b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1782bc: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1782BCu;
    {
        const bool branch_taken_0x1782bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x1782C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782BCu;
        // 0x1782c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1782bc) {
            ctx->pc = 0x1782CCu;
            goto label_1782cc;
        }
    }
    ctx->pc = 0x1782C4u;
    // 0x1782c4: 0xc05e0c0  jal         func_178300
    ctx->pc = 0x1782C4u;
    SET_GPR_U32(ctx, 31, 0x1782CCu);
    ctx->pc = 0x178300u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x178300u, 0x1782C4u, 0x1782CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782CCu;
label_1782cc:
    // 0x1782cc: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x1782ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1782d0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1782d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1782d4: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x1782d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x1782d8: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1782D8u;
    {
        const bool branch_taken_0x1782d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1782d8) {
            ctx->pc = 0x1782DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1782D8u;
            // 0x1782dc: 0x1018c0  sll         $v1, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1782B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1782b0;
        }
    }
    ctx->pc = 0x1782E0u;
    // 0x1782e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1782e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1782e4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1782e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1782e8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1782e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1782ec: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1782ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1782f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1782f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1782f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1782F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782F4u;
        // 0x1782f8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1782FCu;
    // 0x1782fc: 0x0  nop
    ctx->pc = 0x1782fcu;
    // NOP
    ctx->pc = 0x178300u;
}
