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

// Function: sub_001FDC30
// Address: 0x1fdc30 - 0x1fdd20
void sub_001FDC30_0x1fdc30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FDC30_0x1fdc30");
#endif

    switch (ctx->pc) {
        case 0x1fdc48u: goto label_1fdc48;
        case 0x1fdc50u: goto label_1fdc50;
        case 0x1fdcd0u: goto label_1fdcd0;
        default: break;
    }

    ctx->pc = 0x1fdc30u;

    // 0x1fdc30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fdc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fdc34: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fdc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fdc38: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fdc38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdc3c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fdc3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fdc40: 0xc0d737c  jal         func_35CDF0
    ctx->pc = 0x1FDC40u;
    SET_GPR_U32(ctx, 31, 0x1FDC48u);
    ctx->pc = 0x1FDC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC40u;
    // 0x1fdc44: 0x26040040  addiu       $a0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x1FDC40u, 0x1FDC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC48u;
label_1fdc48:
    // 0x1fdc48: 0xc08062c  jal         func_2018B0
    ctx->pc = 0x1FDC48u;
    SET_GPR_U32(ctx, 31, 0x1FDC50u);
    ctx->pc = 0x1FDC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FDC48u;
    // 0x1fdc4c: 0x260400c0  addiu       $a0, $s0, 0xC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018B0u, 0x1FDC48u, 0x1FDC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FDC50u;
label_1fdc50:
    // 0x1fdc50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1fdc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1fdc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1fdc58: 0xa0439348  sb          $v1, -0x6CB8($v0)
    ctx->pc = 0x1fdc58u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3F9348u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3F9348u, _value); } while (0);
    // 0x1fdc5c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1fdc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1fdc60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fdc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc64: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1fdc64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1fdc68: 0xa2030051  sb          $v1, 0x51($s0)
    ctx->pc = 0x1fdc68u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 81), (uint8_t)GPR_U32(ctx, 3));
    // 0x1fdc6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1fdc6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fdc70: 0xa2040050  sb          $a0, 0x50($s0)
    ctx->pc = 0x1fdc70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 80), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fdc74: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x1fdc74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1fdc78: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x1fdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x1fdc7c: 0xae05005c  sw          $a1, 0x5C($s0)
    ctx->pc = 0x1fdc7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 5));
    // 0x1fdc80: 0xa204004f  sb          $a0, 0x4F($s0)
    ctx->pc = 0x1fdc80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 79), (uint8_t)GPR_U32(ctx, 4));
    // 0x1fdc84: 0xae000060  sw          $zero, 0x60($s0)
    ctx->pc = 0x1fdc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 0));
    // 0x1fdc88: 0xae000064  sw          $zero, 0x64($s0)
    ctx->pc = 0x1fdc88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 0));
    // 0x1fdc8c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x1fdc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x1fdc90: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x1fdc90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x1fdc94: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x1fdc94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x1fdc98: 0xa200004a  sb          $zero, 0x4A($s0)
    ctx->pc = 0x1fdc98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 74), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdc9c: 0xa200004b  sb          $zero, 0x4B($s0)
    ctx->pc = 0x1fdc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 75), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdca0: 0xa200004c  sb          $zero, 0x4C($s0)
    ctx->pc = 0x1fdca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdca4: 0xa200004d  sb          $zero, 0x4D($s0)
    ctx->pc = 0x1fdca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdca8: 0xa200004e  sb          $zero, 0x4E($s0)
    ctx->pc = 0x1fdca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 78), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fdcac: 0xae000080  sw          $zero, 0x80($s0)
    ctx->pc = 0x1fdcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 0));
    // 0x1fdcb0: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1fdcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1fdcb4: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x1fdcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x1fdcb8: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x1fdcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x1fdcbc: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1fdcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
    // 0x1fdcc0: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1fdcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
    // 0x1fdcc4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x1fdcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x1fdcc8: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1fdcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1fdccc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1fdcccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1fdcd0:
    // 0x1fdcd0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1fdcd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1fdcd4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1fdcd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1fdcd8: 0x0  nop
    ctx->pc = 0x1fdcd8u;
    // NOP
    // 0x1fdcdc: 0x0  nop
    ctx->pc = 0x1fdcdcu;
    // NOP
    // 0x1fdce0: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FDCE0u;
    {
        const bool branch_taken_0x1fdce0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1FDCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDCE0u;
        // 0x1fdce4: 0x2463fffc  addiu       $v1, $v1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fdce0) {
            ctx->pc = 0x1FDCD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1fdcd0;
        }
    }
    ctx->pc = 0x1FDCE8u;
    // 0x1fdce8: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1fdce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1fdcec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1fdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fdcf0: 0xae0200b4  sw          $v0, 0xB4($s0)
    ctx->pc = 0x1fdcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 180), GPR_U32(ctx, 2));
    // 0x1fdcf4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1fdcf4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fdcf8: 0xae03010c  sw          $v1, 0x10C($s0)
    ctx->pc = 0x1fdcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 3));
    // 0x1fdcfc: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fdcfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
    // 0x1fdd00: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x1fdd00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x1fdd04: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fdd04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fdd08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fdd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fdd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FDD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FDD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FDD0Cu;
        // 0x1fdd10: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FDD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FDD14u;
    // 0x1fdd14: 0x0  nop
    ctx->pc = 0x1fdd14u;
    // NOP
    // 0x1fdd18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1fdd18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1fdd1c: 0x0  nop
    ctx->pc = 0x1fdd1cu;
    // NOP
    ctx->pc = 0x1fdd20u;
}
