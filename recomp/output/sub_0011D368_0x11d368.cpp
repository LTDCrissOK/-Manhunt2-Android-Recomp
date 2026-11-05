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

// Function: sub_0011D368
// Address: 0x11d368 - 0x11d3c8
void sub_0011D368_0x11d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D368_0x11d368");
#endif

    switch (ctx->pc) {
        case 0x11d394u: goto label_11d394;
        case 0x11d3b4u: goto label_11d3b4;
        default: break;
    }

    ctx->pc = 0x11d368u;

    // 0x11d368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d36c: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x11d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x11d370: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11d374: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x11d374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11d378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d37c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11d37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11d380: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11d380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11d384: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11d384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11d388: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d38c: 0xc04737c  jal         func_11CDF0
    ctx->pc = 0x11D38Cu;
    SET_GPR_U32(ctx, 31, 0x11D394u);
    ctx->pc = 0x11D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D38Cu;
    // 0x11d390: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CDF0u, 0x11D38Cu, 0x11D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D394u;
label_11d394:
    // 0x11d394: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11d394u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d398: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11d398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11d39c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11d39cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d3a0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x11d3a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d3a4: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x11d3a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11d3a8: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11d3a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d3ac: 0xc042178  jal         func_1085E0
    ctx->pc = 0x11D3ACu;
    SET_GPR_U32(ctx, 31, 0x11D3B4u);
    ctx->pc = 0x11D3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3ACu;
    // 0x11d3b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085E0u, 0x11D3ACu, 0x11D3B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B4u;
label_11d3b4:
    // 0x11d3b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11d3b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d3b8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11d3b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d3bc: 0x3e00008  jr          $ra
    ctx->pc = 0x11D3BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3BCu;
        // 0x11d3c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D3BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D3C4u;
    // 0x11d3c4: 0x0  nop
    ctx->pc = 0x11d3c4u;
    // NOP
    ctx->pc = 0x11d3c8u;
}
