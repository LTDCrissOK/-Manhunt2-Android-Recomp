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

// Function: sub_00107E90
// Address: 0x107e90 - 0x107ec0
void sub_00107E90_0x107e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00107E90_0x107e90");
#endif

    switch (ctx->pc) {
        case 0x107e90u: goto label_107e90;
        case 0x107e94u: goto label_107e94;
        case 0x107e98u: goto label_107e98;
        case 0x107e9cu: goto label_107e9c;
        case 0x107ea0u: goto label_107ea0;
        case 0x107ea4u: goto label_107ea4;
        case 0x107ea8u: goto label_107ea8;
        case 0x107eacu: goto label_107eac;
        case 0x107eb0u: goto label_107eb0;
        case 0x107eb4u: goto label_107eb4;
        case 0x107eb8u: goto label_107eb8;
        case 0x107ebcu: goto label_107ebc;
        default: break;
    }

    ctx->pc = 0x107e90u;

label_107e90:
    // 0x107e90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x107e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_107e94:
    // 0x107e94: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x107e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_107e98:
    // 0x107e98: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_107e9c:
    if (ctx->pc == 0x107E9Cu) {
        ctx->pc = 0x107E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E98u;
        // 0x107e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EA0u;
        goto label_107ea0;
    }
    ctx->pc = 0x107E98u;
    {
        const bool branch_taken_0x107e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x107E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107E98u;
        // 0x107e9c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107e98) {
            ctx->pc = 0x107EB0u;
            goto label_107eb0;
        }
    }
    ctx->pc = 0x107EA0u;
label_107ea0:
    // 0x107ea0: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x107ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_107ea4:
    // 0x107ea4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x107ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_107ea8:
    // 0x107ea8: 0x40f809  jalr        $v0
label_107eac:
    if (ctx->pc == 0x107EACu) {
        ctx->pc = 0x107EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA8u;
        // 0x107eac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EB0u;
        goto label_107eb0;
    }
    ctx->pc = 0x107EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x107EB0u);
        ctx->pc = 0x107EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EA8u;
        // 0x107eac: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EA8u, 0x107EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x107EB0u;
label_107eb0:
    // 0x107eb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x107eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107eb4:
    // 0x107eb4: 0x3e00008  jr          $ra
label_107eb8:
    if (ctx->pc == 0x107EB8u) {
        ctx->pc = 0x107EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB4u;
        // 0x107eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107EBCu;
        goto label_107ebc;
    }
    ctx->pc = 0x107EB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107EB4u;
        // 0x107eb8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107EB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107EBCu;
label_107ebc:
    // 0x107ebc: 0x0  nop
    ctx->pc = 0x107ebcu;
    // NOP
    ctx->pc = 0x107ec0u;
}
