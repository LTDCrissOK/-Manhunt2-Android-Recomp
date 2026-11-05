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

// Function: sub_00150B08
// Address: 0x150b08 - 0x150b70
void sub_00150B08_0x150b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150B08_0x150b08");
#endif

    switch (ctx->pc) {
        case 0x150b64u: goto label_150b64;
        default: break;
    }

    ctx->pc = 0x150b08u;

    // 0x150b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150b0c: 0x3c014479  lui         $at, 0x4479
    ctx->pc = 0x150b0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17529 << 16));
    // 0x150b10: 0x3421ff5c  ori         $at, $at, 0xFF5C
    ctx->pc = 0x150b10u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65372);
    // 0x150b14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x150b14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x150b18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150b18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x150b1c: 0x8c8508c4  lw          $a1, 0x8C4($a0)
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2244)));
    // 0x150b20: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x150b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x150b24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x150b24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x150b28: 0x0  nop
    ctx->pc = 0x150b28u;
    // NOP
    // 0x150b2c: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x150B2Cu;
    {
        const bool branch_taken_0x150b2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x150B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B2Cu;
        // 0x150b30: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b2c) {
            ctx->pc = 0x150B68u;
            goto label_150b68;
        }
    }
    ctx->pc = 0x150B34u;
    // 0x150b34: 0x9083046c  lbu         $v1, 0x46C($a0)
    ctx->pc = 0x150b34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1132)));
    // 0x150b38: 0x3c070049  lui         $a3, 0x49
    ctx->pc = 0x150b38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
    // 0x150b3c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x150b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x150b40: 0x24e79a08  addiu       $a3, $a3, -0x65F8
    ctx->pc = 0x150b40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294941192));
    // 0x150b44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x150b44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x150b48: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150b4c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x150b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x150b50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x150b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x150b54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x150b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x150b58: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x150b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x150b5c: 0xc043b18  jal         func_10EC60
    ctx->pc = 0x150B5Cu;
    SET_GPR_U32(ctx, 31, 0x150B64u);
    ctx->pc = 0x150B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B5Cu;
    // 0x150b60: 0x8ce4020c  lw          $a0, 0x20C($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10EC60u, 0x150B5Cu, 0x150B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B64u;
label_150b64:
    // 0x150b64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150b68:
    // 0x150b68: 0x3e00008  jr          $ra
    ctx->pc = 0x150B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B68u;
        // 0x150b6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150B70u;
}
