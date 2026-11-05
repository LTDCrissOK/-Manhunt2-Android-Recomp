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

// Function: sub_001927A0
// Address: 0x1927a0 - 0x192808
void sub_001927A0_0x1927a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001927A0_0x1927a0");
#endif

    switch (ctx->pc) {
        case 0x1927bcu: goto label_1927bc;
        case 0x1927d8u: goto label_1927d8;
        case 0x1927f0u: goto label_1927f0;
        default: break;
    }

    ctx->pc = 0x1927a0u;

    // 0x1927a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1927a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1927a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1927a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1927a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1927a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1927ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1927acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1927b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1927b4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1927B4u;
    SET_GPR_U32(ctx, 31, 0x1927BCu);
    ctx->pc = 0x1927B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927B4u;
    // 0x1927b8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1927B4u, 0x1927BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927BCu;
label_1927bc:
    // 0x1927bc: 0x8c43035c  lw          $v1, 0x35C($v0)
    ctx->pc = 0x1927bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 860)));
    // 0x1927c0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1927C0u;
    {
        const bool branch_taken_0x1927c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927C0u;
        // 0x1927c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927c0) {
            ctx->pc = 0x1927E0u;
            goto label_1927e0;
        }
    }
    ctx->pc = 0x1927C8u;
    // 0x1927c8: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1927c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1927cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1927ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927d0: 0xc094e44  jal         func_253910
    ctx->pc = 0x1927D0u;
    SET_GPR_U32(ctx, 31, 0x1927D8u);
    ctx->pc = 0x1927D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927D0u;
    // 0x1927d4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253910u, 0x1927D0u, 0x1927D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927D8u;
label_1927d8:
    // 0x1927d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1927D8u;
    {
        const bool branch_taken_0x1927d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1927DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927D8u;
        // 0x1927dc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1927d8) {
            ctx->pc = 0x1927F4u;
            goto label_1927f4;
        }
    }
    ctx->pc = 0x1927E0u;
label_1927e0:
    // 0x1927e0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1927e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1927e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1927e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1927e8: 0xc094e8a  jal         func_253A28
    ctx->pc = 0x1927E8u;
    SET_GPR_U32(ctx, 31, 0x1927F0u);
    ctx->pc = 0x1927ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1927E8u;
    // 0x1927ec: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x253A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253A28u, 0x1927E8u, 0x1927F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1927F0u;
label_1927f0:
    // 0x1927f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1927f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1927f4:
    // 0x1927f4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1927f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1927f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1927f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1927fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1927FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x192800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1927FCu;
        // 0x192800: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1927FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192804u;
    // 0x192804: 0x0  nop
    ctx->pc = 0x192804u;
    // NOP
    ctx->pc = 0x192808u;
}
