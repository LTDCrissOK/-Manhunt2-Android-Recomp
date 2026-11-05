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

// Function: sub_00111BC0
// Address: 0x111bc0 - 0x111c38
void sub_00111BC0_0x111bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111BC0_0x111bc0");
#endif

    switch (ctx->pc) {
        case 0x111bfcu: goto label_111bfc;
        default: break;
    }

    ctx->pc = 0x111bc0u;

    // 0x111bc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x111bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x111bc4: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x111bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x111bc8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x111bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x111bcc: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x111bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x111bd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x111bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x111bd4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x111bd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111bd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x111bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x111bdc: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x111bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x111be0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x111be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x111be4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x111be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x111be8: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x111be8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x111bec: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x111BECu;
    {
        const bool branch_taken_0x111bec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x111BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111BECu;
        // 0x111bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111bec) {
            ctx->pc = 0x111C24u;
            goto label_111c24;
        }
    }
    ctx->pc = 0x111BF4u;
    // 0x111bf4: 0xc0619f6  jal         func_1867D8
    ctx->pc = 0x111BF4u;
    SET_GPR_U32(ctx, 31, 0x111BFCu);
    ctx->pc = 0x111BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x111BF4u;
    // 0x111bf8: 0x8e040ff4  lw          $a0, 0xFF4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1867D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1867D8u, 0x111BF4u, 0x111BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x111BFCu;
label_111bfc:
    // 0x111bfc: 0x8e040ff4  lw          $a0, 0xFF4($s0)
    ctx->pc = 0x111bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4084)));
    // 0x111c00: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x111c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x111c04: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x111c04u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x111c08: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x111c08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x111c0c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x111C0Cu;
    {
        const bool branch_taken_0x111c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x111C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C0Cu;
        // 0x111c10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111c0c) {
            ctx->pc = 0x111C1Cu;
            goto label_111c1c;
        }
    }
    ctx->pc = 0x111C14u;
    // 0x111c14: 0x8e2201c4  lw          $v0, 0x1C4($s1)
    ctx->pc = 0x111c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 452)));
    // 0x111c18: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x111c18u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_111c1c:
    // 0x111c1c: 0xae2301c4  sw          $v1, 0x1C4($s1)
    ctx->pc = 0x111c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 3));
    // 0x111c20: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x111c20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_111c24:
    // 0x111c24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x111c24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x111c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x111c2c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x111c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x111c30: 0x3e00008  jr          $ra
    ctx->pc = 0x111C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111C30u;
        // 0x111c34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x111C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x111C38u;
}
