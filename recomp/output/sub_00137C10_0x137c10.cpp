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

// Function: sub_00137C10
// Address: 0x137c10 - 0x137c78
void sub_00137C10_0x137c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137C10_0x137c10");
#endif

    ctx->pc = 0x137c10u;

    // 0x137c10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x137c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x137c14: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x137c14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x137c18: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x137c18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x137c1c: 0x3c060049  lui         $a2, 0x49
    ctx->pc = 0x137c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)73 << 16));
    // 0x137c20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x137c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x137c24: 0x24c69a08  addiu       $a2, $a2, -0x65F8
    ctx->pc = 0x137c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941192));
    // 0x137c28: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x137c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x137c2c: 0x8c8704d0  lw          $a3, 0x4D0($a0)
    ctx->pc = 0x137c2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1232)));
    // 0x137c30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x137c34: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x137c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x137c38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137c38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x137c3c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x137c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x137c40: 0x8cc30108  lw          $v1, 0x108($a2)
    ctx->pc = 0x137c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
    // 0x137c44: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x137c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
    // 0x137c48: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x137C48u;
    {
        const bool branch_taken_0x137c48 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x137C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C48u;
        // 0x137c4c: 0xc440033c  lwc1        $f0, 0x33C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 828)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c48) {
            ctx->pc = 0x137C58u;
            goto label_137c58;
        }
    }
    ctx->pc = 0x137C50u;
    // 0x137c50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x137c50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
    // 0x137c54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x137c54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_137c58:
    // 0x137c58: 0x0  nop
    ctx->pc = 0x137c58u;
    // NOP
    // 0x137c5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x137c5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x137c60: 0x0  nop
    ctx->pc = 0x137c60u;
    // NOP
    // 0x137c64: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x137C64u;
    {
        const bool branch_taken_0x137c64 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x137C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137C64u;
        // 0x137c68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137c64) {
            ctx->pc = 0x137C70u;
            goto label_137c70;
        }
    }
    ctx->pc = 0x137C6Cu;
    // 0x137c6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x137c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137c70:
    // 0x137c70: 0x3e00008  jr          $ra
    ctx->pc = 0x137C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137C78u;
}
