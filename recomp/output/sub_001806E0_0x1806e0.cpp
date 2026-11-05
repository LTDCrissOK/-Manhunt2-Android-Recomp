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

// Function: sub_001806E0
// Address: 0x1806e0 - 0x180730
void sub_001806E0_0x1806e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001806E0_0x1806e0");
#endif

    switch (ctx->pc) {
        case 0x1806e0u: goto label_1806e0;
        case 0x1806e4u: goto label_1806e4;
        case 0x1806e8u: goto label_1806e8;
        case 0x1806ecu: goto label_1806ec;
        case 0x1806f0u: goto label_1806f0;
        case 0x1806f4u: goto label_1806f4;
        case 0x1806f8u: goto label_1806f8;
        case 0x1806fcu: goto label_1806fc;
        case 0x180700u: goto label_180700;
        case 0x180704u: goto label_180704;
        case 0x180708u: goto label_180708;
        case 0x18070cu: goto label_18070c;
        case 0x180710u: goto label_180710;
        case 0x180714u: goto label_180714;
        case 0x180718u: goto label_180718;
        case 0x18071cu: goto label_18071c;
        case 0x180720u: goto label_180720;
        case 0x180724u: goto label_180724;
        case 0x180728u: goto label_180728;
        case 0x18072cu: goto label_18072c;
        default: break;
    }

    ctx->pc = 0x1806e0u;

label_1806e0:
    // 0x1806e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1806e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1806e4:
    // 0x1806e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1806e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1806e8:
    // 0x1806e8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1806e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1806ec:
    // 0x1806ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1806ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1806f0:
    // 0x1806f0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1806f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_1806f4:
    // 0x1806f4: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x1806f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1806f8:
    // 0x1806f8: 0xc047866  jal         func_11E198
label_1806fc:
    if (ctx->pc == 0x1806FCu) {
        ctx->pc = 0x1806FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1806F8u;
        // 0x1806fc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x180700u;
        goto label_180700;
    }
    ctx->pc = 0x1806F8u;
    SET_GPR_U32(ctx, 31, 0x180700u);
    ctx->pc = 0x1806FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1806F8u;
    // 0x1806fc: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E198u, 0x1806F8u, 0x180700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180700u;
label_180700:
    // 0x180700: 0x8c430218  lw          $v1, 0x218($v0)
    ctx->pc = 0x180700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 536)));
label_180704:
    // 0x180704: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x180704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_180708:
    // 0x180708: 0x8c620064  lw          $v0, 0x64($v1)
    ctx->pc = 0x180708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
label_18070c:
    // 0x18070c: 0x40f809  jalr        $v0
label_180710:
    if (ctx->pc == 0x180710u) {
        ctx->pc = 0x180714u;
        goto label_180714;
    }
    ctx->pc = 0x18070Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x180714u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18070Cu, 0x180714u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x180714u;
label_180714:
    // 0x180714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x180714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_180718:
    // 0x180718: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x180718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_18071c:
    // 0x18071c: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x18071cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_180720:
    // 0x180720: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x180720u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_180724:
    // 0x180724: 0x3e00008  jr          $ra
label_180728:
    if (ctx->pc == 0x180728u) {
        ctx->pc = 0x180728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180724u;
        // 0x180728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18072Cu;
        goto label_18072c;
    }
    ctx->pc = 0x180724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180724u;
        // 0x180728: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18072Cu;
label_18072c:
    // 0x18072c: 0x0  nop
    ctx->pc = 0x18072cu;
    // NOP
    ctx->pc = 0x180730u;
}
