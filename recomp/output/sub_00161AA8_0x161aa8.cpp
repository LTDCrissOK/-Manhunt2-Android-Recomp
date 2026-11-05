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

// Function: sub_00161AA8
// Address: 0x161aa8 - 0x161b00
void sub_00161AA8_0x161aa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161AA8_0x161aa8");
#endif

    switch (ctx->pc) {
        case 0x161ae8u: goto label_161ae8;
        default: break;
    }

    ctx->pc = 0x161aa8u;

    // 0x161aa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x161aa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x161aac: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x161aacu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x161ab0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x161ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x161ab4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x161ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x161ab8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x161ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x161abc: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x161abcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x161ac0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x161ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x161ac4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x161ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x161ac8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x161ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x161acc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x161accu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161ad0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x161ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x161ad4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x161ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x161ad8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x161ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x161adc: 0x8c70020c  lw          $s0, 0x20C($v1)
    ctx->pc = 0x161adcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x161ae0: 0xc0443d4  jal         func_110F50
    ctx->pc = 0x161AE0u;
    SET_GPR_U32(ctx, 31, 0x161AE8u);
    ctx->pc = 0x161AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161AE0u;
    // 0x161ae4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x110F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F50u, 0x161AE0u, 0x161AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x161AE8u;
label_161ae8:
    // 0x161ae8: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x161ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
    // 0x161aec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x161aecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161af0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x161af0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x161af4: 0x3e00008  jr          $ra
    ctx->pc = 0x161AF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161AF4u;
        // 0x161af8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161AF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161AFCu;
    // 0x161afc: 0x0  nop
    ctx->pc = 0x161afcu;
    // NOP
    ctx->pc = 0x161b00u;
}
