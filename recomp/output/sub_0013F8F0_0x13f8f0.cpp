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

// Function: sub_0013F8F0
// Address: 0x13f8f0 - 0x13f948
void sub_0013F8F0_0x13f8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F8F0_0x13f8f0");
#endif

    switch (ctx->pc) {
        case 0x13f93cu: goto label_13f93c;
        default: break;
    }

    ctx->pc = 0x13f8f0u;

    // 0x13f8f0: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x13f8f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x13f8f4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x13f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x13f8f8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x13f8f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13f8fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x13f8fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f904: 0x24090005  addiu       $t1, $zero, 0x5
    ctx->pc = 0x13f904u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13f908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f90c: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x13f90cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f910: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13f910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13f914: 0x434021  addu        $t0, $v0, $v1
    ctx->pc = 0x13f914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13f918: 0xacc904e0  sw          $t1, 0x4E0($a2)
    ctx->pc = 0x13f918u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1248), GPR_U32(ctx, 9));
    // 0x13f91c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x13f91cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f920: 0xace004e4  sw          $zero, 0x4E4($a3)
    ctx->pc = 0x13f920u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1252), GPR_U32(ctx, 0));
    // 0x13f924: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x13f924u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f928: 0xad0004e8  sw          $zero, 0x4E8($t0)
    ctx->pc = 0x13f928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 1256), GPR_U32(ctx, 0));
    // 0x13f92c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13f92cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13f930: 0xacca04ec  sw          $t2, 0x4EC($a2)
    ctx->pc = 0x13f930u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1260), GPR_U32(ctx, 10));
    // 0x13f934: 0xc04d8b4  jal         func_1362D0
    ctx->pc = 0x13F934u;
    SET_GPR_U32(ctx, 31, 0x13F93Cu);
    ctx->pc = 0x13F938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F934u;
    // 0x13f938: 0xac4004f0  sw          $zero, 0x4F0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 1264), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1362D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362D0u, 0x13F934u, 0x13F93Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13F93Cu;
label_13f93c:
    // 0x13f93c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f93cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f940: 0x3e00008  jr          $ra
    ctx->pc = 0x13F940u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F940u;
        // 0x13f944: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F940u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F948u;
}
