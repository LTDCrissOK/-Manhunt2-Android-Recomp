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

// Function: sub_00253E88
// Address: 0x253e88 - 0x253ee0
void sub_00253E88_0x253e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253E88_0x253e88");
#endif

    switch (ctx->pc) {
        case 0x253ec4u: goto label_253ec4;
        case 0x253eccu: goto label_253ecc;
        default: break;
    }

    ctx->pc = 0x253e88u;

    // 0x253e88: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253e8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x253e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x253e90: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x253e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x253e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x253e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x253e98: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x253e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x253e9c: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x253e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x253ea0: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x253EA0u;
    {
        const bool branch_taken_0x253ea0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253ea0) {
            ctx->pc = 0x253EA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253EA0u;
            // 0x253ea4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x253ED0u;
            goto label_253ed0;
        }
    }
    ctx->pc = 0x253EA8u;
    // 0x253ea8: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x253ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x253eac: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x253eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x253eb0: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x253eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x253eb4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x253eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x253eb8: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x253eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x253ebc: 0xc061d8a  jal         func_187628
    ctx->pc = 0x253EBCu;
    SET_GPR_U32(ctx, 31, 0x253EC4u);
    ctx->pc = 0x253EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EBCu;
    // 0x253ec0: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187628u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187628u, 0x253EBCu, 0x253EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253EC4u;
label_253ec4:
    // 0x253ec4: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x253EC4u;
    SET_GPR_U32(ctx, 31, 0x253ECCu);
    ctx->pc = 0x253EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x253EC4u;
    // 0x253ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x253EC4u, 0x253ECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253ECCu;
label_253ecc:
    // 0x253ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x253eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_253ed0:
    // 0x253ed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x253ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x253ed4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x253ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x253ed8: 0x3e00008  jr          $ra
    ctx->pc = 0x253ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253ED8u;
        // 0x253edc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253ED8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253EE0u;
}
