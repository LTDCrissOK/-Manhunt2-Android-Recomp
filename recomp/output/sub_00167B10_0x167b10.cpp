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

// Function: sub_00167B10
// Address: 0x167b10 - 0x167b88
void sub_00167B10_0x167b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167B10_0x167b10");
#endif

    switch (ctx->pc) {
        case 0x167b20u: goto label_167b20;
        default: break;
    }

    ctx->pc = 0x167b10u;

    // 0x167b10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x167b14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x167b18: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x167B18u;
    SET_GPR_U32(ctx, 31, 0x167B20u);
    ctx->pc = 0x167B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167B18u;
    // 0x167b1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x167B18u, 0x167B20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167B20u;
label_167b20:
    // 0x167b20: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x167b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x167b24: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x167b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x167b28: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x167b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x167b2c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x167b2cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x167b30: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x167b30u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x167b34: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x167b34u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x167b38: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x167b38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x167b3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167b3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167b40: 0x0  nop
    ctx->pc = 0x167b40u;
    // NOP
    // 0x167b44: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x167b44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167b48: 0x0  nop
    ctx->pc = 0x167b48u;
    // NOP
    // 0x167b4c: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x167B4Cu;
    {
        const bool branch_taken_0x167b4c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B4Cu;
        // 0x167b50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b4c) {
            ctx->pc = 0x167B78u;
            goto label_167b78;
        }
    }
    ctx->pc = 0x167B54u;
    // 0x167b54: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x167b54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x167b58: 0x342137be  ori         $at, $at, 0x37BE
    ctx->pc = 0x167b58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14270);
    // 0x167b5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167b5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x167b60: 0x0  nop
    ctx->pc = 0x167b60u;
    // NOP
    // 0x167b64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x167b68: 0x0  nop
    ctx->pc = 0x167b68u;
    // NOP
    // 0x167b6c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x167B6Cu;
    {
        const bool branch_taken_0x167b6c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B6Cu;
        // 0x167b70: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b6c) {
            ctx->pc = 0x167B7Cu;
            goto label_167b7c;
        }
    }
    ctx->pc = 0x167B74u;
    // 0x167b74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167b78:
    // 0x167b78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167b7c:
    // 0x167b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x167B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B7Cu;
        // 0x167b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167B84u;
    // 0x167b84: 0x0  nop
    ctx->pc = 0x167b84u;
    // NOP
    ctx->pc = 0x167b88u;
}
