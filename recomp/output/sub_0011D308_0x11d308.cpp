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

// Function: sub_0011D308
// Address: 0x11d308 - 0x11d368
void sub_0011D308_0x11d308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D308_0x11d308");
#endif

    switch (ctx->pc) {
        case 0x11d334u: goto label_11d334;
        case 0x11d354u: goto label_11d354;
        default: break;
    }

    ctx->pc = 0x11d308u;

    // 0x11d308: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11d30c: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x11d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x11d310: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x11d310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x11d314: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x11d314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11d318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11d318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d31c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x11d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x11d320: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11d320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11d324: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x11d324u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x11d328: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11d328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d32c: 0xc0473c4  jal         func_11CF10
    ctx->pc = 0x11D32Cu;
    SET_GPR_U32(ctx, 31, 0x11D334u);
    ctx->pc = 0x11D330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D32Cu;
    // 0x11d330: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x11CF10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11CF10u, 0x11D32Cu, 0x11D334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D334u;
label_11d334:
    // 0x11d334: 0x96040014  lhu         $a0, 0x14($s0)
    ctx->pc = 0x11d334u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11d338: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x11d33c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x11d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11d340: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x11d340u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d344: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x11d344u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11d348: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d34c: 0xc0421c2  jal         func_108708
    ctx->pc = 0x11D34Cu;
    SET_GPR_U32(ctx, 31, 0x11D354u);
    ctx->pc = 0x11D350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D34Cu;
    // 0x11d350: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108708u, 0x11D34Cu, 0x11D354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D354u;
label_11d354:
    // 0x11d354: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x11d354u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d358: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x11d358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11d35c: 0x3e00008  jr          $ra
    ctx->pc = 0x11D35Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D35Cu;
        // 0x11d360: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D35Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D364u;
    // 0x11d364: 0x0  nop
    ctx->pc = 0x11d364u;
    // NOP
    ctx->pc = 0x11d368u;
}
