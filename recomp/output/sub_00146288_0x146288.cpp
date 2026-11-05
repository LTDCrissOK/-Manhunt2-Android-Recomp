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

// Function: sub_00146288
// Address: 0x146288 - 0x1462d8
void sub_00146288_0x146288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146288_0x146288");
#endif

    switch (ctx->pc) {
        case 0x1462acu: goto label_1462ac;
        default: break;
    }

    ctx->pc = 0x146288u;

    // 0x146288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x146288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14628c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x146290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x146290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x146294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x146294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146298: 0x8e020460  lw          $v0, 0x460($s0)
    ctx->pc = 0x146298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1120)));
    // 0x14629c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x14629Cu;
    {
        const bool branch_taken_0x14629c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14629c) {
            ctx->pc = 0x1462A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14629Cu;
            // 0x1462a0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1462CCu;
            goto label_1462cc;
        }
    }
    ctx->pc = 0x1462A4u;
    // 0x1462a4: 0xc04d7ea  jal         func_135FA8
    ctx->pc = 0x1462A4u;
    SET_GPR_U32(ctx, 31, 0x1462ACu);
    ctx->pc = 0x135FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x135FA8u, 0x1462A4u, 0x1462ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1462ACu;
label_1462ac:
    // 0x1462ac: 0x3c01420c  lui         $at, 0x420C
    ctx->pc = 0x1462acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16908 << 16));
    // 0x1462b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1462b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1462b4: 0xae000570  sw          $zero, 0x570($s0)
    ctx->pc = 0x1462b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 0));
    // 0x1462b8: 0xe6000568  swc1        $f0, 0x568($s0)
    ctx->pc = 0x1462b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 1384), bits); }
    // 0x1462bc: 0xae000560  sw          $zero, 0x560($s0)
    ctx->pc = 0x1462bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1376), GPR_U32(ctx, 0));
    // 0x1462c0: 0xae000564  sw          $zero, 0x564($s0)
    ctx->pc = 0x1462c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1380), GPR_U32(ctx, 0));
    // 0x1462c4: 0xae00056c  sw          $zero, 0x56C($s0)
    ctx->pc = 0x1462c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1388), GPR_U32(ctx, 0));
    // 0x1462c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1462c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1462cc:
    // 0x1462cc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1462ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1462d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1462D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1462D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1462D0u;
        // 0x1462d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1462D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1462D8u;
}
