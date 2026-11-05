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

// Function: sub_001ABA00
// Address: 0x1aba00 - 0x1abaa0
void sub_001ABA00_0x1aba00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABA00_0x1aba00");
#endif

    switch (ctx->pc) {
        case 0x1aba1cu: goto label_1aba1c;
        case 0x1aba70u: goto label_1aba70;
        default: break;
    }

    ctx->pc = 0x1aba00u;

    // 0x1aba00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1aba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1aba04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aba0c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aba10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1aba10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1aba14: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABA14u;
    SET_GPR_U32(ctx, 31, 0x1ABA1Cu);
    ctx->pc = 0x1ABA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA14u;
    // 0x1aba18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABA14u, 0x1ABA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA1Cu;
label_1aba1c:
    // 0x1aba1c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1aba1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1aba20: 0x24020037  addiu       $v0, $zero, 0x37
    ctx->pc = 0x1aba20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
    // 0x1aba24: 0x54620001  bnel        $v1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABA24u;
    {
        const bool branch_taken_0x1aba24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aba24) {
            ctx->pc = 0x1ABA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA24u;
            // 0x1aba28: 0xae000160  sw          $zero, 0x160($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA2Cu;
            goto label_1aba2c;
        }
    }
    ctx->pc = 0x1ABA2Cu;
label_1aba2c:
    // 0x1aba2c: 0x8e03014c  lw          $v1, 0x14C($s0)
    ctx->pc = 0x1aba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 332)));
    // 0x1aba30: 0x2462ffca  addiu       $v0, $v1, -0x36
    ctx->pc = 0x1aba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967242));
    // 0x1aba34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1aba34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1aba38: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1ABA38u;
    {
        const bool branch_taken_0x1aba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aba38) {
            ctx->pc = 0x1ABA3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABA38u;
            // 0x1aba3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABA94u;
            goto label_1aba94;
        }
    }
    ctx->pc = 0x1ABA40u;
    // 0x1aba40: 0x28620032  slti        $v0, $v1, 0x32
    ctx->pc = 0x1aba40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x1aba44: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ABA44u;
    {
        const bool branch_taken_0x1aba44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA44u;
        // 0x1aba48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba44) {
            ctx->pc = 0x1ABA8Cu;
            goto label_1aba8c;
        }
    }
    ctx->pc = 0x1ABA4Cu;
    // 0x1aba4c: 0x8e0301e4  lw          $v1, 0x1E4($s0)
    ctx->pc = 0x1aba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aba50: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aba50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aba54: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1aba54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1aba58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1aba58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1aba5c: 0x9462002a  lhu         $v0, 0x2A($v1)
    ctx->pc = 0x1aba5cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 42)));
    // 0x1aba60: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1aba60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1aba64: 0xa462002a  sh          $v0, 0x2A($v1)
    ctx->pc = 0x1aba64u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x1aba68: 0xc073f08  jal         func_1CFC20
    ctx->pc = 0x1ABA68u;
    SET_GPR_U32(ctx, 31, 0x1ABA70u);
    ctx->pc = 0x1ABA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABA68u;
    // 0x1aba6c: 0x8e0401e4  lw          $a0, 0x1E4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFC20u, 0x1ABA68u, 0x1ABA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABA70u;
label_1aba70:
    // 0x1aba70: 0x8e0201e4  lw          $v0, 0x1E4($s0)
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 484)));
    // 0x1aba74: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1aba74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1aba78: 0xc440001c  lwc1        $f0, 0x1C($v0)
    ctx->pc = 0x1aba78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aba7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1aba7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1aba80: 0x0  nop
    ctx->pc = 0x1aba80u;
    // NOP
    // 0x1aba84: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABA84u;
    {
        const bool branch_taken_0x1aba84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA84u;
        // 0x1aba88: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aba84) {
            ctx->pc = 0x1ABA90u;
            goto label_1aba90;
        }
    }
    ctx->pc = 0x1ABA8Cu;
label_1aba8c:
    // 0x1aba8c: 0xae020160  sw          $v0, 0x160($s0)
    ctx->pc = 0x1aba8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 2));
label_1aba90:
    // 0x1aba90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aba90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aba94:
    // 0x1aba94: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1aba94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aba98: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABA98u;
        // 0x1aba9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABAA0u;
}
