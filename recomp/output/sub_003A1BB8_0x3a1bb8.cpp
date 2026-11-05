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

// Function: sub_003A1BB8
// Address: 0x3a1bb8 - 0x3a1c50
void sub_003A1BB8_0x3a1bb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A1BB8_0x3a1bb8");
#endif

    switch (ctx->pc) {
        case 0x3a1be4u: goto label_3a1be4;
        case 0x3a1bf8u: goto label_3a1bf8;
        case 0x3a1c0cu: goto label_3a1c0c;
        default: break;
    }

    ctx->pc = 0x3a1bb8u;

    // 0x3a1bb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3a1bb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3a1bbc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a1bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a1bc0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3a1bc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1bc4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a1bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a1bc8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x3a1bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x3a1bcc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x3a1bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x3a1bd0: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x3a1bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x3a1bd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a1bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a1bd8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3a1bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3a1bdc: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3A1BDCu;
    SET_GPR_U32(ctx, 31, 0x3A1BE4u);
    ctx->pc = 0x3A1BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1BDCu;
    // 0x3a1be0: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3A1BDCu, 0x3A1BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1BE4u;
label_3a1be4:
    // 0x3a1be4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3a1be4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1be8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a1be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x3a1bec: 0x2452676c  addiu       $s2, $v0, 0x676C
    ctx->pc = 0x3a1becu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 26476));
    // 0x3a1bf0: 0x2655fffc  addiu       $s5, $s2, -0x4
    ctx->pc = 0x3a1bf0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x3a1bf4: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x3a1bf4u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_3a1bf8:
    // 0x3a1bf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a1bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a1bfc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a1bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a1c00: 0x2122821  addu        $a1, $s0, $s2
    ctx->pc = 0x3a1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x3a1c04: 0xc0efcee  jal         func_3BF3B8
    ctx->pc = 0x3A1C04u;
    SET_GPR_U32(ctx, 31, 0x3A1C0Cu);
    ctx->pc = 0x3A1C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A1C04u;
    // 0x3a1c08: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF3B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF3B8u, 0x3A1C04u, 0x3A1C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1C0Cu;
label_3a1c0c:
    // 0x3a1c0c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1C0Cu;
    {
        const bool branch_taken_0x3a1c0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C0Cu;
        // 0x3a1c10: 0x2e230020  sltiu       $v1, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c0c) {
            ctx->pc = 0x3A1C20u;
            goto label_3a1c20;
        }
    }
    ctx->pc = 0x3A1C14u;
    // 0x3a1c14: 0x2151821  addu        $v1, $s0, $s5
    ctx->pc = 0x3a1c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x3a1c18: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A1C18u;
    {
        const bool branch_taken_0x3a1c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C18u;
        // 0x3a1c1c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c18) {
            ctx->pc = 0x3A1C2Cu;
            goto label_3a1c2c;
        }
    }
    ctx->pc = 0x3A1C20u;
label_3a1c20:
    // 0x3a1c20: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x3A1C20u;
    {
        const bool branch_taken_0x3a1c20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C20u;
        // 0x3a1c24: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a1c20) {
            ctx->pc = 0x3A1BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a1bf8;
        }
    }
    ctx->pc = 0x3A1C28u;
    // 0x3a1c28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a1c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1c2c:
    // 0x3a1c2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a1c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a1c30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a1c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a1c34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a1c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a1c38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x3a1c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a1c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x3a1c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a1c40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x3a1c40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3a1c44: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3a1c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a1c48: 0x3e00008  jr          $ra
    ctx->pc = 0x3A1C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A1C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1C48u;
        // 0x3a1c4c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A1C50u;
}
