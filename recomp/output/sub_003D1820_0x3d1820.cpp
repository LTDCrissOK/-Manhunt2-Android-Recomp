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

// Function: sub_003D1820
// Address: 0x3d1820 - 0x3d1870
void sub_003D1820_0x3d1820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D1820_0x3d1820");
#endif

    switch (ctx->pc) {
        case 0x3d1828u: goto label_3d1828;
        case 0x3d1830u: goto label_3d1830;
        case 0x3d1840u: goto label_3d1840;
        case 0x3d1854u: goto label_3d1854;
        case 0x3d1864u: goto label_3d1864;
        default: break;
    }

    ctx->pc = 0x3d1820u;

    // 0x3d1820: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x3d1820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3d1824: 0xc  syscall     0
    ctx->pc = 0x3d1824u;
    ctx->pc = 0x3D1828u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3d1828:
    // 0x3d1828: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1830u;
label_3d1830:
    // 0x3d1830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3d1830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3d1834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3d1834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3d1838: 0xc0f2780  jal         func_3C9E00
    ctx->pc = 0x3D1838u;
    SET_GPR_U32(ctx, 31, 0x3D1840u);
    ctx->pc = 0x3C9E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9E00u, 0x3D1838u, 0x3D1840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1840u;
label_3d1840:
    // 0x3d1840: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3d1840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3d1844: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D1844u;
    {
        const bool branch_taken_0x3d1844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x3d1844) {
            ctx->pc = 0x3D185Cu;
            goto label_3d185c;
        }
    }
    ctx->pc = 0x3D184Cu;
    // 0x3d184c: 0xc0f461c  jal         func_3D1870
    ctx->pc = 0x3D184Cu;
    SET_GPR_U32(ctx, 31, 0x3D1854u);
    ctx->pc = 0x3D1870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1870u, 0x3D184Cu, 0x3D1854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1854u;
label_3d1854:
    // 0x3d1854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3D1854u;
    {
        const bool branch_taken_0x3d1854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D1858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1854u;
        // 0x3d1858: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d1854) {
            ctx->pc = 0x3D1868u;
            goto label_3d1868;
        }
    }
    ctx->pc = 0x3D185Cu;
label_3d185c:
    // 0x3d185c: 0xc0f2784  jal         func_3C9E10
    ctx->pc = 0x3D185Cu;
    SET_GPR_U32(ctx, 31, 0x3D1864u);
    ctx->pc = 0x3C9E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C9E10u, 0x3D185Cu, 0x3D1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D1864u;
label_3d1864:
    // 0x3d1864: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3d1864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3d1868:
    // 0x3d1868: 0x3e00008  jr          $ra
    ctx->pc = 0x3D1868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D186Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D1868u;
        // 0x3d186c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D1868u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D1870u;
}
