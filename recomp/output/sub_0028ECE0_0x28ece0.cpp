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

// Function: sub_0028ECE0
// Address: 0x28ece0 - 0x28ed98
void sub_0028ECE0_0x28ece0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028ECE0_0x28ece0");
#endif

    switch (ctx->pc) {
        case 0x28ed28u: goto label_28ed28;
        case 0x28ed68u: goto label_28ed68;
        default: break;
    }

    ctx->pc = 0x28ece0u;

    // 0x28ece0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x28ece0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28ece4: 0x14a2002a  bne         $a1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28ECE4u;
    {
        const bool branch_taken_0x28ece4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x28ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECE4u;
        // 0x28ece8: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ece4) {
            ctx->pc = 0x28ED90u;
            goto label_28ed90;
        }
    }
    ctx->pc = 0x28ECECu;
    // 0x28ecec: 0x10800028  beqz        $a0, . + 4 + (0x28 << 2)
    ctx->pc = 0x28ECECu;
    {
        const bool branch_taken_0x28ecec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ECECu;
        // 0x28ecf0: 0x3c02004c  lui         $v0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecec) {
            ctx->pc = 0x28ED90u;
            goto label_28ed90;
        }
    }
    ctx->pc = 0x28ECF4u;
    // 0x28ecf4: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x28ecf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
    // 0x28ecf8: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x28ecf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x28ecfc: 0x2465fd18  addiu       $a1, $v1, -0x2E8
    ctx->pc = 0x28ecfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966552));
    // 0x28ed00: 0xac60fd18  sw          $zero, -0x2E8($v1)
    ctx->pc = 0x28ed00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFD18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD18u, _value); } while (0);
    // 0x28ed04: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x28ed04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFD1Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD1Cu, _value); } while (0);
    // 0x28ed08: 0x2486fd20  addiu       $a2, $a0, -0x2E0
    ctx->pc = 0x28ed08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966560));
    // 0x28ed0c: 0xac80fd20  sw          $zero, -0x2E0($a0)
    ctx->pc = 0x28ed0cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFD20u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD20u, _value); } while (0);
    // 0x28ed10: 0x2442fd28  addiu       $v0, $v0, -0x2D8
    ctx->pc = 0x28ed10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966568));
    // 0x28ed14: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x28ed14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x4BFD24u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4BFD24u, _value); } while (0);
    // 0x28ed18: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x28ed1c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x28ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x28ed20: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x28ed20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x28ed24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28ed24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28ed28:
    // 0x28ed28: 0xac40ffe4  sw          $zero, -0x1C($v0)
    ctx->pc = 0x28ed28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967268), GPR_U32(ctx, 0));
    // 0x28ed2c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ed2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ed30: 0xac40ffe8  sw          $zero, -0x18($v0)
    ctx->pc = 0x28ed30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967272), GPR_U32(ctx, 0));
    // 0x28ed34: 0xac40ffec  sw          $zero, -0x14($v0)
    ctx->pc = 0x28ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967276), GPR_U32(ctx, 0));
    // 0x28ed38: 0xac40fff0  sw          $zero, -0x10($v0)
    ctx->pc = 0x28ed38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_U32(ctx, 0));
    // 0x28ed3c: 0xac40fff4  sw          $zero, -0xC($v0)
    ctx->pc = 0x28ed3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 0));
    // 0x28ed40: 0xac40fff8  sw          $zero, -0x8($v0)
    ctx->pc = 0x28ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 0));
    // 0x28ed44: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x28ed44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x28ed48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ed48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ed4c: 0x1464fff6  bne         $v1, $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x28ED4Cu;
    {
        const bool branch_taken_0x28ed4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED4Cu;
        // 0x28ed50: 0x24420024  addiu       $v0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed4c) {
            ctx->pc = 0x28ED28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ed28;
        }
    }
    ctx->pc = 0x28ED54u;
    // 0x28ed54: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x28ed54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x28ed58: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x28ed58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28ed5c: 0x24420f28  addiu       $v0, $v0, 0xF28
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3880));
    // 0x28ed60: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x28ed60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ed64: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x28ed64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_28ed68:
    // 0x28ed68: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28ed68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28ed6c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x28ed6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x28ed70: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28ed70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x28ed74: 0x0  nop
    ctx->pc = 0x28ed74u;
    // NOP
    // 0x28ed78: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28ED78u;
    {
        const bool branch_taken_0x28ed78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x28ED7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED78u;
        // 0x28ed7c: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed78) {
            ctx->pc = 0x28ED68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28ed68;
        }
    }
    ctx->pc = 0x28ED80u;
    // 0x28ed80: 0x24a21128  addiu       $v0, $a1, 0x1128
    ctx->pc = 0x28ed80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
    // 0x28ed84: 0xaca01128  sw          $zero, 0x1128($a1)
    ctx->pc = 0x28ed84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4392), GPR_U32(ctx, 0));
    // 0x28ed88: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x28ed88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x28ed8c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28ed8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_28ed90:
    // 0x28ed90: 0x3e00008  jr          $ra
    ctx->pc = 0x28ED90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28ED94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28ED90u;
        // 0x28ed94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28ED90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28ED98u;
}
