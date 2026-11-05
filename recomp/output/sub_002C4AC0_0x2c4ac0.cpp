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

// Function: sub_002C4AC0
// Address: 0x2c4ac0 - 0x2c4b50
void sub_002C4AC0_0x2c4ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4AC0_0x2c4ac0");
#endif

    switch (ctx->pc) {
        case 0x2c4adcu: goto label_2c4adc;
        default: break;
    }

    ctx->pc = 0x2c4ac0u;

    // 0x2c4ac0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c4ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c4ac4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2c4ac4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2c4ac8: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2c4ac8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2c4acc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2c4accu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2c4ad0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c4ad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2c4ad4: 0xc0dc0f6  jal         func_3703D8
    ctx->pc = 0x2C4AD4u;
    SET_GPR_U32(ctx, 31, 0x2C4ADCu);
    ctx->pc = 0x2C4AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2C4AD4u;
    // 0x2c4ad8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3703D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3703D8u, 0x2C4AD4u, 0x2C4ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C4ADCu;
label_2c4adc:
    // 0x2c4adc: 0x304307ff  andi        $v1, $v0, 0x7FF
    ctx->pc = 0x2c4adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x2c4ae0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2C4AE0u;
    {
        const bool branch_taken_0x2c4ae0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x2C4AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4AE0u;
        // 0x2c4ae4: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c4ae0) {
            ctx->pc = 0x2C4AFCu;
            goto label_2c4afc;
        }
    }
    ctx->pc = 0x2C4AE8u;
    // 0x2c4ae8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2c4ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4aec: 0x0  nop
    ctx->pc = 0x2c4aecu;
    // NOP
    // 0x2c4af0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c4af0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c4af4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2C4AF4u;
    {
        const bool branch_taken_0x2c4af4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c4af4) {
            ctx->pc = 0x2C4B14u;
            goto label_2c4b14;
        }
    }
    ctx->pc = 0x2C4AFCu;
label_2c4afc:
    // 0x2c4afc: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x2c4afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x2c4b00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2c4b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2c4b04: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2c4b04u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2c4b08: 0x0  nop
    ctx->pc = 0x2c4b08u;
    // NOP
    // 0x2c4b0c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2c4b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2c4b10: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2c4b10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2c4b14:
    // 0x2c4b14: 0x3c013a00  lui         $at, 0x3A00
    ctx->pc = 0x2c4b14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14848 << 16));
    // 0x2c4b18: 0x34211002  ori         $at, $at, 0x1002
    ctx->pc = 0x2c4b18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4098);
    // 0x2c4b1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2c4b1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2c4b20: 0x4614a801  sub.s       $f0, $f21, $f20
    ctx->pc = 0x2c4b20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x2c4b24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c4b24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c4b28: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2c4b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2c4b2c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x2c4b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2c4b30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2c4b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2c4b34: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x2c4b34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x2c4b38: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2c4b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2c4b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4B3Cu;
        // 0x2c4b40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C4B44u;
    // 0x2c4b44: 0x0  nop
    ctx->pc = 0x2c4b44u;
    // NOP
    // 0x2c4b48: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2c4b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2c4b4c: 0x0  nop
    ctx->pc = 0x2c4b4cu;
    // NOP
    ctx->pc = 0x2c4b50u;
}
