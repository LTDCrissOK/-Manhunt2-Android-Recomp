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

// Function: sub_0029C910
// Address: 0x29c910 - 0x29c9c8
void sub_0029C910_0x29c910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C910_0x29c910");
#endif

    switch (ctx->pc) {
        case 0x29c924u: goto label_29c924;
        case 0x29c944u: goto label_29c944;
        case 0x29c94cu: goto label_29c94c;
        case 0x29c954u: goto label_29c954;
        case 0x29c964u: goto label_29c964;
        case 0x29c96cu: goto label_29c96c;
        case 0x29c980u: goto label_29c980;
        case 0x29c988u: goto label_29c988;
        case 0x29c99cu: goto label_29c99c;
        case 0x29c9a4u: goto label_29c9a4;
        case 0x29c9acu: goto label_29c9ac;
        case 0x29c9b4u: goto label_29c9b4;
        default: break;
    }

    ctx->pc = 0x29c910u;

    // 0x29c910: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29c914: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x29c914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x29c918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29c91c: 0xc0a71f8  jal         func_29C7E0
    ctx->pc = 0x29C91Cu;
    SET_GPR_U32(ctx, 31, 0x29C924u);
    ctx->pc = 0x29C920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C91Cu;
    // 0x29c920: 0x24a51848  addiu       $a1, $a1, 0x1848 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E0u, 0x29C91Cu, 0x29C924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C924u;
label_29c924:
    // 0x29c924: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29c924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x29c928: 0x0  nop
    ctx->pc = 0x29c928u;
    // NOP
    // 0x29c92c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29c92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x29c930: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x29c930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
    // 0x29c934: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29c934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x29c938: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x29c938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x29c93c: 0xc0d9a1a  jal         func_366868
    ctx->pc = 0x29C93Cu;
    SET_GPR_U32(ctx, 31, 0x29C944u);
    ctx->pc = 0x29C940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C93Cu;
    // 0x29c940: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x366868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x366868u, 0x29C93Cu, 0x29C944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C944u;
label_29c944:
    // 0x29c944: 0xc0d9a30  jal         func_3668C0
    ctx->pc = 0x29C944u;
    SET_GPR_U32(ctx, 31, 0x29C94Cu);
    ctx->pc = 0x3668C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3668C0u, 0x29C944u, 0x29C94Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C94Cu;
label_29c94c:
    // 0x29c94c: 0xc0a2202  jal         func_288808
    ctx->pc = 0x29C94Cu;
    SET_GPR_U32(ctx, 31, 0x29C954u);
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x29C94Cu, 0x29C954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C954u;
label_29c954:
    // 0x29c954: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C954u;
    {
        const bool branch_taken_0x29c954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c954) {
            ctx->pc = 0x29C964u;
            goto label_29c964;
        }
    }
    ctx->pc = 0x29C95Cu;
    // 0x29c95c: 0xc0c671e  jal         func_319C78
    ctx->pc = 0x29C95Cu;
    SET_GPR_U32(ctx, 31, 0x29C964u);
    ctx->pc = 0x319C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319C78u, 0x29C95Cu, 0x29C964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C964u;
label_29c964:
    // 0x29c964: 0xc0a2202  jal         func_288808
    ctx->pc = 0x29C964u;
    SET_GPR_U32(ctx, 31, 0x29C96Cu);
    ctx->pc = 0x288808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288808u, 0x29C964u, 0x29C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C96Cu;
label_29c96c:
    // 0x29c96c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29c970: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29C970u;
    {
        const bool branch_taken_0x29c970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29c970) {
            ctx->pc = 0x29C980u;
            goto label_29c980;
        }
    }
    ctx->pc = 0x29C978u;
    // 0x29c978: 0xc0c6730  jal         func_319CC0
    ctx->pc = 0x29C978u;
    SET_GPR_U32(ctx, 31, 0x29C980u);
    ctx->pc = 0x319CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x319CC0u, 0x29C978u, 0x29C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C980u;
label_29c980:
    // 0x29c980: 0xc0a0340  jal         func_280D00
    ctx->pc = 0x29C980u;
    SET_GPR_U32(ctx, 31, 0x29C988u);
    ctx->pc = 0x280D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D00u, 0x29C980u, 0x29C988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C988u;
label_29c988:
    // 0x29c988: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x29c988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29c98c: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x29C98Cu;
    {
        const bool branch_taken_0x29c98c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29c98c) {
            ctx->pc = 0x29C9ACu;
            goto label_29c9ac;
        }
    }
    ctx->pc = 0x29C994u;
    // 0x29c994: 0xc0cf602  jal         func_33D808
    ctx->pc = 0x29C994u;
    SET_GPR_U32(ctx, 31, 0x29C99Cu);
    ctx->pc = 0x33D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33D808u, 0x29C994u, 0x29C99Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C99Cu;
label_29c99c:
    // 0x29c99c: 0xc0a4758  jal         func_291D60
    ctx->pc = 0x29C99Cu;
    SET_GPR_U32(ctx, 31, 0x29C9A4u);
    ctx->pc = 0x291D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291D60u, 0x29C99Cu, 0x29C9A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9A4u;
label_29c9a4:
    // 0x29c9a4: 0xc0a5110  jal         func_294440
    ctx->pc = 0x29C9A4u;
    SET_GPR_U32(ctx, 31, 0x29C9ACu);
    ctx->pc = 0x29C9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29C9A4u;
    // 0x29c9a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x294440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294440u, 0x29C9A4u, 0x29C9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9ACu;
label_29c9ac:
    // 0x29c9ac: 0xc0a172a  jal         func_285CA8
    ctx->pc = 0x29C9ACu;
    SET_GPR_U32(ctx, 31, 0x29C9B4u);
    ctx->pc = 0x285CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CA8u, 0x29C9ACu, 0x29C9B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29C9B4u;
label_29c9b4:
    // 0x29c9b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c9b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29c9b8: 0x3e00008  jr          $ra
    ctx->pc = 0x29C9B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C9B8u;
        // 0x29c9bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C9B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C9C0u;
    // 0x29c9c0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c9c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29c9c4: 0x0  nop
    ctx->pc = 0x29c9c4u;
    // NOP
    ctx->pc = 0x29c9c8u;
}
