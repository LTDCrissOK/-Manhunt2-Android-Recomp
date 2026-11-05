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

// Function: sub_002608F0
// Address: 0x2608f0 - 0x260938
void sub_002608F0_0x2608f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002608F0_0x2608f0");
#endif

    switch (ctx->pc) {
        case 0x26092cu: goto label_26092c;
        default: break;
    }

    ctx->pc = 0x2608f0u;

    // 0x2608f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2608f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2608f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2608f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2608f8: 0x8c82025c  lw          $v0, 0x25C($a0)
    ctx->pc = 0x2608f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 604)));
    // 0x2608fc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2608FCu;
    {
        const bool branch_taken_0x2608fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2608FCu;
        // 0x260900: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608fc) {
            ctx->pc = 0x260930u;
            goto label_260930;
        }
    }
    ctx->pc = 0x260904u;
    // 0x260904: 0x9442002a  lhu         $v0, 0x2A($v0)
    ctx->pc = 0x260904u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 42)));
    // 0x260908: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x260908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26090c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x26090Cu;
    {
        const bool branch_taken_0x26090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26090Cu;
        // 0x260910: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26090c) {
            ctx->pc = 0x260930u;
            goto label_260930;
        }
    }
    ctx->pc = 0x260914u;
    // 0x260914: 0x8c830104  lw          $v1, 0x104($a0)
    ctx->pc = 0x260914u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 260)));
    // 0x260918: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x260918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26091c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26091cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x260920: 0x8c650010  lw          $a1, 0x10($v1)
    ctx->pc = 0x260920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x260924: 0xc07466e  jal         func_1D19B8
    ctx->pc = 0x260924u;
    SET_GPR_U32(ctx, 31, 0x26092Cu);
    ctx->pc = 0x260928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260924u;
    // 0x260928: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D19B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D19B8u, 0x260924u, 0x26092Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26092Cu;
label_26092c:
    // 0x26092c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26092cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260930:
    // 0x260930: 0x3e00008  jr          $ra
    ctx->pc = 0x260930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260930u;
        // 0x260934: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260930u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x260938u;
}
