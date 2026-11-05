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

// Function: sub_00262E78
// Address: 0x262e78 - 0x262ee0
void sub_00262E78_0x262e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262E78_0x262e78");
#endif

    switch (ctx->pc) {
        case 0x262e8cu: goto label_262e8c;
        default: break;
    }

    ctx->pc = 0x262e78u;

    // 0x262e78: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x262e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x262e7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x262e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x262e80: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x262e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x262e84: 0xc098b98  jal         func_262E60
    ctx->pc = 0x262E84u;
    SET_GPR_U32(ctx, 31, 0x262E8Cu);
    ctx->pc = 0x262E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262E84u;
    // 0x262e88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262E60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262E60u, 0x262E84u, 0x262E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262E8Cu;
label_262e8c:
    // 0x262e8c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x262E8Cu;
    {
        const bool branch_taken_0x262e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E8Cu;
        // 0x262e90: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e8c) {
            ctx->pc = 0x262ECCu;
            goto label_262ecc;
        }
    }
    ctx->pc = 0x262E94u;
    // 0x262e94: 0x8e040234  lw          $a0, 0x234($s0)
    ctx->pc = 0x262e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 564)));
    // 0x262e98: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x262E98u;
    {
        const bool branch_taken_0x262e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E98u;
        // 0x262e9c: 0x24030012  addiu       $v1, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e98) {
            ctx->pc = 0x262ECCu;
            goto label_262ecc;
        }
    }
    ctx->pc = 0x262EA0u;
    // 0x262ea0: 0x8c840334  lw          $a0, 0x334($a0)
    ctx->pc = 0x262ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
    // 0x262ea4: 0x8c820150  lw          $v0, 0x150($a0)
    ctx->pc = 0x262ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x262ea8: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x262EA8u;
    {
        const bool branch_taken_0x262ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x262EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EA8u;
        // 0x262eac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ea8) {
            ctx->pc = 0x262ECCu;
            goto label_262ecc;
        }
    }
    ctx->pc = 0x262EB0u;
    // 0x262eb0: 0x8c840048  lw          $a0, 0x48($a0)
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x262eb4: 0x24020462  addiu       $v0, $zero, 0x462
    ctx->pc = 0x262eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1122));
    // 0x262eb8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262EB8u;
    {
        const bool branch_taken_0x262eb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x262EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EB8u;
        // 0x262ebc: 0x24020463  addiu       $v0, $zero, 0x463 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262eb8) {
            ctx->pc = 0x262EC8u;
            goto label_262ec8;
        }
    }
    ctx->pc = 0x262EC0u;
    // 0x262ec0: 0x14820002  bne         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x262EC0u;
    {
        const bool branch_taken_0x262ec0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x262EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EC0u;
        // 0x262ec4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ec0) {
            ctx->pc = 0x262ECCu;
            goto label_262ecc;
        }
    }
    ctx->pc = 0x262EC8u;
label_262ec8:
    // 0x262ec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262ecc:
    // 0x262ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x262eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262ed0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x262ed0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x262ed4: 0x3e00008  jr          $ra
    ctx->pc = 0x262ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262ED4u;
        // 0x262ed8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262EDCu;
    // 0x262edc: 0x0  nop
    ctx->pc = 0x262edcu;
    // NOP
    ctx->pc = 0x262ee0u;
}
