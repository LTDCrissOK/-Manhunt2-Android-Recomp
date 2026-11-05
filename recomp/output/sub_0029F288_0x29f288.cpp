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

// Function: sub_0029F288
// Address: 0x29f288 - 0x29f2e0
void sub_0029F288_0x29f288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F288_0x29f288");
#endif

    switch (ctx->pc) {
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        default: break;
    }

    ctx->pc = 0x29f288u;

label_29f288:
    // 0x29f288: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29f288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_29f28c:
    // 0x29f28c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x29f28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_29f290:
    // 0x29f290: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29f290u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29f294:
    // 0x29f294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29f294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29f298:
    // 0x29f298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29f298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29f29c:
    // 0x29f29c: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x29f29cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_29f2a0:
    // 0x29f2a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29f2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_29f2a4:
    // 0x29f2a4: 0x26040238  addiu       $a0, $s0, 0x238
    ctx->pc = 0x29f2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 568));
label_29f2a8:
    // 0x29f2a8: 0xc0d758e  jal         func_35D638
label_29f2ac:
    if (ctx->pc == 0x29F2ACu) {
        ctx->pc = 0x29F2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2A8u;
        // 0x29f2ac: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2B0u;
        goto label_29f2b0;
    }
    ctx->pc = 0x29F2A8u;
    SET_GPR_U32(ctx, 31, 0x29F2B0u);
    ctx->pc = 0x29F2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F2A8u;
    // 0x29f2ac: 0x24a5c550  addiu       $a1, $a1, -0x3AB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29F2A8u, 0x29F2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29F2B0u;
label_29f2b0:
    // 0x29f2b0: 0x8e230074  lw          $v1, 0x74($s1)
    ctx->pc = 0x29f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_29f2b4:
    // 0x29f2b4: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x29f2b4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29f2b8:
    // 0x29f2b8: 0x8e050270  lw          $a1, 0x270($s0)
    ctx->pc = 0x29f2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_29f2bc:
    // 0x29f2bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f2c0:
    // 0x29f2c0: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x29f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_29f2c4:
    // 0x29f2c4: 0x40f809  jalr        $v0
label_29f2c8:
    if (ctx->pc == 0x29F2C8u) {
        ctx->pc = 0x29F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C4u;
        // 0x29f2c8: 0xc60c0274  lwc1        $f12, 0x274($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2CCu;
        goto label_29f2cc;
    }
    ctx->pc = 0x29F2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29F2CCu);
        ctx->pc = 0x29F2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2C4u;
        // 0x29f2c8: 0xc60c0274  lwc1        $f12, 0x274($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 628)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F2C4u, 0x29F2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29F2CCu;
label_29f2cc:
    // 0x29f2cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29f2ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29f2d0:
    // 0x29f2d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x29f2d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_29f2d4:
    // 0x29f2d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29f2d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29f2d8:
    // 0x29f2d8: 0x3e00008  jr          $ra
label_29f2dc:
    if (ctx->pc == 0x29F2DCu) {
        ctx->pc = 0x29F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2D8u;
        // 0x29f2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29F2E0u;
        goto label_fallthrough_0x29f2d8;
    }
    ctx->pc = 0x29F2D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F2D8u;
        // 0x29f2dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F2D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29f2d8:
    ctx->pc = 0x29F2E0u;
}
