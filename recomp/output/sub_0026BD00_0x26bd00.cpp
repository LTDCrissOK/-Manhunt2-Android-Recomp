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

// Function: sub_0026BD00
// Address: 0x26bd00 - 0x26bdb0
void sub_0026BD00_0x26bd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BD00_0x26bd00");
#endif

    switch (ctx->pc) {
        case 0x26bd14u: goto label_26bd14;
        case 0x26bd28u: goto label_26bd28;
        case 0x26bd30u: goto label_26bd30;
        case 0x26bd70u: goto label_26bd70;
        case 0x26bd88u: goto label_26bd88;
        default: break;
    }

    ctx->pc = 0x26bd00u;

    // 0x26bd00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26bd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26bd04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26bd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x26bd08: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x26bd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x26bd0c: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x26BD0Cu;
    SET_GPR_U32(ctx, 31, 0x26BD14u);
    ctx->pc = 0x26BD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD0Cu;
    // 0x26bd10: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x26BD0Cu, 0x26BD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD14u;
label_26bd14:
    // 0x26bd14: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x26bd14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x26bd18: 0x26040220  addiu       $a0, $s0, 0x220
    ctx->pc = 0x26bd18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 544));
    // 0x26bd1c: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x26bd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x26bd20: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26BD20u;
    SET_GPR_U32(ctx, 31, 0x26BD28u);
    ctx->pc = 0x26BD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD20u;
    // 0x26bd24: 0xae030218  sw          $v1, 0x218($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26BD20u, 0x26BD28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD28u;
label_26bd28:
    // 0x26bd28: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x26BD28u;
    SET_GPR_U32(ctx, 31, 0x26BD30u);
    ctx->pc = 0x26BD2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD28u;
    // 0x26bd2c: 0x26040230  addiu       $a0, $s0, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26BD28u, 0x26BD30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD30u;
label_26bd30:
    // 0x26bd30: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26bd30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26bd34: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x26bd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x26bd38: 0xa2000250  sb          $zero, 0x250($s0)
    ctx->pc = 0x26bd38u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 592), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bd3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd40: 0xa2000252  sb          $zero, 0x252($s0)
    ctx->pc = 0x26bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 594), (uint8_t)GPR_U32(ctx, 0));
    // 0x26bd44: 0xae000258  sw          $zero, 0x258($s0)
    ctx->pc = 0x26bd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 0));
    // 0x26bd48: 0xae00025c  sw          $zero, 0x25C($s0)
    ctx->pc = 0x26bd48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 604), GPR_U32(ctx, 0));
    // 0x26bd4c: 0xae000260  sw          $zero, 0x260($s0)
    ctx->pc = 0x26bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 0));
    // 0x26bd50: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x26bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
    // 0x26bd54: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x26bd54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x26bd58: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x26bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
    // 0x26bd5c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x26bd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x26bd60: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x26bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x26bd64: 0xa2030251  sb          $v1, 0x251($s0)
    ctx->pc = 0x26bd64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 593), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bd68: 0xc09af6c  jal         func_26BDB0
    ctx->pc = 0x26BD68u;
    SET_GPR_U32(ctx, 31, 0x26BD70u);
    ctx->pc = 0x26BD6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD68u;
    // 0x26bd6c: 0xae020280  sw          $v0, 0x280($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26BDB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26BDB0u, 0x26BD68u, 0x26BD70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD70u;
label_26bd70:
    // 0x26bd70: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26bd70u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x26bd74: 0x26040240  addiu       $a0, $s0, 0x240
    ctx->pc = 0x26bd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 576));
    // 0x26bd78: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26bd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x26bd7c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x26bd7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x26bd80: 0xc0b1930  jal         func_2C64C0
    ctx->pc = 0x26BD80u;
    SET_GPR_U32(ctx, 31, 0x26BD88u);
    ctx->pc = 0x26BD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BD80u;
    // 0x26bd84: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C64C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C64C0u, 0x26BD80u, 0x26BD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BD88u;
label_26bd88:
    // 0x26bd88: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26bd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x26bd8c: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x26bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x26bd90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26bd90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bd94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x26bd94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x26bd98: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26bd98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26bd9c: 0xae0300c0  sw          $v1, 0xC0($s0)
    ctx->pc = 0x26bd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 192), GPR_U32(ctx, 3));
    // 0x26bda0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26bda0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bda4: 0x3e00008  jr          $ra
    ctx->pc = 0x26BDA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BDA4u;
        // 0x26bda8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BDA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BDACu;
    // 0x26bdac: 0x0  nop
    ctx->pc = 0x26bdacu;
    // NOP
    ctx->pc = 0x26bdb0u;
}
