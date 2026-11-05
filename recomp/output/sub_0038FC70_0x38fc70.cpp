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

// Function: sub_0038FC70
// Address: 0x38fc70 - 0x38fd58
void sub_0038FC70_0x38fc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FC70_0x38fc70");
#endif

    switch (ctx->pc) {
        case 0x38fca8u: goto label_38fca8;
        case 0x38fcd4u: goto label_38fcd4;
        case 0x38fd14u: goto label_38fd14;
        case 0x38fd2cu: goto label_38fd2c;
        case 0x38fd3cu: goto label_38fd3c;
        case 0x38fd4cu: goto label_38fd4c;
        default: break;
    }

    ctx->pc = 0x38fc70u;

    // 0x38fc70: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x38fc70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38fc74: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38fc74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38fc78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fc7c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x38fc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x38fc80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38fc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38fc84: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x38fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x38fc88: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x38fc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38fc8c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x38fc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x38fc90: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38fc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38fc94: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FC94u;
    {
        const bool branch_taken_0x38fc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FC94u;
        // 0x38fc98: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fc94) {
            ctx->pc = 0x38FCB0u;
            goto label_38fcb0;
        }
    }
    ctx->pc = 0x38FC9Cu;
    // 0x38fc9c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x38fc9cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x38fca0: 0xc0e4ab0  jal         func_392AC0
    ctx->pc = 0x38FCA0u;
    SET_GPR_U32(ctx, 31, 0x38FCA8u);
    ctx->pc = 0x392AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AC0u, 0x38FCA0u, 0x38FCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCA8u;
label_38fca8:
    // 0x38fca8: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x38FCA8u;
    {
        const bool branch_taken_0x38fca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCA8u;
        // 0x38fcac: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fca8) {
            ctx->pc = 0x38FD50u;
            goto label_38fd50;
        }
    }
    ctx->pc = 0x38FCB0u;
label_38fcb0:
    // 0x38fcb0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x38fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x38fcb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fcb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fcb8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38fcb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38fcbc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FCBCu;
    {
        const bool branch_taken_0x38fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fcbc) {
            ctx->pc = 0x38FCCCu;
            goto label_38fccc;
        }
    }
    ctx->pc = 0x38FCC4u;
    // 0x38fcc4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x38FCC4u;
    {
        const bool branch_taken_0x38fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCC4u;
        // 0x38fcc8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcc4) {
            ctx->pc = 0x38FD4Cu;
            goto label_38fd4c;
        }
    }
    ctx->pc = 0x38FCCCu;
label_38fccc:
    // 0x38fccc: 0xc0e4966  jal         func_392598
    ctx->pc = 0x38FCCCu;
    SET_GPR_U32(ctx, 31, 0x38FCD4u);
    ctx->pc = 0x38FCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FCCCu;
    // 0x38fcd0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392598u, 0x38FCCCu, 0x38FCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FCD4u;
label_38fcd4:
    // 0x38fcd4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38fcd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38fcd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fcdc: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x38FCDCu;
    {
        const bool branch_taken_0x38fcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCDCu;
        // 0x38fce0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcdc) {
            ctx->pc = 0x38FD1Cu;
            goto label_38fd1c;
        }
    }
    ctx->pc = 0x38FCE4u;
    // 0x38fce4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FCE4u;
    {
        const bool branch_taken_0x38fce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCE4u;
        // 0x38fce8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fce4) {
            ctx->pc = 0x38FCFCu;
            goto label_38fcfc;
        }
    }
    ctx->pc = 0x38FCECu;
    // 0x38fcec: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FCECu;
    {
        const bool branch_taken_0x38fcec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCECu;
        // 0x38fcf0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcec) {
            ctx->pc = 0x38FD0Cu;
            goto label_38fd0c;
        }
    }
    ctx->pc = 0x38FCF4u;
    // 0x38fcf4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x38FCF4u;
    {
        const bool branch_taken_0x38fcf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCF4u;
        // 0x38fcf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcf4) {
            ctx->pc = 0x38FD44u;
            goto label_38fd44;
        }
    }
    ctx->pc = 0x38FCFCu;
label_38fcfc:
    // 0x38fcfc: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38FCFCu;
    {
        const bool branch_taken_0x38fcfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FCFCu;
        // 0x38fd00: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fcfc) {
            ctx->pc = 0x38FD34u;
            goto label_38fd34;
        }
    }
    ctx->pc = 0x38FD04u;
    // 0x38fd04: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38FD04u;
    {
        const bool branch_taken_0x38fd04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD04u;
        // 0x38fd08: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd04) {
            ctx->pc = 0x38FD44u;
            goto label_38fd44;
        }
    }
    ctx->pc = 0x38FD0Cu;
label_38fd0c:
    // 0x38fd0c: 0xc0e4ab0  jal         func_392AC0
    ctx->pc = 0x38FD0Cu;
    SET_GPR_U32(ctx, 31, 0x38FD14u);
    ctx->pc = 0x38FD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD0Cu;
    // 0x38fd10: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AC0u, 0x38FD0Cu, 0x38FD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD14u;
label_38fd14:
    // 0x38fd14: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x38FD14u;
    {
        const bool branch_taken_0x38fd14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD14u;
        // 0x38fd18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd14) {
            ctx->pc = 0x38FD50u;
            goto label_38fd50;
        }
    }
    ctx->pc = 0x38FD1Cu;
label_38fd1c:
    // 0x38fd1c: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38fd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38fd20: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38fd20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fd24: 0xc0e4d5a  jal         func_393568
    ctx->pc = 0x38FD24u;
    SET_GPR_U32(ctx, 31, 0x38FD2Cu);
    ctx->pc = 0x38FD28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD24u;
    // 0x38fd28: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x393568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393568u, 0x38FD24u, 0x38FD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD2Cu;
label_38fd2c:
    // 0x38fd2c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x38FD2Cu;
    {
        const bool branch_taken_0x38fd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD2Cu;
        // 0x38fd30: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd2c) {
            ctx->pc = 0x38FD4Cu;
            goto label_38fd4c;
        }
    }
    ctx->pc = 0x38FD34u;
label_38fd34:
    // 0x38fd34: 0xc0e4ab0  jal         func_392AC0
    ctx->pc = 0x38FD34u;
    SET_GPR_U32(ctx, 31, 0x38FD3Cu);
    ctx->pc = 0x38FD38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD34u;
    // 0x38fd38: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AC0u, 0x38FD34u, 0x38FD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD3Cu;
label_38fd3c:
    // 0x38fd3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x38FD3Cu;
    {
        const bool branch_taken_0x38fd3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD3Cu;
        // 0x38fd40: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fd3c) {
            ctx->pc = 0x38FD4Cu;
            goto label_38fd4c;
        }
    }
    ctx->pc = 0x38FD44u;
label_38fd44:
    // 0x38fd44: 0xc0e4d5a  jal         func_393568
    ctx->pc = 0x38FD44u;
    SET_GPR_U32(ctx, 31, 0x38FD4Cu);
    ctx->pc = 0x38FD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FD44u;
    // 0x38fd48: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x393568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393568u, 0x38FD44u, 0x38FD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FD4Cu;
label_38fd4c:
    // 0x38fd4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38fd4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38fd50:
    // 0x38fd50: 0x3e00008  jr          $ra
    ctx->pc = 0x38FD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FD50u;
        // 0x38fd54: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FD58u;
}
