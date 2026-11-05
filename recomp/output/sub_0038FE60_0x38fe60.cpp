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

// Function: sub_0038FE60
// Address: 0x38fe60 - 0x38ff50
void sub_0038FE60_0x38fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0038FE60_0x38fe60");
#endif

    switch (ctx->pc) {
        case 0x38fe98u: goto label_38fe98;
        case 0x38fec4u: goto label_38fec4;
        case 0x38ff08u: goto label_38ff08;
        case 0x38ff1cu: goto label_38ff1c;
        case 0x38ff30u: goto label_38ff30;
        case 0x38ff40u: goto label_38ff40;
        default: break;
    }

    ctx->pc = 0x38fe60u;

    // 0x38fe60: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x38fe60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x38fe64: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x38fe64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x38fe68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x38fe68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38fe6c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x38fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x38fe70: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x38fe70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x38fe74: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x38fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x38fe78: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x38fe78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x38fe7c: 0x34420fd8  ori         $v0, $v0, 0xFD8
    ctx->pc = 0x38fe7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4056);
    // 0x38fe80: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38fe80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38fe84: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x38FE84u;
    {
        const bool branch_taken_0x38fe84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x38FE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE84u;
        // 0x38fe88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe84) {
            ctx->pc = 0x38FEA0u;
            goto label_38fea0;
        }
    }
    ctx->pc = 0x38FE8Cu;
    // 0x38fe8c: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x38fe8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x38fe90: 0xc0e4d5a  jal         func_393568
    ctx->pc = 0x38FE90u;
    SET_GPR_U32(ctx, 31, 0x38FE98u);
    ctx->pc = 0x38FE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FE90u;
    // 0x38fe94: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393568u, 0x38FE90u, 0x38FE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FE98u;
label_38fe98:
    // 0x38fe98: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x38FE98u;
    {
        const bool branch_taken_0x38fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FE98u;
        // 0x38fe9c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fe98) {
            ctx->pc = 0x38FF48u;
            goto label_38ff48;
        }
    }
    ctx->pc = 0x38FEA0u;
label_38fea0:
    // 0x38fea0: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x38fea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x38fea4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x38fea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x38fea8: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x38fea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x38feac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x38FEACu;
    {
        const bool branch_taken_0x38feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x38feac) {
            ctx->pc = 0x38FEBCu;
            goto label_38febc;
        }
    }
    ctx->pc = 0x38FEB4u;
    // 0x38feb4: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x38FEB4u;
    {
        const bool branch_taken_0x38feb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEB4u;
        // 0x38feb8: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38feb4) {
            ctx->pc = 0x38FF44u;
            goto label_38ff44;
        }
    }
    ctx->pc = 0x38FEBCu;
label_38febc:
    // 0x38febc: 0xc0e4966  jal         func_392598
    ctx->pc = 0x38FEBCu;
    SET_GPR_U32(ctx, 31, 0x38FEC4u);
    ctx->pc = 0x38FEC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FEBCu;
    // 0x38fec0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392598u, 0x38FEBCu, 0x38FEC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FEC4u;
label_38fec4:
    // 0x38fec4: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x38fec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x38fec8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x38fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38fecc: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x38FECCu;
    {
        const bool branch_taken_0x38fecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38FED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FECCu;
        // 0x38fed0: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fecc) {
            ctx->pc = 0x38FF10u;
            goto label_38ff10;
        }
    }
    ctx->pc = 0x38FED4u;
    // 0x38fed4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x38FED4u;
    {
        const bool branch_taken_0x38fed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FED4u;
        // 0x38fed8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fed4) {
            ctx->pc = 0x38FEECu;
            goto label_38feec;
        }
    }
    ctx->pc = 0x38FEDCu;
    // 0x38fedc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x38FEDCu;
    {
        const bool branch_taken_0x38fedc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEDCu;
        // 0x38fee0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38fedc) {
            ctx->pc = 0x38FEFCu;
            goto label_38fefc;
        }
    }
    ctx->pc = 0x38FEE4u;
    // 0x38fee4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x38FEE4u;
    {
        const bool branch_taken_0x38fee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fee4) {
            ctx->pc = 0x38FF38u;
            goto label_38ff38;
        }
    }
    ctx->pc = 0x38FEECu;
label_38feec:
    // 0x38feec: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x38FEECu;
    {
        const bool branch_taken_0x38feec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x38FEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FEECu;
        // 0x38fef0: 0xc7ac0000  lwc1        $f12, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x38feec) {
            ctx->pc = 0x38FF24u;
            goto label_38ff24;
        }
    }
    ctx->pc = 0x38FEF4u;
    // 0x38fef4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x38FEF4u;
    {
        const bool branch_taken_0x38fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x38fef4) {
            ctx->pc = 0x38FF38u;
            goto label_38ff38;
        }
    }
    ctx->pc = 0x38FEFCu;
label_38fefc:
    // 0x38fefc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38fefcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ff00: 0xc0e4d5a  jal         func_393568
    ctx->pc = 0x38FF00u;
    SET_GPR_U32(ctx, 31, 0x38FF08u);
    ctx->pc = 0x38FF04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF00u;
    // 0x38ff04: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x393568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393568u, 0x38FF00u, 0x38FF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF08u;
label_38ff08:
    // 0x38ff08: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x38FF08u;
    {
        const bool branch_taken_0x38ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF08u;
        // 0x38ff0c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff08) {
            ctx->pc = 0x38FF48u;
            goto label_38ff48;
        }
    }
    ctx->pc = 0x38FF10u;
label_38ff10:
    // 0x38ff10: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x38ff10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x38ff14: 0xc0e4ab0  jal         func_392AC0
    ctx->pc = 0x38FF14u;
    SET_GPR_U32(ctx, 31, 0x38FF1Cu);
    ctx->pc = 0x38FF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF14u;
    // 0x38ff18: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AC0u, 0x38FF14u, 0x38FF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF1Cu;
label_38ff1c:
    // 0x38ff1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x38FF1Cu;
    {
        const bool branch_taken_0x38ff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF1Cu;
        // 0x38ff20: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff1c) {
            ctx->pc = 0x38FF48u;
            goto label_38ff48;
        }
    }
    ctx->pc = 0x38FF24u;
label_38ff24:
    // 0x38ff24: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x38ff24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x38ff28: 0xc0e4d5a  jal         func_393568
    ctx->pc = 0x38FF28u;
    SET_GPR_U32(ctx, 31, 0x38FF30u);
    ctx->pc = 0x38FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF28u;
    // 0x38ff2c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x393568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393568u, 0x38FF28u, 0x38FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF30u;
label_38ff30:
    // 0x38ff30: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x38FF30u;
    {
        const bool branch_taken_0x38ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x38FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF30u;
        // 0x38ff34: 0x46000007  neg.s       $f0, $f0 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x38ff30) {
            ctx->pc = 0x38FF44u;
            goto label_38ff44;
        }
    }
    ctx->pc = 0x38FF38u;
label_38ff38:
    // 0x38ff38: 0xc0e4ab0  jal         func_392AC0
    ctx->pc = 0x38FF38u;
    SET_GPR_U32(ctx, 31, 0x38FF40u);
    ctx->pc = 0x38FF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38FF38u;
    // 0x38ff3c: 0xc7ad0004  lwc1        $f13, 0x4($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x392AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392AC0u, 0x38FF38u, 0x38FF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38FF40u;
label_38ff40:
    // 0x38ff40: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x38ff40u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_38ff44:
    // 0x38ff44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x38ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_38ff48:
    // 0x38ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x38FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x38FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38FF48u;
        // 0x38ff4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38FF50u;
}
