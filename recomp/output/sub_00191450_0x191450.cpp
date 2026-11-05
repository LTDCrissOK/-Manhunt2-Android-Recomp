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

// Function: sub_00191450
// Address: 0x191450 - 0x1914a8
void sub_00191450_0x191450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191450_0x191450");
#endif

    switch (ctx->pc) {
        case 0x191450u: goto label_191450;
        case 0x191454u: goto label_191454;
        case 0x191458u: goto label_191458;
        case 0x19145cu: goto label_19145c;
        case 0x191460u: goto label_191460;
        case 0x191464u: goto label_191464;
        case 0x191468u: goto label_191468;
        case 0x19146cu: goto label_19146c;
        case 0x191470u: goto label_191470;
        case 0x191474u: goto label_191474;
        case 0x191478u: goto label_191478;
        case 0x19147cu: goto label_19147c;
        case 0x191480u: goto label_191480;
        case 0x191484u: goto label_191484;
        case 0x191488u: goto label_191488;
        case 0x19148cu: goto label_19148c;
        case 0x191490u: goto label_191490;
        case 0x191494u: goto label_191494;
        case 0x191498u: goto label_191498;
        case 0x19149cu: goto label_19149c;
        case 0x1914a0u: goto label_1914a0;
        case 0x1914a4u: goto label_1914a4;
        default: break;
    }

    ctx->pc = 0x191450u;

label_191450:
    // 0x191450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x191450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_191454:
    // 0x191454: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x191454u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_191458:
    // 0x191458: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x191458u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_19145c:
    // 0x19145c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x19145cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_191460:
    // 0x191460: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x191460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_191464:
    // 0x191464: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x191464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_191468:
    // 0x191468: 0xc06faee  jal         func_1BEBB8
label_19146c:
    if (ctx->pc == 0x19146Cu) {
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191468u;
        // 0x19146c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x191470u;
        goto label_191470;
    }
    ctx->pc = 0x191468u;
    SET_GPR_U32(ctx, 31, 0x191470u);
    ctx->pc = 0x19146Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191468u;
    // 0x19146c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x191468u, 0x191470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191470u;
label_191470:
    // 0x191470: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_191474:
    // 0x191474: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_191478:
    // 0x191478: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x191478u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19147c:
    // 0x19147c: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x19147cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_191480:
    // 0x191480: 0x60f809  jalr        $v1
label_191484:
    if (ctx->pc == 0x191484u) {
        ctx->pc = 0x191484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191480u;
        // 0x191484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x191488u;
        goto label_191488;
    }
    ctx->pc = 0x191480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x191488u);
        ctx->pc = 0x191484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191480u;
        // 0x191484: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191480u, 0x191488u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x191488u;
label_191488:
    // 0x191488: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x191488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_19148c:
    // 0x19148c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x19148cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_191490:
    // 0x191490: 0x24420f90  addiu       $v0, $v0, 0xF90
    ctx->pc = 0x191490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3984));
label_191494:
    // 0x191494: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x191494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_191498:
    // 0x191498: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x191498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19149c:
    // 0x19149c: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x19149cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_1914a0:
    // 0x1914a0: 0x3e00008  jr          $ra
label_1914a4:
    if (ctx->pc == 0x1914A4u) {
        ctx->pc = 0x1914A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A0u;
        // 0x1914a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1914A8u;
        goto label_fallthrough_0x1914a0;
    }
    ctx->pc = 0x1914A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1914A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1914A0u;
        // 0x1914a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1914A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1914a0:
    ctx->pc = 0x1914A8u;
}
