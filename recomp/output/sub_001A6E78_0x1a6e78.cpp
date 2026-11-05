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

// Function: sub_001A6E78
// Address: 0x1a6e78 - 0x1a6ee8
void sub_001A6E78_0x1a6e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6E78_0x1a6e78");
#endif

    switch (ctx->pc) {
        case 0x1a6e90u: goto label_1a6e90;
        case 0x1a6eb8u: goto label_1a6eb8;
        case 0x1a6ed0u: goto label_1a6ed0;
        default: break;
    }

    ctx->pc = 0x1a6e78u;

    // 0x1a6e78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a6e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a6e7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a6e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a6e80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a6e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a6e84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1a6e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1a6e88: 0xc06a046  jal         func_1A8118
    ctx->pc = 0x1A6E88u;
    SET_GPR_U32(ctx, 31, 0x1A6E90u);
    ctx->pc = 0x1A6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E88u;
    // 0x1a6e8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8118u, 0x1A6E88u, 0x1A6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6E90u;
label_1a6e90:
    // 0x1a6e90: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1a6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1a6e94: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A6E94u;
    {
        const bool branch_taken_0x1a6e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E94u;
        // 0x1a6e98: 0x24500687  addiu       $s0, $v0, 0x687 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 1671));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e94) {
            ctx->pc = 0x1A6EC0u;
            goto label_1a6ec0;
        }
    }
    ctx->pc = 0x1A6E9Cu;
    // 0x1a6e9c: 0x8e240148  lw          $a0, 0x148($s1)
    ctx->pc = 0x1a6e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 328)));
    // 0x1a6ea0: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x1a6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
    // 0x1a6ea4: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1a6ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1a6ea8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A6EA8u;
    {
        const bool branch_taken_0x1a6ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6ea8) {
            ctx->pc = 0x1A6EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6EA8u;
            // 0x1a6eac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6EC4u;
            goto label_1a6ec4;
        }
    }
    ctx->pc = 0x1A6EB0u;
    // 0x1a6eb0: 0xc08f672  jal         func_23D9C8
    ctx->pc = 0x1A6EB0u;
    SET_GPR_U32(ctx, 31, 0x1A6EB8u);
    ctx->pc = 0x23D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D9C8u, 0x1A6EB0u, 0x1A6EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6EB8u;
label_1a6eb8:
    // 0x1a6eb8: 0x240306aa  addiu       $v1, $zero, 0x6AA
    ctx->pc = 0x1a6eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1706));
    // 0x1a6ebc: 0x62800b  movn        $s0, $v1, $v0
    ctx->pc = 0x1a6ebcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_1a6ec0:
    // 0x1a6ec0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a6ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a6ec4:
    // 0x1a6ec4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a6ec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6ec8: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A6EC8u;
    SET_GPR_U32(ctx, 31, 0x1A6ED0u);
    ctx->pc = 0x1A6ECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6EC8u;
    // 0x1a6ecc: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A6EC8u, 0x1A6ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A6ED0u;
label_1a6ed0:
    // 0x1a6ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a6ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a6ed4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1a6ed4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a6ed8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1a6ed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a6edc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6EDCu;
        // 0x1a6ee0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6EE4u;
    // 0x1a6ee4: 0x0  nop
    ctx->pc = 0x1a6ee4u;
    // NOP
    ctx->pc = 0x1a6ee8u;
}
