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

// Function: sub_002D2AC0
// Address: 0x2d2ac0 - 0x2d2b60
void sub_002D2AC0_0x2d2ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2AC0_0x2d2ac0");
#endif

    ctx->pc = 0x2d2ac0u;

    // 0x2d2ac0: 0x8c8600c8  lw          $a2, 0xC8($a0)
    ctx->pc = 0x2d2ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
    // 0x2d2ac4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x2d2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x2d2ac8: 0x8c8200cc  lw          $v0, 0xCC($a0)
    ctx->pc = 0x2d2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 204)));
    // 0x2d2acc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2d2accu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2d2ad0: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2d2ad0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x2d2ad4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D2AD4u;
    {
        const bool branch_taken_0x2d2ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AD4u;
        // 0x2d2ad8: 0x8c652b00  lw          $a1, 0x2B00($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ad4) {
            ctx->pc = 0x2D2AECu;
            goto label_2d2aec;
        }
    }
    ctx->pc = 0x2D2ADCu;
    // 0x2d2adc: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x2d2adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x2d2ae0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d2ae4: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2D2AE4u;
    {
        const bool branch_taken_0x2d2ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2D2AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AE4u;
        // 0x2d2ae8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2ae4) {
            ctx->pc = 0x2D2B40u;
            goto label_2d2b40;
        }
    }
    ctx->pc = 0x2D2AECu;
label_2d2aec:
    // 0x2d2aec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2d2aecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2af0: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D2AF0u;
    {
        const bool branch_taken_0x2d2af0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2D2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2AF0u;
        // 0x2d2af4: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2af0) {
            ctx->pc = 0x2D2B0Cu;
            goto label_2d2b0c;
        }
    }
    ctx->pc = 0x2D2AF8u;
    // 0x2d2af8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d2af8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2afc: 0x0  nop
    ctx->pc = 0x2d2afcu;
    // NOP
    // 0x2d2b00: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d2b00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d2b04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2D2B04u;
    {
        const bool branch_taken_0x2d2b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2b04) {
            ctx->pc = 0x2D2B24u;
            goto label_2d2b24;
        }
    }
    ctx->pc = 0x2D2B0Cu;
label_2d2b0c:
    // 0x2d2b0c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x2d2b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2d2b10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d2b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2d2b14: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2d2b14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2d2b18: 0x0  nop
    ctx->pc = 0x2d2b18u;
    // NOP
    // 0x2d2b1c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2d2b1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2d2b20: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x2d2b20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_2d2b24:
    // 0x2d2b24: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2d2b24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2d2b28: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2d2b28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2d2b2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d2b2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d2b30: 0xc4810018  lwc1        $f1, 0x18($a0)
    ctx->pc = 0x2d2b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b34: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2d2b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2d2b38: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B38u;
        // 0x2d2b3c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2B40u;
label_2d2b40:
    // 0x2d2b40: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x2d2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x2d2b44: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x2d2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x2d2b48: 0xc4812b30  lwc1        $f1, 0x2B30($a0)
    ctx->pc = 0x2d2b48u;
    { uint32_t bits = FAST_READ32(0x482B30u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d2b4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2d2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2d2b50: 0x8c640194  lw          $a0, 0x194($v1)
    ctx->pc = 0x2d2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 404)));
    // 0x2d2b54: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x2d2b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d2b58: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D2B58u;
        // 0x2d2b5c: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D2B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D2B60u;
}
