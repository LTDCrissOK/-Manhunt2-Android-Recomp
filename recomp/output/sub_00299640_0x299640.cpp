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

// Function: sub_00299640
// Address: 0x299640 - 0x299670
void sub_00299640_0x299640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299640_0x299640");
#endif

    switch (ctx->pc) {
        case 0x299640u: goto label_299640;
        case 0x299644u: goto label_299644;
        case 0x299648u: goto label_299648;
        case 0x29964cu: goto label_29964c;
        case 0x299650u: goto label_299650;
        case 0x299654u: goto label_299654;
        case 0x299658u: goto label_299658;
        case 0x29965cu: goto label_29965c;
        case 0x299660u: goto label_299660;
        case 0x299664u: goto label_299664;
        case 0x299668u: goto label_299668;
        case 0x29966cu: goto label_29966c;
        default: break;
    }

    ctx->pc = 0x299640u;

label_299640:
    // 0x299640: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x299640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_299644:
    // 0x299644: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x299644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_299648:
    // 0x299648: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x299648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29964c:
    // 0x29964c: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x29964cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_299650:
    // 0x299650: 0x8c450074  lw          $a1, 0x74($v0)
    ctx->pc = 0x299650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_299654:
    // 0x299654: 0xe440007c  swc1        $f0, 0x7C($v0)
    ctx->pc = 0x299654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 124), bits); }
label_299658:
    // 0x299658: 0x8ca3001c  lw          $v1, 0x1C($a1)
    ctx->pc = 0x299658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_29965c:
    // 0x29965c: 0x60f809  jalr        $v1
label_299660:
    if (ctx->pc == 0x299660u) {
        ctx->pc = 0x299664u;
        goto label_299664;
    }
    ctx->pc = 0x29965Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x299664u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29965Cu, 0x299664u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x299664u;
label_299664:
    // 0x299664: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x299664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_299668:
    // 0x299668: 0x3e00008  jr          $ra
label_29966c:
    if (ctx->pc == 0x29966Cu) {
        ctx->pc = 0x29966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299668u;
        // 0x29966c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x299670u;
        goto label_fallthrough_0x299668;
    }
    ctx->pc = 0x299668u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299668u;
        // 0x29966c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299668u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x299668:
    ctx->pc = 0x299670u;
}
